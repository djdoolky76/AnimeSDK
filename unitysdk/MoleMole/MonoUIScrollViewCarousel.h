#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUITableScrollV2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_CAROUSELSCROLLVIEWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1310F670)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_CAROUSELSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1310F560)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_DODESTROY_OFFSET UNITYSDK_OFFSET(0x1310EE50)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1310F950)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1310F9F0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1310FA80)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_REFRESHCAROUSELSETTING_OFFSET UNITYSDK_OFFSET(0x1310F1B0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELACTION_OFFSET UNITYSDK_OFFSET(0x1310F140)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELMOTIONSETTING_OFFSET UNITYSDK_OFFSET(0x1310F070)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELSETTING_OFFSET UNITYSDK_OFFSET(0x1310F010)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELTIME_OFFSET UNITYSDK_OFFSET(0x1310F0D0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STARTCAROUSEL_OFFSET UNITYSDK_OFFSET(0x1310F200)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STARTMOTIONCAROUSEL_OFFSET UNITYSDK_OFFSET(0x1310F350)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STOPCAROUSEL_OFFSET UNITYSDK_OFFSET(0x1310F3A0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1310EDF0)
#define MOLEMOLE_MONOUISCROLLVIEWCAROUSEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1310FB10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIScrollViewCarousel_TypeDefinitionIndex = 80028;

	class MonoUIScrollViewCarousel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MonoUITableScrollV2* scrollView; // 0x18
		::System::Single carouselTime; // 0x20
		::System::Single firstCarouselTime; // 0x24
		::System::Single exchangeDelayTime; // 0x28
		::System::Single motionSpeed; // 0x2C
		::System::Single controlMotionMaxSpeed; // 0x30
		::System::Single controlMotionAccelerate; // 0x34
		::UnityEngine::AnimationCurve* leaveLogicPosition2ViewPositionCurve; // 0x38
		::UnityEngine::AnimationCurve* enterLogicPosition2ViewPositionCurve; // 0x40
		::Foundation::Coroutine::CoroutineHandle carouselHandle; // 0x48
		::System::Int32 nowItemIndex; // 0x4C
		::System::Int32 maxItemNum; // 0x50
		::System::Boolean isDestroyed; // 0x54
		::System::Boolean isMoving; // 0x55
		::System::Byte _padding0[0x2];
		::System::Action* updateCallback; // 0x58
		::System::Action_2<::System::Int32, ::System::Int32>* changeCallback; // 0x60
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragBeginAction; // 0x68
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragAction; // 0x70
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* dragEndAction; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_UPDATE_OFFSET))(this);
		}

		::System::Void DoDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_DODESTROY_OFFSET))(this);
		}

		::System::Void SetCarouselSetting(::System::Int32 BDEPOACKHFJ, ::System::Action_2<::System::Int32, ::System::Int32>* FOBLADDNGGF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELSETTING_OFFSET))(this, BDEPOACKHFJ, FOBLADDNGGF);
		}

		::System::Void SetCarouselMotionSetting(::System::Int32 BDEPOACKHFJ, ::System::Action* JBEOFOIPGBF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELMOTIONSETTING_OFFSET))(this, BDEPOACKHFJ, JBEOFOIPGBF);
		}

		::System::Void SetCarouselTime(::System::Single IEGOGFCOPML, ::System::Single OOFMFFBJECG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELTIME_OFFSET))(this, IEGOGFCOPML, OOFMFFBJECG);
		}

		::System::Void SetCarouselAction(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* JKMHACANICP, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* ENNLOIMFLGO, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* MGBGEOFNDCF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_SETCAROUSELACTION_OFFSET))(this, JKMHACANICP, ENNLOIMFLGO, MGBGEOFNDCF);
		}

		::System::Void RefreshCarouselSetting(::System::Int32 BDEPOACKHFJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_REFRESHCAROUSELSETTING_OFFSET))(this, BDEPOACKHFJ);
		}

		::System::Void StartCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STARTCAROUSEL_OFFSET))(this);
		}

		::System::Void StartMotionCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STARTMOTIONCAROUSEL_OFFSET))(this);
		}

		::System::Void StopCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_STOPCAROUSEL_OFFSET))(this);
		}

		::System::Void CarouselScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_CAROUSELSCROLLVIEW_OFFSET))(this);
		}

		::System::Void CarouselScrollViewImmediately(::System::Boolean OGFKCPFOGDA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_CAROUSELSCROLLVIEWIMMEDIATELY_OFFSET))(this, OGFKCPFOGDA);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWCAROUSEL_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}
	};
}
