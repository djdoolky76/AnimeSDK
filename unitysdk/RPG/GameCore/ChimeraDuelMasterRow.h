#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelMasterRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELMASTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B5EF0)
#define RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7B4FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterRow_TypeDefinitionIndex = 11135;

	class ChimeraDuelMasterRow : public ::System::Object
	{
	public:
		::System::String* MasterAudio; // 0x10
		::System::String* VictoryEmojiPath; // 0x18
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x20
		::System::String* DrawEmojiPath; // 0x28
		::System::String* FriendChallengeMasterIcon; // 0x30
		::System::String* BattleVSBodyType; // 0x38
		::System::String* LossEmojiPath; // 0x40
		::System::String* MasterHeadIconPath; // 0x48
		::System::String* FigurePath; // 0x50
		::System::UInt32 UnlockRequiredGameID; // 0x58
		::System::UInt32 Difficulty; // 0x5C
		::System::UInt32 MasterDisplayOrder; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MasterSkillDescription; // 0x68
		::RPG::Client::TextID VictoryText; // 0x78
		::RPG::Client::TextID DrawText; // 0x88
		::RPG::Client::TextID LossText; // 0x98
		::RPG::Client::TextID ChimeraSkillDescription; // 0xA8
		::System::UInt32 FloorGroupID; // 0xB8
		::System::UInt32 BattleAvatarFloorConfigID; // 0xBC
		::System::UInt32 MasterSelectAvatarFloorConfigID; // 0xC0
		::System::UInt32 BattleOpponentAvatarFloorConfigID; // 0xC4
		::RPG::Client::TextID RecommendationTitle; // 0xC8
		::System::UInt32 AvatarID; // 0xD8
		::System::UInt32 SignatureChimeraID; // 0xDC
		::System::UInt32 MasterID; // 0xE0
		::System::UInt32 TalkSentenceID; // 0xE4
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
