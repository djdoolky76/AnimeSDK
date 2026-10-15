#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceBgEffectFrameConfig; }
namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }
namespace RPG::GameCore { class PerformanceBgImagePanelContainerConfig; }

#define RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONTAINERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F7440)
#define RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONTAINERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F7310)

namespace RPG::GameCore
{
	class PerformanceBgImagePanelContainerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PerformanceBgImagePanelConfig*>* PanelConfigs; // 0x10
		::Il2CppArray<::RPG::GameCore::PerformanceBgEffectFrameConfig*>* EffectFrameConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONTAINERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceBgImagePanelContainerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceBgImagePanelContainerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONTAINERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
