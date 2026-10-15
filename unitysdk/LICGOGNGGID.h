#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define LICGOGNGGID_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define LICGOGNGGID_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13B40)
#define LICGOGNGGID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19670)
#define LICGOGNGGID_EQUALS_OFFSET UNITYSDK_OFFSET(0x19610)
#define LICGOGNGGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19600)
#define LICGOGNGGID_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xE620)
#define LICGOGNGGID_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0xFE70)
#define LICGOGNGGID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB6C7290)
#define LICGOGNGGID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB6C7270)
#define LICGOGNGGID_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x195E0)
#define LICGOGNGGID_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define LICGOGNGGID_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0xFE80)
#define LICGOGNGGID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195D0)

	struct alignas(4) LICGOGNGGID
	{
		::System::UInt32 _AvatarID_k__BackingField; // 0x10
		::System::UInt32 _TeamID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LICGOGNGGID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LICGOGNGGID_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LICGOGNGGID_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LICGOGNGGID_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LICGOGNGGID_SET_TEAMID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICGOGNGGID_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + LICGOGNGGID_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::LICGOGNGGID a1, ::LICGOGNGGID a2)
		{
			return ((::System::Boolean(*)(::LICGOGNGGID, ::LICGOGNGGID))((::PBYTE)hIl2Cpp + LICGOGNGGID_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::LICGOGNGGID a1, ::LICGOGNGGID a2)
		{
			return ((::System::Boolean(*)(::LICGOGNGGID, ::LICGOGNGGID))((::PBYTE)hIl2Cpp + LICGOGNGGID_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LICGOGNGGID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LICGOGNGGID_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::LICGOGNGGID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LICGOGNGGID))((::PBYTE)hIl2Cpp + LICGOGNGGID_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LICGOGNGGID_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
