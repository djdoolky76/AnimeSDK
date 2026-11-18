#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class GFFGIKMMCPD;
class MEMHCGMAIMK;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIOperationYumMainWidgetController; }
namespace MoleMole { class UIOperationYumTabWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_BKAOFAGICEN_OFFSET UNITYSDK_OFFSET(0x16763BE0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_CHMEKPPLPGD_OFFSET UNITYSDK_OFFSET(0x16764610)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_EENNAFOJIGJ_OFFSET UNITYSDK_OFFSET(0x16764540)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ELJCFNGGIOG_OFFSET UNITYSDK_OFFSET(0x16764400)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_EPKNAMDOOHJ_OFFSET UNITYSDK_OFFSET(0x167641C0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16763020)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_HCDEMLADPAE_OFFSET UNITYSDK_OFFSET(0x167635B0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_HCPDCPGCJIN_OFFSET UNITYSDK_OFFSET(0x167656A0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ODGOIDBHOEA_OFFSET UNITYSDK_OFFSET(0x16765610)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16763030)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16763D00)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16763EC0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167630C0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167639B0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x16764740)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16763F30)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16763FC0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16764050)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16764110)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16764120)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16764130)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationYumPageController_TypeDefinitionIndex = 89408;

	class UIOperationYumPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 LNHBJIEEMGB = 0x5; // 0x0
		::MEMHCGMAIMK* _view; // 0x320
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* BFPHEILFICE; // 0x328
		::GFFGIKMMCPD* BEPEHBEGGFL; // 0x330
		::MoleMole::UIOperationYumMainWidgetController* LKBABFNLAIK; // 0x338
		::MoleMole::UIOperationYumMainWidgetController* EPDPMBEKCMH; // 0x340
		::MoleMole::UIOperationYumMainWidgetController* PFGLDBMPFHP; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIOperationYumTabWidgetController*>* PAPHKGOAEGF; // 0x350
		::System::Boolean LFNDMHMLJFM; // 0x358
		::System::Byte _padding0[0x3];
		::System::Single MILFGBGAMPI; // 0x35C
		::System::Single KGGFMDCODIE; // 0x360
		::System::Int32 KFKEJCCOLEN; // 0x364
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* NAABPEKIJGE; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::String* EPKNAMDOOHJ(::System::Int32 NACGJJKHEJE)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_EPKNAMDOOHJ_OFFSET))(this, NACGJJKHEJE);
		}

		::System::Void EENNAFOJIGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_EENNAFOJIGJ_OFFSET))(this);
		}

		::System::Void CHMEKPPLPGD(::System::Int32 EOGLMAEPALE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_CHMEKPPLPGD_OFFSET))(this, EOGLMAEPALE);
		}

		::System::Void BKAOFAGICEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_BKAOFAGICEN_OFFSET))(this);
		}

		::System::Void ELJCFNGGIOG(::System::Int32 IFGMFALNKOH, ::System::String*& HIAIKHDFCLN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ELJCFNGGIOG_OFFSET))(this, IFGMFALNKOH, HIAIKHDFCLN);
		}

		::System::Void ODGOIDBHOEA(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ODGOIDBHOEA_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void PDKCHDBODJB(::System::Boolean MIAJMBPCOMB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_PDKCHDBODJB_OFFSET))(this, MIAJMBPCOMB);
		}

		::System::Void HCPDCPGCJIN(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_HCPDCPGCJIN_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void HCDEMLADPAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_HCDEMLADPAE_OFFSET))(this);
		}
	};
}
