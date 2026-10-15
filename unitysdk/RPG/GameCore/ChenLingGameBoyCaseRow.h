#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyCaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5916D0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5910F0)

namespace RPG::GameCore
{
	class ChenLingGameBoyCaseRow : public ::System::Object
	{
	public:
		::System::String* CoverImagePath; // 0x10
		::Il2CppArray<::System::UInt32>* GameBoyChallengeIDList; // 0x18
		::System::String* CheatCodeList; // 0x20
		::Il2CppArray<::System::UInt32>* RankingsNPCList; // 0x28
		::System::String* GameBoyThemeID; // 0x30
		::System::UInt32 FDHardInstanceID; // 0x38
		::System::UInt32 CheatQuestID; // 0x3C
		::System::UInt32 GameBoyCaseID; // 0x40
		::System::UInt32 FDHardEntityID; // 0x44
		::System::Single ChallengeTimeLimit; // 0x48
		::System::UInt32 FDGroupID; // 0x4C
		::System::UInt32 FDCheatInstanceID; // 0x50
		::System::UInt32 FDCheatEntityID; // 0x54
		::RPG::Client::TextID GameBoyNameID; // 0x58
		::RPG::Client::TextID CheatSettlementTitleID; // 0x68
		::RPG::Client::TextID SettlementTitleID; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingGameBoyCaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingGameBoyCaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
