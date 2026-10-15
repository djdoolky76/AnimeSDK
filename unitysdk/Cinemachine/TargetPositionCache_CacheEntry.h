#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class TargetPositionCache_CacheCurve; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_ADDRAWITEM_OFFSET UNITYSDK_OFFSET(0x166ADC80)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_CREATECURVES_OFFSET UNITYSDK_OFFSET(0x166AD7D0)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x166ADBE0)

namespace Cinemachine
{
	class TargetPositionCache_CacheEntry : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RawItems; // 0x10
		::Cinemachine::TargetPositionCache_CacheCurve* Curve; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_CTOR_OFFSET))(this);
		}

		::System::Void AddRawItem(::System::Single a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_ADDRAWITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreateCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_CREATECURVES_OFFSET))(this);
		}

	};
}
