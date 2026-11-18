#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AHJAKAEKHFH;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_DOCLICK_OFFSET UNITYSDK_OFFSET(0x1967A410)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_NONKGMPDOAC_OFFSET UNITYSDK_OFFSET(0x19679F90)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19679F20)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19679A00)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1967A310)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19679AA0)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_SETWEAKFOCUSANIM_OFFSET UNITYSDK_OFFSET(0x1967A4D0)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1967A670)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1967A680)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1967A720)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1967A7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopHistoryTabWidgetController_TypeDefinitionIndex = 63528;

	class UICoopHistoryTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Int32 ABHBKFJKINO; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* info, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, info, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void DoClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_DOCLICK_OFFSET))(this);
		}

		::System::Void SetWeakFocusAnim(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_SETWEAKFOCUSANIM_OFFSET))(this, enable);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::String* NONKGMPDOAC(::System::Int64 FNIOPKPHDEH)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_NONKGMPDOAC_OFFSET))(this, FNIOPKPHDEH);
		}

		::AHJAKAEKHFH* OGMPOGIHBIK()
		{
			return ((::AHJAKAEKHFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
