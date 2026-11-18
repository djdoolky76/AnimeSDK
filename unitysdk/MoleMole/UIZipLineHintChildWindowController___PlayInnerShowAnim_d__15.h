#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIZipLineHintChildWindowController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___PLAYINNERSHOWANIM_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71E850)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___PLAYINNERSHOWANIM_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZipLineHintChildWindowController___PlayInnerShowAnim_d__15_TypeDefinitionIndex = 71614;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	struct alignas(8) UIZipLineHintChildWindowController___PlayInnerShowAnim_d__15
	{
		::MoleMole::UIZipLineHintChildWindowController* __4__this; // 0x10
		::System::Object* __u__1; // 0x18
		::System::Byte _padding0[0x8];
		::System::Action* onFinish; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___PLAYINNERSHOWANIM_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___PLAYINNERSHOWANIM_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
