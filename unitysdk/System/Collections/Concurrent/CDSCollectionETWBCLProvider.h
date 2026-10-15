#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"
namespace System::Collections::Concurrent { class CDSCollectionETWBCLProvider; }

#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C093280)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTDICTIONARY_ACQUIRINGALLLOCKS_OFFSET UNITYSDK_OFFSET(0x1C093150)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPOPFAILED_OFFSET UNITYSDK_OFFSET(0x1C093020)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPUSHFAILED_OFFSET UNITYSDK_OFFSET(0x1C092EF0)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C092EB0)

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int CDSCollectionETWBCLProvider_TypeDefinitionIndex = 1513;

	class CDSCollectionETWBCLProvider : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Collections::Concurrent::CDSCollectionETWBCLProvider** StaticGet_Log()
		{
			return (::System::Collections::Concurrent::CDSCollectionETWBCLProvider**)UnitySDK::FromName("System.Collections.Concurrent", "CDSCollectionETWBCLProvider")->GetStaticField(0x10890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CCTOR_OFFSET))();
		}

		::System::Void ConcurrentStack_FastPushFailed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPUSHFAILED_OFFSET))(this, a1);
		}

		::System::Void ConcurrentStack_FastPopFailed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPOPFAILED_OFFSET))(this, a1);
		}

		::System::Void ConcurrentDictionary_AcquiringAllLocks(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTDICTIONARY_ACQUIRINGALLLOCKS_OFFSET))(this, a1);
		}

	};
}
