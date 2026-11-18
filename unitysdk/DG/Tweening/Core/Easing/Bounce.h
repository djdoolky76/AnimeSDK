#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DG_TWEENING_CORE_EASING_BOUNCE_EASEINOUT_OFFSET UNITYSDK_OFFSET(0x1FFFD990)
#define DG_TWEENING_CORE_EASING_BOUNCE_EASEIN_OFFSET UNITYSDK_OFFSET(0x1FFFD800)
#define DG_TWEENING_CORE_EASING_BOUNCE_EASEOUT_OFFSET UNITYSDK_OFFSET(0x1FFFD8E0)

namespace DG::Tweening::Core::Easing
{
	inline static constexpr unsigned int Bounce_TypeDefinitionIndex = 28044;

	class Bounce : public ::System::Object
	{
	public:
		static ::System::Single EaseIn(::System::Single time, ::System::Single duration, ::System::Single unusedOvershootOrAmplitude, ::System::Single unusedPeriod)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_BOUNCE_EASEIN_OFFSET))(time, duration, unusedOvershootOrAmplitude, unusedPeriod);
		}

		static ::System::Single EaseOut(::System::Single time, ::System::Single duration, ::System::Single unusedOvershootOrAmplitude, ::System::Single unusedPeriod)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_BOUNCE_EASEOUT_OFFSET))(time, duration, unusedOvershootOrAmplitude, unusedPeriod);
		}

		static ::System::Single EaseInOut(::System::Single time, ::System::Single duration, ::System::Single unusedOvershootOrAmplitude, ::System::Single unusedPeriod)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_BOUNCE_EASEINOUT_OFFSET))(time, duration, unusedOvershootOrAmplitude, unusedPeriod);
		}
	};
}
