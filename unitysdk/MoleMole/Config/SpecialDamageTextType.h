#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpecialDamageTextType_TypeDefinitionIndex = 88083;

	enum class SpecialDamageTextType : ::System::Int32
	{
		Icemist = 3,
		Icebreak = 7,
		Froze = 6,
		WindElementPurified = 28,
		Elec = 10,
		Deflagrate = 1,
		Fire = 9,
		Frostburn = 13,
		Disorder = 12,
		PerfectCounter = 20,
		HyperCoAttack = 18,
		WindCatalyze = 22,
		Luminize = 26,
		Hiisazu = 4,
		None = 0,
		StrikeShunguang = 19,
		Refringe = 25,
		Wind = 23,
		LifeConversion = 21,
		Thunderbolt = 2,
		Ether = 8,
		Lumen = 24,
		TotalizeDamage = 14,
		EtherInfectionBreak = 17,
		EtherYixuan = 16,
		Strike = 5,
		PartDestroy = 11,
		ExtraElementAbnormal = 15,
		Maim = 27,
	};
}
