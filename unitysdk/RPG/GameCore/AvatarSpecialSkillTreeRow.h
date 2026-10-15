#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSpecialSkillTreeRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSPECIALSKILLTREEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D431420)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D430DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSpecialSkillTreeRow_TypeDefinitionIndex = 12730;

	class AvatarSpecialSkillTreeRow : public ::System::Object
	{
	public:
		::System::String* AvatarImgPath; // 0x10
		::RPG::GameCore::AvatarSkillTreeAnchorType AnchorType; // 0x18
		::System::UInt32 ShowSkill; // 0x1C
		::System::UInt32 AvatarID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSpecialSkillTreeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSpecialSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
