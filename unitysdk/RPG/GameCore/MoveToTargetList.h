#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MoveToTargetList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MOVETOTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BD8A0)
#define RPG_GAMECORE_MOVETOTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BD9F0)
#define RPG_GAMECORE_MOVETOTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BD730)

namespace RPG::GameCore
{
	class MoveToTargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x30
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x38
		::RPG::GameCore::DynamicFloat* NormalizedTransitionDuration; // 0x40
		::RPG::GameCore::DynamicFloat* NormalizedTimeWait; // 0x48
		::Il2CppArray<::RPG::GameCore::AnimationMoveRange*>* MovingRangeList; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveToTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveToTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveToTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveToTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
