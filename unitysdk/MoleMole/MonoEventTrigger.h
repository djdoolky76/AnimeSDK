#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOEVENTTRIGGER_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0x14AFC760)
#define MOLEMOLE_MONOEVENTTRIGGER_CLEARTRIGGERS_OFFSET UNITYSDK_OFFSET(0x14AFC930)
#define MOLEMOLE_MONOEVENTTRIGGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x14AFC620)
#define MOLEMOLE_MONOEVENTTRIGGER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x14AFEE60)
#define MOLEMOLE_MONOEVENTTRIGGER_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x14AFCBF0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x14AFE600)
#define MOLEMOLE_MONOEVENTTRIGGER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x14AFEC50)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x14AFDBB0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14AFC5B0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14AFC560)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14AFCEF0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x14AFD100)
#define MOLEMOLE_MONOEVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x14AFE820)
#define MOLEMOLE_MONOEVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x14AFE3F0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x14AFDFD0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x14AFD770)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x14AFD310)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x14AFC9E0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x14AFCCE0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x14AFD540)
#define MOLEMOLE_MONOEVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x14AFDDC0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x14AFD9A0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x14AFEA40)
#define MOLEMOLE_MONOEVENTTRIGGER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x14AFE1E0)
#define MOLEMOLE_MONOEVENTTRIGGER_REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x14AFC820)
#define MOLEMOLE_MONOEVENTTRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14AFC670)
#define MOLEMOLE_MONOEVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x14AFEE70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEventTrigger_TypeDefinitionIndex = 67160;

	class MonoEventTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* triggers; // 0x18
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnPointerClickListener; // 0x20
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnPointerDownListener; // 0x28
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnPointerUpListener; // 0x30
		::System::Action_1<::System::Single>* OnLongPressListener; // 0x38
		::UnityEngine::GameObject* target; // 0x40
		::System::Boolean AJCJEJGICBA; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single INCIJKPAGGM; // 0x4C
		::System::Single IHMIDGKALEE; // 0x50
		::System::Boolean DNACIJFMMKE; // 0x54
		::System::Byte _padding1[0x3];
		::System::Single HCPPPBMLNNE; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_CLEAR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_UPDATE_OFFSET))(this);
		}

		::System::Void AddTrigger(::UnityEngine::EventSystems::EventTrigger_Entry* AAIJGGIEOGK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ADDTRIGGER_OFFSET))(this, AAIJGGIEOGK);
		}

		::System::Void RemoveTrigger(::UnityEngine::EventSystems::EventTriggerType MGMDLMBEDJF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTriggerType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_REMOVETRIGGER_OFFSET))(this, MGMDLMBEDJF);
		}

		::System::Void ClearTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_CLEARTRIGGERS_OFFSET))(this);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERENTER_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTEREXIT_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDROP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERUP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONSELECT_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDESELECT_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONSCROLL_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONMOVE_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONUPDATESELECTED_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONSUBMIT_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONCANCEL_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Boolean get_isDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Void KNDMMHPDPIB(::UnityEngine::EventSystems::EventTriggerType MGMDLMBEDJF, ::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTriggerType, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_KNDMMHPDPIB_OFFSET))(this, MGMDLMBEDJF, DIHNFECKHMD);
		}
	};
}
