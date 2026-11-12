#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::EventSystems { class AxisEventData; }

#define RPG_CLIENT_MONOUIFOURWAYNAVIGATION_CTOR_OFFSET UNITYSDK_OFFSET(0xE2CE360)
#define RPG_CLIENT_MONOUIFOURWAYNAVIGATION_ONMOVE_OFFSET UNITYSDK_OFFSET(0xE2CE2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIFourWayNavigation_TypeDefinitionIndex = 70931;

	class MonoUIFourWayNavigation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOURWAYNAVIGATION_CTOR_OFFSET))(this);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIFOURWAYNAVIGATION_ONMOVE_OFFSET))(this, a1);
		}

	};
}
