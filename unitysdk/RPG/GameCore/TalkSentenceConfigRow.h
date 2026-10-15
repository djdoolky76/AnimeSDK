#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkSentenceConfigRow; }

#define RPG_GAMECORE_TALKSENTENCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB57270)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DB55C90)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB56130)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DB57280)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DB572E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceConfigRow_TypeDefinitionIndex = 15219;

	class TalkSentenceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 VoiceID; // 0x10
		::System::UInt32 TalkSentenceID; // 0x14
		::RPG::Client::TextID TextmapTalkSentenceName; // 0x18
		::RPG::Client::TextID TalkSentenceText; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::TalkSentenceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TalkSentenceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_RESET_OFFSET))(this);
		}

	};
}
