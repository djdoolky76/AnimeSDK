#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class SwordTrainingSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68F760)
#define RPG_GAMECORE_SWORDTRAININGSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E68F190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSkillRow_TypeDefinitionIndex = 12512;

	class SwordTrainingSkillRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ItemConfig* Cost; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AvatarStatusAddList; // 0x18
		::Il2CppArray<::System::UInt32>* NextSkillIDList; // 0x20
		::Il2CppArray<::System::Single>* ParamList; // 0x28
		::System::String* SkillIcon; // 0x30
		::RPG::Client::TextID SkillTag; // 0x38
		::System::UInt32 SkillPower; // 0x48
		::System::UInt32 Condition; // 0x4C
		::System::UInt32 Rare; // 0x50
		::System::UInt32 SkillID; // 0x54
		::System::UInt32 SkillRank; // 0x58
		::System::UInt32 MazeBuffID; // 0x5C
		::System::UInt32 SkillStatusLevel; // 0x60
		::System::UInt32 SkillTypeID; // 0x64
		::RPG::Client::TextID SkillName; // 0x68
		::RPG::Client::TextID SkillDesc; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
