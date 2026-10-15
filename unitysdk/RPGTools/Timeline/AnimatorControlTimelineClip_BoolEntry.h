#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_BOOLENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xE8ADC80)

namespace RPGTools::Timeline
{
	class AnimatorControlTimelineClip_BoolEntry : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_BOOLENTRY_CTOR_OFFSET))(this);
		}

	};
}
