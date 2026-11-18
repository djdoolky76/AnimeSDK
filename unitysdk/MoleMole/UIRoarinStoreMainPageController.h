#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class KBOCBACPBFE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1649E630)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1649E790)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONBEFOREPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1649E890)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1649E640)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1649E6E0)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1649E800)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1649E9D0)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONBEFOREPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1649E9E0)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1649EA80)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1649EB20)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1649EB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreMainPageController_TypeDefinitionIndex = 87953;

	class UIRoarinStoreMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnBeforePlayAnimation(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* anim)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONBEFOREPLAYANIMATION_OFFSET))(this, flag, anim);
		}

		::System::Void __base_OnBeforePlayAnimation(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONBEFOREPLAYANIMATION_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::KBOCBACPBFE* OGMPOGIHBIK()
		{
			return ((::KBOCBACPBFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
