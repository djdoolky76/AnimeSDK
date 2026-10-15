#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerAnimStateOnModifierCustomEvent; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC15A60)
#define RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC15A70)
#define RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC15A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAnimStateOnModifierCustomEvent_TypeDefinitionIndex = 23129;

	class TriggerAnimStateOnModifierCustomEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* EventType; // 0x20
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* AnimStateName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
