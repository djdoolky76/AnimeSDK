#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2WithTAData; }
namespace RPG::GameCore { class VolumeConfig; }

#define RPG_GAMECORE_VOLUMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC92D70)
#define RPG_GAMECORE_VOLUMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC92C40)

namespace RPG::GameCore
{
	class VolumeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageVolumeConfig*>* StageVolumeConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2WithTAData*>* StageVolumeConfigListV2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VolumeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VolumeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
