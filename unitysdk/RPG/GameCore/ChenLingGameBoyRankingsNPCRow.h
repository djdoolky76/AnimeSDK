#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyRankingsNPCRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGGAMEBOYRANKINGSNPCROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D592DC0)
#define RPG_GAMECORE_CHENLINGGAMEBOYRANKINGSNPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D592B30)

namespace RPG::GameCore
{
	class ChenLingGameBoyRankingsNPCRow : public ::System::Object
	{
	public:
		::System::String* NPCIconPath; // 0x10
		::RPG::Client::TextID NPCSignature; // 0x18
		::RPG::Client::TextID NPCNameID; // 0x28
		::System::UInt32 NPCScore; // 0x38
		::System::UInt32 GameBoyRankingsNPCID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYRANKINGSNPCROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYRANKINGSNPCROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
