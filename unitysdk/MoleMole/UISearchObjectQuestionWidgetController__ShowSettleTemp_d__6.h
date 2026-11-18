#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISearchObjectQuestionWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__SHOWSETTLETEMP_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7EE6F0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__SHOWSETTLETEMP_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionWidgetController__ShowSettleTemp_d__6_TypeDefinitionIndex = 75188;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	struct alignas(8) UISearchObjectQuestionWidgetController__ShowSettleTemp_d__6
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::System::Object* __u__1; // 0x18
		::System::Byte _padding0[0x8];
		::MoleMole::UISearchObjectQuestionWidgetController* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__SHOWSETTLETEMP_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__SHOWSETTLETEMP_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
