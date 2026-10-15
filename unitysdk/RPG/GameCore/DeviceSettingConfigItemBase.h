#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceSettingConfigItemBase; }
namespace System { class String; }

#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2A30)
#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D2A40)
#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D26F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceSettingConfigItemBase_TypeDefinitionIndex = 16461;

	class DeviceSettingConfigItemBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SolutionName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceSettingConfigItemBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceSettingConfigItemBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceSettingConfigItemBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceSettingConfigItemBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
