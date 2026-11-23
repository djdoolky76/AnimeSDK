#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class RoadObject; }
namespace UnityEngine::Splines { class Spline; }

#define A0824F3FA0BBD43B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0824F3FA0BBD43B_TypeDefinitionIndex = 18786;

class A0824F3FA0BBD43B : public ::System::Object
{
public:
	::PampelGames::RoadConstructor::RoadObject* FFE7EFBE3DD7EC3C; // 0x10
	::UnityEngine::Splines::Spline* F03E0BDCBABB08A2; // 0x18
	::System::Single F54F48CFDE395850; // 0x20
	::System::Int32 E4DF207EF90213B4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0824F3FA0BBD43B__CTOR_OFFSET))(this);
	}
};
