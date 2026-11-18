#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILevelResultPageController; }

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17C4F420)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17C50900)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17C50960)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17C50910)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C4F410)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4F400)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController__RefreshChessboardView_d__24_TypeDefinitionIndex = 89109;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
	class UILevelResultPageController__RefreshChessboardView_d__24 : public ::System::Object
	{
	public:
		::MoleMole::UILevelResultPageController* __4__this; // 0x10
		::System::Int32 _coinBaseNum_5__4; // 0x18
		::System::Single __2__current; // 0x1C
		::System::Boolean _isEndBattle_5__2; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 _coinNum_5__3; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
