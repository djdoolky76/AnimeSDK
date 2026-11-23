#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Splines/BezierKnot.h"

#define E19F70DCB9D21BB3__CTOR_OFFSET UNITYSDK_OFFSET(0x3DA7960)

inline static constexpr unsigned int E19F70DCB9D21BB3_TypeDefinitionIndex = 18910;

class E19F70DCB9D21BB3 : public ::System::Object
{
public:
	::System::Int32 E4DF207EF90213B4; // 0x10
	::UnityEngine::Splines::BezierKnot E6C6E10D8DC622F3; // 0x14
	::System::Int32 A74D05A6A6478159; // 0x48
	::UnityEngine::Splines::BezierKnot F92DA9C9566BA8DE; // 0x4C
	::System::Single AD1329E16AB80F43; // 0x80

	::System::Void _ctor(::System::Int32 E4DF207EF90213B4, ::UnityEngine::Splines::BezierKnot E6C6E10D8DC622F3, ::System::Int32 A74D05A6A6478159, ::UnityEngine::Splines::BezierKnot F92DA9C9566BA8DE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Splines::BezierKnot, ::System::Int32, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + E19F70DCB9D21BB3__CTOR_OFFSET))(this, E4DF207EF90213B4, E6C6E10D8DC622F3, A74D05A6A6478159, F92DA9C9566BA8DE);
	}
};
