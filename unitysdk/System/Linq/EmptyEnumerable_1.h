#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Linq
{
	inline static constexpr unsigned int EmptyEnumerable_1_TypeDefinitionIndex = 4370;

	template <typename T>
	class EmptyEnumerable_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_Instance()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyEnumerable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
