#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
class DEIPGFGBEMG;
class PHKOFFOLPPG;
class PHKOFFOLPPG_HFFPHANAHLP;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PHKOFFOLPPG__RUN_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52D90)
#define PHKOFFOLPPG__RUN_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int PHKOFFOLPPG__Run_d__12_TypeDefinitionIndex = 44172;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	struct alignas(8) PHKOFFOLPPG__Run_d__12
	{
		::DEIPGFGBEMG* stageStep; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::PHKOFFOLPPG_HFFPHANAHLP* _activeStageStep_5__2; // 0x38
		::System::Object* owner; // 0x40
		::PHKOFFOLPPG* __4__this; // 0x48
		::System::Threading::CancellationToken cancellationToken; // 0x50
		::System::Threading::CancellationTokenRegistration _cancellationRegistration_5__3; // 0x58
		::System::Int32 __1__state; // 0x70
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG__RUN_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG__RUN_D__12_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
