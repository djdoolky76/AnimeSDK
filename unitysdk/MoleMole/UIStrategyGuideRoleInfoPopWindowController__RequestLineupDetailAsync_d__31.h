#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIStrategyGuideRoleInfoPopWindowController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER__REQUESTLINEUPDETAILASYNC_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78BE10)
#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER__REQUESTLINEUPDETAILASYNC_D__31_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRoleInfoPopWindowController__RequestLineupDetailAsync_d__31_TypeDefinitionIndex = 63842;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
	struct alignas(8) UIStrategyGuideRoleInfoPopWindowController__RequestLineupDetailAsync_d__31
	{
		::System::Threading::CancellationToken ct; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::MoleMole::UIStrategyGuideRoleInfoPopWindowController* __4__this; // 0x20
		::System::Object* __u__1; // 0x28
		::System::Byte _padding0[0x18];
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER__REQUESTLINEUPDETAILASYNC_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER__REQUESTLINEUPDETAILASYNC_D__31_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
