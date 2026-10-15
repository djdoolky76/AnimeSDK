#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAnimationMoveRange; }
namespace RPG::GameCore { class AdventureTriggerAnimStateWithMove; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0760)
#define RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A0770)
#define RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A0720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerAnimStateWithMove_TypeDefinitionIndex = 20183;

	class AdventureTriggerAnimStateWithMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureAnimStateType AnimLogicState; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* AnimStateName; // 0x28
		::System::Single NormalizedTimeStart; // 0x30
		::System::Single TransitionDuration; // 0x34
		::System::Boolean StopWhenHitOthers; // 0x38
		::System::Boolean ForbidCrossfade; // 0x39
		::System::Byte _padding1[0x6];
		::Il2CppArray<::RPG::GameCore::AdventureAnimationMoveRange*>* MovingRangeList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerAnimStateWithMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerAnimStateWithMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERANIMSTATEWITHMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
