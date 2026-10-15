#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class AnimationTimeEvent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerAnimStateWithMove; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC15DB0)
#define RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC15EC0)
#define RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC15C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAnimStateWithMove_TypeDefinitionIndex = 22466;

	class TriggerAnimStateWithMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x38
		::RPG::GameCore::DynamicFloat* NormalizedTransitionDuration; // 0x40
		::Il2CppArray<::RPG::GameCore::AnimationMoveRange*>* MovingRangeList; // 0x48
		::Il2CppArray<::RPG::GameCore::AnimationTimeEvent*>* EventList; // 0x50
		::System::Boolean ForceStart; // 0x58
		::System::Boolean WaitAnimState; // 0x59
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAnimStateWithMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAnimStateWithMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEWITHMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
