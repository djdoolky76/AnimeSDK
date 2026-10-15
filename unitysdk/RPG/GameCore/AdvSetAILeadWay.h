#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetAILeadWay; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVSETAILEADWAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ADF80)
#define RPG_GAMECORE_ADVSETAILEADWAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3ADFC0)
#define RPG_GAMECORE_ADVSETAILEADWAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3ADF20)

namespace RPG::GameCore
{
	class AdvSetAILeadWay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::System::UInt32 PathwayGroupID; // 0x28
		::System::UInt32 PathwayID; // 0x2C
		::System::Int32 StartIndex; // 0x30
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x34
		::System::Boolean ForbidTickLod; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single CenterOffset; // 0x3C
		::System::Single SpeedScale; // 0x40
		::System::Boolean WaitForPlayer; // 0x44
		::System::Byte _padding1[0x3];
		::System::Single StartWaitDistance; // 0x48
		::System::Single StopWaitDistance; // 0x4C
		::System::Boolean ForcePlayerWalk; // 0x50
		::System::Byte _padding2[0x3];
		::System::Single StartWalkDistance; // 0x54
		::System::Single EndWalkDistance; // 0x58
		::System::Boolean OverrideOverStepRadius; // 0x5C
		::System::Byte _padding3[0x3];
		::System::Single OverStepRadius; // 0x60
		::System::Boolean OverrideRepathTime; // 0x64
		::System::Byte _padding4[0x3];
		::System::Single RepathTime; // 0x68
		::System::Byte _padding5[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReach; // 0x70
		::Il2CppArray<::RPG::MVector3>* PathOffset; // 0x78
		::System::Boolean MoveWhenPlayerMove; // 0x80
		::System::Boolean UseNavmeshOnly; // 0x81
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAILEADWAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetAILeadWay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetAILeadWay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAILEADWAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetAILeadWay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetAILeadWay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAILEADWAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
