#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenSentenceRow; }

#define RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D368DA0)
#define RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D368B90)

namespace RPG::GameCore
{
	class ActivityHipplenSentenceRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TalkSentenceName; // 0x18
		::RPG::Client::TextID SentenceDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenSentenceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenSentenceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
