#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetAIMoveTo; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVSETAIMOVETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D380D50)
#define RPG_GAMECORE_ADVSETAIMOVETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D380D60)
#define RPG_GAMECORE_ADVSETAIMOVETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D380D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetAIMoveTo_TypeDefinitionIndex = 22199;

	class AdvSetAIMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::System::UInt32 GroupId; // 0x28
		::System::UInt32 PointID; // 0x2C
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x30
		::System::Boolean AlignRotation; // 0x34
		::System::Boolean AccurateStop; // 0x35
		::System::Boolean SkipStartTurn; // 0x36
		::System::Boolean FinishAfterStop; // 0x37
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReach; // 0x38
		::System::Single SpeedScale; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIMOVETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetAIMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetAIMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIMOVETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetAIMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetAIMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAIMOVETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
