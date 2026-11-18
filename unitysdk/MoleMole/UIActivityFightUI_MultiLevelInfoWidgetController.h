#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class OHDHGHEIFAI;
class PBDCKLJBBIF;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
template <typename T> class NMANHEHIJAL_1;

#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19F8BFA0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19F8BDE0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x19F8C010)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19F8BEA0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_SETLEVELLIST_OFFSET UNITYSDK_OFFSET(0x19F8BEF0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8C220)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19F8C280)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x19F8C320)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19F8C3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_MultiLevelInfoWidgetController_TypeDefinitionIndex = 49175;

	class UIActivityFightUI_MultiLevelInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetLevelList(::NMANHEHIJAL_1<::OHDHGHEIFAI*>* levels, ::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NMANHEHIJAL_1<::OHDHGHEIFAI*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_SETLEVELLIST_OFFSET))(this, levels, selectIndex);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::PBDCKLJBBIF* OGMPOGIHBIK()
		{
			return ((::PBDCKLJBBIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
