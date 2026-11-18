#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMPHPDJNPN_IIKADGPGBHP.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BFFPGBAKMFK;
class MNIIACNBOMC;
class MNIIACNBOMC_FHOJJBIKJNP;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInterKnotPlayerInfoWidgetController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class MEKABAIJMNM_1;

#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_BMFMOLLGOHP_OFFSET UNITYSDK_OFFSET(0x166D0830)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_DFCDGMOAEKO_OFFSET UNITYSDK_OFFSET(0x166D1780)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_DGILBMDEODO_OFFSET UNITYSDK_OFFSET(0x166D1090)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_DKDFBBEALNK_OFFSET UNITYSDK_OFFSET(0x166D1700)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_DNIKKJAEEEG_OFFSET UNITYSDK_OFFSET(0x166D16B0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_EELGMJHNGCP_OFFSET UNITYSDK_OFFSET(0x166D1800)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_IOLDGLDACMM_OFFSET UNITYSDK_OFFSET(0x166D09E0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_JLDOEGJPNOJ_OFFSET UNITYSDK_OFFSET(0x166CFF60)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_NAGHKAMJMCC_OFFSET UNITYSDK_OFFSET(0x166D14E0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_NCNOGFKLLDL_OFFSET UNITYSDK_OFFSET(0x166D0530)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_OBKOGHDBGPO_OFFSET UNITYSDK_OFFSET(0x166D02E0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166CFA20)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x166CF870)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166CFAB0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166CF360)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x166CF900)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166CFB60)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166CFD10)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x166CFDA0)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166CFE40)
#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166CFED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeMakerWidgetController_TypeDefinitionIndex = 90211;

	class UIRopeMakerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MNIIACNBOMC* _view; // 0x2C8
		::MoleMole::UIInterKnotPlayerInfoWidgetController* IBEKFPDCFDG; // 0x2D0
		::BFFPGBAKMFK* HPBNDJLHJFJ; // 0x2D8
		::System::Collections::Generic::List_1<::System::Int32>* JLABJPNBBAG; // 0x2E0
		::System::Collections::Generic::List_1<::System::Int32>* OBAOCHPAOPL; // 0x2E8
		::System::Collections::Generic::List_1<::System::Object*>* KHPJEPPJLCH; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* EEJLLBPAPKG; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void JLDOEGJPNOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_JLDOEGJPNOJ_OFFSET))(this);
		}

		::MoleMole::UIItemIconBtnSmallWidgetController* OBKOGHDBGPO(::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* KLOOKFMCDMG, ::System::Int32 HPEMFJDOAKL)
		{
			return ((::MoleMole::UIItemIconBtnSmallWidgetController*(*)(::PVOID, ::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_OBKOGHDBGPO_OFFSET))(this, KLOOKFMCDMG, HPEMFJDOAKL);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void IOLDGLDACMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_IOLDGLDACMM_OFFSET))(this);
		}

		::System::Void NCNOGFKLLDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_NCNOGFKLLDL_OFFSET))(this);
		}

		::System::Void DNIKKJAEEEG(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_DNIKKJAEEEG_OFFSET))(this, KOIBHLHLMFC);
		}

		::MoleMole::ScrollViewItemWidgetController* DKDFBBEALNK(::System::Func_1<::MoleMole::UIControlReference*>* IHFDFJICHLA)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_DKDFBBEALNK_OFFSET))(this, IHFDFJICHLA);
		}

		::System::Void DFCDGMOAEKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_DFCDGMOAEKO_OFFSET))(this);
		}

		::System::Void DGILBMDEODO(::MNIIACNBOMC_FHOJJBIKJNP* AEJAMJDBHAM)
		{
			return ((::System::Void(*)(::PVOID, ::MNIIACNBOMC_FHOJJBIKJNP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_DGILBMDEODO_OFFSET))(this, AEJAMJDBHAM);
		}

		::System::Void NAGHKAMJMCC(::MNIIACNBOMC_FHOJJBIKJNP* AEJAMJDBHAM, ::CMMPHPDJNPN_IIKADGPGBHP JKBLDFBGBPK, ::System::Boolean JOAHNFGGHLK)
		{
			return ((::System::Void(*)(::PVOID, ::MNIIACNBOMC_FHOJJBIKJNP*, ::CMMPHPDJNPN_IIKADGPGBHP, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_NAGHKAMJMCC_OFFSET))(this, AEJAMJDBHAM, JKBLDFBGBPK, JOAHNFGGHLK);
		}

		::System::Void BMFMOLLGOHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_BMFMOLLGOHP_OFFSET))(this);
		}

		::System::Void EELGMJHNGCP(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_EELGMJHNGCP_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
