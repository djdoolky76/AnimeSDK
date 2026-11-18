#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class DJKHNKJFMJO;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DJKHNKJFMJO_MELCLJDAIBJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6DE4A0)
#define DJKHNKJFMJO_MELCLJDAIBJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int DJKHNKJFMJO_MELCLJDAIBJ_TypeDefinitionIndex = 57071;

struct alignas(8) DJKHNKJFMJO_MELCLJDAIBJ
{
	::DJKHNKJFMJO* KLHPEBKNIFB; // 0x10
	::System::Action* ODLKCMLBIGL; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x20
	::System::Runtime::CompilerServices::TaskAwaiter IELMICFKAAI; // 0x40
	::System::Int32 FNEAIJMIAFF; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_MELCLJDAIBJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DJKHNKJFMJO_MELCLJDAIBJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
