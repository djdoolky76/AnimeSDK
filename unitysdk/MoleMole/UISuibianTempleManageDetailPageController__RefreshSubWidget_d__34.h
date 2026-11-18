#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADLCDHJKFIO.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleManageDetailPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER__REFRESHSUBWIDGET_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78DCB0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER__REFRESHSUBWIDGET_D__34_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageDetailPageController__RefreshSubWidget_d__34_TypeDefinitionIndex = 53519;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34>
	struct alignas(8) UISuibianTempleManageDetailPageController__RefreshSubWidget_d__34
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::MoleMole::UISuibianTempleManageDetailPageController* __4__this; // 0x40
		::ADLCDHJKFIO type; // 0x48
		::ADLCDHJKFIO _oldDetailType_5__2; // 0x4C
		::System::Int32 __1__state; // 0x50
		::System::Boolean switchClick; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER__REFRESHSUBWIDGET_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER__REFRESHSUBWIDGET_D__34_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
