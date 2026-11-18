#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class DEDDPKGLKHI_OBJJGPCGHJK;
class HIIJCKACPDL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_DLPHNANBHMA_OFFSET UNITYSDK_OFFSET(0x17BD6560)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x17BD5DF0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_GJONDDHEPMD_OFFSET UNITYSDK_OFFSET(0x17BD6BF0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_KDIFABPOLCH_OFFSET UNITYSDK_OFFSET(0x17BD6F50)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BD6090)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BD6120)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BD5E00)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BD6020)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_OPLPAPOAFEK_OFFSET UNITYSDK_OFFSET(0x17BD6BD0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_PPCAAJHJGHI_OFFSET UNITYSDK_OFFSET(0x17BD6CD0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x17BD62F0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_SETANIMMOVE_OFFSET UNITYSDK_OFFSET(0x17BD6660)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD68D0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BD6990)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BD6A20)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BD6AB0)
#define MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BD6B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardTipWidgetController_TypeDefinitionIndex = 84110;

	class UIRewardTipWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::HIIJCKACPDL* _view; // 0x2C8
		::System::Single IACGHGNFIAH; // 0x2D0
		::System::Boolean MEMEINPDGMG; // 0x2D4
		::System::Boolean GLMDBDPBNOD; // 0x2D5
		::System::Byte _padding0[0x2];
		::System::Single MCOKMPLPNEF; // 0x2D8
		::System::Boolean isFirstEnter; // 0x2DC
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 startAnchorPos; // 0x2E0
		::UnityEngine::Vector2 targetAnchorPos; // 0x2E8
		::UnityEngine::AnimationCurve* motionCurve; // 0x2F0
		::System::Single totalTime; // 0x2F8
		::System::Single passTime; // 0x2FC
		::UnityEngine::RectTransform* rectTrans; // 0x300
		::Foundation::Coroutine::CoroutineHandle moveCoroutine; // 0x308
		::System::Byte _padding2[0x4];
		::System::Action* HBGEEAHFAJL; // 0x310
		::DEDDPKGLKHI_OBJJGPCGHJK* GFOLJELBIMF; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshUI(::DEDDPKGLKHI_OBJJGPCGHJK* rewardTip, ::System::Int32 redirectCount, ::System::Action* OnFinishCb)
		{
			return ((::System::Void(*)(::PVOID, ::DEDDPKGLKHI_OBJJGPCGHJK*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_REFRESHUI_OFFSET))(this, rewardTip, redirectCount, OnFinishCb);
		}

		::System::Void SetAnimMove(::UnityEngine::Vector2 targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_SETANIMMOVE_OFFSET))(this, targetPos);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OPLPAPOAFEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_OPLPAPOAFEK_OFFSET))(this);
		}

		::System::Void DLPHNANBHMA(::System::Single JOFGIANGHMK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_DLPHNANBHMA_OFFSET))(this, JOFGIANGHMK);
		}

		::System::Void GJONDDHEPMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_GJONDDHEPMD_OFFSET))(this);
		}

		::System::Void PPCAAJHJGHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_PPCAAJHJGHI_OFFSET))(this);
		}

		::System::Void KDIFABPOLCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPWIDGETCONTROLLER_KDIFABPOLCH_OFFSET))(this);
		}
	};
}
