#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookDeleteInfoRow; }

#define RPG_GAMECORE_TAROTBOOKDELETEINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB75E00)
#define RPG_GAMECORE_TAROTBOOKDELETEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB75A90)

namespace RPG::GameCore
{
	class TarotBookDeleteInfoRow : public ::System::Object
	{
	public:
		::System::Single FadeInTime; // 0x10
		::System::Single ProgressGapTime; // 0x14
		::RPG::Client::TextID ProgressDesc; // 0x18
		::RPG::Client::TextID SentenceName; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 ProgressEnd; // 0x3C
		::RPG::Client::TextID SentenceTextmapID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKDELETEINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookDeleteInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookDeleteInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKDELETEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
