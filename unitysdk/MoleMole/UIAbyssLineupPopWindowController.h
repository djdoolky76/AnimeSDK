#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIDJKBDDBDD.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/OKKIMONLGJD.h"

class BPHGNMNLLHF;
class DGLEFPMEJNJ;
class IDDHCLBOGHA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_AEELCFGGINM_OFFSET UNITYSDK_OFFSET(0x19B80290)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ELBGMMCPGKL_OFFSET UNITYSDK_OFFSET(0x19B81950)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_FHMJMACBPPC_OFFSET UNITYSDK_OFFSET(0x19B80D80)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x19B7F5F0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19B7F5E0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_KAGOPODBLJL_1_OFFSET UNITYSDK_OFFSET(0x19B817F0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_KAGOPODBLJL_OFFSET UNITYSDK_OFFSET(0x19B813D0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_OFHCEHIOMKC_OFFSET UNITYSDK_OFFSET(0x19B818A0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_OLJKPBLKLGM_OFFSET UNITYSDK_OFFSET(0x19B7FF80)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B809A0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19B806C0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19B80A30)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19B7F600)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19B7FB00)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x19B80E90)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_PGPEKOAPLJD_OFFSET UNITYSDK_OFFSET(0x19B815E0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B80AA0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B80B90)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19B80C20)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19B80CD0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19B80CE0)
#define MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19B80CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssLineupPopWindowController_TypeDefinitionIndex = 81451;

	class UIAbyssLineupPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* PotentialBtnKey; // 0x0
		// static const ::System::String* UpgradeBtnKey; // 0x0
		// static const ::System::String* PotentialBtnIconPath; // 0x0
		// static const ::System::String* UpgradeBtnIconPath; // 0x0
		::DGLEFPMEJNJ* _view; // 0x320
		::System::Collections::Generic::List_1<::System::Object*>* EGOBBNHNECL; // 0x328
		::System::Collections::Generic::List_1<::IDDHCLBOGHA*>* ANKFMJHJCAG; // 0x330
		::System::Collections::Generic::List_1<::System::Int32>* ELIOIKJGDGI; // 0x338
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* EECEIIBGMBN; // 0x340
		::System::Collections::Generic::List_1<::FIDJKBDDBDD>* KDNIBIFFAND; // 0x348
		::System::Int32 DMJKCIHLOPA; // 0x350
		::System::Byte _padding0[0x4];
		::MoleMole::UIGeneralToggleWidgetControllerWithModel* EOPOIBOELCJ; // 0x358
		::BPHGNMNLLHF* CurDisPlayAvatarItem; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void FHMJMACBPPC(::MoleMole::ScrollViewItemWidgetController* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScrollViewItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_FHMJMACBPPC_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void AEELCFGGINM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_AEELCFGGINM_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void KAGOPODBLJL(::System::Collections::Generic::List_1<::System::Int32>* BAMOOOEAACD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_KAGOPODBLJL_OFFSET))(this, BAMOOOEAACD);
		}

		::MoleMole::ScrollViewItemWidgetController* KAGOPODBLJL_1(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_KAGOPODBLJL_1_OFFSET))(this, MNDIBLLFAJI);
		}

		::MoleMole::ScrollViewItemWidgetController* OFHCEHIOMKC(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_OFHCEHIOMKC_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void ELBGMMCPGKL(::System::Boolean FHEJELHALJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_ELBGMMCPGKL_OFFSET))(this, FHEJELHALJE);
		}

		::System::Void PGPEKOAPLJD(::System::Collections::Generic::List_1<::System::Int32>* BAMOOOEAACD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_PGPEKOAPLJD_OFFSET))(this, BAMOOOEAACD);
		}

		::System::Void OLJKPBLKLGM(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLINEUPPOPWINDOWCONTROLLER_OLJKPBLKLGM_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
