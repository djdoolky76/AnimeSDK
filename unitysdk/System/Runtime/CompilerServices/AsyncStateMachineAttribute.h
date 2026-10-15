#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/StateMachineAttribute.h"
namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCSTATEMACHINEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C6C60)

namespace System::Runtime::CompilerServices
{
	class AsyncStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCSTATEMACHINEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
