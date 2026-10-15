#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TriggerPropEventInBattle; }

#define RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC57E20)
#define RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC57E30)
#define RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC57DF0)

namespace RPG::GameCore
{
	class TriggerPropEventInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* Event; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPropEventInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPropEventInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPropEventInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPropEventInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPROPEVENTINBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
