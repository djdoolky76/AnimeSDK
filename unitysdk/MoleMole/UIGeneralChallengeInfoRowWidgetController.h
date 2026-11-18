#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class ACPNMIAAMLJ;
class LMPLOCILIHL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemInfoRowWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EDD770)
#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16EDD880)
#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EDD800)
#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EDD5D0)
#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EDDCB0)
#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EDDCC0)
#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16EDDD50)
#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EDDDF0)
#define MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EDDE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralChallengeInfoRowWidgetController_TypeDefinitionIndex = 47555;

	class UIGeneralChallengeInfoRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::LMPLOCILIHL* _view; // 0x2F8
		::ACPNMIAAMLJ* FCKBOJBILGA; // 0x300
		::MoleMole::UIItemInfoRowWidgetController* AOEFJOBNOGC; // 0x308
		::MoleMole::UIItemInfoRowWidgetController* LAFKDMGKGNF; // 0x310
		::DEDDPKGLKHI_LODLFMBCLAH FLBHLOLIPJL; // 0x318
		::MoleMole::UIItemInfoRowWidgetController* OOCDJMGOPBL; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHALLENGEINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
