#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDMonsterLeftCheckNode; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1465E8C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1465ED20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1465ED80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1465ED30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1465E8B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1465E8A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMonsterLeftCheckNode__RemoteWaitFlowProcess_d__19_TypeDefinitionIndex = 77525;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class LDMonsterLeftCheckNode__RemoteWaitFlowProcess_d__19 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDMonsterLeftCheckNode* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERLEFTCHECKNODE__REMOTEWAITFLOWPROCESS_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
