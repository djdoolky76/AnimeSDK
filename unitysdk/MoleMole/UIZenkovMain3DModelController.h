#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/GMKJPFMGGHJ.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class EEIKFHHOMOJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13BFA7C0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_IKDHKBJDMFI_OFFSET UNITYSDK_OFFSET(0x13BFB7A0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_KDOENEOABFG_OFFSET UNITYSDK_OFFSET(0x13BFB1D0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_KGDFFFKDAIJ_OFFSET UNITYSDK_OFFSET(0x13BFABB0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_KNCDDDDAEKA_OFFSET UNITYSDK_OFFSET(0x13BFB8D0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13BFA9F0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13BFAA80)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13BFA7D0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13BFA820)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x13BFAB30)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BFB670)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13BFB6E0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13BFB770)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13BFB780)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13BFB790)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMain3DModelController_TypeDefinitionIndex = 69132;

	class UIZenkovMain3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::EEIKFHHOMOJ* _view; // 0x368
		::Foundation::Coroutine::CoroutineHandle CIPMCJKJCPO; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void KGDFFFKDAIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_KGDFFFKDAIJ_OFFSET))(this);
		}

		::UnityEngine::Transform* IKDHKBJDMFI(::System::String* MCOHLHMKLIP)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_IKDHKBJDMFI_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void KNCDDDDAEKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_KNCDDDDAEKA_OFFSET))(this);
		}

		::System::Void KDOENEOABFG(::GMKJPFMGGHJ FBJCDNAGMPM)
		{
			return ((::System::Void(*)(::PVOID, ::GMKJPFMGGHJ))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_KDOENEOABFG_OFFSET))(this, FBJCDNAGMPM);
		}
	};
}
