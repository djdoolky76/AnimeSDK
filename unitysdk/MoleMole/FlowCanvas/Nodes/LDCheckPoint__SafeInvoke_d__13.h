#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDCheckPoint; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x142FA0D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x142FA3E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x142FA440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x142FA3F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142FA0C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x142FA0B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCheckPoint__SafeInvoke_d__13_TypeDefinitionIndex = 86525;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class LDCheckPoint__SafeInvoke_d__13 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDCheckPoint* __4__this; // 0x10
		::FlowCanvas::Flow flow; // 0x18
		::System::Object* __2__current; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean asFirstSection; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
