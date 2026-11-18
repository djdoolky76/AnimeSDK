#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Buffers { template <typename T> class ArrayPool_1_1036FF0C6A510415; }

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayPool_1_TypeDefinitionIndex = 3249;

	template <typename T>
	class ArrayPool_1 : public ::System::Object
	{
	public:
		static ::System::Buffers::ArrayPool_1_1036FF0C6A510415<T>** StaticGet_s_sharedInstance()
		{
			return (::System::Buffers::ArrayPool_1_1036FF0C6A510415<T>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
