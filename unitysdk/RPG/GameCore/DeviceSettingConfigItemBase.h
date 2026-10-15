#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceSettingConfigItemBase; }
namespace System { class String; }

#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6004C0)
#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6004D0)
#define RPG_GAMECORE_DEVICESETTINGCONFIGITEMBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D600180)

namespace RPG::GameCore
{
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
