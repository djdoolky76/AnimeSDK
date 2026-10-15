#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelRoomDoorConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C3E80)
#define RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C3E90)
#define RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C3E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRoomDoorConfig_TypeDefinitionIndex = 16755;

	class FourRotateVoxelRoomDoorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRoomDoor; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 TargetDoorConfigID; // 0x14
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x18
		::System::Boolean CreateTrigger; // 0x20
		::System::Byte _padding1[0x7];
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRoomDoorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRoomDoorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRoomDoorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRoomDoorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMDOORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
