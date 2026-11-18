#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CFBFBCHDLFN;
class JBJAKFHKJEJ;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_HJNJLKMIJPH_OFFSET UNITYSDK_OFFSET(0x16EC3540)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_JCDMDBBALNL_OFFSET UNITYSDK_OFFSET(0x16EC3660)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_JOMGJPEFNGP_OFFSET UNITYSDK_OFFSET(0x16EC36E0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_LDLPPCFDCNJ_OFFSET UNITYSDK_OFFSET(0x16EC3600)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16EC3050)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EC2370)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16EC2670)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EC2400)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EC2110)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x16EC2770)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC32D0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16EC32E0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EC32F0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16EC3380)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EC3420)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EC34B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseListWidgetController_TypeDefinitionIndex = 91591;

	class UIDisplayCaseListWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::CFBFBCHDLFN* _view; // 0x2F8
		::JBJAKFHKJEJ* HAJJNNJHEEP; // 0x300
		::UnityEngine::Vector2 FKHNKFGKEGG; // 0x308
		::System::Boolean NDEIFGKAABH; // 0x310
		::System::Boolean FNGBFJCPDHN; // 0x311
		::System::Boolean GFNLLIJJCBA; // 0x312
		::System::Boolean CJCAJDFFNLO; // 0x313

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void HJNJLKMIJPH(::System::Boolean CNNNAJDJMEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_HJNJLKMIJPH_OFFSET))(this, CNNNAJDJMEC);
		}

		::System::Void LDLPPCFDCNJ(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_LDLPPCFDCNJ_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void JCDMDBBALNL(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_JCDMDBBALNL_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void JOMGJPEFNGP(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_JOMGJPEFNGP_OFFSET))(this, DIHNFECKHMD);
		}
	};
}
