#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class CIPHODBPLDD;
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CIPHODBPLDD_OKHPMKLDPLL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7012C0)
#define CIPHODBPLDD_OKHPMKLDPLL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CIPHODBPLDD_OKHPMKLDPLL_TypeDefinitionIndex = 86490;

struct alignas(8) CIPHODBPLDD_OKHPMKLDPLL
{
	::MoleMole::Vehicle::VehicleTestCameraMono* DFMKILICPFB; // 0x10
	::CIPHODBPLDD* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPHODBPLDD_OKHPMKLDPLL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CIPHODBPLDD_OKHPMKLDPLL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
