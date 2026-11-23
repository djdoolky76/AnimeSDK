#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PampelGames::RoadConstructor { class Switcher; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLIGHTSWITCH_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x28C17D0)
#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLIGHTSWITCH_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x28C1420)
#define PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLIGHTSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x28C1AE0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int TrafficLightSwitch_TypeDefinitionIndex = 16252;

	class TrafficLightSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean active; // 0x20
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::Switcher*>* switchers; // 0x28
		::System::Int32 B2F81F6B31B267A9; // 0x30
		::System::Single FE560F34F1486BB5; // 0x34
		::System::Double A98A4CDD896BFF65; // 0x38

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLIGHTSWITCH_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLIGHTSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TRAFFICLIGHTSWITCH_E02954280801633F_OFFSET))(this);
		}
	};
}
