#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookRevealedIconRow; }
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKREVEALEDICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB774B0)
#define RPG_GAMECORE_TAROTBOOKREVEALEDICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB77320)

namespace RPG::GameCore
{
	class TarotBookRevealedIconRow : public ::System::Object
	{
	public:
		::System::String* NewRectIconPath; // 0x10
		::System::String* NewRoundIconPath; // 0x18
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookRevealedIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookRevealedIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
