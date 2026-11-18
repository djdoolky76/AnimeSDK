#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovResultPopWindowController; }

#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13BFC7D0)
#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13BFCC80)
#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13BFCCE0)
#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13BFCC90)
#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BFC7C0)
#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52__CTOR_OFFSET UNITYSDK_OFFSET(0x13BFC7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultPopWindowController__LevelUpCoroutine_d__52_TypeDefinitionIndex = 40676;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52>
	class UIZenkovResultPopWindowController__LevelUpCoroutine_d__52 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovResultPopWindowController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single __2__current; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER__LEVELUPCOROUTINE_D__52_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
