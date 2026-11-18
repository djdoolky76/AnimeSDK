#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBangBooUAVLevelPageController; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWNEWEQUIPTIPSASYNC_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D1780)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWNEWEQUIPTIPSASYNC_D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVLevelPageController__TryShowNewEquipTipsAsync_d__26_TypeDefinitionIndex = 74654;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
	struct alignas(8) UIBangBooUAVLevelPageController__TryShowNewEquipTipsAsync_d__26
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Collections::Generic::Queue_1<::System::Int32>* _equipTipsPopQueue_5__2; // 0x30
		::MoleMole::UIBangBooUAVLevelPageController* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWNEWEQUIPTIPSASYNC_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER__TRYSHOWNEWEQUIPTIPSASYNC_D__26_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
