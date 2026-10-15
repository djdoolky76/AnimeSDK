#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T> class PooledList_1; }

namespace RPG
{
	template <typename T>
	class EmptyPooledList_1 : public ::System::Object
	{
	public:
		static ::Collections::Pooled::PooledList_1<T>** StaticGet_Instance()
		{
			return (::Collections::Pooled::PooledList_1<T>**)UnitySDK::FromName("RPG", "EmptyPooledList`1")->GetStaticField(0x0);
		}

	};
}
