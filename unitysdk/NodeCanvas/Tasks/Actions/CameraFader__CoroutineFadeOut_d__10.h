#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class CameraFader; }

#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D48EC60)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D48ED20)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D48ED80)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D48ED30)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D48EC50)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48EC40)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CameraFader__CoroutineFadeOut_d__10_TypeDefinitionIndex = 29809;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
	class CameraFader__CoroutineFadeOut_d__10 : public ::System::Object
	{
	public:
		::NodeCanvas::Tasks::Actions::CameraFader* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single time; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
