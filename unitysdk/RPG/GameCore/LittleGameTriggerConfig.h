#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class LittleGameTriggerConfig; }

#define RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E73F0)
#define RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E7400)
#define RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E73C0)

namespace RPG::GameCore
{
	class LittleGameTriggerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x10
		::System::Boolean TriggerOnce; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRIGGERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
