#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshMoveCalcType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureMonsterTriggerMove; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CA9C0)
#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CA9D0)
#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CA990)

namespace RPG::GameCore
{
	class AdventureMonsterTriggerMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureMoveOnNavMeshMoveCalcType MoveDurationCalcType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::RPG::GameCore::DynamicFloat* Speed; // 0x28
		::RPG::GameCore::AdventureMoveOnNavMeshFaceToType FaceToType; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* FaceToTarget; // 0x38
		::System::Boolean NeedWait; // 0x40
		::System::Boolean Reset; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureMonsterTriggerMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureMonsterTriggerMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureMonsterTriggerMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureMonsterTriggerMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
