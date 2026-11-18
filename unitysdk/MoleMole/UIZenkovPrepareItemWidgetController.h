#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BIEHBLPBAHP;
class GFKECOIAHNE;
class KOIDMLPJGML;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0x170D4700)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x170D4590)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170D4330)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170D43D0)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_PLAYHIGHLIGHTRED_OFFSET UNITYSDK_OFFSET(0x170D4990)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETINFOTEXT_OFFSET UNITYSDK_OFFSET(0x170D4B00)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETMASKSTATE_OFFSET UNITYSDK_OFFSET(0x170D4A30)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETRECOMMENDHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x170D48C0)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x170D47F0)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_UPDATESLOTDATA_OFFSET UNITYSDK_OFFSET(0x170D4600)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4BB0)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170D4C10)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170D4CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPrepareItemWidgetController_TypeDefinitionIndex = 66142;

	class UIZenkovPrepareItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void UpdateSlotData(::KOIDMLPJGML* viewData, ::System::Boolean isLocked, ::BIEHBLPBAHP* dropTarget, ::System::String* emptyBgPath, ::System::String* emptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::KOIDMLPJGML*, ::System::Boolean, ::BIEHBLPBAHP*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_UPDATESLOTDATA_OFFSET))(this, viewData, isLocked, dropTarget, emptyBgPath, emptyLabel);
		}

		::System::Void ClearSlot(::BIEHBLPBAHP* dropTarget, ::System::String* emptyBgPath, ::System::String* emptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::BIEHBLPBAHP*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_CLEARSLOT_OFFSET))(this, dropTarget, emptyBgPath, emptyLabel);
		}

		::System::Void SetSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, selected);
		}

		::System::Void SetRecommendHighlight(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETRECOMMENDHIGHLIGHT_OFFSET))(this, show);
		}

		::System::Void PlayHighlightRed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_PLAYHIGHLIGHTRED_OFFSET))(this);
		}

		::System::Void SetMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetInfoText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETINFOTEXT_OFFSET))(this, text);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::GFKECOIAHNE* OGMPOGIHBIK()
		{
			return ((::GFKECOIAHNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
