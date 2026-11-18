#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntitySkillType_TypeDefinitionIndex = 76434;

	enum class EntitySkillType : ::System::Int32
	{
		CommonAid = 19,
		None = 20,
		Sp = 4,
		Counter = 2,
		Cannon = 9,
		Branch = 3,
		Resonate = 11,
		AssaultAid = 16,
		QTE = 6,
		RandomSkill = 8,
		Shield = 10,
		EvadeAid = 17,
		MaxCount = 23,
		Evade = 7,
		Rush = 1,
		ChainAttack = 22,
		Normal = 0,
		BeHitAid = 14,
		BangbooAidSkill = 21,
		ExSp = 5,
		NoEnergyPerfectSwitchAid = 18,
		ExQTE = 13,
		ParryAid = 15,
		Field = 12,
	};
}
