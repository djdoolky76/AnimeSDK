#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MLIGDOAGEAI.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class JCCPACPPFNF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_CMMHIPILDBF_OFFSET UNITYSDK_OFFSET(0x18EE3ED0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x18EE3A70)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_ISALLOWINPUTPASS_OFFSET UNITYSDK_OFFSET(0x18EE3A80)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x18EE3A90)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18EE3A60)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18EE3D70)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EE3AA0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x18EE3DE0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EE3B40)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE3F50)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EE3F60)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x18EE4000)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EE4010)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABExpTopTipsPopWindowController_TypeDefinitionIndex = 74532;

	class UIRABExpTopTipsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean JEHJJKBHNAM; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_IGNOREFADING_OFFSET))(this);
		}

		::System::Boolean get_IsAllowInputPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_ISALLOWINPUTPASS_OFFSET))(this);
		}

		::MLIGDOAGEAI get_UICursorHideState()
		{
			return ((::MLIGDOAGEAI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::JCCPACPPFNF* OGMPOGIHBIK()
		{
			return ((::JCCPACPPFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CMMHIPILDBF()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_CMMHIPILDBF_OFFSET))(this);
		}
	};
}
