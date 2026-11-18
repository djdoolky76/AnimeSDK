#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJPHNBJEBLJ.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CEDFIOLFMKI;
class KIAEEMJLCJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x12C061F0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_GMREFRESH_OFFSET UNITYSDK_OFFSET(0x12C065D0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x12C06110)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12C05F70)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12C06180)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C06030)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x12C06380)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_SETNODECLICKCB_OFFSET UNITYSDK_OFFSET(0x12C06510)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_SETTABSELECTCB_OFFSET UNITYSDK_OFFSET(0x12C06450)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x12C062A0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C06680)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x12C066E0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12C066F0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12C06790)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12C06830)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x12C068C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelListWidgetController_TypeDefinitionIndex = 56841;

	class UIVoidFrontLevelListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_AFTERSHOW_OFFSET))(this);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void RefreshWidget(::IJPHNBJEBLJ difficulty, ::System::Int32 focusNodeId, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::IJPHNBJEBLJ, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, difficulty, focusNodeId, playAnim);
		}

		::System::Void SetTabSelectCb(::System::Action_1<::IJPHNBJEBLJ>* onSelectTab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::IJPHNBJEBLJ>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_SETTABSELECTCB_OFFSET))(this, onSelectTab);
		}

		::System::Void SetNodeClickCb(::System::Action_1<::KIAEEMJLCJA*>* onClickNode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KIAEEMJLCJA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_SETNODECLICKCB_OFFSET))(this, onClickNode);
		}

		::System::Void GmRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_GMREFRESH_OFFSET))(this);
		}

		::System::Void __base_AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_AFTERSHOW_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}

		::CEDFIOLFMKI* OGMPOGIHBIK()
		{
			return ((::CEDFIOLFMKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
