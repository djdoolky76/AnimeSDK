#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class BFMAKOAGGCP;
class KDMHLFICFKH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMechBooTargetProRowWidgetController; }

#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x179677B0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17967290)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_LOOMDLCLEEJ_OFFSET UNITYSDK_OFFSET(0x17969010)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179672A0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17968E50)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179673E0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179676A0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17968EC0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17968ED0)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17968F60)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17968F70)
#define MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17968F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTargetPopWindowController_TypeDefinitionIndex = 47409;

	class UIMechBooTargetPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::KDMHLFICFKH* _view; // 0x320
		::BFMAKOAGGCP* DPPLEAMHKLL; // 0x328
		::System::Int32 APGBNEKMNPF; // 0x330
		::System::Boolean BABGIKMOKCM; // 0x334
		::System::Boolean ADLNADJIEKC; // 0x335
		::System::Byte _padding0[0x2];
		::System::Int32 AKNEAEDDCBG; // 0x338
		::System::Byte _padding1[0x4];
		::MoleMole::UIMechBooTargetProRowWidgetController* AGBENMNBBGG; // 0x340
		::MoleMole::UIMechBooTargetProRowWidgetController* BCFEDLODJPF; // 0x348
		::MoleMole::UIMechBooTargetProRowWidgetController* NIJHHDHAJME; // 0x350
		::MoleMole::UIMechBooTargetProRowWidgetController* FNLKFKNJANP; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void LOOMDLCLEEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTARGETPOPWINDOWCONTROLLER_LOOMDLCLEEJ_OFFSET))(this);
		}
	};
}
