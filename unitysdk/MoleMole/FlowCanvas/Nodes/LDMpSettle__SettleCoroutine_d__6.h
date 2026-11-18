#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDMpSettle; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A08AD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A08AF40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A08AFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A08AF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A08AD20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08AD10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpSettle__SettleCoroutine_d__6_TypeDefinitionIndex = 82778;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class LDMpSettle__SettleCoroutine_d__6 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::FlowCanvas::Flow f; // 0x18
		::MoleMole::FlowCanvas::Nodes::LDMpSettle* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean _tryRead_5__2; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
