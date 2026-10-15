#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerParamModifierCustomEvent; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC298B0)
#define RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC298C0)
#define RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC29880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerParamModifierCustomEvent_TypeDefinitionIndex = 23630;

	class TriggerParamModifierCustomEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* EventType; // 0x18
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x20
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::DynamicFloat* Value; // 0x30
		::RPG::GameCore::PredicateConfig* PreCheck; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerParamModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerParamModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerParamModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerParamModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARAMMODIFIERCUSTOMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
