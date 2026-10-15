#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMSCOREINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD915B80)

namespace RPG::Client
{
	class MusicRhythmScoreInfo : public ::System::Object
	{
	public:
		::System::UInt32 CountDown; // 0x10
		::System::UInt32 Combo; // 0x14
		::System::Boolean ShowSkip; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 Score; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSCOREINFO_CTOR_OFFSET))(this);
		}

	};
}
