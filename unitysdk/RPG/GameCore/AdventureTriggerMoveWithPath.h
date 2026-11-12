#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMoveControlType.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMovePathType.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMoveRotateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureTriggerMoveWithPath; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DEE40)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5DEEA0)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5DEDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerMoveWithPath_TypeDefinitionIndex = 22023;

	class AdventureTriggerMoveWithPath : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* StandardSpeed; // 0x20
		::RPG::GameCore::DynamicString* SpeedCurvePath; // 0x28
		::RPG::GameCore::EAdventureTriggerMovePathType PathType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* PathGroupID; // 0x38
		::RPG::GameCore::DynamicFloat* PathInstanceID; // 0x40
		::RPG::GameCore::DynamicFloat* CurveID; // 0x48
		::RPG::GameCore::EAdventureTriggerMoveControlType ControlType; // 0x50
		::RPG::GameCore::EAdventureTriggerMoveRotateType RotateType; // 0x54
		::RPG::MVector3 RotateAxis; // 0x58
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* RotateSpeed; // 0x68
		::System::Boolean RelativeMovement; // 0x70
		::System::Byte _padding2[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMoveEnd; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMoveStart; // 0x80
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMoveStop; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerMoveWithPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerMoveWithPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerMoveWithPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerMoveWithPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
