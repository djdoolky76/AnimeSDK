#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIAbyssS2MapRefreshPageController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C1130)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController__RefreshMapInternalAsync_d__13_TypeDefinitionIndex = 51170;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	struct alignas(8) UIAbyssS2MapRefreshPageController__RefreshMapInternalAsync_d__13
	{
		::System::Object* __u__2; // 0x10
		::System::Byte _padding0[0x18];
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__3; // 0x30
		::System::Object* __u__1; // 0x40
		::System::Byte _padding1[0x10];
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x58
		::System::Threading::CancellationTokenSource* cts; // 0x68
		::MoleMole::UIAbyssS2MapRefreshPageController* __4__this; // 0x70
		::System::Int32 __1__state; // 0x78
		::System::Boolean _needReSortProps_5__2; // 0x7C
		::System::Byte _padding2[0x3];
		::System::Int32 itemId; // 0x80

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
