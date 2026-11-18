#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class BNFFAMKLBAI;
namespace MoleMole::Cameras { class TopViewCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BNFFAMKLBAI_PMADLFBFENB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x74BC50)
#define BNFFAMKLBAI_PMADLFBFENB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BNFFAMKLBAI_PMADLFBFENB_TypeDefinitionIndex = 63485;

struct alignas(8) BNFFAMKLBAI_PMADLFBFENB
{
	::MoleMole::Cameras::TopViewCameraConfig* DFMKILICPFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x28
	::BNFFAMKLBAI* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
	::System::Boolean DEIEDIPLLEK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_PMADLFBFENB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BNFFAMKLBAI_PMADLFBFENB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
