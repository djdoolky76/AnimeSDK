#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CAAEMKFJGJE;
class FOLOGHLENFB;
class GBHBKEEDPEJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_MMMBANJDMFG_OFFSET UNITYSDK_OFFSET(0x1769B620)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1769AE80)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1769AF10)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1769ADB0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1769AE10)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1769AF90)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1769BA90)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1769BAF0)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1769BB80)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1769BC10)
#define MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1769BCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardCommonItemWidgetController_TypeDefinitionIndex = 68436;

	class UIHollowCardCommonItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GBHBKEEDPEJ* _view; // 0x2C8
		::MoleMole::UIHollowCardOptionsDialogContext* AAOCANGHBDG; // 0x2D0
		::System::Action* HKCEMNBKHOK; // 0x2D8
		::System::Action* JIGMAINCKHL; // 0x2E0
		::CAAEMKFJGJE* ONPLAHMFCGL; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIHollowCardOptionsDialogContext* context, ::CAAEMKFJGJE* choice, ::System::Action* onOk, ::System::Action* onGiveUp)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogContext*, ::CAAEMKFJGJE*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context, choice, onOk, onGiveUp);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void MMMBANJDMFG(::MoleMole::UIHollowCardOptionsDialogContext* AAOCANGHBDG, ::FOLOGHLENFB* DEKJDEPKKLH)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogContext*, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOMMONITEMWIDGETCONTROLLER_MMMBANJDMFG_OFFSET))(this, AAOCANGHBDG, DEKJDEPKKLH);
		}
	};
}
