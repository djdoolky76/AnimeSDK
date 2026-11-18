#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/OKKIMONLGJD.h"

class MMKIBJIFKDM;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x13B45340)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x13B45B20)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13B45350)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x13B455F0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x13B45570)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13B45480)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13B45420)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_SELECTTARGETENTRUST_OFFSET UNITYSDK_OFFSET(0x13B45A70)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13B45B90)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13B45BF0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x13B45C90)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x13B45D20)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13B45DD0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13B45E70)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapRightZenkovScrollViewController_TypeDefinitionIndex = 78431;

	class UrbanMapRightZenkovScrollViewController : public ::MoleMole::UIWidgetController
	{
	public:
		::LIBOIKJGAIH GAIIJJBLICA; // 0x2C8
		::MoleMole::UIControlReference* JAMOEFCABPM; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void SelectTargetEntrust(::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_SELECTTARGETENTRUST_OFFSET))(this, questId);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::MMKIBJIFKDM* OGMPOGIHBIK()
		{
			return ((::MMKIBJIFKDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
