#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int UnwrapPromise_1___c_TypeDefinitionIndex = 916;

	template <typename T>
	class UnwrapPromise_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UnwrapPromise_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::WaitCallback** StaticGet___9__8_0()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(UnwrapPromise_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
