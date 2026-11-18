#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E94620)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLICKRESTARTUI_B__13_0_OFFSET UNITYSDK_OFFSET(0x17E94670)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLOSEUIPHOTOMODEEND_B__19_0_OFFSET UNITYSDK_OFFSET(0x17E94740)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E94660)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex = 90016;

	class UIActivityCameraSettlementPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34EC0);
		}
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34EC8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickRestartUI_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLICKRESTARTUI_B__13_0_OFFSET))(this);
		}

		::System::Void _CloseUIPhotoModeEnd_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLOSEUIPHOTOMODEEND_B__19_0_OFFSET))(this);
		}
	};
}
