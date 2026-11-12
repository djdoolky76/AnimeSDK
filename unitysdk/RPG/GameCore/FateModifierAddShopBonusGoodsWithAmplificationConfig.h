#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierAddShopBonusGoodsWithAmplificationConfig; }

#define RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A79F0)
#define RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A7A00)
#define RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A79B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddShopBonusGoodsWithAmplificationConfig_TypeDefinitionIndex = 19456;

	class FateModifierAddShopBonusGoodsWithAmplificationConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddShopBonusGoodsWithAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddShopBonusGoodsWithAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddShopBonusGoodsWithAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddShopBonusGoodsWithAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDSHOPBONUSGOODSWITHAMPLIFICATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
