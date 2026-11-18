#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class EHMFJHFOLAI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EHMFJHFOLAI_BPGPELEPJDJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A26C0)
#define EHMFJHFOLAI_BPGPELEPJDJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int EHMFJHFOLAI_BPGPELEPJDJ_TypeDefinitionIndex = 93041;

struct alignas(8) EHMFJHFOLAI_BPGPELEPJDJ
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::EHMFJHFOLAI* KLHPEBKNIFB; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Boolean CFHNOIIHLIM; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMFJHFOLAI_BPGPELEPJDJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EHMFJHFOLAI_BPGPELEPJDJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
