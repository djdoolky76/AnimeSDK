#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixNodeWidgetController; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19FB6C20)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19FB6FD0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19FB7030)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19FB6FE0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FB6C10)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB6C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController__RotateNode_d__43_TypeDefinitionIndex = 47369;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43>
	class UIDataFixNodeWidgetController__RotateNode_d__43 : public ::System::Object
	{
	public:
		::MoleMole::UIDataFixNodeWidgetController* __4__this; // 0x10
		::System::Object* __8__1; // 0x18
		::System::Single __rotateTime_5__4; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single __2__current; // 0x28
		::System::Boolean preConnected; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single _time_5__2; // 0x30
		::System::Single _prevRate_5__3; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
