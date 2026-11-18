#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class TickFunction_1; }
namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_FunctionListHeader_TypeDefinitionIndex = 8740;

	template <typename T>
	struct alignas(8) TickCollector_1_FunctionListHeader
	{
		static ::System::Object** StaticGet_Null()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TickCollector_1_FunctionListHeader_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Foundation::TickFunction_1<T>* Function; // 0x0
		::System::Object* First; // 0x0
	};
}
