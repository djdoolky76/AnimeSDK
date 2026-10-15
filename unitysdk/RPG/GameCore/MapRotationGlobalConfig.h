#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class Map3DIconConfig; }
namespace RPG::GameCore { class MapRotationAudioConfig; }
namespace RPG::GameCore { class MapRotationCameraConfig; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace RPG::GameCore { class MapRotationGlobalConfig; }
namespace RPG::GameCore { class MapRotationGlobalTagConfig; }
namespace RPG::GameCore { class MapRotationMonsterEffectConfig; }
namespace RPG::GameCore { class MapRotationPerformanceConfig; }
namespace RPG::GameCore { class MapRotationTextConfig; }
namespace RPG::GameCore { class PlayerEnergyConfig; }
namespace RPG::GameCore { class SpecialNPCEffectConfig; }

#define RPG_GAMECORE_MAPROTATIONGLOBALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8021D0)
#define RPG_GAMECORE_MAPROTATIONGLOBALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D801EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationGlobalConfig_TypeDefinitionIndex = 17042;

	class MapRotationGlobalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MapRotationEntityEffectConfig* NPCEffectConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::MapRotationMonsterEffectConfig*>* MonsterEffectConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::SpecialNPCEffectConfig*>* SpecialNPCEffectConfig; // 0x20
		::RPG::GameCore::PlayerEnergyConfig* PlayerEnergyConfig; // 0x28
		::RPG::GameCore::MapRotationTextConfig* TextConfig; // 0x30
		::RPG::GameCore::MapRotationAudioConfig* AudioConfig; // 0x38
		::RPG::GameCore::MapRotationGlobalTagConfig* TagConfig; // 0x40
		::System::UInt32 AchievementID_FirstPoseSwitch; // 0x48
		::System::UInt32 AchievementID_CountPoseSwitch; // 0x4C
		::System::UInt32 AchievementID_RemoveUnusedPoseSwitcher; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MapRotationCameraConfig* CameraConfig; // 0x58
		::RPG::GameCore::Map3DIconConfig* Map3DIconConfig; // 0x60
		::RPG::GameCore::MapRotationPerformanceConfig* PerformanceConfig; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationGlobalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationGlobalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
