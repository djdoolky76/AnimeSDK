#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABMNAENMFJL.h"
class FHJJGNMOELH;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define PBHPDJNGECA_CTOR_OFFSET UNITYSDK_OFFSET(0x3E663C0)
#define PBHPDJNGECA_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3E664F0)
#define PBHPDJNGECA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E664B0)
#define PBHPDJNGECA_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E66430)
#define PBHPDJNGECA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E66420)
#define PBHPDJNGECA_GET_ISUPGRADED_OFFSET UNITYSDK_OFFSET(0x3DF3040)
#define PBHPDJNGECA_GET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x9C20)
#define PBHPDJNGECA_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define PBHPDJNGECA_GET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define PBHPDJNGECA_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x6C9390)
#define PBHPDJNGECA_GET_USINGRULEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9BC0)
#define PBHPDJNGECA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AABEDE0)
#define PBHPDJNGECA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AABED90)
#define PBHPDJNGECA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E66400)
#define PBHPDJNGECA_SET_ISUPGRADED_OFFSET UNITYSDK_OFFSET(0x3E63FC0)
#define PBHPDJNGECA_SET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x9C30)
#define PBHPDJNGECA_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define PBHPDJNGECA_SET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0xB88D90)
#define PBHPDJNGECA_SET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xFDBF90)
#define PBHPDJNGECA_SET_USINGRULEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x3E33130)
#define PBHPDJNGECA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E663F0)

inline static constexpr unsigned int PBHPDJNGECA_TypeDefinitionIndex = 64300;

	struct alignas(8) PBHPDJNGECA
	{
		::RPG::AvatarSystem::IAvatar* _Origin_k__BackingField; // 0x10
		::FHJJGNMOELH* _RuleProvider_k__BackingField; // 0x18
		::RPG::AvatarSystem::Avatar* _Upgrade_k__BackingField; // 0x20
		::System::Boolean _IsUpgraded_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 _OriginVersion_k__BackingField; // 0x2C
		::ABMNAENMFJL _UsingRuleIdentifier_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::FHJJGNMOELH* a2, ::RPG::AvatarSystem::Avatar* a3, ::System::Boolean a4, ::System::UInt32 a5, ::ABMNAENMFJL a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FHJJGNMOELH*, ::RPG::AvatarSystem::Avatar*, ::System::Boolean, ::System::UInt32, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + PBHPDJNGECA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::AvatarSystem::IAvatar* get_Origin()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPDJNGECA_GET_ORIGIN_OFFSET))(this);
		}

		::System::Void set_Origin(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + PBHPDJNGECA_SET_ORIGIN_OFFSET))(this, a1);
		}

		::FHJJGNMOELH* get_RuleProvider()
		{
			return ((::FHJJGNMOELH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPDJNGECA_GET_RULEPROVIDER_OFFSET))(this);
		}

		::System::Void set_RuleProvider(::FHJJGNMOELH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHJJGNMOELH*))((::PBYTE)hIl2Cpp + PBHPDJNGECA_SET_RULEPROVIDER_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Avatar* get_Upgrade()
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPDJNGECA_GET_UPGRADE_OFFSET))(this);
		}

		::System::Void set_Upgrade(::RPG::AvatarSystem::Avatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*))((::PBYTE)hIl2Cpp + PBHPDJNGECA_SET_UPGRADE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUpgraded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPDJNGECA_GET_ISUPGRADED_OFFSET))(this);
		}

		::System::Void set_IsUpgraded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBHPDJNGECA_SET_ISUPGRADED_OFFSET))(this, a1);
		}

		::System::UInt32 get_OriginVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPDJNGECA_GET_ORIGINVERSION_OFFSET))(this);
		}

		::System::Void set_OriginVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBHPDJNGECA_SET_ORIGINVERSION_OFFSET))(this, a1);
		}

		::ABMNAENMFJL get_UsingRuleIdentifier()
		{
			return ((::ABMNAENMFJL(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPDJNGECA_GET_USINGRULEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_UsingRuleIdentifier(::ABMNAENMFJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + PBHPDJNGECA_SET_USINGRULEIDENTIFIER_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPDJNGECA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + PBHPDJNGECA_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::PBHPDJNGECA a1, ::PBHPDJNGECA a2)
		{
			return ((::System::Boolean(*)(::PBHPDJNGECA, ::PBHPDJNGECA))((::PBYTE)hIl2Cpp + PBHPDJNGECA_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::PBHPDJNGECA a1, ::PBHPDJNGECA a2)
		{
			return ((::System::Boolean(*)(::PBHPDJNGECA, ::PBHPDJNGECA))((::PBYTE)hIl2Cpp + PBHPDJNGECA_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPDJNGECA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBHPDJNGECA_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::PBHPDJNGECA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBHPDJNGECA))((::PBYTE)hIl2Cpp + PBHPDJNGECA_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::RPG::AvatarSystem::IAvatar* a1, ::FHJJGNMOELH* a2, ::RPG::AvatarSystem::Avatar* a3, ::System::Boolean a4, ::System::UInt32 a5, ::ABMNAENMFJL a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FHJJGNMOELH*, ::RPG::AvatarSystem::Avatar*, ::System::Boolean, ::System::UInt32, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + PBHPDJNGECA_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
