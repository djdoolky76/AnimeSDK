#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define DCMKIHKMBCF_CTOR_OFFSET UNITYSDK_OFFSET(0xF2B50)
#define DCMKIHKMBCF_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF130)
#define DCMKIHKMBCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xF2C50)
#define DCMKIHKMBCF_EQUALS_OFFSET UNITYSDK_OFFSET(0xF2BF0)
#define DCMKIHKMBCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF2BE0)
#define DCMKIHKMBCF_GET_ID_OFFSET UNITYSDK_OFFSET(0xE620)
#define DCMKIHKMBCF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE2516A0)
#define DCMKIHKMBCF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE251680)
#define DCMKIHKMBCF_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xF2B70)
#define DCMKIHKMBCF_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define DCMKIHKMBCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF2B60)

	struct alignas(4) DCMKIHKMBCF
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_SET_ID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::DCMKIHKMBCF a1, ::DCMKIHKMBCF a2)
		{
			return ((::System::Boolean(*)(::DCMKIHKMBCF, ::DCMKIHKMBCF))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::DCMKIHKMBCF a1, ::DCMKIHKMBCF a2)
		{
			return ((::System::Boolean(*)(::DCMKIHKMBCF, ::DCMKIHKMBCF))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::DCMKIHKMBCF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCMKIHKMBCF))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMKIHKMBCF_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
