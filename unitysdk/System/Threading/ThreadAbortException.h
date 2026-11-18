#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_THREADABORTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD270A0)
#define SYSTEM_THREADING_THREADABORTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD26FB0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadAbortException_TypeDefinitionIndex = 837;

	class ThreadAbortException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADABORTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADABORTEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}
	};
}
