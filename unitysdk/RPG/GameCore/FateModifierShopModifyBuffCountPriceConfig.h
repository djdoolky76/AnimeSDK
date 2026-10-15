#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierShopModifyBuffCountPriceConfig; }

#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69BAD0)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69BAE0)
#define RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69BA90)

namespace RPG::GameCore
{
	class FateModifierShopModifyBuffCountPriceConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierShopModifyBuffCountPriceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSHOPMODIFYBUFFCOUNTPRICECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
