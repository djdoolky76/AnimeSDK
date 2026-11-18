#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1469DC50)
#define MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1469DD80)
#define MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1469DE80)
#define MOLEMOLE_MONOUIEVENTPENETERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1469DF80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIEventPeneterate_TypeDefinitionIndex = 73371;

	class MonoUIEventPeneterate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean onlyFirstUnderneath; // 0x18
		::System::Byte _padding0[0x7];
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnClick; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEVENTPENETERATE__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERCLICK_OFFSET))(this, NFFNEFLKPDG);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERDOWN_OFFSET))(this, NFFNEFLKPDG);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEVENTPENETERATE_ONPOINTERUP_OFFSET))(this, NFFNEFLKPDG);
		}
	};
}
