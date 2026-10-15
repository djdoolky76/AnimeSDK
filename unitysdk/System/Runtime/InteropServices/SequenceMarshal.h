#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Buffers { class ReadOnlySequence; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_SEQUENCEMARSHAL_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x1EE46410)

namespace System::Runtime::InteropServices
{
	class SequenceMarshal : public ::System::Object
	{
	public:
		static ::System::Boolean TryGetString(::System::Buffers::ReadOnlySequence* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::Buffers::ReadOnlySequence*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SEQUENCEMARSHAL_TRYGETSTRING_OFFSET))(a1, a2, a3, a4);
		}

	};
}
