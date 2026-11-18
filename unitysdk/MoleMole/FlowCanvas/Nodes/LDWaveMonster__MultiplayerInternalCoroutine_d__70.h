#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class BODKHFKIMFE;
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12456B20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12458960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x124589C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12458970)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12456B10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70__CTOR_OFFSET UNITYSDK_OFFSET(0x12456B00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster__MultiplayerInternalCoroutine_d__70_TypeDefinitionIndex = 47384;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70>
	class LDWaveMonster__MultiplayerInternalCoroutine_d__70 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* _createData_5__4; // 0x10
		::FlowCanvas::Flow f; // 0x18
		::System::Object* __2__current; // 0x40
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster* __4__this; // 0x48
		::System::Object* __8__1; // 0x50
		::BODKHFKIMFE* _serverNotifyRecord_5__5; // 0x58
		::System::Int32 __1__state; // 0x60
		::System::Int32 _createListLen_5__2; // 0x64
		::System::Boolean _doWait_5__3; // 0x68
		::System::Boolean _isChangeToHostWhenWait_5__6; // 0x69

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__MULTIPLAYERINTERNALCOROUTINE_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
