#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace RPG::GameCore { class TalkBackgroundCG; }

#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE9488E0)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE948950)

namespace RPGTools::Timeline
{
	class TalkBackgroundCGBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPG::GameCore::TalkBackgroundCG* config; // 0x20
		::System::Boolean Show; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

	};
}
