#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOSCROLLBLOCKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1043FDE0)
#define MOLEMOLE_MONOSCROLLBLOCKER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1043FE70)
#define MOLEMOLE_MONOSCROLLBLOCKER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1043FFC0)
#define MOLEMOLE_MONOSCROLLBLOCKER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x10440110)
#define MOLEMOLE_MONOSCROLLBLOCKER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x10440260)
#define MOLEMOLE_MONOSCROLLBLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0x104403B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollBlocker_TypeDefinitionIndex = 79835;

	class MonoScrollBlocker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean BlockScrollInput; // 0x18
		::System::Boolean BlockDragInput; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBLOCKER_ONSCROLL_OFFSET))(this, DIHNFECKHMD);
		}
	};
}
