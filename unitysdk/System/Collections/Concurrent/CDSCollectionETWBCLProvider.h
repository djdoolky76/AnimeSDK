#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTDICTIONARY_ACQUIRINGALLLOCKS_OFFSET UNITYSDK_OFFSET(0x1DD0AC10)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPOPFAILED_OFFSET UNITYSDK_OFFSET(0x1DD0AC00)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPUSHFAILED_OFFSET UNITYSDK_OFFSET(0x1DD0ABF0)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD0AC20)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0ABA0)

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int CDSCollectionETWBCLProvider_TypeDefinitionIndex = 1498;

	class CDSCollectionETWBCLProvider : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Collections::Concurrent::CDSCollectionETWBCLProvider** StaticGet_Log()
		{
			return (::System::Collections::Concurrent::CDSCollectionETWBCLProvider**)Il2CppClass::FromTypeDefinitionIndex(CDSCollectionETWBCLProvider_TypeDefinitionIndex)->GetStaticField(0xC40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void ConcurrentStack_FastPushFailed(::System::Int32 spinCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPUSHFAILED_OFFSET))(this, spinCount);
		}

		::System::Void ConcurrentStack_FastPopFailed(::System::Int32 spinCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPOPFAILED_OFFSET))(this, spinCount);
		}

		::System::Void ConcurrentDictionary_AcquiringAllLocks(::System::Int32 numOfBuckets)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTDICTIONARY_ACQUIRINGALLLOCKS_OFFSET))(this, numOfBuckets);
		}
	};
}
