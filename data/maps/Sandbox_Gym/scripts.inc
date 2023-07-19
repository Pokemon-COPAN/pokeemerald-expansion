Sandbox_Gym_MapScripts::
	.byte 0

SandBox_Gym_EventScript_Jeroen::
	lock
	faceplayer
	call SandBox_Gym_Battle
	msgbox SandBox_Gym_Text_FirstBattleText, MSGBOX_DEFAULT
	closemessage
	end
	
SandBox_Gym_Battle::
	trainerbattle_no_intro TRAINER_JEROEN, SandBox_Gym_Text_JeroenDefeat