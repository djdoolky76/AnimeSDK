#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class TaskCoroutine; }

#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FC12AE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FC12CC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FC12D20)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FC12CD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FC12AD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC12AC0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int TaskCoroutine__RunCoroutine_d__9_TypeDefinitionIndex = 33449;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	class TaskCoroutine__RunCoroutine_d__9 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::BehaviorDesigner::Runtime::TaskCoroutine* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
