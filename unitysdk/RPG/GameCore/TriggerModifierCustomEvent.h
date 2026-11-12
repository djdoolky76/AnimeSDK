#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierCustomEventSortType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerModifierCustomEvent; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE697A0)
#define RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE69800)
#define RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE69720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerModifierCustomEvent_TypeDefinitionIndex = 23129;

	class TriggerModifierCustomEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IncludeLimbo; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::JsonEnum* EventType; // 0x28
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x30
		::System::String* DynamicKey; // 0x38
		::RPG::GameCore::DynamicFloat* Value; // 0x40
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x48
		::RPG::GameCore::PredicateConfig* PreCheck; // 0x50
		::RPG::GameCore::ModifierCustomEventSortType OverrideSortBy; // 0x58
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* OverrideParamEntity; // 0x60
		::RPG::GameCore::TargetEvaluator* OverrideParamEntity2; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
