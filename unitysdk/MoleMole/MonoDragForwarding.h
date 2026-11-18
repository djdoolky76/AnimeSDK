#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONODRAGFORWARDING_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x162DB4A0)
#define MOLEMOLE_MONODRAGFORWARDING_ONDRAG_OFFSET UNITYSDK_OFFSET(0x162DB6F0)
#define MOLEMOLE_MONODRAGFORWARDING_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x162DB940)
#define MOLEMOLE_MONODRAGFORWARDING_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x162DBB90)
#define MOLEMOLE_MONODRAGFORWARDING__CTOR_OFFSET UNITYSDK_OFFSET(0x162DBDE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragForwarding_TypeDefinitionIndex = 85319;

	class MonoDragForwarding : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGFORWARDING__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGFORWARDING_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGFORWARDING_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGFORWARDING_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGFORWARDING_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, DIHNFECKHMD);
		}
	};
}
