#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class ILHEGKOHHDP;
class LMAJAHEPDEI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_DAHIKDGJFOK_OFFSET UNITYSDK_OFFSET(0x18CBCD10)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_GBLOEACCCFG_OFFSET UNITYSDK_OFFSET(0x18CBCA20)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET UNITYSDK_OFFSET(0x18CBCD60)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18CBBE70)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18CBBF80)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18CBBF00)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18CBBC30)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x18CBC040)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBC7C0)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18CBC7D0)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18CBC860)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18CBC900)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18CBC990)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsRowWidgetController_TypeDefinitionIndex = 41508;

	class UIHandBookTacticsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::ILHEGKOHHDP* _view; // 0x2F8
		::System::Int32 ACILCFLDOCM; // 0x300
		::System::Byte _padding0[0x4];
		::MoleMole::UIGeneralNewHintWidgetController* HOMPPEIEAGL; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void GBLOEACCCFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_GBLOEACCCFG_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::LMAJAHEPDEI* DEKJDEPKKLH)
		{
			return ((::System::Void(*)(::PVOID, ::LMAJAHEPDEI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, DEKJDEPKKLH);
		}

		::System::Void DAHIKDGJFOK(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_DAHIKDGJFOK_OFFSET))(this, KOIBHLHLMFC);
		}

		::MoleMole::ScrollViewItemWidgetController* KOIDHIAEOAK(::System::Func_1<::MoleMole::UIControlReference*>* IHFDFJICHLA)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET))(this, IHFDFJICHLA);
		}
	};
}
