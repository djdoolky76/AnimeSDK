#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define OIPMNNAHIFP_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define OIPMNNAHIFP_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF130)
#define OIPMNNAHIFP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x254B0)
#define OIPMNNAHIFP_EQUALS_OFFSET UNITYSDK_OFFSET(0x25490)
#define OIPMNNAHIFP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x25480)
#define OIPMNNAHIFP_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xE620)
#define OIPMNNAHIFP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xBEA4070)
#define OIPMNNAHIFP_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xBEA4050)
#define OIPMNNAHIFP_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x25410)
#define OIPMNNAHIFP_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define OIPMNNAHIFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x25400)

	struct alignas(4) OIPMNNAHIFP
	{
		::System::UInt32 _AvatarID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::OIPMNNAHIFP a1, ::OIPMNNAHIFP a2)
		{
			return ((::System::Boolean(*)(::OIPMNNAHIFP, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::OIPMNNAHIFP a1, ::OIPMNNAHIFP a2)
		{
			return ((::System::Boolean(*)(::OIPMNNAHIFP, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::OIPMNNAHIFP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIPMNNAHIFP_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
