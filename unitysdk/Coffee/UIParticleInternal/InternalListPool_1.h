#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Coffee::UIParticleInternal { template <typename T> class InternalObjectPool_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Coffee::UIParticleInternal
{
	template <typename T>
	class InternalListPool_1 : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::InternalObjectPool_1<::System::Collections::Generic::List_1<T>*>** StaticGet_s_ListPool()
		{
			return (::Coffee::UIParticleInternal::InternalObjectPool_1<::System::Collections::Generic::List_1<T>*>**)UnitySDK::FromName("Coffee.UIParticleInternal", "InternalListPool`1")->GetStaticField(0x0);
		}

	};
}
