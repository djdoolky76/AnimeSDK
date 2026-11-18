#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class AHMJIPEODPP;
class EGBJIHHDFBM;
class HGAJKHIMKJP;
namespace MoleMole { class UIBadgeItemIconWidgetChildWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowAchievementCardWidgetV2WidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_AFKKPHOJHKJ_OFFSET UNITYSDK_OFFSET(0x1A4006F0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_AILKDMOPCAP_OFFSET UNITYSDK_OFFSET(0x1A400480)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0x1A3FFC30)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0x1A400080)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1A3FF220)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A3FF230)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET UNITYSDK_OFFSET(0x1A4007D0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_KNFBDKMOLKN_OFFSET UNITYSDK_OFFSET(0x1A3FF660)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A3FF450)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A3FF240)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A3FF4E0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A400110)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A400350)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A4003E0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A4003F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowAchievementDialogOpenCardWidgetController_TypeDefinitionIndex = 59519;

	class UIHollowAchievementDialogOpenCardWidgetController : public ::MoleMole::UIWindowController
	{
	public:
		::EGBJIHHDFBM* _view; // 0x320
		::MoleMole::UIHollowAchievementCardWidgetV2WidgetController* MNOMCCLBJAO; // 0x328
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* DKPDDGKFEOK; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*>* FPHOAKBHAFP; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIBadgeItemIconWidgetChildWindowController*>* GHMKKNJMHFK; // 0x340
		::System::Collections::Generic::List_1<::System::String*>* AOMMIKFACNH; // 0x348
		::UnityEngine::UI::Extension::UITabButtonGroup* ICPOIHJEDAI; // 0x350
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* cardList; // 0x358
		::System::Int32 NACGJJKHEJE; // 0x360
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UI::Extension::UITabButton*>* AJOHBJDBKHE; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::AHMJIPEODPP* GetBadgeMap()
		{
			return ((::AHMJIPEODPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GetCardList(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* rawCards)
		{
			return ((::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_GETCARDLIST_OFFSET))(this, rawCards);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void AILKDMOPCAP(::System::String* OBNIAHNMHPF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_AILKDMOPCAP_OFFSET))(this, OBNIAHNMHPF);
		}

		::System::Void AFKKPHOJHKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_AFKKPHOJHKJ_OFFSET))(this);
		}

		::System::Void KNFBDKMOLKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_KNFBDKMOLKN_OFFSET))(this);
		}

		::System::Void ILBPOJOHJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET))(this);
		}
	};
}
