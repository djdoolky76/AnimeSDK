#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class NOHGMPIMCEF;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NOHGMPIMCEF_FDODCCJLMOB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x633E20)
#define NOHGMPIMCEF_FDODCCJLMOB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NOHGMPIMCEF_FDODCCJLMOB_TypeDefinitionIndex = 90747;

struct alignas(8) NOHGMPIMCEF_FDODCCJLMOB
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::NOHGMPIMCEF* KLHPEBKNIFB; // 0x20
	::System::String* ONOAGAPJNCG; // 0x28
	::System::String* NGHLLDAJJJE; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
	::System::Single NFCFPPHBANP; // 0x40
	::System::Single FNIOPKPHDEH; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_FDODCCJLMOB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_FDODCCJLMOB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
