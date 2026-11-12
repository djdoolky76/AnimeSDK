#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookRevealedCharacterRow; }

#define RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE26AC0)
#define RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE26890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookRevealedCharacterRow_TypeDefinitionIndex = 15387;

	class TarotBookRevealedCharacterRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::Client::TextID MainCatalogTitle; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookRevealedCharacterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookRevealedCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDCHARACTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
