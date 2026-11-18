#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1_0ED4571775E9BB6A.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x1F420DC0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int MemoryMarshal_TypeDefinitionIndex = 6580;

	class MemoryMarshal : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetString(::System::ReadOnlyMemory_1_0ED4571775E9BB6A<::System::Char> memory, ::System::String*& text, ::System::Int32& start, ::System::Int32& length)
		{
			return ((::System::Boolean(*)(::System::ReadOnlyMemory_1_0ED4571775E9BB6A<::System::Char>, ::System::String*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETSTRING_OFFSET))(memory, text, start, length);
		}
	};
}
