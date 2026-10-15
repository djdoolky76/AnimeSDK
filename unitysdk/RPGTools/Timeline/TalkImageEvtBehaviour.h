#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace RPG::GameCore { class TalkImage; }

#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE93F850)
#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_COOLOEPLAPI_OFFSET UNITYSDK_OFFSET(0xE93FAB0)
#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE93FB20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageEvtBehaviour_TypeDefinitionIndex = 48388;

	class TalkImageEvtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPG::GameCore::TalkImage* config; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void COOLOEPLAPI(::RPG::GameCore::TalkImage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkImage*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_COOLOEPLAPI_OFFSET))(this, a1);
		}

	};
}
