#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CAKBLLJOCAK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_AIKEMOGJIDJ_OFFSET UNITYSDK_OFFSET(0x12C0B060)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_GMFCMGNLKFF_OFFSET UNITYSDK_OFFSET(0x12C0A740)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET UNITYSDK_OFFSET(0x12C0B030)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12C0ABE0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12C0A650)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12C0AC70)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C0A480)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12C0A5E0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0ACF0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12C0AD50)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12C0ADE0)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12C0AE80)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C0AF10)
#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12C0AFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMedalWidgetController_TypeDefinitionIndex = 51513;

	class UIZenkovMedalWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::CAKBLLJOCAK* _view; // 0x2C8
		::System::Action* BJLMECNCKKM; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ILBPOJOHJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET))(this);
		}

		::System::Void GMFCMGNLKFF(::System::Int32 ABDJGFDELJP, ::System::Int32 GAFHDKMGPGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_GMFCMGNLKFF_OFFSET))(this, ABDJGFDELJP, GAFHDKMGPGO);
		}

		::System::Int32 AIKEMOGJIDJ(::System::Int32 HPBJCCLDANP)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_AIKEMOGJIDJ_OFFSET))(this, HPBJCCLDANP);
		}
	};
}
