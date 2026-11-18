#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHCBCBDEIMG_DOPBFKHLMHM.h"
#include "unitysdk/AHCBCBDEIMG_HPLAKBEKMGD.h"
#include "unitysdk/MoleMole/UILevelGeneralWinResultDialogPopWindowController.h"

class DHPJHPHOBFI;
class FHIINBCOOAN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralExpProgressWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ACQUIRETITLETEXT_OFFSET UNITYSDK_OFFSET(0x12BF9DC0)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_GETBUTTONCOMBINESTATE_OFFSET UNITYSDK_OFFSET(0x12BF9D20)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_GETPANELSTATE_OFFSET UNITYSDK_OFFSET(0x12BF9D70)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_KJGBLAODDOE_OFFSET UNITYSDK_OFFSET(0x12BFAC30)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_OEGCAIPMGOP_OFFSET UNITYSDK_OFFSET(0x12BFA0D0)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF9840)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONPOPSHOWED_OFFSET UNITYSDK_OFFSET(0x12BF9E30)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF9B90)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BF9940)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BFAB30)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BFAB40)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BFAC10)
#define MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BFAC20)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseResultPageController_TypeDefinitionIndex = 42959;

	class UITowerDefenseResultPageController : public ::MoleMole::UILevelGeneralWinResultDialogPopWindowController
	{
	public:
		::MoleMole::UIGeneralExpProgressWidgetController* HOFHAOLHOMJ; // 0x380
		::FHIINBCOOAN* BBEPIAEFPPK; // 0x388
		::DHPJHPHOBFI* _view; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::AHCBCBDEIMG_HPLAKBEKMGD GetButtonCombineState()
		{
			return ((::AHCBCBDEIMG_HPLAKBEKMGD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_GETBUTTONCOMBINESTATE_OFFSET))(this);
		}

		::AHCBCBDEIMG_DOPBFKHLMHM GetPanelState()
		{
			return ((::AHCBCBDEIMG_DOPBFKHLMHM(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_GETPANELSTATE_OFFSET))(this);
		}

		::System::Void AcquireTitleText(::System::String*& mainTitleTextID, ::System::String*& resultTitleTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ACQUIRETITLETEXT_OFFSET))(this, mainTitleTextID, resultTitleTextID);
		}

		::System::Void OnPopShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_ONPOPSHOWED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OEGCAIPMGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_OEGCAIPMGOP_OFFSET))(this);
		}

		::System::Void KJGBLAODDOE(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSERESULTPAGECONTROLLER_KJGBLAODDOE_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
