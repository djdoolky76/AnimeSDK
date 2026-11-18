#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }

namespace System::Buffers
{
	inline static constexpr unsigned int DefaultArrayPool_1_BE64E5E2DE3BFA0A_TypeDefinitionIndex = 6534;

	template <typename T>
	class DefaultArrayPool_1_BE64E5E2DE3BFA0A
	{
	public:
		static ::Il2CppArray<T>** StaticGet_s_emptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(DefaultArrayPool_1_BE64E5E2DE3BFA0A_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
	};
}
