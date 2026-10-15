#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingAIInterestConfig; }

#define RPG_GAMECORE_CHENLINGAIINTERESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57DB30)
#define RPG_GAMECORE_CHENLINGAIINTERESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57D9E0)

namespace RPG::GameCore
{
	class ChenLingAIInterestConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TargetInterestWeight; // 0x10
		::System::Single BypassInterestWeight; // 0x14
		::System::Single BattlefieldCenterInterestWeight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAIINTERESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingAIInterestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingAIInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAIINTERESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
