Sandbox_Gym_MapScripts::
	.byte 0

Sandbox_Gym_EventScript_Jeroen::
	trainerbattle_single TRAINER_JEROEN, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end
	
Sandbox_Gym_EventScript_Rein::
	trainerbattle_single TRAINER_REIN, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end
