#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABMNAENMFJL.h"
class FHJJGNMOELH;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define PBHPDJNGECA_CTOR_OFFSET UNITYSDK_OFFSET(0x26190)
#define PBHPDJNGECA_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x26320)
#define PBHPDJNGECA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x262E0)
#define PBHPDJNGECA_EQUALS_OFFSET UNITYSDK_OFFSET(0x26260)
#define PBHPDJNGECA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x26250)
#define PBHPDJNGECA_GET_ISUPGRADED_OFFSET UNITYSDK_OFFSET(0x261C0)
#define PBHPDJNGECA_GET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x261E0)
#define PBHPDJNGECA_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1D30)
#define PBHPDJNGECA_GET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D40)
#define PBHPDJNGECA_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x94D0)
#define PBHPDJNGECA_GET_USINGRULEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x26200)
#define PBHPDJNGECA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xBFE8780)
#define PBHPDJNGECA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xBFE8730)
#define PBHPDJNGECA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x26230)
#define PBHPDJNGECA_SET_ISUPGRADED_OFFSET UNITYSDK_OFFSET(0x261D0)
#define PBHPDJNGECA_SET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x261F0)
#define PBHPDJNGECA_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x94B0)
#define PBHPDJNGECA_SET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0x94C0)
#define PBHPDJNGECA_SET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x94E0)
#define PBHPDJNGECA_SET_USINGRULEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x26210)
#define PBHPDJNGECA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x26220)

inline static constexpr unsigned int PBHPDJNGECA_TypeDefinitionIndex = 62862;

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
