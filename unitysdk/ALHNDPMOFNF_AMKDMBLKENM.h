#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class ALHNDPMOFNF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ALHNDPMOFNF_AMKDMBLKENM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A11F0)
#define ALHNDPMOFNF_AMKDMBLKENM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int ALHNDPMOFNF_AMKDMBLKENM_TypeDefinitionIndex = 86729;

struct alignas(8) ALHNDPMOFNF_AMKDMBLKENM
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_AMKDMBLKENM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_AMKDMBLKENM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
