#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class FNCPMBDDBBO;
class KLELCPBGJNI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KLELCPBGJNI_MIKGCPPOGAI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x52F5C0)
#define KLELCPBGJNI_MIKGCPPOGAI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int KLELCPBGJNI_MIKGCPPOGAI_TypeDefinitionIndex = 74910;

struct alignas(8) KLELCPBGJNI_MIKGCPPOGAI
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::KLELCPBGJNI* KLHPEBKNIFB; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::FNCPMBDDBBO* NKMKJFCBBCK; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_MIKGCPPOGAI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KLELCPBGJNI_MIKGCPPOGAI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
