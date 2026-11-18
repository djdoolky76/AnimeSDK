#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_BNOEPCIMGBP_OFFSET UNITYSDK_OFFSET(0x15AB6630)
#define MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_GET_ISPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x15AB64B0)
#define MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15AB6580)
#define MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x15AB64C0)
#define MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x15AB6520)
#define MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB65E0)

namespace MoleMole
{
	inline static constexpr unsigned int MobileButtonSliderInteractionRelay_TypeDefinitionIndex = 80496;

	class MobileButtonSliderInteractionRelay : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* PointerDown; // 0x18
		::System::Action* PointerUp; // 0x20
		::System::Boolean _NFKGJPKOJGO_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPointerDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_GET_ISPOINTERDOWN_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_ONPOINTERUP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_ONDISABLE_OFFSET))(this);
		}

		::System::Void BNOEPCIMGBP(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILEBUTTONSLIDERINTERACTIONRELAY_BNOEPCIMGBP_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
