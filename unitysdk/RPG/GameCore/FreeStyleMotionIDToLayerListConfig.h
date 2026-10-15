#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleMotionIDToLayerListConfig; }

#define RPG_GAMECORE_FREESTYLEMOTIONIDTOLAYERLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4610)
#define RPG_GAMECORE_FREESTYLEMOTIONIDTOLAYERLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F45D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleMotionIDToLayerListConfig_TypeDefinitionIndex = 16320;

	class FreeStyleMotionIDToLayerListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONIDTOLAYERLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleMotionIDToLayerListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleMotionIDToLayerListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONIDTOLAYERLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
