#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"
namespace System::Collections::Concurrent { class CDSCollectionETWBCLProvider_86437580BCBB21F0; }

#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_86437580BCBB21F0_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFD3EE0)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_86437580BCBB21F0_CONCURRENTBAG_TRYPEEKSTEALS_OFFSET UNITYSDK_OFFSET(0x1EFD3EA0)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_86437580BCBB21F0_CONCURRENTBAG_TRYTAKESTEALS_OFFSET UNITYSDK_OFFSET(0x1EFD3E60)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_86437580BCBB21F0_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD3E20)

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int CDSCollectionETWBCLProvider_86437580BCBB21F0_TypeDefinitionIndex = 3060;

	class CDSCollectionETWBCLProvider_86437580BCBB21F0 : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Collections::Concurrent::CDSCollectionETWBCLProvider_86437580BCBB21F0** StaticGet_Log()
		{
			return (::System::Collections::Concurrent::CDSCollectionETWBCLProvider_86437580BCBB21F0**)UnitySDK::FromName("System.Collections.Concurrent", "CDSCollectionETWBCLProvider")->GetStaticField(0x37C90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_86437580BCBB21F0_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_86437580BCBB21F0_CCTOR_OFFSET))();
		}

		::System::Void ConcurrentBag_TryTakeSteals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_86437580BCBB21F0_CONCURRENTBAG_TRYTAKESTEALS_OFFSET))(this);
		}

		::System::Void ConcurrentBag_TryPeekSteals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_86437580BCBB21F0_CONCURRENTBAG_TRYPEEKSTEALS_OFFSET))(this);
		}

	};
}
