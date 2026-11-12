#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Net::NetworkInformation { class IPGlobalProperties; }

#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_CTOR_OFFSET UNITYSDK_OFFSET(0x2031C580)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETIPGLOBALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x2031C5A0)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GET_PLATFORMNEEDSLIBCWORKAROUND_OFFSET UNITYSDK_OFFSET(0x2031C590)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_INTERNALGETIPGLOBALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x2031C9A0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPGlobalProperties_TypeDefinitionIndex = 2928;

	class IPGlobalProperties : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__PlatformNeedsLibCWorkaround_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Net.NetworkInformation", "IPGlobalProperties")->GetStaticField(0xABB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_PlatformNeedsLibCWorkaround()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GET_PLATFORMNEEDSLIBCWORKAROUND_OFFSET))();
		}

		static ::System::Net::NetworkInformation::IPGlobalProperties* GetIPGlobalProperties()
		{
			return ((::System::Net::NetworkInformation::IPGlobalProperties*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETIPGLOBALPROPERTIES_OFFSET))();
		}

		static ::System::Net::NetworkInformation::IPGlobalProperties* InternalGetIPGlobalProperties()
		{
			return ((::System::Net::NetworkInformation::IPGlobalProperties*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_INTERNALGETIPGLOBALPROPERTIES_OFFSET))();
		}

	};
}
