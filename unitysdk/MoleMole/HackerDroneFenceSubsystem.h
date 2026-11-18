#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/KLPICIPFPBG.h"

namespace MoleMole { class BattleRegionSubsystem; }
namespace System { class String; }

#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_ACTIVATEDRONEFENCE_1_OFFSET UNITYSDK_OFFSET(0x162CFFB0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_ACTIVATEDRONEFENCE_OFFSET UNITYSDK_OFFSET(0x162CFAB0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_DEACTIVATEDRONEFENCE_1_OFFSET UNITYSDK_OFFSET(0x162CFD50)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_DEACTIVATEDRONEFENCE_OFFSET UNITYSDK_OFFSET(0x162D0220)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_DISPATCHOUTOFRANGESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x162D0330)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GETCURRENTOUTOFRANGESTATE_OFFSET UNITYSDK_OFFSET(0x162D0770)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GETOUTOFRANGEPROGRESS_OFFSET UNITYSDK_OFFSET(0x162D0C50)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_CLEARWARNINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x162CFA30)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_CURRENTFENCEENTITY_OFFSET UNITYSDK_OFFSET(0x162CF9D0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_CURRENTFENCEOWNER_OFFSET UNITYSDK_OFFSET(0x162CF9F0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_OUTOFRANGEPROGRESS_OFFSET UNITYSDK_OFFSET(0x162CFA90)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_OUTOFRANGESTATE_OFFSET UNITYSDK_OFFSET(0x162CFA70)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_OUTOFRANGETIMEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x162CFA50)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_WARNINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x162CFA10)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x162D0480)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_RESETOUTOFRANGEPROGRESS_OFFSET UNITYSDK_OFFSET(0x162D01D0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_CLEARWARNINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x162CFA40)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_CURRENTFENCEENTITY_OFFSET UNITYSDK_OFFSET(0x162CF9E0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_CURRENTFENCEOWNER_OFFSET UNITYSDK_OFFSET(0x162CFA00)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_OUTOFRANGEPROGRESS_OFFSET UNITYSDK_OFFSET(0x162CFAA0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_OUTOFRANGESTATE_OFFSET UNITYSDK_OFFSET(0x162CFA80)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_OUTOFRANGETIMEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x162CFA60)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_WARNINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x162CFA20)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x162D05C0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x162D0500)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x162D0CA0)
#define MOLEMOLE_HACKERDRONEFENCESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x162D0CC0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerDroneFenceSubsystem_TypeDefinitionIndex = 40548;

	class HackerDroneFenceSubsystem
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle _CurrentFenceOwner_k__BackingField; // 0x10
		::MoleMole::EntityHandle _CurrentFenceEntity_k__BackingField; // 0x20
		::System::Boolean _hasTriggeredTimeout; // 0x30
		::System::Boolean _OutOfRangeState_k__BackingField; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single _ClearWarningDistance_k__BackingField; // 0x34
		::System::Single _OutOfRangeProgress_k__BackingField; // 0x38
		::System::Single _OutOfRangeTimeoutDuration_k__BackingField; // 0x3C
		::System::Single _WarningDistance_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_CurrentFenceEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_CURRENTFENCEENTITY_OFFSET))(this);
		}

		::System::Void set_CurrentFenceEntity(::MoleMole::EntityHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_CURRENTFENCEENTITY_OFFSET))(this, value);
		}

		::Foundation::ViewObject::ViewObjectHandle get_CurrentFenceOwner()
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_CURRENTFENCEOWNER_OFFSET))(this);
		}

		::System::Void set_CurrentFenceOwner(::Foundation::ViewObject::ViewObjectHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_CURRENTFENCEOWNER_OFFSET))(this, value);
		}

		::System::Single get_WarningDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_WARNINGDISTANCE_OFFSET))(this);
		}

		::System::Void set_WarningDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_WARNINGDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_ClearWarningDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_CLEARWARNINGDISTANCE_OFFSET))(this);
		}

		::System::Void set_ClearWarningDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_CLEARWARNINGDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_OutOfRangeTimeoutDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_OUTOFRANGETIMEOUTDURATION_OFFSET))(this);
		}

		::System::Void set_OutOfRangeTimeoutDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_OUTOFRANGETIMEOUTDURATION_OFFSET))(this, value);
		}

		::System::Boolean get_OutOfRangeState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_OUTOFRANGESTATE_OFFSET))(this);
		}

		::System::Void set_OutOfRangeState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_OUTOFRANGESTATE_OFFSET))(this, value);
		}

		::System::Single get_OutOfRangeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GET_OUTOFRANGEPROGRESS_OFFSET))(this);
		}

		::System::Void set_OutOfRangeProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_SET_OUTOFRANGEPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean ActivateDroneFence(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle, ::KLPICIPFPBG fenceParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::KLPICIPFPBG))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_ACTIVATEDRONEFENCE_OFFSET))(this, viewObjectHandle, fenceParam);
		}

		::System::Boolean ActivateDroneFence_1(::MoleMole::BattleRegionSubsystem* subsystem, ::Foundation::ViewObject::ViewObjectHandle viewObjectHandle, ::MoleMole::EntityHandle battleRegionHandle, ::KLPICIPFPBG fenceParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::BattleRegionSubsystem*, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle, ::KLPICIPFPBG))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_ACTIVATEDRONEFENCE_1_OFFSET))(this, subsystem, viewObjectHandle, battleRegionHandle, fenceParam);
		}

		::System::Boolean DeactivateDroneFence(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle, ::System::String* battleRegionKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_DEACTIVATEDRONEFENCE_OFFSET))(this, viewObjectHandle, battleRegionKey);
		}

		::System::Boolean DeactivateDroneFence_1(::MoleMole::BattleRegionSubsystem* subsystem, ::Foundation::ViewObject::ViewObjectHandle viewObjectHandle, ::MoleMole::EntityHandle battleRegionHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::BattleRegionSubsystem*, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_DEACTIVATEDRONEFENCE_1_OFFSET))(this, subsystem, viewObjectHandle, battleRegionHandle);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_UPDATESTATE_OFFSET))(this);
		}

		::System::Void UpdateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_UPDATEPROGRESS_OFFSET))(this);
		}

		::System::Single GetOutOfRangeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GETOUTOFRANGEPROGRESS_OFFSET))(this);
		}

		::System::Boolean GetCurrentOutOfRangeState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_GETCURRENTOUTOFRANGESTATE_OFFSET))(this);
		}

		::System::Void DispatchOutOfRangeStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_DISPATCHOUTOFRANGESTATECHANGED_OFFSET))(this);
		}

		::System::Void ResetOutOfRangeProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM_RESETOUTOFRANGEPROGRESS_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONEFENCESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
