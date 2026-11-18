#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerTideTreasureInLevelItemWidgetController; }
namespace MoleMole { class UISummerTideTreasureInLevelItemWidgetController_Data; }
namespace MoleMole { class UISummerTideTreasureResultDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x166EA440)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x166EA960)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x166EA9C0)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x166EA970)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166EA430)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84__CTOR_OFFSET UNITYSDK_OFFSET(0x166EA420)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureResultDialogPopWindowController__PlayResultPerformCoroutine_d__84_TypeDefinitionIndex = 39648;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79, typename T80, typename T81, typename T82, typename T83, typename T84>
	class UISummerTideTreasureResultDialogPopWindowController__PlayResultPerformCoroutine_d__84 : public ::System::Object
	{
	public:
		::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data* _leftData_5__3; // 0x10
		::MoleMole::UISummerTideTreasureInLevelItemWidgetController* _leftCtrl_5__4; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _visibleRewardIds_5__9; // 0x20
		::MoleMole::UISummerTideTreasureResultDialogPopWindowController* __4__this; // 0x28
		::System::Boolean _hasRewardTrail_5__8; // 0x30
		::System::Boolean _hasFoodRecycleTrail_5__5; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single _rewardTrailDuration_5__10; // 0x34
		::System::Int32 _foodRecycleValue_5__6; // 0x38
		::System::Int32 _i_5__2; // 0x3C
		::System::Single __2__current; // 0x40
		::System::Single _foodRecycleTrailDuration_5__7; // 0x44
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
