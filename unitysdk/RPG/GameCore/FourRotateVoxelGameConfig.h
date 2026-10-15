#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelCameraConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelUIConfig; }
namespace RPG::GameCore { class FourRotateVoxelMoveConfig; }
namespace RPG::GameCore { class FourRotateVoxelPlayerConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevertConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EE5D0)
#define RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EE5E0)
#define RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EE5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelGameConfig_TypeDefinitionIndex = 16747;

	class FourRotateVoxelGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::RPG::GameCore::FourRotateVoxelPlayerConfig* PlayerConfig; // 0x10
		::RPG::GameCore::FourRotateVoxelCameraConfig* CameraConfig; // 0x18
		::RPG::GameCore::FourRotateVoxelRevertConfig* RevertConfig; // 0x20
		::RPG::GameCore::FourRotateVoxelMoveConfig* MoveConfig; // 0x28
		::RPG::GameCore::FourRotateVoxelLevelConfig* LevelConfig; // 0x30
		::RPG::GameCore::FourRotateVoxelLevelUIConfig* LevelUIConfig; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
