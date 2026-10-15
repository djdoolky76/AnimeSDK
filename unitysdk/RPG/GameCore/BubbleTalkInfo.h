#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_BUBBLETALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D480130)
#define RPG_GAMECORE_BUBBLETALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D47FDE0)

namespace RPG::GameCore
{
	class BubbleTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AutoSkipTime; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 GroupNpcID; // 0x18
		::System::UInt32 InstanceID; // 0x1C
		::RPG::Client::TextID DialogueTextmapID; // 0x20
		::System::UInt32 TalkSentenceID; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* ReplaceParam; // 0x38
		::System::String* ShowText; // 0x40
		::System::Boolean EnableVoice; // 0x48
		::System::Byte _padding1[0x3];
		::System::UInt32 RuntimeID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUBBLETALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BubbleTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUBBLETALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
