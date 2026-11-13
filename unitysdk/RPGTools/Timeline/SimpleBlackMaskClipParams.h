#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIPPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1B760)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SimpleBlackMaskClipParams_TypeDefinitionIndex = 49345;

	class SimpleBlackMaskClipParams : public ::System::Object
	{
	public:
		::System::Single FinalAlpha; // 0x10
		::System::Single Duration; // 0x14
		::System::Boolean NeedFadeOut; // 0x18
		::System::Boolean NeedFadeIn; // 0x19
		::System::Boolean NeedFadeStay; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single InitialAlpha; // 0x1C
		::System::Single FadeOutDuration; // 0x20
		::System::Single FadeStayDuration; // 0x24
		::RPG::GameCore::SimpleTalkBlackMaskColor FadeColor; // 0x28
		::System::Single FadeInDuration; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIPPARAMS_CTOR_OFFSET))(this);
		}

	};
}
