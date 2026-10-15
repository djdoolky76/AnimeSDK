#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelEnvType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelGameModeType.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelLevelCustomCameraParameterConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelSettings; }
namespace RPG::GameCore { class FourRotateVoxelLevelTargetProgressConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C22B0)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C22C0)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C2280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelSettings_TypeDefinitionIndex = 16750;

	class FourRotateVoxelLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::RPG::GameCore::HoyoTagContainer* Tags; // 0x10
		::RPG::GameCore::FourRotateVoxelGameModeType GameModeType; // 0x18
		::RPG::GameCore::FourRotateVoxelEnvType EnvType; // 0x1C
		::RPG::GameCore::FourRotateVoxelAnimalType AnimalType; // 0x20
		::System::Boolean IsNeedPedestal; // 0x24
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::FourRotateVoxelLevelTargetProgressConfig*>* TargetProgressConfigs; // 0x28
		::RPG::GameCore::FourRotateVoxelLevelCustomCameraParameterConfig* CustomCameraParameterConfig; // 0x30
		::System::UInt32 SubMissionID; // 0x38
		::System::Boolean SaveDimensionUpgradState; // 0x3C
		::System::Boolean SkipOpeningPerformance; // 0x3D
		::System::Boolean LockSceneRotation; // 0x3E
		::System::Byte _padding1[0x1];
		::System::String* LockedRotateWarningTextID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELSETTINGS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
