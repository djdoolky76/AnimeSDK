#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentTraits_1_TagIndex_1_TypeDefinitionIndex = 36411;

	template <typename T>
	struct alignas(4) ComponentTraits_1_TagIndex_1
	{
		static ::System::UInt32* StaticGet_Index()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ComponentTraits_1_TagIndex_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
