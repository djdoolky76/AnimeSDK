#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/Cer.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/Consistency.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_RELIABILITYCONTRACTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C80D0)

namespace System::Runtime::ConstrainedExecution
{
	class ReliabilityContractAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::ConstrainedExecution::Cer _cer; // 0x10
		::System::Runtime::ConstrainedExecution::Consistency _consistency; // 0x14
		::System::Void _ctor(::System::Runtime::ConstrainedExecution::Consistency a1, ::System::Runtime::ConstrainedExecution::Cer a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::ConstrainedExecution::Consistency, ::System::Runtime::ConstrainedExecution::Cer))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_RELIABILITYCONTRACTATTRIBUTE_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
