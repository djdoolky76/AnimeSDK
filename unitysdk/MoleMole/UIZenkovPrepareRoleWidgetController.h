#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BIEHBLPBAHP;
class DFBNOPGCFIG;
class KOIDMLPJGML;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_CLEARROLE_OFFSET UNITYSDK_OFFSET(0xE540790)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_GETWEAPONSLOTRECT_OFFSET UNITYSDK_OFFSET(0xE540BA0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xE5410B0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0xE540670)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE540370)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xE540410)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_PLAYWEAPONHIGHLIGHTRED_OFFSET UNITYSDK_OFFSET(0xE540EA0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETDISABLED_OFFSET UNITYSDK_OFFSET(0xE540830)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xE5408E0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETROLESELECTED_OFFSET UNITYSDK_OFFSET(0xE540C40)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETROLE_OFFSET UNITYSDK_OFFSET(0xE5406E0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONMASKSTATE_OFFSET UNITYSDK_OFFSET(0xE540F40)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONRECOMMENDHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xE540DD0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONSELECTED_OFFSET UNITYSDK_OFFSET(0xE540CF0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SHOWLOCKTIPS_OFFSET UNITYSDK_OFFSET(0xE541010)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_UPDATEWEAPONDURABILITY_OFFSET UNITYSDK_OFFSET(0xE540AF0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_UPDATEWEAPONSLOT_OFFSET UNITYSDK_OFFSET(0xE540990)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE541150)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE5411B0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xE541250)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPrepareRoleWidgetController_TypeDefinitionIndex = 42261;

	class UIZenkovPrepareRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetRole(::System::Int32 avatarId, ::System::Boolean isUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETROLE_OFFSET))(this, avatarId, isUp);
		}

		::System::Void ClearRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_CLEARROLE_OFFSET))(this);
		}

		::System::Void SetDisabled(::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETDISABLED_OFFSET))(this, disabled);
		}

		::System::Void SetLockState(::System::Boolean disabled, ::System::Boolean canUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETLOCKSTATE_OFFSET))(this, disabled, canUnlock);
		}

		::System::Void UpdateWeaponSlot(::KOIDMLPJGML* viewData, ::BIEHBLPBAHP* dropTarget, ::System::String* emptyBgPath, ::System::String* emptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::KOIDMLPJGML*, ::BIEHBLPBAHP*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_UPDATEWEAPONSLOT_OFFSET))(this, viewData, dropTarget, emptyBgPath, emptyLabel);
		}

		::System::Void UpdateWeaponDurability(::System::Int32 current, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_UPDATEWEAPONDURABILITY_OFFSET))(this, current, max);
		}

		::UnityEngine::RectTransform* GetWeaponSlotRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_GETWEAPONSLOTRECT_OFFSET))(this);
		}

		::System::Void SetRoleSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETROLESELECTED_OFFSET))(this, selected);
		}

		::System::Void SetWeaponSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONSELECTED_OFFSET))(this, selected);
		}

		::System::Void SetWeaponRecommendHighlight(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONRECOMMENDHIGHLIGHT_OFFSET))(this, show);
		}

		::System::Void PlayWeaponHighlightRed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_PLAYWEAPONHIGHLIGHTRED_OFFSET))(this);
		}

		::System::Void SetWeaponMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONMASKSTATE_OFFSET))(this, active);
		}

		::System::Void ShowLockTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SHOWLOCKTIPS_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::DFBNOPGCFIG* OGMPOGIHBIK()
		{
			return ((::DFBNOPGCFIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
