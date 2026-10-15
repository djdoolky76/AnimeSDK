#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkSentenceMultiVoiceRow; }

#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB59030)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB58660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceMultiVoiceRow_TypeDefinitionIndex = 15224;

	class TalkSentenceMultiVoiceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* VoiceIDList; // 0x10
		::System::UInt32 TalkSentenceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TalkSentenceMultiVoiceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TalkSentenceMultiVoiceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
