#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class OBNHPGJKABG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWorldLevelUpWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_CLDAPJKFDMA_OFFSET UNITYSDK_OFFSET(0x12F9BE90)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_FPONLNOKEFI_OFFSET UNITYSDK_OFFSET(0x12F9BE30)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x12F9BD90)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_OJIGFALCPDA_OFFSET UNITYSDK_OFFSET(0x12F9BD70)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F9B8B0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x12F9B9C0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F9B940)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F9AFC0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F9B0C0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x12F9B1B0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F9BAC0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F9BB20)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x12F9BBB0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F9BBC0)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F9BC50)
#define MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F9BCE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorldLevelUpWidgetController_TypeDefinitionIndex = 67735;

	class UIWorldLevelUpWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OBNHPGJKABG* _view; // 0x2C8
		::MoleMole::UIWorldLevelUpWidgetController_Context* DAAAEJDBNFI; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OJIGFALCPDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_OJIGFALCPDA_OFFSET))(this);
		}

		::System::Void NJIJOCMEKBO(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_NJIJOCMEKBO_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void FPONLNOKEFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_FPONLNOKEFI_OFFSET))(this);
		}

		::System::Void CLDAPJKFDMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_CLDAPJKFDMA_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDLEVELUPWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}
	};
}
