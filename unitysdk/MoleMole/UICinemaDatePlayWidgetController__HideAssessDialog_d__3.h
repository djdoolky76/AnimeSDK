#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__HIDEASSESSDIALOG_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E7030)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__HIDEASSESSDIALOG_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__HideAssessDialog_d__3_TypeDefinitionIndex = 76505;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) UICinemaDatePlayWidgetController__HideAssessDialog_d__3
	{
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x10
		::KNLFLMMHALL_1<::System::Object*>* _assess_5__2; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::System::Object* __u__1; // 0x28
		::System::Byte _padding0[0x8];
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__HIDEASSESSDIALOG_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__HIDEASSESSDIALOG_D__3_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
