#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC15430)
#define RPG_GAMECORE_TRIGGERANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC155A0)
#define RPG_GAMECORE_TRIGGERANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC153F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAnimState_TypeDefinitionIndex = 22873;

	class TriggerAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x38
		::RPG::GameCore::DynamicFloat* NormalizedTimeWait; // 0x40
		::RPG::GameCore::DynamicFloat* NormalizedTransitionDuration; // 0x48
		::System::Boolean ForceStart; // 0x50
		::System::Boolean RandomHitAngle; // 0x51
		::System::Boolean WaitAnimState; // 0x52
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
