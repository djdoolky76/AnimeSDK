#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }
namespace System { class Action; }

#define MHIADGINMFH_HPHFPFOPMGK_LLIOGJLKLMO_OFFSET UNITYSDK_OFFSET(0x1853D3A0)
#define MHIADGINMFH_HPHFPFOPMGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1853D390)

inline static constexpr unsigned int MHIADGINMFH_HPHFPFOPMGK_TypeDefinitionIndex = 41441;

class MHIADGINMFH_HPHFPFOPMGK : public ::System::Object
{
public:
	::System::Action* CBDBDDFEPEK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIADGINMFH_HPHFPFOPMGK__CTOR_OFFSET))(this);
	}

	::System::Void LLIOGJLKLMO(::FluffyUnderware::Curvy::CurvySplineEventArgs* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + MHIADGINMFH_HPHFPFOPMGK_LLIOGJLKLMO_OFFSET))(this, PIIPCLCCOIG);
	}
};
