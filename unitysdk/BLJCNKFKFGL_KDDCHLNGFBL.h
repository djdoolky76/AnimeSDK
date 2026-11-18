#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class BLJCNKFKFGL;
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BLJCNKFKFGL_KDDCHLNGFBL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x653230)
#define BLJCNKFKFGL_KDDCHLNGFBL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BLJCNKFKFGL_KDDCHLNGFBL_TypeDefinitionIndex = 79703;

struct alignas(8) BLJCNKFKFGL_KDDCHLNGFBL
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::MoleMole::Cameras::FixedCameraConfig* DFMKILICPFB; // 0x20
	::BLJCNKFKFGL* KLHPEBKNIFB; // 0x28
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Boolean DEIEDIPLLEK; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_KDDCHLNGFBL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_KDDCHLNGFBL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
