#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class JDLHOLDHNOD;
class KLELCPBGJNI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KLELCPBGJNI_CKBKPNJKPDG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x52F5A0)
#define KLELCPBGJNI_CKBKPNJKPDG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int KLELCPBGJNI_CKBKPNJKPDG_TypeDefinitionIndex = 74912;

struct alignas(8) KLELCPBGJNI_CKBKPNJKPDG
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::JDLHOLDHNOD* NKMKJFCBBCK; // 0x30
	::KLELCPBGJNI* KLHPEBKNIFB; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_CKBKPNJKPDG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KLELCPBGJNI_CKBKPNJKPDG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
