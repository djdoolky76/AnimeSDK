#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedSkillRow; }

#define RPG_GAMECORE_AVATARENHANCEDSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D8B70)
#define RPG_GAMECORE_AVATARENHANCEDSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2D8660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSkillRow_TypeDefinitionIndex = 12859;

	class AvatarEnhancedSkillRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID SimpleDescAfter; // 0x10
		::RPG::Client::TextID DescBefore; // 0x20
		::RPG::Client::TextID Comment01; // 0x30
		::System::UInt32 SkillTreeID; // 0x40
		::System::UInt32 CommentIndex; // 0x44
		::RPG::Client::TextID DescAfter; // 0x48
		::RPG::Client::TextID Comment02; // 0x58
		::System::UInt32 SkillID; // 0x68
		::System::UInt32 AvatarID; // 0x6C
		::RPG::Client::TextID SimpleDescBefore; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarEnhancedSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarEnhancedSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
