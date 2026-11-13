#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPGTOOLS_TIMELINE_STORYENTITYANIMATORCURVEPARAM_OMCOKGCFJBD_OFFSET UNITYSDK_OFFSET(0x1DA1DFC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryEntityAnimatorCurveParam_TypeDefinitionIndex = 49274;

	struct alignas(8) StoryEntityAnimatorCurveParam
	{
		::System::String* ParameterName; // 0x10
		::System::Single FloatValue; // 0x18
		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* OMCOKGCFJBD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYENTITYANIMATORCURVEPARAM_OMCOKGCFJBD_OFFSET))();
		}

	};
}
