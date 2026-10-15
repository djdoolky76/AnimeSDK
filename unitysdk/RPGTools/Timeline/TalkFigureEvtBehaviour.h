#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE949B40)
#define RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_COOLOEPLAPI_OFFSET UNITYSDK_OFFSET(0xE949BB0)
#define RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE949D50)

namespace RPGTools::Timeline
{
	class TalkFigureEvtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::Boolean Show; // 0x20
		::System::Boolean IsPlayerInvolved; // 0x21
		::System::Byte _padding0[0x6];
		::System::String* ImagePath; // 0x28
		::System::String* MaleImagePath; // 0x30
		::System::String* FemaleImagePath; // 0x38
		::System::Boolean TriggerSound; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void COOLOEPLAPI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTBEHAVIOUR_COOLOEPLAPI_OFFSET))(this, a1);
		}

	};
}
