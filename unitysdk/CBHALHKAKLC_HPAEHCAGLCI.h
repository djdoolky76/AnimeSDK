#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class CBHALHKAKLC;
class CBHALHKAKLC_JLNJPCLBFGL;
class CBHALHKAKLC_KCGPADBBIBJ;
class EJFCDLOKJEC;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CBHALHKAKLC_HPAEHCAGLCI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76D3C0)
#define CBHALHKAKLC_HPAEHCAGLCI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CBHALHKAKLC_HPAEHCAGLCI_TypeDefinitionIndex = 55885;

struct alignas(8) CBHALHKAKLC_HPAEHCAGLCI
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter JBKEHEIINMM; // 0x10
	::System::Action* ELNJNJAIFGE; // 0x20
	::System::Action* EHLBOIHNKJM; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::CBHALHKAKLC_JLNJPCLBFGL* PGDOJBDJBOL; // 0x40
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x48
	::CBHALHKAKLC_KCGPADBBIBJ* MADPMCLFHKA; // 0x50
	::EJFCDLOKJEC* NMCIMBCJHLI; // 0x58
	::System::Runtime::CompilerServices::TaskAwaiter KIFJPEHBMCP; // 0x60
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HPAEHCAGLCI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HPAEHCAGLCI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
