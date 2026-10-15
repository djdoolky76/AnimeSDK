#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T> class IPooledList_1; }

namespace Collections::Pooled
{
	template <typename T>
	class PooledList_1 : public ::System::Object
	{
	public:
		::Collections::Pooled::IPooledList_1<T>* _processor; // 0x0
		static ::System::Boolean* StaticGet_IsClass()
		{
			return (::System::Boolean*)UnitySDK::FromName("Collections.Pooled", "PooledList`1")->GetStaticField(0x0);
		}

	};
}
