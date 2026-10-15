#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/CakeRacePropertyCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceGamePropertyComparePredicateConfig; }

#define RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B560)
#define RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54B570)
#define RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5507C0)

namespace RPG::GameCore
{
	class CakeRaceGamePropertyComparePredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceProperty Property; // 0x18
		::RPG::GameCore::CakeRacePropertyCompare Compare; // 0x1C
		::System::Int32 Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMEPROPERTYCOMPAREPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
