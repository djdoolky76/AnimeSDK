#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class FDMHNCFFCAO;
class NIJIAADMKIJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_GETCONTROL_OFFSET UNITYSDK_OFFSET(0x15949380)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15949370)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x159494E0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15949660)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15949570)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x159495C0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x159496E0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15949720)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15949810)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15949860)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15949870)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15949880)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallPitTestPageController_TypeDefinitionIndex = 82075;

	class UIBallPitTestPageController : public ::MoleMole::UIWindowController
	{
	public:
		::FDMHNCFFCAO* _view; // 0x320
		::NIJIAADMKIJ* LCHGBMOGNJG; // 0x328
		::UnityEngine::RectTransform* GNGOOHCCLDF; // 0x330
		::UnityEngine::RectTransform* HPNHHFIDGKI; // 0x338
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* GCLGNKECBAO; // 0x340
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* IHHAFNIHBME; // 0x348
		::UnityEngine::RectTransform* LHIOBNFIDPH; // 0x350
		::UnityEngine::UI::Text* MCBMDGGGEFB; // 0x358
		::UnityEngine::RectTransform* DFAFMDDONBA; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::NIJIAADMKIJ* GetControl()
		{
			return ((::NIJIAADMKIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_GETCONTROL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
