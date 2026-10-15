#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceFrontCatNumPredicateConfig; }

#define RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B3F0)
#define RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54B400)
#define RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54F780)

namespace RPG::GameCore
{
	class CakeRaceFrontCatNumPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::System::UInt32 Num; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFRONTCATNUMPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
