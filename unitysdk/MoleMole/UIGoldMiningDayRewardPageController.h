#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class GCDPGLAOPMH;
class HAFJMBAEDDF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGoldMiningDayStateRewardEffectItemWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_AEGFIHAHMAE_OFFSET UNITYSDK_OFFSET(0x184D3720)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_AFDCMPBFCCG_OFFSET UNITYSDK_OFFSET(0x184D35D0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x184D2D60)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_LHBHKMGNPKF_OFFSET UNITYSDK_OFFSET(0x184D3360)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184D2D70)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x184D3160)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184D3490)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184D2E00)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184D3500)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184D3510)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x184D35A0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184D35B0)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184D35C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayRewardPageController_TypeDefinitionIndex = 52428;

	class UIGoldMiningDayRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::HAFJMBAEDDF* _view; // 0x320
		::GCDPGLAOPMH* LJBPECKCCEA; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIGoldMiningDayStateRewardEffectItemWidgetController*>* FKDMBPECLJL; // 0x330
		::MoleMole::UIGeneralButtonController* EFNGCGGIDPP; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void LHBHKMGNPKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_LHBHKMGNPKF_OFFSET))(this);
		}

		::System::Void AFDCMPBFCCG(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_AFDCMPBFCCG_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void AEGFIHAHMAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER_AEGFIHAHMAE_OFFSET))(this);
		}
	};
}
