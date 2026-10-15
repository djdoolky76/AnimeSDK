#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_AIEventType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvTriggerAIEvent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVTRIGGERAIEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D385FA0)
#define RPG_GAMECORE_ADVTRIGGERAIEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D385FB0)
#define RPG_GAMECORE_ADVTRIGGERAIEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D385F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTriggerAIEvent_TypeDefinitionIndex = 23391;

	class AdvTriggerAIEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::System::String* UserDefineEvent; // 0x28
		::RPG::GameCore::ST_AIEventType SystemEvent; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTriggerAIEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTriggerAIEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTriggerAIEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTriggerAIEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
