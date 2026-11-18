#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BJDMJCABCMM;
class JCNKNFOEHFE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_DGBDFEPICFM_OFFSET UNITYSDK_OFFSET(0x19BACE00)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19BAA3F0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET UNITYSDK_OFFSET(0x19BAC370)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19BAB450)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_OIHNNHCJAFB_OFFSET UNITYSDK_OFFSET(0x19BAB4C0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19BAA400)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19BAA650)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19BAA4C0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_PKNPMKIOMMO_OFFSET UNITYSDK_OFFSET(0x19BAC620)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x19BAC1D0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SHOWINVITE_OFFSET UNITYSDK_OFFSET(0x19BAC270)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BAC420)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19BAC430)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19BAC4D0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19BAC570)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x19BAC580)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController_TypeDefinitionIndex = 72401;

	class UIAutoBattlePrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Boolean GBKLPBIOOEI; // 0x330
		::System::Byte _padding0[0x7];
		::MoleMole::UIGeneralNewHintWidgetController* KCBOCICGBBB; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void ShowInvite(::BJDMJCABCMM* nextInvite, ::System::Action* onAcceptShowAction, ::System::Action* recursiveShowInvite)
		{
			return ((::System::Void(*)(::PVOID, ::BJDMJCABCMM*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SHOWINVITE_OFFSET))(this, nextInvite, onAcceptShowAction, recursiveShowInvite);
		}

		::System::Boolean IsAllowShowInvite(::System::Action*& onAcceptShowAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET))(this, onAcceptShowAction);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OIHNNHCJAFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_OIHNNHCJAFB_OFFSET))(this);
		}

		::System::Boolean PKNPMKIOMMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_PKNPMKIOMMO_OFFSET))(this);
		}

		::JCNKNFOEHFE* OGMPOGIHBIK()
		{
			return ((::JCNKNFOEHFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void DGBDFEPICFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_DGBDFEPICFM_OFFSET))(this);
		}
	};
}
