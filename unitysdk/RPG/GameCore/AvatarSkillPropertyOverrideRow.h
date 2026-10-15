#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSkillPropertyOverrideRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FDDD0)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3FD6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillPropertyOverrideRow_TypeDefinitionIndex = 12720;

	class AvatarSkillPropertyOverrideRow : public ::System::Object
	{
	public:
		::System::String* ReplacePointIconPrefab; // 0x10
		::System::Boolean DisableIconColorHint; // 0x18
		::System::Boolean IsSecretSkillNeed; // 0x19
		::System::Boolean OverrideAttackType; // 0x1A
		::System::Byte _padding0[0x1];
		::System::UInt32 SkillID; // 0x1C
		::RPG::GameCore::AttackType DisplayAttackType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSkillPropertyOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
