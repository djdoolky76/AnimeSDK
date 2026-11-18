#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_UpdateLevelZeroSpecialEffect; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x180E8F70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x180E9490)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x180E94F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x180E94A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180E8F60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x180E8F50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_UpdateLevelZeroSpecialEffect___UpdateInternal_d__13_TypeDefinitionIndex = 82455;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class LD_UpdateLevelZeroSpecialEffect___UpdateInternal_d__13 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_UpdateLevelZeroSpecialEffect* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT___UPDATEINTERNAL_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
