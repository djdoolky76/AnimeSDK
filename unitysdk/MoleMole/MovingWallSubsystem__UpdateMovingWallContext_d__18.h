#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class JHNEKILCCAA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_MOVINGWALLSUBSYSTEM__UPDATEMOVINGWALLCONTEXT_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x64EFD0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM__UPDATEMOVINGWALLCONTEXT_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int MovingWallSubsystem__UpdateMovingWallContext_d__18_TypeDefinitionIndex = 40931;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	struct alignas(8) MovingWallSubsystem__UpdateMovingWallContext_d__18
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::JHNEKILCCAA* ctx; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x38
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x3C
		::System::UInt32 entityID; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM__UPDATEMOVINGWALLCONTEXT_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM__UPDATEMOVINGWALLCONTEXT_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
