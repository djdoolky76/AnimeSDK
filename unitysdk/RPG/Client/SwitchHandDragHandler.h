#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_SWITCHHANDDRAGHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE155960)
#define RPG_CLIENT_SWITCHHANDDRAGHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xE155910)

namespace RPG::Client
{
	class SwitchHandDragHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDDRAGHANDLER_CTOR_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDDRAGHANDLER_ONDRAG_OFFSET))(this, a1);
		}

	};
}
