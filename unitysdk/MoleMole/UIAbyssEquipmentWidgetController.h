#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class ACGHCAEEFAH;
class BPNGLLLIMDC;
class JIOIACGGHPP;
namespace MoleMole { class UIAbyssS2EquipmentSelectDialogPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x13A0FB30)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13A0F3E0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x13A0FC40)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13A0F4F0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13A0F470)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13A0F120)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x13A0F5B0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHDESCVIEW_OFFSET UNITYSDK_OFFSET(0x13A0FCB0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0FF70)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x13A0FF80)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13A0FF90)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x13A10020)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13A100B0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13A10150)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13A101E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEquipmentWidgetController_TypeDefinitionIndex = 65200;

	class UIAbyssEquipmentWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::JIOIACGGHPP* _view; // 0x2F8
		::System::Int32 MLNKCNJEOMI; // 0x300
		::System::Boolean GPAPKNPENGB; // 0x304
		::System::Boolean OJAMPHDOBJA; // 0x305
		::System::Byte _padding0[0x2];
		::BPNGLLLIMDC* PJIMHAAOKLF; // 0x308
		::ACGHCAEEFAH* CEJENBBHBBG; // 0x310
		::MoleMole::UIAbyssS2EquipmentSelectDialogPopWindowController* FKFADCMIKIK; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshDescView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHDESCVIEW_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::ACGHCAEEFAH* DFMKILICPFB)
		{
			return ((::System::Void(*)(::PVOID, ::ACGHCAEEFAH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, DFMKILICPFB);
		}
	};
}
