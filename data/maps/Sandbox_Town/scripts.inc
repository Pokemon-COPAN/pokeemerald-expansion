Sandbox_Town_MapScripts::
	.byte 0

Sandbox_Town_EventScript_Chansey::
	lock
	faceplayer
	msgbox Sandbox_Town_Text_RestUpHere, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandbox_Town_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Sandbox_Town_EventScript_DeclineRest
	end
	
Sandbox_Town_EventScript_Rest::
	msgbox Sandbox_Town_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Sandbox_Town_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Sandbox_Town_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Sandbox_Town_EventScript_DeclineRest
	end

Sandbox_Town_EventScript_DeclineRest::
	msgbox Sandbox_Town_Text_DontNeedToBeShy, MSGBOX_DEFAULT
	release
	end

Sandbox_Town_Text_RestUpHere:
	.string "Oh, dear, dear.\n"
	.string "Aren't your POKéMON exhausted?\p"
	.string "If you'd like, rest up here.\n"
	.string "That's a fine idea! You should do that.$"

Sandbox_Town_Text_TakeYourTimeRestUp:
	.string "That's right.\n"
	.string "Take your time and rest up!$"

Sandbox_Town_Text_StillTiredTakeAnotherRest:
	.string "Oh, dear, dear.\n"
	.string "Are your POKéMON still tired?\p"
	.string "You should take another rest here.\n"
	.string "That's a fine idea. You should do that.$"

Sandbox_Town_Text_DontNeedToBeShy:
	.string "Is that so?\n"
	.string "You don't need to be shy about it.$"

