#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYFAVOURSCOREUP_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D6160)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYFAVOURSCOREUP_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__PlayFavourScoreUp_d__23_TypeDefinitionIndex = 76506;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	struct alignas(8) UICinemaDatePlayWidgetController__PlayFavourScoreUp_d__23
	{
		::System::Threading::CancellationTokenSource* tokenSource; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x28
		::System::Object* __u__1; // 0x30
		::System::Byte _padding0[0x8];
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYFAVOURSCOREUP_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYFAVOURSCOREUP_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
