#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelEnvType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelRoomConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1760)
#define RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F1770)
#define RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F1720)

namespace RPG::GameCore
{
	class FourRotateVoxelRoomConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRoom; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 RoomID; // 0x14
		::RPG::GameCore::FourRotateVoxelEnvType EnvType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
