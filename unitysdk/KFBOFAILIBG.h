#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define KFBOFAILIBG_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define KFBOFAILIBG_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13B40)
#define KFBOFAILIBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13B30)
#define KFBOFAILIBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x13AD0)
#define KFBOFAILIBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13AC0)
#define KFBOFAILIBG_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xE620)
#define KFBOFAILIBG_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE70)
#define KFBOFAILIBG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB389840)
#define KFBOFAILIBG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB389820)
#define KFBOFAILIBG_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x13AA0)
#define KFBOFAILIBG_SET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xAF40)
#define KFBOFAILIBG_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE80)
#define KFBOFAILIBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13A90)

inline static constexpr unsigned int KFBOFAILIBG_TypeDefinitionIndex = 51976;

	struct alignas(4) KFBOFAILIBG
	{
		::RPG::GameCore::AvatarSkillTreeAnchorType _AnchorType_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::GameCore::AvatarSkillTreeAnchorType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBOFAILIBG_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AvatarSkillTreeAnchorType get_AnchorType()
		{
			return ((::RPG::GameCore::AvatarSkillTreeAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBOFAILIBG_GET_ANCHORTYPE_OFFSET))(this);
		}

		::System::Void set_AnchorType(::RPG::GameCore::AvatarSkillTreeAnchorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + KFBOFAILIBG_SET_ANCHORTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBOFAILIBG_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBOFAILIBG_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBOFAILIBG_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + KFBOFAILIBG_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::KFBOFAILIBG a1, ::KFBOFAILIBG a2)
		{
			return ((::System::Boolean(*)(::KFBOFAILIBG, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + KFBOFAILIBG_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::KFBOFAILIBG a1, ::KFBOFAILIBG a2)
		{
			return ((::System::Boolean(*)(::KFBOFAILIBG, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + KFBOFAILIBG_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBOFAILIBG_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFBOFAILIBG_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::KFBOFAILIBG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + KFBOFAILIBG_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::RPG::GameCore::AvatarSkillTreeAnchorType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBOFAILIBG_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
