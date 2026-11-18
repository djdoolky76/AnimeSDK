#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class OFBOACOAPEH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OFBOACOAPEH_PGHKNOHGCDJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5933E0)
#define OFBOACOAPEH_PGHKNOHGCDJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int OFBOACOAPEH_PGHKNOHGCDJ_TypeDefinitionIndex = 80032;

struct alignas(8) OFBOACOAPEH_PGHKNOHGCDJ
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::OFBOACOAPEH* KLHPEBKNIFB; // 0x30
	::System::Boolean EGEGIMGMJHN; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBOACOAPEH_PGHKNOHGCDJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OFBOACOAPEH_PGHKNOHGCDJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
