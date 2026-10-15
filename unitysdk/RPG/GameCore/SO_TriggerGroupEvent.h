#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SO_TriggerGroupEvent; }
namespace System { class String; }

#define RPG_GAMECORE_SO_TRIGGERGROUPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA70980)
#define RPG_GAMECORE_SO_TRIGGERGROUPEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA70990)
#define RPG_GAMECORE_SO_TRIGGERGROUPEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70E30)

namespace RPG::GameCore
{
	class SO_TriggerGroupEvent : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::String* EventName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERGROUPEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_TriggerGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERGROUPEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_TriggerGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERGROUPEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
