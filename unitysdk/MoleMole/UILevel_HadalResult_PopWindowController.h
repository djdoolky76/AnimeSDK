#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHCBCBDEIMG_DOPBFKHLMHM.h"
#include "unitysdk/AHCBCBDEIMG_HPLAKBEKMGD.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MonoLevelResultPageConfig_DelayType.h"
#include "unitysdk/MoleMole/UILevelGeneralWinResultDialogPopWindowController.h"
#include "unitysdk/OOLIBLJCPNA.h"

class BDBPOGPNCBP;
class BNFIIBMAMDO;
namespace MoleMole { class MonoLevelResultPageConfig; }
namespace MoleMole { class UIHadalZoneLayer_RankingRowWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET UNITYSDK_OFFSET(0x1939A500)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET UNITYSDK_OFFSET(0x1939A350)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET UNITYSDK_OFFSET(0x1939A4B0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_IDHPBDKOGDN_OFFSET UNITYSDK_OFFSET(0x1939B350)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_KLGOLFPOOMB_OFFSET UNITYSDK_OFFSET(0x1939B6D0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET UNITYSDK_OFFSET(0x1939A840)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_PHDLDNHNJIL_OFFSET UNITYSDK_OFFSET(0x1939B170)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1939B220)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1939A5D0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___BASE__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1939B2B0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_HadalResult_PopWindowController_TypeDefinitionIndex = 56015;

	class UILevel_HadalResult_PopWindowController : public ::MoleMole::UILevelGeneralWinResultDialogPopWindowController
	{
	public:
		// static const ::System::String* HFCHIJDEKMD; // 0x0
		::BDBPOGPNCBP* OFHDFINIFDJ; // 0x380
		::System::Collections::Generic::List_1<::MoleMole::UIHadalZoneLayer_RankingRowWidgetController*>* MFJJLCFIIFK; // 0x388
		::BNFIIBMAMDO* GOPAEDADAGN; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::AHCBCBDEIMG_HPLAKBEKMGD GetButtonCombineState()
		{
			return ((::AHCBCBDEIMG_HPLAKBEKMGD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET))(this);
		}

		::AHCBCBDEIMG_DOPBFKHLMHM GetPanelState()
		{
			return ((::AHCBCBDEIMG_DOPBFKHLMHM(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET))(this);
		}

		::System::Void AcquireTitleText(::System::String*& mainTitleTextID, ::System::String*& resultTitleTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET))(this, mainTitleTextID, resultTitleTextID);
		}

		::System::Void _On_CustomUI_Delay_Message(::MoleMole::MonoLevelResultPageConfig_DelayType delayType, ::MoleMole::MonoLevelResultPageConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLevelResultPageConfig_DelayType, ::MoleMole::MonoLevelResultPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET))(this, delayType, config);
		}

		::System::Void OnPopShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET))(this);
		}

		::System::Void __base__On_CustomUI_Delay_Message(::MoleMole::MonoLevelResultPageConfig_DelayType P0, ::MoleMole::MonoLevelResultPageConfig* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLevelResultPageConfig_DelayType, ::MoleMole::MonoLevelResultPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___BASE__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET))(this, P0, P1);
		}

		::System::Void PHDLDNHNJIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_PHDLDNHNJIL_OFFSET))(this);
		}

		::MoleMole::Level::RatingType KLGOLFPOOMB(::OOLIBLJCPNA CDPOBACHBON)
		{
			return ((::MoleMole::Level::RatingType(*)(::PVOID, ::OOLIBLJCPNA))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_KLGOLFPOOMB_OFFSET))(this, CDPOBACHBON);
		}

		::System::Void IDHPBDKOGDN(::MoleMole::Level::RatingType NILNNELOMCG, ::System::Boolean AMOCDOHGGCH)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_IDHPBDKOGDN_OFFSET))(this, NILNNELOMCG, AMOCDOHGGCH);
		}
	};
}
