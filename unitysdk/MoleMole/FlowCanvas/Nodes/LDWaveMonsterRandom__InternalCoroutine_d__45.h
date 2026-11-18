#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonsterRandom; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x180E3E20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x180E5180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x180E51E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x180E5190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180E3E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45__CTOR_OFFSET UNITYSDK_OFFSET(0x180E3E00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonsterRandom__InternalCoroutine_d__45_TypeDefinitionIndex = 75198;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45>
	class LDWaveMonsterRandom__InternalCoroutine_d__45 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDWaveMonsterRandom* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Object* __8__1; // 0x20
		::MoleMole::FlowCanvas::Nodes::MonsterCreateData* _createData_5__3; // 0x28
		::FlowCanvas::Flow f; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>* _list_5__2; // 0x58
		::System::Int32 __1__state; // 0x60
		::System::Int32 _monsterId_5__4; // 0x64
		::System::Boolean _tryRead_5__6; // 0x68
		::System::Byte _padding0[0x3];
		::System::Int32 _aiConfigId_5__5; // 0x6C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
