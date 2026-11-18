#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class NGOGKECOBBN;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_GET_ONCLICKACTION_OFFSET UNITYSDK_OFFSET(0x13A15780)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x13A15180)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x13A151F0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13A14EF0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x13A15560)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13A15290)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13A14FB0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_SETONCLICK_OFFSET UNITYSDK_OFFSET(0x13A15730)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_SET_ONCLICKACTION_OFFSET UNITYSDK_OFFSET(0x13A15790)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A157A0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13A157B0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x13A15850)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13A158E0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13A15980)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPropWidgetController_TypeDefinitionIndex = 53599;

	class UIAbyssS2MapRefreshPropWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Int32 DNJKNFMDBOP; // 0x2F8
		::System::Byte _padding0[0x4];
		::System::Action_2<::System::Boolean, ::System::Int32>* _ICJFMNOEAPJ_k__BackingField; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetOnClick(::System::Action_2<::System::Boolean, ::System::Int32>* onClickItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_SETONCLICK_OFFSET))(this, onClickItem);
		}

		::System::Action_2<::System::Boolean, ::System::Int32>* get_OnClickAction()
		{
			return ((::System::Action_2<::System::Boolean, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_GET_ONCLICKACTION_OFFSET))(this);
		}

		::System::Void set_OnClickAction(::System::Action_2<::System::Boolean, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_SET_ONCLICKACTION_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::NGOGKECOBBN* OGMPOGIHBIK()
		{
			return ((::NGOGKECOBBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPROPWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
