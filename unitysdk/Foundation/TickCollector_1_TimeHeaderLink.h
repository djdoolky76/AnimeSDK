#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_TimeHeaderLink_TypeDefinitionIndex = 8739;

	template <typename T>
	struct alignas(4) TickCollector_1_TimeHeaderLink
	{
		static ::System::Object** StaticGet_Null()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TickCollector_1_TimeHeaderLink_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _index; // 0x0
	};
}
