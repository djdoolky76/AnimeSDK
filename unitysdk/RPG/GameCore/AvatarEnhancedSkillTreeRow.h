#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedSkillTreeRow; }

#define RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D8F30)
#define RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2D8B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSkillTreeRow_TypeDefinitionIndex = 12861;

	class AvatarEnhancedSkillTreeRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DescAfter; // 0x10
		::RPG::Client::TextID Comment01; // 0x20
		::RPG::Client::TextID DescBefore; // 0x30
		::System::UInt32 SkillTreeID; // 0x40
		::System::UInt32 AvatarID; // 0x44
		::System::UInt32 CommentIndex; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Comment02; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarEnhancedSkillTreeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
