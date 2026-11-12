#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEffectType_TypeDefinitionIndex = 13784;

	enum class GridFightTraitEffectType : ::System::Int32
	{
		None = 0,
		TempEquip = 1,
		TraitBonus = 2,
		Bonus = 3,
		MazeBuffEnhance = 4,
		CoreRoleChoose = 5,
		SPSlot = 6,
		CoreRoleByEquipNum = 7,
		TraitEffectByJson = 8,
		SelectEnhance = 9,
		GainFrontTrait = 10,
		BackStrengthenFront = 11,
		Elation = 12,
		HolyGrailPray = 13,
		PartnerRoleChoose = 14,
		ChooseTraitByModule = 15,
		TempEquipFromTemplate = 16,
		TraitMemberLink = 17,
		PhanionUnique = 18,
		BandRoleChoose = 19,
		Astropolis = 20,
		UpgradeBasicEquipBeforeBattle = 21,
		ComboSlot = 22,
		Trailblaze = 23,
		MoonGame = 24,
		MoonGameSpotLight = 25,
		ElationLaughPoint = 26,
		Chimera = 27,
		DanHengTwoInOne = 28,
		JadeShop = 29,
		ChooseTraitByManual = 30,
		ClaraEnhance = 31,
		AdditionalTraitRoleChoose = 32,
		AhaUnique = 33,
		GainOtherRoleTrait = 34,
	};
}
