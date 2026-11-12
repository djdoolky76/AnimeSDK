#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHCHANGEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D672060)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcMath_MathChangedEvent_TypeDefinitionIndex = 36974;

	class BGCcMath_MathChangedEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHCHANGEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
