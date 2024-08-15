# 1 "data/maps/Sandbox_Town/scripts.pory"

# 2 "data/maps/Sandbox_Town/scripts.pory"
Sandbox_Town_MapScripts::
# 3 "data/maps/Sandbox_Town/scripts.pory"
	.byte 0
# 4 "data/maps/Sandbox_Town/scripts.pory"

# 5 "data/maps/Sandbox_Town/scripts.pory"
Sandbox_Town_EventScript_Chansey::
# 6 "data/maps/Sandbox_Town/scripts.pory"
	lock
# 7 "data/maps/Sandbox_Town/scripts.pory"
	faceplayer
# 8 "data/maps/Sandbox_Town/scripts.pory"
	msgbox Sandbox_Town_Text_RestUpHere, MSGBOX_YESNO
# 9 "data/maps/Sandbox_Town/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Sandbox_Town_EventScript_Rest
# 10 "data/maps/Sandbox_Town/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Sandbox_Town_EventScript_DeclineRest
# 11 "data/maps/Sandbox_Town/scripts.pory"
	end
# 12 "data/maps/Sandbox_Town/scripts.pory"
	
# 13 "data/maps/Sandbox_Town/scripts.pory"
Sandbox_Town_EventScript_Rest::
# 14 "data/maps/Sandbox_Town/scripts.pory"
	msgbox Sandbox_Town_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
# 15 "data/maps/Sandbox_Town/scripts.pory"
	closemessage
# 16 "data/maps/Sandbox_Town/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 17 "data/maps/Sandbox_Town/scripts.pory"
	msgbox Sandbox_Town_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
# 18 "data/maps/Sandbox_Town/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Sandbox_Town_EventScript_Rest
# 19 "data/maps/Sandbox_Town/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Sandbox_Town_EventScript_DeclineRest
# 20 "data/maps/Sandbox_Town/scripts.pory"
	end
# 21 "data/maps/Sandbox_Town/scripts.pory"

# 22 "data/maps/Sandbox_Town/scripts.pory"
Sandbox_Town_EventScript_DeclineRest::
# 23 "data/maps/Sandbox_Town/scripts.pory"
	msgbox Sandbox_Town_Text_DontNeedToBeShy, MSGBOX_DEFAULT
# 24 "data/maps/Sandbox_Town/scripts.pory"
	release
# 25 "data/maps/Sandbox_Town/scripts.pory"
	end
# 26 "data/maps/Sandbox_Town/scripts.pory"

# 27 "data/maps/Sandbox_Town/scripts.pory"
Sandbox_Town_Text_RestUpHere:
# 28 "data/maps/Sandbox_Town/scripts.pory"
	.string "Oh, dear, dear.\n"
# 29 "data/maps/Sandbox_Town/scripts.pory"
	.string "Aren't your POKéMON exhausted?\p"
# 30 "data/maps/Sandbox_Town/scripts.pory"
	.string "If you'd like, rest up here.\n"
# 31 "data/maps/Sandbox_Town/scripts.pory"
	.string "That's a fine idea! You should do that.$"
# 32 "data/maps/Sandbox_Town/scripts.pory"

# 33 "data/maps/Sandbox_Town/scripts.pory"
Sandbox_Town_Text_TakeYourTimeRestUp:
# 34 "data/maps/Sandbox_Town/scripts.pory"
	.string "That's right.\n"
# 35 "data/maps/Sandbox_Town/scripts.pory"
	.string "Take your time and rest up!$"
# 36 "data/maps/Sandbox_Town/scripts.pory"

# 37 "data/maps/Sandbox_Town/scripts.pory"
Sandbox_Town_Text_StillTiredTakeAnotherRest:
# 38 "data/maps/Sandbox_Town/scripts.pory"
	.string "Oh, dear, dear.\n"
# 39 "data/maps/Sandbox_Town/scripts.pory"
	.string "Are your POKéMON still tired?\p"
# 40 "data/maps/Sandbox_Town/scripts.pory"
	.string "You should take another rest here.\n"
# 41 "data/maps/Sandbox_Town/scripts.pory"
	.string "That's a fine idea. You should do that.$"
# 42 "data/maps/Sandbox_Town/scripts.pory"

# 43 "data/maps/Sandbox_Town/scripts.pory"
Sandbox_Town_Text_DontNeedToBeShy:
# 44 "data/maps/Sandbox_Town/scripts.pory"
	.string "Is that so?\n"
# 45 "data/maps/Sandbox_Town/scripts.pory"
	.string "You don't need to be shy about it.$"
