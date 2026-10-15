#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
namespace RPG::Client::B51Racing { class MonoB51RacingSeasonProgressDialog; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONPROGRESSDIALOG___WAITCALENDARADVANCEPREVIEWASYNC_D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE2E60)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONPROGRESSDIALOG___WAITCALENDARADVANCEPREVIEWASYNC_D__48_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace RPG::Client::B51Racing
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48>
	struct alignas(8) MonoB51RacingSeasonProgressDialog___WaitCalendarAdvancePreviewAsync_d__48
	{
		::System::Threading::CancellationTokenSource* cts; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::RPG::Client::B51Racing::MonoB51RacingSeasonProgressDialog* __4__this; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Single _targetTime_5__2; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONPROGRESSDIALOG___WAITCALENDARADVANCEPREVIEWASYNC_D__48_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONPROGRESSDIALOG___WAITCALENDARADVANCEPREVIEWASYNC_D__48_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
