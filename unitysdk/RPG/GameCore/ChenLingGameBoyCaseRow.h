#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyCaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A18A0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7A12C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyCaseRow_TypeDefinitionIndex = 14255;

	class ChenLingGameBoyCaseRow : public ::System::Object
	{
	public:
		::System::String* CheatCodeList; // 0x10
		::System::String* CoverImagePath; // 0x18
		::Il2CppArray<::System::UInt32>* RankingsNPCList; // 0x20
		::System::String* GameBoyThemeID; // 0x28
		::Il2CppArray<::System::UInt32>* GameBoyChallengeIDList; // 0x30
		::System::UInt32 GameBoyCaseID; // 0x38
		::System::Single ChallengeTimeLimit; // 0x3C
		::System::UInt32 FDCheatEntityID; // 0x40
		::System::UInt32 FDGroupID; // 0x44
		::RPG::Client::TextID GameBoyNameID; // 0x48
		::System::UInt32 CheatQuestID; // 0x58
		::System::UInt32 FDCheatInstanceID; // 0x5C
		::RPG::Client::TextID SettlementTitleID; // 0x60
		::System::UInt32 FDHardInstanceID; // 0x70
		::System::UInt32 FDHardEntityID; // 0x74
		::RPG::Client::TextID CheatSettlementTitleID; // 0x78
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
