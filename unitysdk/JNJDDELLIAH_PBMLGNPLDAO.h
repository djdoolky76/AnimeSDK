#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AutoProfilerSample.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class JNJDDELLIAH;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JNJDDELLIAH_PBMLGNPLDAO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71EFA0)
#define JNJDDELLIAH_PBMLGNPLDAO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JNJDDELLIAH_PBMLGNPLDAO_TypeDefinitionIndex = 52336;

struct alignas(8) JNJDDELLIAH_PBMLGNPLDAO
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Action* PABLEDCGDGM; // 0x28
	::JNJDDELLIAH* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50
	::Foundation::AutoProfilerSample GHANCJDIDBC; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_PBMLGNPLDAO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JNJDDELLIAH_PBMLGNPLDAO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
