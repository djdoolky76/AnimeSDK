#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class GGGPIOIJELD;
namespace MoleMole::Cameras { class VariableCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GGGPIOIJELD_HJNABNMHBNB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x720B10)
#define GGGPIOIJELD_HJNABNMHBNB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GGGPIOIJELD_HJNABNMHBNB_TypeDefinitionIndex = 92659;

struct alignas(8) GGGPIOIJELD_HJNABNMHBNB
{
	::GGGPIOIJELD* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::MoleMole::Cameras::VariableCameraConfig* DFMKILICPFB; // 0x38
	::System::Boolean DEIEDIPLLEK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGPIOIJELD_HJNABNMHBNB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GGGPIOIJELD_HJNABNMHBNB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
