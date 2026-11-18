#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CHBFBFAPPCC;
class KJEIDMOBAJJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_AFKKPHOJHKJ_OFFSET UNITYSDK_OFFSET(0x18E6ABE0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_FKLJJIHNEEP_OFFSET UNITYSDK_OFFSET(0x18E6AC20)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_GET_POINTLIST_OFFSET UNITYSDK_OFFSET(0x18E69E80)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET UNITYSDK_OFFSET(0x18E6ABB0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_JNLHGILGEOC_OFFSET UNITYSDK_OFFSET(0x18E6A7E0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E6A410)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E6A4A0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E69EA0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E6A3A0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_PLAYFINISHANIM_OFFSET UNITYSDK_OFFSET(0x18E6A890)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x18E6A280)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_UPDATESTARDISPLAY_OFFSET UNITYSDK_OFFSET(0x18E6A520)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6A910)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E6A970)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E6AA00)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E6AA90)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E6AB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerMiniGameWidgetController_TypeDefinitionIndex = 86900;

	class UIHackerMiniGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KJEIDMOBAJJ* _view; // 0x2C8
		::CHBFBFAPPCC* OPOLMJLMHCD; // 0x2D0
		::UnityEngine::AnimationCurve* pointsFinishCurve; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_PointList()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_GET_POINTLIST_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Boolean show, ::System::Int32 curProgress, ::System::Int32 totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, show, curProgress, totalProgress);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateStarDisplay(::System::Int32 curStar, ::System::Int32 starMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_UPDATESTARDISPLAY_OFFSET))(this, curStar, starMax);
		}

		::System::Void PlayFinishAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_PLAYFINISHANIM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::String* JNLHGILGEOC(::System::Int32 BIOGEIHKABE)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_JNLHGILGEOC_OFFSET))(this, BIOGEIHKABE);
		}

		::System::Void ILBPOJOHJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET))(this);
		}

		::System::Void AFKKPHOJHKJ(::System::Boolean LJGPHMJCCKO, ::System::Int32 PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_AFKKPHOJHKJ_OFFSET))(this, LJGPHMJCCKO, PIIPCLCCOIG);
		}

		::System::Void FKLJJIHNEEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_FKLJJIHNEEP_OFFSET))(this);
		}
	};
}
