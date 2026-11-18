#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/OKKIMONLGJD.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HFJBHBKDMJO;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19183EF0)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19183F60)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19184250)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONOUTERGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19184420)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONSERVERINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x19184690)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19184070)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19184000)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19184700)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19184760)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19184800)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19184890)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19184930)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameCollectBulletWidgetController_TypeDefinitionIndex = 45154;

	class UIBallGameCollectBulletWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::HFJBHBKDMJO* get__viewModel()
		{
			return ((::HFJBHBKDMJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnOuterGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONOUTERGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnServerInfoChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONSERVERINFOCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
