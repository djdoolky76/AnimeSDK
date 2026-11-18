#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBottleLoginDialogPopWindowController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIBOTTLELOGINDIALOGPOPWINDOWCONTROLLER__SETTHROWBOTTLE_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7DAD20)
#define MOLEMOLE_UIBOTTLELOGINDIALOGPOPWINDOWCONTROLLER__SETTHROWBOTTLE_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBottleLoginDialogPopWindowController__SetThrowBottle_d__21_TypeDefinitionIndex = 91885;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
	struct alignas(8) UIBottleLoginDialogPopWindowController__SetThrowBottle_d__21
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::System::Object* __u__1; // 0x30
		::System::Byte _padding0[0x8];
		::MoleMole::UIBottleLoginDialogPopWindowController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 itemID; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINDIALOGPOPWINDOWCONTROLLER__SETTHROWBOTTLE_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINDIALOGPOPWINDOWCONTROLLER__SETTHROWBOTTLE_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
