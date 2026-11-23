#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/A3684B5CFBD2D145.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

namespace System::Reflection
{
	inline static constexpr unsigned int BB90FA87C3391A86_TypeDefinitionIndex = 11136;

	struct alignas(8) BB90FA87C3391A86
	{
		::System::Type* B72BA8D0526802A8; // 0x10
		::System::Type* FCA929F3150438A4; // 0x18
		::System::String* E67211D321B1E764; // 0x20
		::System::Reflection::MethodInfo* A1AC039AF0460D5B; // 0x28
		::System::Reflection::MethodInfo* E50C59F2530D6F0F; // 0x30
		::System::Reflection::MethodInfo* FF1850D5A41E5906; // 0x38
		::System::Reflection::A3684B5CFBD2D145 A9B59A2E284383EE; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Reflection::MethodInfo*>* F56EF671522E9875; // 0x48
	};
}
