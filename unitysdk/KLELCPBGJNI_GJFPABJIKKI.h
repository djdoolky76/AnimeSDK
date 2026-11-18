#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class IJAJBECLDOI;
class KLELCPBGJNI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KLELCPBGJNI_GJFPABJIKKI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7ABCA0)
#define KLELCPBGJNI_GJFPABJIKKI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int KLELCPBGJNI_GJFPABJIKKI_TypeDefinitionIndex = 74911;

struct alignas(8) KLELCPBGJNI_GJFPABJIKKI
{
	::IJAJBECLDOI* NKMKJFCBBCK; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::KLELCPBGJNI* KLHPEBKNIFB; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_GJFPABJIKKI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KLELCPBGJNI_GJFPABJIKKI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
