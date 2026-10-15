#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PassageConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace RPG::GameCore { class VolumeConfigV2; }
namespace RPG::GameCore { class VolumeDistanceMap; }

#define RPG_GAMECORE_VOLUMECONFIGV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC92F00)
#define RPG_GAMECORE_VOLUMECONFIGV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC92D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VolumeConfigV2_TypeDefinitionIndex = 19148;

	class VolumeConfigV2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* StageVolumeConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::PassageConfig*>* Passages; // 0x18
		::RPG::GameCore::VolumeDistanceMap* DistanceMap; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMECONFIGV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VolumeConfigV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VolumeConfigV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMECONFIGV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
