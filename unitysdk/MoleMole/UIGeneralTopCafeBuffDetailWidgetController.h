#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMKLPPGLKJJ.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class AKNNIKCLGMD;
class EAEMLELAPDL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ALKLJEJMBEH_OFFSET UNITYSDK_OFFSET(0x18F167F0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F15590)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F15620)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F153C0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18F15520)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHBUFFEXTRADESC_OFFSET UNITYSDK_OFFSET(0x18F16460)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18F156A0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F16550)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F165B0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F16640)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F166D0)
#define MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18F16760)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTopCafeBuffDetailWidgetController_TypeDefinitionIndex = 86836;

	class UIGeneralTopCafeBuffDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::EAEMLELAPDL* _view; // 0x2C8
		::JMKLPPGLKJJ FHICPNNOPPI; // 0x2D0
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::AKNNIKCLGMD*>* GPMEIEHIAFA; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::JMKLPPGLKJJ rewardBuffGameTag, ::System::Collections::Generic::List_1<::AKNNIKCLGMD*>* rewardBuffs)
		{
			return ((::System::Void(*)(::PVOID, ::JMKLPPGLKJJ, ::System::Collections::Generic::List_1<::AKNNIKCLGMD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, rewardBuffGameTag, rewardBuffs);
		}

		::System::Void RefreshBuffExtraDesc(::System::Boolean show, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_REFRESHBUFFEXTRADESC_OFFSET))(this, show, text);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ALKLJEJMBEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOPCAFEBUFFDETAILWIDGETCONTROLLER_ALKLJEJMBEH_OFFSET))(this);
		}
	};
}
