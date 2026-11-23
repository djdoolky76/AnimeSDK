#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/Splines/BezierKnot.h"

namespace PampelGames::RoadConstructor { class TrafficLane; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B89FB8E2D6457A45_E66C5FACF38A60DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B89FB8E2D6457A45_E66C5FACF38A60DE_TypeDefinitionIndex = 18803;

class B89FB8E2D6457A45_E66C5FACF38A60DE : public ::System::Object
{
public:
	::UnityEngine::Splines::BezierKnot E6C6E10D8DC622F3; // 0x10
	::Unity::Mathematics::float3 AE7E49C554B74A00; // 0x44
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* F6945567C86308C4; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>* A3C5DB1416CAF922; // 0x58
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* A8E49FFE3A14455B; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>* F91866925305FC1C; // 0x68
	::System::Single F9BA0A8652D1E637; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_E66C5FACF38A60DE__CTOR_OFFSET))(this);
	}
};
