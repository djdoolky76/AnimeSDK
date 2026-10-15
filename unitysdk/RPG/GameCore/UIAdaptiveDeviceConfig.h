#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIAdaptiveDeviceConfig; }
namespace RPG::GameCore { class UIAdaptiveDeviceConfigItem; }

#define RPG_GAMECORE_UIADAPTIVEDEVICECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6F2B0)
#define RPG_GAMECORE_UIADAPTIVEDEVICECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6F1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIAdaptiveDeviceConfig_TypeDefinitionIndex = 24427;

	class UIAdaptiveDeviceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::UIAdaptiveDeviceConfigItem*>* DeviceConfigList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVEDEVICECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIAdaptiveDeviceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIAdaptiveDeviceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVEDEVICECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
