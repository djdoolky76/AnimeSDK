#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookDeleteInfoRow; }

#define RPG_GAMECORE_TAROTBOOKDELETEINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB48520)
#define RPG_GAMECORE_TAROTBOOKDELETEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB481B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookDeleteInfoRow_TypeDefinitionIndex = 15249;

	class TarotBookDeleteInfoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ProgressDesc; // 0x10
		::RPG::Client::TextID SentenceName; // 0x20
		::RPG::Client::TextID SentenceTextmapID; // 0x30
		::System::Single FadeInTime; // 0x40
		::System::Single ProgressGapTime; // 0x44
		::System::UInt32 ProgressEnd; // 0x48
		::System::UInt32 ID; // 0x4C
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
