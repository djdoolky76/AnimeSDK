#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }
namespace System { class Action; }

#define LJCDOJAMPMF_GDMCHIGHKCP_LLIOGJLKLMO_OFFSET UNITYSDK_OFFSET(0xD431340)
#define LJCDOJAMPMF_GDMCHIGHKCP__CTOR_OFFSET UNITYSDK_OFFSET(0xD431330)

inline static constexpr unsigned int LJCDOJAMPMF_GDMCHIGHKCP_TypeDefinitionIndex = 71949;

class LJCDOJAMPMF_GDMCHIGHKCP : public ::System::Object
{
public:
	::System::Action* CBDBDDFEPEK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_GDMCHIGHKCP__CTOR_OFFSET))(this);
	}

	::System::Void LLIOGJLKLMO(::FluffyUnderware::Curvy::CurvySplineEventArgs* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_GDMCHIGHKCP_LLIOGJLKLMO_OFFSET))(this, PIIPCLCCOIG);
	}
};
