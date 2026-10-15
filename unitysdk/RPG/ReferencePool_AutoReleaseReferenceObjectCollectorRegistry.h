#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/RPG/ReferencePool_AutoReleaseReferenceObjectDatas.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F9DD0)
#define RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F9DC0)
#define RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY_GET_OFFSET UNITYSDK_OFFSET(0x1C3F9C80)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_AutoReleaseReferenceObjectCollectorRegistry_TypeDefinitionIndex = 5624;

	class ReferencePool_AutoReleaseReferenceObjectCollectorRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>** StaticGet_AutoReleaseRefrenceDataDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>**)UnitySDK::FromName("RPG", "AutoReleaseReferenceObjectCollectorRegistry")->GetStaticField(0x2E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY_CCTOR_OFFSET))();
		}

		static ::RPG::ReferencePool_AutoReleaseReferenceObjectDatas Get(::System::RuntimeTypeHandle a1)
		{
			return ((::RPG::ReferencePool_AutoReleaseReferenceObjectDatas(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_AUTORELEASEREFERENCEOBJECTCOLLECTORREGISTRY_GET_OFFSET))(a1);
		}

	};
}
