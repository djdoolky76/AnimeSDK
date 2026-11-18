#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class EFJCDKOKLLI;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITabBtn03RowWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISETTINGPAGECONTROLLER_AMGJJEHOEIJ_OFFSET UNITYSDK_OFFSET(0x14CD13E0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x14CCF740)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_CKFCEKGHKOD_OFFSET UNITYSDK_OFFSET(0x14CD14E0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_DEJNPLHNGAA_OFFSET UNITYSDK_OFFSET(0x14CD1250)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_DGDJFIPEGFO_OFFSET UNITYSDK_OFFSET(0x14CD15B0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_FLNCBEFCPPG_OFFSET UNITYSDK_OFFSET(0x14CD11A0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_FOHHGNODJFF_OFFSET UNITYSDK_OFFSET(0x14CD1680)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_GETSHOWSETTINGTYPES_OFFSET UNITYSDK_OFFSET(0x14CD0820)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x14CCF570)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14CCF560)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_GFNKJLJCCLL_OFFSET UNITYSDK_OFFSET(0x14CD0D80)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_HASCLOSED_OFFSET UNITYSDK_OFFSET(0x14CD08B0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_MFFBAPOOCKJ_OFFSET UNITYSDK_OFFSET(0x14CCFCA0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14CCF580)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14CD08F0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x14CD07C0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14CCFBF0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14CCF610)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14CCFE50)
#define MOLEMOLE_UISETTINGPAGECONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x14CD0030)
#define MOLEMOLE_UISETTINGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD0AB0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14CD0B80)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14CD0C20)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x14CD0C50)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14CD0CE0)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14CD0C10)
#define MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14CD0CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingPageController_TypeDefinitionIndex = 38742;

	class UISettingPageController : public ::MoleMole::UIWindowController
	{
	public:
		::EFJCDKOKLLI* _view; // 0x320
		::MoleMole::ESystemSettingType GHCGMIDFAHN; // 0x328
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::UIBaseController*>* PIAEBCAIAIA; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn03RowWidgetController*>* IIFMJJOFJJL; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* LHCHOMNPHOG; // 0x340
		::System::Collections::Generic::HashSet_1<::MoleMole::ESystemSettingType>* GMIIBMCLLMC; // 0x348
		::System::Boolean MLHMMKCILHL; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* GetShowSettingTypes()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_GETSHOWSETTINGTYPES_OFFSET))(this);
		}

		static ::System::Boolean HasClosed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_HASCLOSED_OFFSET))();
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void GFNKJLJCCLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_GFNKJLJCCLL_OFFSET))(this);
		}

		::System::Void MFFBAPOOCKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_MFFBAPOOCKJ_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType FLNCBEFCPPG(::System::Int32 EOGLMAEPALE)
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_FLNCBEFCPPG_OFFSET))(this, EOGLMAEPALE);
		}

		::MoleMole::UIBaseController* DEJNPLHNGAA(::MoleMole::ESystemSettingType JFHFNPIDIOA)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_DEJNPLHNGAA_OFFSET))(this, JFHFNPIDIOA);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void AMGJJEHOEIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_AMGJJEHOEIJ_OFFSET))(this);
		}

		::System::Void CKFCEKGHKOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_CKFCEKGHKOD_OFFSET))(this);
		}

		::System::Void DGDJFIPEGFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_DGDJFIPEGFO_OFFSET))(this);
		}

		::System::Void FOHHGNODJFF(::System::Int32 EOGLMAEPALE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_FOHHGNODJFF_OFFSET))(this, EOGLMAEPALE);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGPAGECONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}
	};
}
