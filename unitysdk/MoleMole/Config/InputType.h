#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputType_TypeDefinitionIndex = 45641;

	enum class InputType : ::System::Int32
	{
		HUDNotInteract = 33,
		Interact = 24,
		HUDNotSkill = 25,
		InputLast = 34,
		SkillBangbooAttack = 18,
		SkillA = 1,
		CityRun = 13,
		InLevelPause = 12,
		ZenkovUseItem = 31,
		CharacterSwitch = 11,
		ManualCoAttack = 17,
		ZipLineTurnBack = 28,
		SkillFunction = 14,
		SkillUltra = 4,
		CamZoom = 5,
		SkillBangbooJump = 20,
		Map = 9,
		Chip = 8,
		SkillSoloAid = 15,
		CharacterQTE = 10,
		Move = 0,
		SkillD = 3,
		RunMove = 26,
		CamRotate = 6,
		SkillEtherEyes = 23,
		SkillZenkovYokai = 29,
		SkillBangbooEvade = 19,
		SkillHackLittleRobot = 32,
		SkillSoloQTE = 16,
		SkillBangbooAbyssUltra = 22,
		SkillBangbooSpecial = 21,
		SkillZenkovPyrois = 30,
		HUDItem = 7,
		SkillB = 2,
		ZipLineChange = 27,
		MaxCount = 35,
	};
}
