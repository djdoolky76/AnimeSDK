#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/IPProtectionLevel.h"
#include "unitysdk/System/Object.h"
namespace System::Net::Configuration { class SettingsSectionInternal; }

#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFF3F10)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF3F00)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET UNITYSDK_OFFSET(0x1EFF3EF0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x1EFF3EC0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SettingsSectionInternal_TypeDefinitionIndex = 2979;

	class SettingsSectionInternal : public ::System::Object
	{
	public:
		::System::Boolean HttpListenerUnescapeRequestUrl; // 0x10
		::System::Byte _padding0[0x3];
		::System::Net::Sockets::IPProtectionLevel IPProtectionLevel; // 0x14
		static ::System::Net::Configuration::SettingsSectionInternal** StaticGet_instance()
		{
			return (::System::Net::Configuration::SettingsSectionInternal**)UnitySDK::FromName("System.Net.Configuration", "SettingsSectionInternal")->GetStaticField(0x2DF80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_CCTOR_OFFSET))();
		}

		static ::System::Net::Configuration::SettingsSectionInternal* get_Section()
		{
			return ((::System::Net::Configuration::SettingsSectionInternal*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_SECTION_OFFSET))();
		}

		::System::Boolean get_Ipv6Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET))(this);
		}

	};
}
