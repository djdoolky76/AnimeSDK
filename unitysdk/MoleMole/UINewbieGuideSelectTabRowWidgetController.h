#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class NIIJKHIEGJJ;
class OBAAGGOFAKD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewbieGuideSelectTabRowWidgetController_Data; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_DFFEPGONMFN_OFFSET UNITYSDK_OFFSET(0x19052160)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_FJAODKIFMDO_OFFSET UNITYSDK_OFFSET(0x19052D10)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_HMBMNEKPEAI_OFFSET UNITYSDK_OFFSET(0x190526F0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19051BD0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19051B40)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19051CE0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19051C60)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19051920)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_PILCHMDOHPL_OFFSET UNITYSDK_OFFSET(0x19051ED0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19052400)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19052410)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x190524A0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19052530)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190525D0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19052660)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectTabRowWidgetController_TypeDefinitionIndex = 79372;

	class UINewbieGuideSelectTabRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::OBAAGGOFAKD*>** StaticGet_GBCGPHIDBFG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::OBAAGGOFAKD*>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideSelectTabRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4DA90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::OBAAGGOFAKD*>** StaticGet_PFIMKKFFHDM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::OBAAGGOFAKD*>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideSelectTabRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4DA98);
		}
		::NIIJKHIEGJJ* _view; // 0x2F8
		::MoleMole::UINewbieGuideSelectTabRowWidgetController_Data* EFFAONJBCOG; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void DFFEPGONMFN(::System::Int32 OOLMGEPJNNL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_DFFEPGONMFN_OFFSET))(this, OOLMGEPJNNL);
		}

		static ::System::Void HMBMNEKPEAI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_HMBMNEKPEAI_OFFSET))();
		}

		::System::Void PILCHMDOHPL(::System::Int32 LEHABHCOMGH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_PILCHMDOHPL_OFFSET))(this, LEHABHCOMGH);
		}

		::OBAAGGOFAKD* FJAODKIFMDO(::System::Int32 MGMDLMBEDJF, ::System::Boolean HHDHMFHAMHH)
		{
			return ((::OBAAGGOFAKD*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_FJAODKIFMDO_OFFSET))(this, MGMDLMBEDJF, HHDHMFHAMHH);
		}
	};
}
