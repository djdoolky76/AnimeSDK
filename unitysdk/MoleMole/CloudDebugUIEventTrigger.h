#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_CICCBNCOFDM_OFFSET UNITYSDK_OFFSET(0x19279370)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_GETCLOUDDEBUGUIEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x19278A20)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_MELPODEHOGH_OFFSET UNITYSDK_OFFSET(0x19278DC0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1927A160)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x192796E0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x19279870)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1927A280)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x19279FD0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x19279CB0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x19279A00)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x192791F0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x19279550)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19279B20)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x19279E40)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1927A410)

namespace MoleMole
{
	inline static constexpr unsigned int CloudDebugUIEventTrigger_TypeDefinitionIndex = 52825;

	class CloudDebugUIEventTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::CloudDebugUIEventTrigger** StaticGet_Ins()
		{
			return (::MoleMole::CloudDebugUIEventTrigger**)Il2CppClass::FromTypeDefinitionIndex(CloudDebugUIEventTrigger_TypeDefinitionIndex)->GetStaticField(0x52080);
		}
		::System::Boolean IsPassUIEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::CloudDebugUIEventTrigger* GetCloudDebugUIEventTrigger()
		{
			return ((::MoleMole::CloudDebugUIEventTrigger*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_GETCLOUDDEBUGUIEVENTTRIGGER_OFFSET))();
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERENTER_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTEREXIT_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONDROP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERUP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONSCROLL_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void CICCBNCOFDM(::UnityEngine::EventSystems::EventTriggerType GEPABHJBIAH, ::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTriggerType, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_CICCBNCOFDM_OFFSET))(this, GEPABHJBIAH, DIHNFECKHMD);
		}

		static ::UnityEngine::GameObject* MELPODEHOGH(::System::String* FHCKJMMOFJG, ::UnityEngine::Transform* JNLBPMKIFNK)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_MELPODEHOGH_OFFSET))(FHCKJMMOFJG, JNLBPMKIFNK);
		}
	};
}
