#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_NodeLink_TypeDefinitionIndex = 8738;

	template <typename T>
	struct alignas(4) TickCollector_1_NodeLink
	{
		static ::System::Object** StaticGet_Null()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TickCollector_1_NodeLink_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _index; // 0x0
	};
}
