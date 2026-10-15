#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerAdditiveAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC423C0)
#define RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC42490)
#define RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC422C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAdditiveAnimState_TypeDefinitionIndex = 22874;

	class TriggerAdditiveAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Int32 LayerIndex; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTransitionDuration; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAdditiveAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAdditiveAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAdditiveAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAdditiveAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERADDITIVEANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
