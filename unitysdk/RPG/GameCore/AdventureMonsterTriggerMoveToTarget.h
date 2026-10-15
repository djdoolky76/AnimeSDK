#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureMonsterTriggerMoveToTarget; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CAD40)
#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CAD50)
#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CAD10)

namespace RPG::GameCore
{
	class AdventureMonsterTriggerMoveToTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* OverTime; // 0x20
		::RPG::GameCore::DynamicFloat* ToleranceDistance; // 0x28
		::RPG::GameCore::DynamicFloat* Speed; // 0x30
		::RPG::GameCore::AdventureMoveOnNavMeshFaceToType FaceToType; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* FaceToTarget; // 0x40
		::System::Boolean NeedWait; // 0x48
		::System::Boolean Reset; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
