#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COFFEE_UIPARTICLEINTERNAL_FRAMECACHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x166C4E60)
#define COFFEE_UIPARTICLEINTERNAL_FRAMECACHE_CLEARALLCACHE_OFFSET UNITYSDK_OFFSET(0x166C5060)

namespace Coffee::UIParticleInternal
{
	class FrameCache : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_s_Caches()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("Coffee.UIParticleInternal", "FrameCache")->GetStaticField(0x10A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FRAMECACHE_CCTOR_OFFSET))();
		}

		static ::System::Void ClearAllCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FRAMECACHE_CLEARALLCACHE_OFFSET))();
		}

	};
}
