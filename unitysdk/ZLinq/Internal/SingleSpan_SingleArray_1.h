#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZLinq::Internal
{
	inline static constexpr unsigned int SingleSpan_SingleArray_1_TypeDefinitionIndex = 6156;

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
