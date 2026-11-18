#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class BFMAKOAGGCP;
class NOCOMKLJAPO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMechBooTargetProRowWidgetController; }

#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x193AAC40)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x193AA740)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_LOOMDLCLEEJ_OFFSET UNITYSDK_OFFSET(0x193AC590)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193AA750)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x193AC250)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193AC1E0)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x193AA890)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x193AAB50)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x193AC410)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193AC420)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x193AC4B0)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193AC4E0)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x193AC4F0)
#define MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x193AC500)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetPageController_TypeDefinitionIndex = 91275;

	class UIMechBooTargetPageController : public ::MoleMole::UIWindowController
	{
	public:
		::NOCOMKLJAPO* _view; // 0x320
		::BFMAKOAGGCP* DPPLEAMHKLL; // 0x328
		::System::Int32 APGBNEKMNPF; // 0x330
		::System::Int32 AKNEAEDDCBG; // 0x334
		::MoleMole::UIMechBooTargetProRowWidgetController* AGBENMNBBGG; // 0x338
		::MoleMole::UIMechBooTargetProRowWidgetController* BCFEDLODJPF; // 0x340
		::MoleMole::UIMechBooTargetProRowWidgetController* NIJHHDHAJME; // 0x348
		::MoleMole::UIMechBooTargetProRowWidgetController* FNLKFKNJANP; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void LOOMDLCLEEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPAGECONTROLLER_LOOMDLCLEEJ_OFFSET))(this);
		}
	};
}
