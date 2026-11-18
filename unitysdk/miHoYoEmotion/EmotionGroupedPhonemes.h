#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYOEMOTION_EMOTIONGROUPEDPHONEMES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D594FA0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmotionGroupedPhonemes_TypeDefinitionIndex = 38076;

	class EmotionGroupedPhonemes
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTIONGROUPEDPHONEMES__CTOR_OFFSET))(this);
		}
	};
}
