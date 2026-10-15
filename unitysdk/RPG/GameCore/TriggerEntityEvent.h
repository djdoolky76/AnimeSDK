#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TriggerEntityEvent; }

#define RPG_GAMECORE_TRIGGERENTITYEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC52500)
#define RPG_GAMECORE_TRIGGERENTITYEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC52510)
#define RPG_GAMECORE_TRIGGERENTITYEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC524D0)

namespace RPG::GameCore
{
	class TriggerEntityEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x18
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEntityEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEntityEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEntityEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEntityEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
