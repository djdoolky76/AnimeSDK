#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class DGDPBBDLAEO;
class GENLJFOGEPO;
class KIPELNFMIAP;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCityRevivalRewardWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_BBNPJCDGKOO_OFFSET UNITYSDK_OFFSET(0x1673DE80)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_BNHPMLCKHAD_OFFSET UNITYSDK_OFFSET(0x1673DF70)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1673D390)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1673D5A0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1673DCB0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1673D3A0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1673D630)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1673DD20)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1673DD40)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1673DDD0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1673DDE0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1673DDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalRewardDetailsPopWindowController_TypeDefinitionIndex = 60070;

	class UIMainCityRevivalRewardDetailsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::DGDPBBDLAEO* _view; // 0x320
		::System::Collections::Generic::List_1<::KIPELNFMIAP*>* MDIIHDHEJNC; // 0x328
		::System::Collections::Generic::List_1<::GENLJFOGEPO*>* BDOAPIHOHFN; // 0x330
		::System::Int32 JHGLPIBNDNG; // 0x338
		::System::Boolean KGPJJMCCNBF; // 0x33C
		::System::Byte _padding0[0x3];
		::System::Int32 AFNMPNMDBEL; // 0x340
		::System::Int32 CAMEIEINLGF; // 0x344
		::MoleMole::UIMainCityRevivalRewardWidgetController* EODLJODNFBN; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BBNPJCDGKOO(::MoleMole::UIMainCityRevivalRewardWidgetController* IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityRevivalRewardWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_BBNPJCDGKOO_OFFSET))(this, IPMMCGDMODG);
		}

		::MoleMole::ScrollViewItemWidgetController* BNHPMLCKHAD(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_BNHPMLCKHAD_OFFSET))(this, MNDIBLLFAJI);
		}
	};
}
