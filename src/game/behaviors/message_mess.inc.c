void bhv_nup_interact(void){

}

void bhv_nup_loop(void){

}

u32 interact_text(struct MarioState *m, UNUSED u32 interactType, struct Object *obj) {
    u32 interact = FALSE;

    if (obj->oInteractionSubtype & INT_SUBTYPE_SIGN) {
        interact = check_read_sign(m, obj);
    } else if (obj->oInteractionSubtype & INT_SUBTYPE_NPC) {
        interact = check_npc_talk(m, obj);
    } else {
        push_mario_out_of_object(m, obj, 2.0f);
    }

    return interact;
}