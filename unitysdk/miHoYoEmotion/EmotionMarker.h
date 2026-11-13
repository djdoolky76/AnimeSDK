#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseMarker.h"
#include "unitysdk/miHoYoEmotion/BaseMarker_POST_TYPE.h"

#define MIHOYOEMOTION_EMOTIONMARKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D1CD0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmotionMarker_TypeDefinitionIndex = 46992;

	class EmotionMarker : public ::miHoYoEmotion::BaseMarker
	{
	public:
		::miHoYoEmotion::BaseMarker_POST_TYPE postType; // 0x30
		::System::Single postTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTIONMARKER_CTOR_OFFSET))(this);
		}

	};
}
