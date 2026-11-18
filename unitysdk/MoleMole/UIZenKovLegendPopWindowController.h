#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class NKCCPBAANNI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x164EE830)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x164EEB90)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x164EE840)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x164EEDB0)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164EE8E0)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_PLAYCLOSEANIM_OFFSET UNITYSDK_OFFSET(0x164EEC00)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164EF0F0)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x164EF100)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x164EF1A0)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164EF260)
#define MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER___BASE_PLAYCLOSEANIM_OFFSET UNITYSDK_OFFSET(0x164EF2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenKovLegendPopWindowController_TypeDefinitionIndex = 55023;

	class UIZenKovLegendPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::UInt32 LCKHHPMOKAM; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Single PlayCloseAnim(::System::Action* callback, ::MIKOMFIBMBN nextPage, ::System::String* fadeOutAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*, ::MIKOMFIBMBN, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_PLAYCLOSEANIM_OFFSET))(this, callback, nextPage, fadeOutAnim);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Single __base_PlayCloseAnim(::System::Action* P0, ::MIKOMFIBMBN P1, ::System::String* P2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*, ::MIKOMFIBMBN, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER___BASE_PLAYCLOSEANIM_OFFSET))(this, P0, P1, P2);
		}

		::NKCCPBAANNI* OGMPOGIHBIK()
		{
			return ((::NKCCPBAANNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEGENDPOPWINDOWCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
