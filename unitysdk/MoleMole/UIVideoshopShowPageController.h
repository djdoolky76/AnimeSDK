#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class PJJCJCDLDEN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoshopShowContext; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x171981A0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBGANIM_OFFSET UNITYSDK_OFFSET(0x171986B0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBLACKMASKANIM_OFFSET UNITYSDK_OFFSET(0x17198770)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETCONTENTGO_OFFSET UNITYSDK_OFFSET(0x171987D0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETINFOANIM_OFFSET UNITYSDK_OFFSET(0x17198710)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETSKIPBTNANIM_OFFSET UNITYSDK_OFFSET(0x17198650)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17197FC0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_IDFPKBMKJNN_OFFSET UNITYSDK_OFFSET(0x17198990)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17197FD0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171985E0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17198060)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171980B0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17198840)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17198850)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171988E0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171988F0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17198900)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopShowPageController_TypeDefinitionIndex = 51301;

	class UIVideoshopShowPageController : public ::MoleMole::UIWindowController
	{
	public:
		::PJJCJCDLDEN* _view; // 0x320
		::MoleMole::UIVideoshopShowContext* DAAAEJDBNFI; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Animation* GetSkipBtnAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETSKIPBTNANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetBgAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBGANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetInfoAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETINFOANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetBlackMaskAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBLACKMASKANIM_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetContentGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETCONTENTGO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void IDFPKBMKJNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_IDFPKBMKJNN_OFFSET))(this);
		}
	};
}
