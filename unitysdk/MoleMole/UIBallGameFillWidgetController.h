#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNHPGJBLLPG.h"
#include "unitysdk/LDKCHEEKEMJ.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/NKCKADEDLED.h"

class FDLMOFBEHGH;
class KBDGKAJPALP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }

#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_DELCDBANENF_OFFSET UNITYSDK_OFFSET(0x1ED91380)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FEFEIEMJNJO_OFFSET UNITYSDK_OFFSET(0x1ED91B40)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FLGHHCOENMI_OFFSET UNITYSDK_OFFSET(0x1ED91D10)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_LKGDGNKKFBA_OFFSET UNITYSDK_OFFSET(0x1ED913E0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_NEAAEACKOOP_OFFSET UNITYSDK_OFFSET(0x1ED91E60)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1ED90CC0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1ED90D50)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1ED90970)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1ED90AE0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ED91310)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_PHPMJEEMAFH_OFFSET UNITYSDK_OFFSET(0x1ED92030)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x1ED914E0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1ED90DE0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SAMPLEFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x1ED91640)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SETCURRENTWAVE_OFFSET UNITYSDK_OFFSET(0x1ED91740)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED91790)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1ED91900)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1ED91990)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1ED91A20)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1ED91AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameFillWidgetController_TypeDefinitionIndex = 95040;

	class UIBallGameFillWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::FDLMOFBEHGH* _view; // 0x2C8
		::System::Single DEOMJMJPINK; // 0x2D0
		::System::Byte _padding0[0x4];
		::NKCKADEDLED ENNLCEOLKGJ; // 0x2D8
		::UnityEngine::UI::Extension::UILinearProgressBar* PIOPCHFCIMD; // 0x2E8
		::KBDGKAJPALP* GEEHGDABNJF; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::HNHPGJBLLPG>* OOEFPPDHANI; // 0x2F8
		::System::Collections::Generic::List_1<::System::Object*>* EJDMHOEJOHO; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::NKCKADEDLED wave)
		{
			return ((::System::Void(*)(::PVOID, ::NKCKADEDLED))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, wave);
		}

		::System::Void PlayFadeOutAnimation(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this, callback);
		}

		::System::Void SampleFadeInAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SAMPLEFADEINANIMATION_OFFSET))(this);
		}

		::System::Void SetCurrentWave(::System::Int32 waveIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SETCURRENTWAVE_OFFSET))(this, waveIndex);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void FEFEIEMJNJO(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FEFEIEMJNJO_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void LKGDGNKKFBA(::System::Single BFGHPIFHKAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_LKGDGNKKFBA_OFFSET))(this, BFGHPIFHKAO);
		}

		::System::Void FLGHHCOENMI(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FLGHHCOENMI_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void NEAAEACKOOP(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_NEAAEACKOOP_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void PHOADBJGFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_PHOADBJGFBE_OFFSET))(this);
		}

		::HNHPGJBLLPG DELCDBANENF(::LDKCHEEKEMJ OBNIAHNMHPF)
		{
			return ((::HNHPGJBLLPG(*)(::PVOID, ::LDKCHEEKEMJ))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_DELCDBANENF_OFFSET))(this, OBNIAHNMHPF);
		}

		::System::Void PHPMJEEMAFH(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_PHPMJEEMAFH_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
