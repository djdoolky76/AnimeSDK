#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAchievementConfig; }
namespace RPG::GameCore { class FiveDimAudioConfig; }
namespace RPG::GameCore { class FiveDimAvatarConfig; }
namespace RPG::GameCore { class FiveDimGameConfig; }
namespace RPG::GameCore { class FiveDimGlobalCameraConfig; }
namespace RPG::GameCore { class FiveDimLevelGlobalConfig; }
namespace RPG::GameCore { class FiveDimMiniGameCollectionConfig; }
namespace RPG::GameCore { class FiveDimMiscConfig; }
namespace RPG::GameCore { class FiveDimPhysicsConfig; }
namespace RPG::GameCore { class FiveDimPlayerConfig; }
namespace RPG::GameCore { class FiveDimScrollConfig; }

#define RPG_GAMECORE_FIVEDIMGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BFDC0)
#define RPG_GAMECORE_FIVEDIMGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BFDD0)
#define RPG_GAMECORE_FIVEDIMGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BFD90)

namespace RPG::GameCore
{
	class FiveDimGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::RPG::GameCore::FiveDimScrollConfig* ScrollConfig; // 0x10
		::RPG::GameCore::FiveDimPlayerConfig* PlayerConfig; // 0x18
		::RPG::GameCore::FiveDimGlobalCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::FiveDimPhysicsConfig* PhysicsConfig; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimAvatarConfig*>* AvatarConfigs; // 0x30
		::RPG::GameCore::FiveDimLevelGlobalConfig* LevelConfig; // 0x38
		::RPG::GameCore::FiveDimAudioConfig* AudioConfig; // 0x40
		::RPG::GameCore::FiveDimMiniGameCollectionConfig* MiniGameCollectionConfig; // 0x48
		::RPG::GameCore::FiveDimAchievementConfig* AchievementConfig; // 0x50
		::RPG::GameCore::FiveDimMiscConfig* MiscConfig; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
