#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoomRobotGameplayControllerInitialize; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D448B40)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D448B50)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D448B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayControllerInitialize_TypeDefinitionIndex = 21187;

	class BoomRobotGameplayControllerInitialize : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* InteractPointPropID; // 0x18
		::RPG::GameCore::DynamicFloat* BoomCamRangePropID; // 0x20
		::RPG::GameCore::DynamicFloat* Boundary1; // 0x28
		::RPG::GameCore::DynamicFloat* Boundary2; // 0x30
		::RPG::GameCore::DynamicFloat* Boundary3; // 0x38
		::RPG::GameCore::DynamicFloat* Boundary4; // 0x40
		::RPG::GameCore::DynamicFloat* BlockPlayerEnterPropID; // 0x48
		::RPG::GameCore::DynamicFloat* AlertMonsterRangeWhenBoomMiss; // 0x50
		::RPG::GameCore::DynamicFloat* AlertMonsterMinValue; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayControllerInitialize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayControllerInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayControllerInitialize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayControllerInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
