#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class AEJLJONCNNJ;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AEJLJONCNNJ_LONJHPAJPFE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79D5B0)
#define AEJLJONCNNJ_LONJHPAJPFE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AEJLJONCNNJ_LONJHPAJPFE_TypeDefinitionIndex = 76683;

struct alignas(8) AEJLJONCNNJ_LONJHPAJPFE
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x30
	::MoleMole::Cameras::FirstPersonCameraConfig* DFMKILICPFB; // 0x38
	::AEJLJONCNNJ* KLHPEBKNIFB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_LONJHPAJPFE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AEJLJONCNNJ_LONJHPAJPFE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
