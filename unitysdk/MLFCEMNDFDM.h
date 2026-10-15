#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/AvatarInstanceType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MLFCEMNDFDM_CTOR_OFFSET UNITYSDK_OFFSET(0xFE60)
#define MLFCEMNDFDM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E510)
#define MLFCEMNDFDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E0)
#define MLFCEMNDFDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E470)
#define MLFCEMNDFDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E460)
#define MLFCEMNDFDM_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xFE70)
#define MLFCEMNDFDM_GET_INSTANCESUBID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define MLFCEMNDFDM_GET_INSTANCETYPE_OFFSET UNITYSDK_OFFSET(0xE620)
#define MLFCEMNDFDM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB9AD0A0)
#define MLFCEMNDFDM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB9AD060)
#define MLFCEMNDFDM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E440)
#define MLFCEMNDFDM_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xFE80)
#define MLFCEMNDFDM_SET_INSTANCESUBID_OFFSET UNITYSDK_OFFSET(0xACF0)
#define MLFCEMNDFDM_SET_INSTANCETYPE_OFFSET UNITYSDK_OFFSET(0xAF40)
#define MLFCEMNDFDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E430)

inline static constexpr unsigned int MLFCEMNDFDM_TypeDefinitionIndex = 51894;

	struct alignas(4) MLFCEMNDFDM
	{
		::RPG::AvatarSystem::AvatarInstanceType _InstanceType_k__BackingField; // 0x10
		::System::UInt32 _InstanceID_k__BackingField; // 0x14
		::System::UInt32 _InstanceSubID_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::AvatarSystem::AvatarInstanceType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::AvatarSystem::AvatarInstanceType get_InstanceType()
		{
			return ((::RPG::AvatarSystem::AvatarInstanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_GET_INSTANCETYPE_OFFSET))(this);
		}

		::System::Void set_InstanceType(::RPG::AvatarSystem::AvatarInstanceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_SET_INSTANCETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceSubID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_GET_INSTANCESUBID_OFFSET))(this);
		}

		::System::Void set_InstanceSubID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_SET_INSTANCESUBID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::MLFCEMNDFDM a1, ::MLFCEMNDFDM a2)
		{
			return ((::System::Boolean(*)(::MLFCEMNDFDM, ::MLFCEMNDFDM))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::MLFCEMNDFDM a1, ::MLFCEMNDFDM a2)
		{
			return ((::System::Boolean(*)(::MLFCEMNDFDM, ::MLFCEMNDFDM))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::MLFCEMNDFDM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLFCEMNDFDM))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::RPG::AvatarSystem::AvatarInstanceType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MLFCEMNDFDM_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}

	};
