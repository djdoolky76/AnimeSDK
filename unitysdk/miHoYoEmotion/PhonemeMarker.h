#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseMarker.h"

#define MIHOYOEMOTION_PHONEMEMARKER_CTOR_OFFSET UNITYSDK_OFFSET(0xB0BF820)

namespace miHoYoEmotion
{
	class PhonemeMarker : public ::miHoYoEmotion::BaseMarker
	{
	public:
		::System::Boolean isSingleFrame; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PHONEMEMARKER_CTOR_OFFSET))(this);
		}

	};
}
