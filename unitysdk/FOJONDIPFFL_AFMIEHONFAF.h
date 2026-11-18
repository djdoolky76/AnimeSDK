#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class FOJONDIPFFL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOJONDIPFFL_AFMIEHONFAF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6DFD20)
#define FOJONDIPFFL_AFMIEHONFAF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FOJONDIPFFL_AFMIEHONFAF_TypeDefinitionIndex = 55443;

struct alignas(8) FOJONDIPFFL_AFMIEHONFAF
{
	::FOJONDIPFFL* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_AFMIEHONFAF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOJONDIPFFL_AFMIEHONFAF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
