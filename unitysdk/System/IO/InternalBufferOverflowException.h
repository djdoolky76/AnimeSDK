#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_INTERNALBUFFEROVERFLOWEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2AA80)
#define SYSTEM_IO_INTERNALBUFFEROVERFLOWEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DF2AB10)
#define SYSTEM_IO_INTERNALBUFFEROVERFLOWEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DF2AB60)
#define SYSTEM_IO_INTERNALBUFFEROVERFLOWEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2A9C0)

namespace System::IO
{
	inline static constexpr unsigned int InternalBufferOverflowException_TypeDefinitionIndex = 3227;

	class InternalBufferOverflowException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_INTERNALBUFFEROVERFLOWEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_INTERNALBUFFEROVERFLOWEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_INTERNALBUFFEROVERFLOWEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_IO_INTERNALBUFFEROVERFLOWEXCEPTION__CTOR_3_OFFSET))(this, message, inner);
		}
	};
}
