#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropTriggerAnimState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPTRIGGERANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92DB10)
#define RPG_GAMECORE_PROPTRIGGERANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92DB40)
#define RPG_GAMECORE_PROPTRIGGERANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92DAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTriggerAnimState_TypeDefinitionIndex = 20401;

	class PropTriggerAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnimStateName; // 0x18
		::System::Single NormalizedTimeStart; // 0x20
		::System::Single TransitionDuration; // 0x24
		::System::Boolean FixedTransitionDuration; // 0x28
		::System::Boolean WatiAnimFinish; // 0x29
		::System::Byte _padding0[0x6];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRIGGERANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRIGGERANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTRIGGERANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
