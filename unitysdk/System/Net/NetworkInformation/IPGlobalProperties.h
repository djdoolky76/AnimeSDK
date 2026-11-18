#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Net::NetworkInformation { class UnicastIPAddressInformationCollection; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_BEGINGETUNICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x1EC52460)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_ENDGETUNICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x1EC524B0)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETIPGLOBALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EC52390)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETUNICASTADDRESSESASYNC_OFFSET UNITYSDK_OFFSET(0x1EC52500)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETUNICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x1EC52410)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GET_PLATFORMNEEDSLIBCWORKAROUND_OFFSET UNITYSDK_OFFSET(0x1EC52380)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_INTERNALGETIPGLOBALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EC523D0)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC526B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPGlobalProperties_TypeDefinitionIndex = 3708;

	class IPGlobalProperties : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__PlatformNeedsLibCWorkaround_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IPGlobalProperties_TypeDefinitionIndex)->GetStaticField(0xFA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES__CTOR_OFFSET))(this);
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

		::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* GetUnicastAddresses()
		{
			return ((::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETUNICASTADDRESSES_OFFSET))(this);
		}

		::System::IAsyncResult* BeginGetUnicastAddresses(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_BEGINGETUNICASTADDRESSES_OFFSET))(this, callback, state);
		}

		::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* EndGetUnicastAddresses(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_ENDGETUNICASTADDRESSES_OFFSET))(this, asyncResult);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*>* GetUnicastAddressesAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETUNICASTADDRESSESASYNC_OFFSET))(this);
		}
	};
}
