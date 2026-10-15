#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VoiceAtlasRow; }
namespace System { class String; }

#define RPG_GAMECORE_VOICEATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC63B10)
#define RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC63680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceAtlasRow_TypeDefinitionIndex = 12680;

	class VoiceAtlasRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::System::UInt32 VoiceID; // 0x18
		::System::Int32 SortID; // 0x1C
		::RPG::Client::TextID Voice_F; // 0x20
		::RPG::Client::TextID Voice_M; // 0x30
		::System::UInt32 Unlock; // 0x40
		::System::Boolean IsBattleVoice; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 ReplaceID; // 0x48
		::System::UInt32 AudioID; // 0x4C
		::System::UInt32 AvatarID; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID VoiceTitle; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICEATLASROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::VoiceAtlasRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VoiceAtlasRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
