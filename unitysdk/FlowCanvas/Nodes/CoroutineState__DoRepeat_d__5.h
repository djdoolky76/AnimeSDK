#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class CoroutineState; }

#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E3F1080)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E3F1250)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E3F12B0)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E3F1260)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3F1070)
#define FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F1060)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CoroutineState__DoRepeat_d__5_TypeDefinitionIndex = 29274;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class CoroutineState__DoRepeat_d__5 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* fStart; // 0x10
		::FlowCanvas::FlowOutput* fFinish; // 0x18
		::System::Object* __2__current; // 0x20
		::FlowCanvas::Nodes::CoroutineState* __4__this; // 0x28
		::FlowCanvas::Flow f; // 0x30
		::FlowCanvas::FlowOutput* fUpdate; // 0x58
		::System::Int32 __1__state; // 0x60

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COROUTINESTATE__DOREPEAT_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
