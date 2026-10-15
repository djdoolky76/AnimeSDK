#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define KDLIDKMMNOA_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define KDLIDKMMNOA_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF130)
#define KDLIDKMMNOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13A80)
#define KDLIDKMMNOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x13A20)
#define KDLIDKMMNOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13A10)
#define KDLIDKMMNOA_GET_ID_OFFSET UNITYSDK_OFFSET(0xE620)
#define KDLIDKMMNOA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB3663A0)
#define KDLIDKMMNOA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB366380)
#define KDLIDKMMNOA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x139A0)
#define KDLIDKMMNOA_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define KDLIDKMMNOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13990)

inline static constexpr unsigned int KDLIDKMMNOA_TypeDefinitionIndex = 51957;

	struct alignas(4) KDLIDKMMNOA
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_SET_ID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::KDLIDKMMNOA a1, ::KDLIDKMMNOA a2)
		{
			return ((::System::Boolean(*)(::KDLIDKMMNOA, ::KDLIDKMMNOA))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::KDLIDKMMNOA a1, ::KDLIDKMMNOA a2)
		{
			return ((::System::Boolean(*)(::KDLIDKMMNOA, ::KDLIDKMMNOA))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::KDLIDKMMNOA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDLIDKMMNOA))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDLIDKMMNOA_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
