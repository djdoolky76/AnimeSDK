#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYPROGRESSLISTASYNC_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E7040)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYPROGRESSLISTASYNC_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__playProgressListAsync_d__18_TypeDefinitionIndex = 76503;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	struct alignas(8) UICinemaDatePlayWidgetController__playProgressListAsync_d__18
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* numPoints; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Single _ratio_5__3; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 _i_5__2; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYPROGRESSLISTASYNC_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYPROGRESSLISTASYNC_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
