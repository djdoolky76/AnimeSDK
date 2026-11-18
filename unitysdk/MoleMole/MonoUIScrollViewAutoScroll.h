#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOBMPCEGCL.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUITableScrollV2;
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x13F07200)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_BEGINSCROLL_OFFSET UNITYSDK_OFFSET(0x13F07440)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x13F07370)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_STOPSUBTITLESSCROLL_OFFSET UNITYSDK_OFFSET(0x13F073F0)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x13F07680)
#define MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x13F07AE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIScrollViewAutoScroll_TypeDefinitionIndex = 82685;

	class MonoUIScrollViewAutoScroll : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MonoUITableScrollV2* scrollView; // 0x18
		::System::Single scrollDuration; // 0x20
		::System::Single beginScrollDelay; // 0x24
		::System::Single scrollEndWaitTime; // 0x28
		::CAOBMPCEGCL OHDAFIKPDGB; // 0x2C
		::System::Single ACLCLFLJKPO; // 0x30
		::System::Single AEIPKJJLBFA; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void BeginScroll(::System::Single IEMEOFIAKHO, ::System::Single LOPMOCNLNOB, ::System::Single DKHJBACFIDO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_BEGINSCROLL_OFFSET))(this, IEMEOFIAKHO, LOPMOCNLNOB, DKHJBACFIDO);
		}

		::System::Void StopSubtitlesScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_STOPSUBTITLESSCROLL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUISCROLLVIEWAUTOSCROLL_UPDATE_OFFSET))(this);
		}
	};
}
