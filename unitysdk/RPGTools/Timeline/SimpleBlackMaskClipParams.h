#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIPPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xF458650)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SimpleBlackMaskClipParams_TypeDefinitionIndex = 49345;

	class SimpleBlackMaskClipParams : public ::System::Object
	{
	public:
		::System::Single FadeStayDuration; // 0x10
		::System::Single FadeInDuration; // 0x14
		::System::Single FadeOutDuration; // 0x18
		::System::Boolean NeedFadeIn; // 0x1C
		::System::Boolean NeedFadeOut; // 0x1D
		::System::Boolean NeedFadeStay; // 0x1E
		::System::Byte _padding0[0x1];
		::System::Single FinalAlpha; // 0x20
		::RPG::GameCore::SimpleTalkBlackMaskColor FadeColor; // 0x24
		::System::Single Duration; // 0x28
		::System::Single InitialAlpha; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIPPARAMS_CTOR_OFFSET))(this);
		}

	};
}
