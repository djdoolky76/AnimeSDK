#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookSentenceRow; }

#define RPG_GAMECORE_TAROTBOOKSENTENCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE26E30)
#define RPG_GAMECORE_TAROTBOOKSENTENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE26C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookSentenceRow_TypeDefinitionIndex = 15391;

	class TarotBookSentenceRow : public ::System::Object
	{
	public:
		::System::UInt32 VoiceID; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::Client::TextID Sentence; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSENTENCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookSentenceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookSentenceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSENTENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
