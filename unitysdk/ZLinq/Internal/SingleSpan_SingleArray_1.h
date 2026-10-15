#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZLinq::Internal
{
	template <typename T>
	class SingleSpan_SingleArray_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_Array()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("ZLinq.Internal", "SingleArray`1")->GetStaticField(0x0);
		}

	};
}
