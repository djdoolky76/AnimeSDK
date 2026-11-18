#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class IKFBMEIOHFL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x180B5DF0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_JBOHMOCBDMI_OFFSET UNITYSDK_OFFSET(0x180B6C20)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180B6740)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x180B6850)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180B67D0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x180B5CC0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x180B68B0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180B6900)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180B69E0)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x180B6A70)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180B6B00)
#define MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x180B6B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSettingsWidgetController_TypeDefinitionIndex = 57514;

	class UIGeneralSettingsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::IKFBMEIOHFL* _view; // 0x2C8
		::MoleMole::ESystemSettingType BLNNPKHDCBB; // 0x2D0
		::System::Int32 HNPEMJPMJEA; // 0x2D4
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* ODMEJFEKLIJ; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void JBOHMOCBDMI(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_JBOHMOCBDMI_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}
	};
}
