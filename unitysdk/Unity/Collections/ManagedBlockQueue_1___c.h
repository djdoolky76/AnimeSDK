#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

namespace Unity::Collections
{
	inline static constexpr unsigned int ManagedBlockQueue_1___c_TypeDefinitionIndex = 18015;

	template <typename T>
	class ManagedBlockQueue_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ManagedBlockQueue_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_1<::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ManagedBlockQueue_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
