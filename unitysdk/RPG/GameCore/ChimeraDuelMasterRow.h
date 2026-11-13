#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelMasterRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELMASTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F92D8F0)
#define RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F92C9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterRow_TypeDefinitionIndex = 11135;

	class ChimeraDuelMasterRow : public ::System::Object
	{
	public:
		::System::String* FriendChallengeMasterIcon; // 0x10
		::System::String* MasterAudio; // 0x18
		::System::String* VictoryEmojiPath; // 0x20
		::System::String* FigurePath; // 0x28
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x30
		::System::String* DrawEmojiPath; // 0x38
		::System::String* BattleVSBodyType; // 0x40
		::System::String* MasterHeadIconPath; // 0x48
		::System::String* LossEmojiPath; // 0x50
		::RPG::Client::TextID MasterSkillDescription; // 0x58
		::System::UInt32 MasterDisplayOrder; // 0x68
		::System::UInt32 FloorGroupID; // 0x6C
		::System::UInt32 TalkSentenceID; // 0x70
		::System::UInt32 Difficulty; // 0x74
		::System::UInt32 MasterSelectAvatarFloorConfigID; // 0x78
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RecommendationTitle; // 0x80
		::RPG::Client::TextID DrawText; // 0x90
		::System::UInt32 AvatarID; // 0xA0
		::System::UInt32 BattleAvatarFloorConfigID; // 0xA4
		::System::UInt32 BattleOpponentAvatarFloorConfigID; // 0xA8
		::System::UInt32 UnlockRequiredGameID; // 0xAC
		::System::UInt32 SignatureChimeraID; // 0xB0
		::System::UInt32 MasterID; // 0xB4
		::RPG::Client::TextID LossText; // 0xB8
		::RPG::Client::TextID ChimeraSkillDescription; // 0xC8
		::RPG::Client::TextID VictoryText; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelMasterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelMasterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
