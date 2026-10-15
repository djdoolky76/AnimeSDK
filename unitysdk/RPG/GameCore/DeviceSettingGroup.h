#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceSettingGroup; }
namespace RPG::GameCore { class DeviceSettingInfo; }
namespace System { class String; }

#define RPG_GAMECORE_DEVICESETTINGGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2D20)
#define RPG_GAMECORE_DEVICESETTINGGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D2AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceSettingGroup_TypeDefinitionIndex = 16466;

	class DeviceSettingGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SettingName; // 0x10
		::Il2CppArray<::System::String*>* PlatformName; // 0x18
		::System::Int32 MemoryMin; // 0x20
		::System::Int32 MemoryMax; // 0x24
		::RPG::GameCore::DeviceSettingInfo* Setting; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceSettingGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceSettingGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
