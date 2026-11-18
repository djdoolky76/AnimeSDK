#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/PODFMEPAHOA.h"
#include "unitysdk/System/ValueType.h"

class FAKDPOHEPJG_KICOKAJKODJ;
namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYSWITCHFAVOURLEVELIMAGE_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AA350)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYSWITCHFAVOURLEVELIMAGE_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__PlaySwitchFavourLevelImage_d__21_TypeDefinitionIndex = 76502;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
	struct alignas(8) UICinemaDatePlayWidgetController__PlaySwitchFavourLevelImage_d__21
	{
		::System::Threading::CancellationTokenSource* tokenSource; // 0x10
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x18
		::System::Object* __u__1; // 0x20
		::System::Byte _padding0[0x8];
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::FAKDPOHEPJG_KICOKAJKODJ* _progressView_5__2; // 0x40
		::PODFMEPAHOA favourLevel; // 0x48
		::System::Boolean resetProgress; // 0x4C
		::System::Byte _padding1[0x3];
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYSWITCHFAVOURLEVELIMAGE_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYSWITCHFAVOURLEVELIMAGE_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
