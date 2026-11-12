#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectEffType_TypeDefinitionIndex = 67366;

	enum class GridFightTraitEffectEffType : ::System::Int32
	{
		None = 0,
		CoreRoleByEquipNum = 1,
		CoreRoleChoose = 2,
		PartnerRoleChoose = 3,
		BackStrengthenFront = 4,
		BandRoleChoose = 5,
		TraitMemberLink = 6,
		AdditionalTraitRoleChoose = 7,
		CounterKing = 8,
	};
}
