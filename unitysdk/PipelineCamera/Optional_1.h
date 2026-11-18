#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int Optional_1_TypeDefinitionIndex = 36349;

	template <typename T>
	struct alignas(8) Optional_1
	{
		static ::PipelineCamera::Optional_1<T>* StaticGet_Null()
		{
			return (::PipelineCamera::Optional_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Optional_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T _value; // 0x0
		::System::Byte _isSet; // 0x0
	};
}
