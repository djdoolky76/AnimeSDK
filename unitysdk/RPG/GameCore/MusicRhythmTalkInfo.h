#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMTALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A1430)
#define RPG_GAMECORE_MUSICRHYTHMTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8A1100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmTalkInfo_TypeDefinitionIndex = 22062;

	class MusicRhythmTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TextSpeed; // 0x10
		::System::UInt32 TalkSentenceID; // 0x14
		::System::Single ProtectTime; // 0x18
		::System::Single ForceToNextTime; // 0x1C
		::System::String* NotifyName; // 0x20
		::System::Boolean IsMultiPlatform; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 MobileSentenceID; // 0x2C
		::System::UInt32 PcSentenceID; // 0x30
		::System::UInt32 PadSentenceID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
