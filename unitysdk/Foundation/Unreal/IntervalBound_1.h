#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/IntervalBoundType.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int IntervalBound_1_TypeDefinitionIndex = 8900;

	template <typename T>
	struct alignas(8) IntervalBound_1
	{
		static ::Foundation::Unreal::IntervalBound_1<T>* StaticGet_Open()
		{
			return (::Foundation::Unreal::IntervalBound_1<T>*)Il2CppClass::FromTypeDefinitionIndex(IntervalBound_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T _value; // 0x0
		::Foundation::Unreal::IntervalBoundType _Type_k__BackingField; // 0x0
	};
}
