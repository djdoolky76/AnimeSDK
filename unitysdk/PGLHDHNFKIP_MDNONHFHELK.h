#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/EHJCFOHDKDM.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class PGLHDHNFKIP;
namespace MoleMole::Cameras { class TacticalCombatCameraConfig; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PGLHDHNFKIP_MDNONHFHELK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x848110)
#define PGLHDHNFKIP_MDNONHFHELK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PGLHDHNFKIP_MDNONHFHELK_TypeDefinitionIndex = 80746;

struct alignas(8) PGLHDHNFKIP_MDNONHFHELK
{
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::System::Func_5<::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Cameras::TacticalCombatCameraConfig*, ::EHJCFOHDKDM>* EBJOFMCAMCM; // 0x20
	::MoleMole::Cameras::TacticalCombatCameraConfig* DFMKILICPFB; // 0x28
	::PGLHDHNFKIP* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_MDNONHFHELK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PGLHDHNFKIP_MDNONHFHELK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
