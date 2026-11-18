#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIAutoBattleRuleDialogPopWindowController_TabType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/UIAutoBattleRuleDialogPopWindowController_TabData.h"

class DEBNKJEHNIL;
class NNHKGBIMFAE;
namespace MoleMole { class UIABInLevelArcadetInfoWidgetController; }
namespace MoleMole { class UIABInLevelGoldInfoWidgetController; }
namespace MoleMole { class UIABInLevelHPInfoWidgetController; }
namespace MoleMole { class UIABInLevelRankInfoWidgetController; }
namespace MoleMole { class UIABInfoContext; }
namespace MoleMole { class UIAutoBattleCollectionTabBtnRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_BEMAJEGMKKD_OFFSET UNITYSDK_OFFSET(0x19D31D10)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_GBHLKOFOLPM_OFFSET UNITYSDK_OFFSET(0x19D317B0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19D31650)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_IDHNLMDHBMN_OFFSET UNITYSDK_OFFSET(0x19D325E0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_LEFJHEGBJEH_OFFSET UNITYSDK_OFFSET(0x19D325C0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_NOMNDNGLKGF_OFFSET UNITYSDK_OFFSET(0x19D32460)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19D32140)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19D321D0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19D31660)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19D31AC0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D32240)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19D32320)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19D323B0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19D323C0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19D323D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRuleDialogPopWindowController_TypeDefinitionIndex = 64095;

	class UIAutoBattleRuleDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::NNHKGBIMFAE* _view; // 0x320
		::DEBNKJEHNIL* FFDBFAEKDCL; // 0x328
		::System::Collections::Generic::List_1<::System::Object*>* KALCBNENEJN; // 0x330
		::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType LPGHADMLONG; // 0x338
		::System::Byte _padding0[0x4];
		::MoleMole::UIABInLevelGoldInfoWidgetController* CKONCIFPJOK; // 0x340
		::MoleMole::UIABInLevelRankInfoWidgetController* OOCCNJKLKEM; // 0x348
		::MoleMole::UIABInLevelHPInfoWidgetController* EFOBNADBCAM; // 0x350
		::MoleMole::UIABInLevelArcadetInfoWidgetController* BOEHJNLBOMM; // 0x358
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::MoleMole::UIWidgetController*>* APAMDKLCICK; // 0x360
		::MoleMole::UIABInfoContext* AAOCANGHBDG; // 0x368
		::System::Boolean CMHBOEIKBLG; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::UIAutoBattleCollectionTabBtnRowWidgetController* NOMNDNGLKGF(::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData LJBPECKCCEA)
		{
			return ((::MoleMole::UIAutoBattleCollectionTabBtnRowWidgetController*(*)(::PVOID, ::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_NOMNDNGLKGF_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void LEFJHEGBJEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_LEFJHEGBJEH_OFFSET))(this);
		}

		::System::Void BEMAJEGMKKD(::System::Int32 FBKGFLADIDE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_BEMAJEGMKKD_OFFSET))(this, FBKGFLADIDE);
		}

		::System::Void IDHNLMDHBMN(::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType OBNIAHNMHPF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_IDHNLMDHBMN_OFFSET))(this, OBNIAHNMHPF);
		}

		::System::Void GBHLKOFOLPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_GBHLKOFOLPM_OFFSET))(this);
		}
	};
}
