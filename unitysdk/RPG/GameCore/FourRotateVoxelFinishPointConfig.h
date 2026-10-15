#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EDF70)
#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EDF80)
#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EDF30)

namespace RPG::GameCore
{
	class FourRotateVoxelFinishPointConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsFinishPoint; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::PropButtonConfig* BeforeFinishInteractButtonConfig; // 0x18
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x20
		::System::Boolean IsFinishGameAfterReward; // 0x28
		::System::Boolean IsManualTriggerAll2DBrickUpgradeFinish; // 0x29
		::System::Byte _padding1[0x2];
		::System::Int32 AnimMatIndex; // 0x2C
		::RPG::GameCore::LittleGameEvent* OnGameStart; // 0x30
		::RPG::GameCore::LittleGameEvent* OnAll2DBrickUpgrade; // 0x38
		::RPG::GameCore::LittleGameEvent* OnGameStartOnlyStateOne; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
