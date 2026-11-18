#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class KGJGAGJNKBB;
class KOKPGIFPPME;
class NFLGGILCBKH;
class NKCNKNCLOLO;
class NLEJNCDEEPC;
class PEDFBHLLIBA;
class PHICPBCACKJ;
class PHPFCCFAFGO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICpIconItemWidgetController; }
namespace MoleMole { class UICpItemInfoWidgetController; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_CJLHEDMLOFE_OFFSET UNITYSDK_OFFSET(0x1EBA6100)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ENDBJNMELCD_OFFSET UNITYSDK_OFFSET(0x1EBA8230)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_EPLFODICLNJ_OFFSET UNITYSDK_OFFSET(0x1EBA6E90)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1EBA56D0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_HBDEGKEBPKC_OFFSET UNITYSDK_OFFSET(0x1EBA7D70)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_OKIFLBLKJPN_OFFSET UNITYSDK_OFFSET(0x1EBA7DF0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_OKNEBIEDNBE_OFFSET UNITYSDK_OFFSET(0x1EBA7B40)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1EBA74B0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1EBA7800)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1EBA7E70)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1EBA7540)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1EBA56E0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EBA5800)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_PFPMFGCICOD_OFFSET UNITYSDK_OFFSET(0x1EBA6670)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_PMMCHNIGEHO_OFFSET UNITYSDK_OFFSET(0x1EBA6370)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EBA7C50)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA8020)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA7EC0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1EBA80B0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1EBA8140)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1EBA8170)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1EBA8180)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1EBA8190)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EBA81A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICpEndingChildWindowController_TypeDefinitionIndex = 96509;

	class UICpEndingChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet_DAKPGLOANOJ()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UICpEndingChildWindowController_TypeDefinitionIndex)->GetStaticField(0x52E60);
		}
		::NLEJNCDEEPC* _view; // 0x320
		::System::Boolean COJBIKBAGHC; // 0x328
		::System::Boolean ACIHGACKNGL; // 0x329
		::System::Byte _padding0[0x2];
		::System::Single PMNLNNGEIFM; // 0x32C
		::System::Single ECCHCCGEPGC; // 0x330
		::System::Byte _padding1[0x4];
		::PEDFBHLLIBA* CCDDCCKKCAL; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UICpIconItemWidgetController*>* OHDLBHALNJH; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UICpItemInfoWidgetController*>* DAHAJDHFGDE; // 0x348
		::System::Collections::Generic::List_1<::System::Object*>* CPNPFDOHEJF; // 0x350
		::System::Int32 LIIBFHNKAIP; // 0x358
		::System::Int32 PFHCFOOIGIM; // 0x35C
		::System::Collections::Generic::List_1<::System::Object*>* ANDEENKINNM; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void PFPMFGCICOD(::PHPFCCFAFGO* MODENPBOMDO, ::NKCNKNCLOLO* OAMCPEJPHLP, ::NFLGGILCBKH* GEFMHIGJMGI, ::KGJGAGJNKBB* KKMIMHDPILM, ::KOKPGIFPPME* LIFLJNNPIFP)
		{
			return ((::System::Void(*)(::PVOID, ::PHPFCCFAFGO*, ::NKCNKNCLOLO*, ::NFLGGILCBKH*, ::KGJGAGJNKBB*, ::KOKPGIFPPME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_PFPMFGCICOD_OFFSET))(this, MODENPBOMDO, OAMCPEJPHLP, GEFMHIGJMGI, KKMIMHDPILM, LIFLJNNPIFP);
		}

		::System::Void ENDBJNMELCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ENDBJNMELCD_OFFSET))(this);
		}

		::System::Void CJLHEDMLOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_CJLHEDMLOFE_OFFSET))(this);
		}

		::System::Void OKIFLBLKJPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_OKIFLBLKJPN_OFFSET))(this);
		}

		::System::Void EPLFODICLNJ(::PHICPBCACKJ* ECKMPOAABAL)
		{
			return ((::System::Void(*)(::PVOID, ::PHICPBCACKJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_EPLFODICLNJ_OFFSET))(this, ECKMPOAABAL);
		}

		::System::Void HBDEGKEBPKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_HBDEGKEBPKC_OFFSET))(this);
		}

		::System::Void PMMCHNIGEHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_PMMCHNIGEHO_OFFSET))(this);
		}

		::System::Void OKNEBIEDNBE(::System::Boolean LFPIKGNKOLM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_OKNEBIEDNBE_OFFSET))(this, LFPIKGNKOLM);
		}
	};
}
