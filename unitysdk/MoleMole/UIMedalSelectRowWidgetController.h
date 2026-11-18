#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class CIEANABMMON;
class CJLIAOJCHIH;
class JFDMHLOBDGB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMedalSelectRowWidgetController_Context; }
namespace System { class Object; }

#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_GET_ISSETGRAY_OFFSET UNITYSDK_OFFSET(0x18818CA0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_GET_ISUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0x18818C30)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_MAOHALFBLOC_OFFSET UNITYSDK_OFFSET(0x18819A30)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_MMEJKJGNNJC_OFFSET UNITYSDK_OFFSET(0x1881A010)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18818EB0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18819B50)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x188190C0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18818F40)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18818CC0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18819D20)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18819D30)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18819DC0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18819E50)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18819EF0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18819F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalSelectRowWidgetController_TypeDefinitionIndex = 55649;

	class UIMedalSelectRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::CIEANABMMON* _view; // 0x2F8
		::MoleMole::UIMedalSelectRowWidgetController_Context* DAAAEJDBNFI; // 0x300
		::CJLIAOJCHIH* ADHBIMBKKIP; // 0x308
		::JFDMHLOBDGB* JOAKPPFFOAN; // 0x310
		::System::Int32 FCDACLECBDM; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUnselectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_GET_ISUNSELECTABLE_OFFSET))(this);
		}

		::System::Boolean get_IsSetGray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_GET_ISSETGRAY_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void MMEJKJGNNJC(::System::Boolean LIEJIGMGGOL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_MMEJKJGNNJC_OFFSET))(this, LIEJIGMGGOL);
		}

		::System::Void MAOHALFBLOC(::System::Boolean CNNNAJDJMEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_MAOHALFBLOC_OFFSET))(this, CNNNAJDJMEC);
		}
	};
}
