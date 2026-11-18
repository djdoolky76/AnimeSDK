#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class DragableRectController_GDBIKNOJEMG; }
namespace MoleMole { class DragableRectController_IEMHOBJBHBN; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_DRAGABLERECTCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x103E4870)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x103E49E0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x103E4D20)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x103E4E80)
#define MOLEMOLE_DRAGABLERECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x103E51D0)

namespace MoleMole
{
	inline static constexpr unsigned int DragableRectController_TypeDefinitionIndex = 45960;

	class DragableRectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Boolean IsDeActiveWhenMoveToTarget; // 0x19
		::System::Byte _padding0[0x6];
		::UnityEngine::RectTransform* Source; // 0x20
		::UnityEngine::RectTransform* Target; // 0x28
		::System::Single Offset; // 0x30
		::System::Single AutoMoveSpeed; // 0x34
		::MoleMole::DragableRectController_GDBIKNOJEMG* OnDragToTarget; // 0x38
		::MoleMole::DragableRectController_IEMHOBJBHBN* OnDragToTargetCheck; // 0x40
		::UnityEngine::Vector3 MIBAEHBPIEF; // 0x48
		::System::Boolean LIFKJAGIJDO; // 0x54
		::System::Boolean NPCFMPOIELA; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
