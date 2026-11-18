#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKKLGKMNNLL.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class PGKNIGJKKCL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PGKNIGJKKCL_HLLAEHLHNFN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x822370)
#define PGKNIGJKKCL_HLLAEHLHNFN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PGKNIGJKKCL_HLLAEHLHNFN_TypeDefinitionIndex = 75336;

struct alignas(8) PGKNIGJKKCL_HLLAEHLHNFN
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::AKKLGKMNNLL DFMKILICPFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x80
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x88
	::PGKNIGJKKCL* KLHPEBKNIFB; // 0x90
	::System::Int32 MDPILDGFNHN; // 0x98

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_HLLAEHLHNFN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_HLLAEHLHNFN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
