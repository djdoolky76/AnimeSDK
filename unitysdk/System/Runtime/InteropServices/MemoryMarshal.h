#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x1EE463D0)

namespace System::Runtime::InteropServices
{
	class MemoryMarshal : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetString(::System::ReadOnlyMemory_1<::System::Char> a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::ReadOnlyMemory_1<::System::Char>, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETSTRING_OFFSET))(a1, a2, a3, a4);
		}

	};
}
