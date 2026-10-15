#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageRegionLayerConfig; }

#define RPG_GAMECORE_STAGEREGIONLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE6690)
#define RPG_GAMECORE_STAGEREGIONLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE6650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionLayerConfig_TypeDefinitionIndex = 19195;

	class StageRegionLayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRegionLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRegionLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
