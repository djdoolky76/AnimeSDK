#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int InspireZoneOperationType_TypeDefinitionIndex = 68864;

	enum class InspireZoneOperationType : ::System::Int32
	{
		Disorder = 15,
		CatalysisElite = 23,
		Exhausted = 9,
		ElementAbnormalElite = 17,
		EvadeAid = 13,
		StunDestroy = 8,
		CatalysisBoss = 24,
		ElementAbnormalNormal = 16,
		QTE_2 = 5,
		QTE_3 = 6,
		CommonAid = 14,
		ElementAbnormalBoss = 18,
		None = 0,
		QTE_1 = 4,
		DodgeDummySuccess = 2,
		ParryAid = 12,
		DisorderElite = 20,
		CounterHitOther = 1,
		DisorderBoss = 21,
		BeHitAid = 3,
		DisorderNormal = 19,
		CatalysisNormal = 22,
		ElementAbnormal = 10,
		PartDestroy = 11,
	};
}
