#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TriggerGroupEvent; }

#define RPG_GAMECORE_TRIGGERGROUPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC53660)
#define RPG_GAMECORE_TRIGGERGROUPEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC53670)
#define RPG_GAMECORE_TRIGGERGROUPEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC53510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerGroupEvent_TypeDefinitionIndex = 21196;

	class TriggerGroupEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
