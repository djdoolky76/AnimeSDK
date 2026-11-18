#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDSequenceSamplePosition; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A08DCC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A08E230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A08E290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A08E240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A08DC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08DC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1A08DCB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSequenceSamplePosition__SequenceSampe_d__11_TypeDefinitionIndex = 78057;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class LDSequenceSamplePosition__SequenceSampe_d__11 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDSequenceSamplePosition* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Object* __7__wrap1; // 0x20
		::System::Byte _padding0[0x10];
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSEQUENCESAMPLEPOSITION__SEQUENCESAMPE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
