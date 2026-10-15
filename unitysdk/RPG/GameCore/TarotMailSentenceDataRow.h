#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotMailSentenceDataRow; }

#define RPG_GAMECORE_TAROTMAILSENTENCEDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4A9D0)
#define RPG_GAMECORE_TAROTMAILSENTENCEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4A850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotMailSentenceDataRow_TypeDefinitionIndex = 15248;

	class TarotMailSentenceDataRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Sentence; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILSENTENCEDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotMailSentenceDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotMailSentenceDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILSENTENCEDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
