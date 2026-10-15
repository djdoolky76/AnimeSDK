#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedSkillRow; }

#define RPG_GAMECORE_AVATARENHANCEDSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E5710)
#define RPG_GAMECORE_AVATARENHANCEDSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E5200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSkillRow_TypeDefinitionIndex = 12787;

	class AvatarEnhancedSkillRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Comment01; // 0x10
		::System::UInt32 SkillID; // 0x20
		::System::UInt32 SkillTreeID; // 0x24
		::RPG::Client::TextID SimpleDescBefore; // 0x28
		::System::UInt32 AvatarID; // 0x38
		::System::UInt32 CommentIndex; // 0x3C
		::RPG::Client::TextID DescBefore; // 0x40
		::RPG::Client::TextID SimpleDescAfter; // 0x50
		::RPG::Client::TextID DescAfter; // 0x60
		::RPG::Client::TextID Comment02; // 0x70
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
