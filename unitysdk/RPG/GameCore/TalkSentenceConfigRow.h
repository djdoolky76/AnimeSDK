#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkSentenceConfigRow; }

#define RPG_GAMECORE_TALKSENTENCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6990A0)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1E697AC0)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E697F60)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E6990B0)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x1E699110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceConfigRow_TypeDefinitionIndex = 15375;

	class TalkSentenceConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TalkSentenceText; // 0x10
		::RPG::Client::TextID TextmapTalkSentenceName; // 0x20
		::System::UInt32 VoiceID; // 0x30
		::System::UInt32 TalkSentenceID; // 0x34
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

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_RESET_OFFSET))(this);
		}

	};
}
