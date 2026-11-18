#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOUIDRAGSETTER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x124999A0)
#define MOLEMOLE_MONOUIDRAGSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12499A00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIDragSetter_TypeDefinitionIndex = 63217;

	class MonoUIDragSetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIDRAGSETTER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIDRAGSETTER_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}
	};
}
