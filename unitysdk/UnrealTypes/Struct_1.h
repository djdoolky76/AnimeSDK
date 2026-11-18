#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { template <typename T> class IStruct_1; }

namespace UnrealTypes
{
	inline static constexpr unsigned int Struct_1_TypeDefinitionIndex = 27726;

	template <typename T>
	class Struct_1 : public ::System::Object
	{
	public:
		static ::UnrealTypes::IStruct_1<T>** StaticGet__staticInstance()
		{
			return (::UnrealTypes::IStruct_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Struct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
