#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class LLMABCLOIMP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_GET_EFFANIM_OFFSET UNITYSDK_OFFSET(0x1A2B3E50)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1A2B4090)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A2B3F80)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2B4010)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A2B3EB0)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A2B3F10)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_PLAYMAXANIM_OFFSET UNITYSDK_OFFSET(0x1A2B4380)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_PLAYNOTMAXANIM_OFFSET UNITYSDK_OFFSET(0x1A2B4470)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_REFRESHLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0x1A2B4560)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B4690)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A2B46F0)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2B4780)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A2B4810)
#define MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A2B48A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPulchraWidgetController_TypeDefinitionIndex = 47795;

	class UIInLevelPulchraWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::LLMABCLOIMP* _view; // 0x2C8
		::System::Int32 MLNKCNJEOMI; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animation* get_EffAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_GET_EFFANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_INIT_OFFSET))(this, index);
		}

		::System::Void PlayMaxAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_PLAYMAXANIM_OFFSET))(this);
		}

		::System::Void PlayNotMaxAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_PLAYNOTMAXANIM_OFFSET))(this);
		}

		::System::Void RefreshLightState(::System::Int32 curAttackTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER_REFRESHLIGHTSTATE_OFFSET))(this, curAttackTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
