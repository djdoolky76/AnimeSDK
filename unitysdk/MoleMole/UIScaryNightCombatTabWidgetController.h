#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class DLOICFALMNK;
class EOLACICGJBD;
class HJCDPOPGGBA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x14CCDDD0)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14CCDB50)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CCD8F0)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14CCD990)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_SETAVATAR_OFFSET UNITYSDK_OFFSET(0x14CCDBC0)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_SETNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x14CCDC70)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_SETTABNAME_OFFSET UNITYSDK_OFFSET(0x14CCDD20)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CCDE70)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CCDED0)
#define MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14CCDF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightCombatTabWidgetController_TypeDefinitionIndex = 78461;

	class UIScaryNightCombatTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetAvatar(::EOLACICGJBD* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::EOLACICGJBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_SETAVATAR_OFFSET))(this, avatar);
		}

		::System::Void SetNotificationNode(::DLOICFALMNK* node)
		{
			return ((::System::Void(*)(::PVOID, ::DLOICFALMNK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_SETNOTIFICATIONNODE_OFFSET))(this, node);
		}

		::System::Void SetTabName(::System::String* tabName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_SETTABNAME_OFFSET))(this, tabName);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::HJCDPOPGGBA* OGMPOGIHBIK()
		{
			return ((::HJCDPOPGGBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOMBATTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
