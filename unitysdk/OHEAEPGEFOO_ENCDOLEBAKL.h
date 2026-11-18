#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class OHEAEPGEFOO;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OHEAEPGEFOO_ENCDOLEBAKL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5954D0)
#define OHEAEPGEFOO_ENCDOLEBAKL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OHEAEPGEFOO_ENCDOLEBAKL_TypeDefinitionIndex = 67821;

struct alignas(8) OHEAEPGEFOO_ENCDOLEBAKL
{
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x10
	::OHEAEPGEFOO* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single HKHIMAKFCGD; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_ENCDOLEBAKL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OHEAEPGEFOO_ENCDOLEBAKL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
