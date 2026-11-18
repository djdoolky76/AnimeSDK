#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class ExecuteFunction_Multiplatform; }
namespace System::Collections { class IEnumerator; }

#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EF92F10)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EF93120)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EF93180)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EF93130)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF92F00)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF92EF0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ExecuteFunction_Multiplatform__InternalCoroutine_d__17_TypeDefinitionIndex = 30511;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class ExecuteFunction_Multiplatform__InternalCoroutine_d__17 : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* routine; // 0x10
		::System::Object* __2__current; // 0x18
		::NodeCanvas::Tasks::Actions::ExecuteFunction_Multiplatform* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION_MULTIPLATFORM__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
