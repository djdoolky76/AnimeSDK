#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMCHESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B4570)
#define RPG_GAMECORE_FIVEDIMCHESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B4580)
#define RPG_GAMECORE_FIVEDIMCHESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B4530)

namespace RPG::GameCore
{
	class FiveDimChestConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsChest; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::RPG::GameCore::FiveDimChestState DefaultState; // 0x20
		::System::Boolean IsSidePuzzleChest; // 0x24
		::System::Byte _padding1[0x1];
		::System::Int16 LockValue; // 0x26
		::System::Int16 CloseValue; // 0x28
		::System::Int16 OpenValue; // 0x2A
		::System::Byte _padding2[0x4];
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x38
		::RPG::GameCore::LittleGameEvent* InitAsLockEvent; // 0x40
		::RPG::GameCore::LittleGameEvent* InitAsCloseEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* InitAsOpenEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* LockEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* CloseEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* OpenEvent; // 0x68
		::RPG::GameCore::LittleGameEvent* InteractLockEvent; // 0x70
		::RPG::GameCore::LittleGameEvent* InteractCloseEvent; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimChestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimChestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
