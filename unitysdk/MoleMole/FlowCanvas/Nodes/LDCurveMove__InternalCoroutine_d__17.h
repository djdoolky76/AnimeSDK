#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDCurveMove; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A086A20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A086E50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A086EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A086E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A086A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x1A086A00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCurveMove__InternalCoroutine_d__17_TypeDefinitionIndex = 41179;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class LDCurveMove__InternalCoroutine_d__17 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::System::Object* __2__current; // 0x38
		::System::Object* __8__1; // 0x40
		::MoleMole::FlowCanvas::Nodes::LDCurveMove* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__INTERNALCOROUTINE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
