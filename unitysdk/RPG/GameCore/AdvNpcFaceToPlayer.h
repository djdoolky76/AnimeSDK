#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EWaitFaceToTaskFinishMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcFaceToPlayer; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCFACETOPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A6160)
#define RPG_GAMECORE_ADVNPCFACETOPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A6180)
#define RPG_GAMECORE_ADVNPCFACETOPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A6110)

namespace RPG::GameCore
{
	class AdvNpcFaceToPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FromDialog; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupNpcID; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* TargetNpcType; // 0x28
		::System::UInt32 PlayerInGroupID; // 0x30
		::System::UInt32 PlayerInGroupNpcID; // 0x34
		::RPG::GameCore::TargetEvaluator* TargetPlayerType; // 0x38
		::System::Single Duration; // 0x40
		::System::Boolean TryFaceToFace; // 0x44
		::System::Boolean OnlyPlayerFaceToNpc; // 0x45
		::System::Boolean NpcLookAtPlayer; // 0x46
		::System::Boolean PlayerLookAtNpc; // 0x47
		::System::Boolean StopLookAtOnGraphEnd; // 0x48
		::System::Boolean TurnBackOnGraphEnd; // 0x49
		::System::Boolean SteerImmediately; // 0x4A
		::System::Boolean FinishImmadiate; // 0x4B
		::RPG::GameCore::EWaitFaceToTaskFinishMode WaitFinishMode; // 0x4C
		::System::Boolean ForceToStandBy; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETOPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcFaceToPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcFaceToPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETOPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcFaceToPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcFaceToPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETOPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
