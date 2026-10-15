#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PumanHuntTriggerEscapeEvent; }

#define RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95D390)
#define RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95D3A0)
#define RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95D2D0)

namespace RPG::GameCore
{
	class PumanHuntTriggerEscapeEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PumanHuntTriggerEscapeEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PumanHuntTriggerEscapeEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PumanHuntTriggerEscapeEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PumanHuntTriggerEscapeEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTTRIGGERESCAPEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
