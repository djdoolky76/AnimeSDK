#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Splines/BezierKnot.h"

namespace PampelGames::RoadConstructor { class TrafficLane; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int B89FB8E2D6457A45_F93625C4FD11B785_TypeDefinitionIndex = 18808;

struct alignas(8) B89FB8E2D6457A45_F93625C4FD11B785
{
	::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>* F7945A5A500E26BE; // 0x10
	::UnityEngine::Splines::BezierKnot B161D4B125DD7527; // 0x18
	::System::Byte _padding0[0x4];
	::PampelGames::RoadConstructor::TrafficLane* E476C940080220AC; // 0x50
};
