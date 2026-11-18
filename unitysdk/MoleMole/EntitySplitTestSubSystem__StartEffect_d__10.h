#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class EntitySplitTestSubSystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__STARTEFFECT_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x735C40)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__STARTEFFECT_D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySplitTestSubSystem__StartEffect_d__10_TypeDefinitionIndex = 59556;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
	struct alignas(8) EntitySplitTestSubSystem__StartEffect_d__10
	{
		::MoleMole::EntitySplitTestSubSystem* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::UnityEngine::GameObject* _go_5__2; // 0x30
		::UnityEngine::Vector3 position; // 0x38
		::System::Int32 __1__state; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__STARTEFFECT_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__STARTEFFECT_D__10_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
