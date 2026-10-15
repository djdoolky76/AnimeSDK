#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingAIDangerConfig; }
namespace RPG::GameCore { class ChenLingAIInterestConfig; }
namespace RPG::GameCore { class ChenLingAISmoothConfig; }
namespace RPG::GameCore { class ChenLingBattleAIConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEAICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57E210)
#define RPG_GAMECORE_CHENLINGBATTLEAICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57E130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAIConfig_TypeDefinitionIndex = 15694;

	class ChenLingBattleAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingAIInterestConfig* InterestConfig; // 0x10
		::RPG::GameCore::ChenLingAIDangerConfig* DangerConfig; // 0x18
		::RPG::GameCore::ChenLingAISmoothConfig* SmoothConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEAICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEAICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
