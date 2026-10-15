#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueMainStoryToastType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCMainStoryRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C5300)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C3690)

namespace RPG::GameCore
{
	class RogueDLCMainStoryRow : public ::System::Object
	{
	public:
		::System::String* MainStoryButtonIcon; // 0x10
		::RPG::Client::TextID MainStoryName; // 0x18
		::System::Boolean IsBonusUnlock; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 UnlockPoint; // 0x2C
		::System::UInt32 MainStoryID; // 0x30
		::RPG::GameCore::ChessRogueMainStoryToastType MainStoryToastType; // 0x34
		::System::UInt32 UnlockAeonDimension; // 0x38
		::System::UInt32 Layer; // 0x3C
		::RPG::Client::TextID BonusToast; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCMainStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCMainStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
