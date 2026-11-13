#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define DEPCKFHMMHD_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define DEPCKFHMMHD_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3E00220)
#define DEPCKFHMMHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E72AE0)
#define DEPCKFHMMHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E72AB0)
#define DEPCKFHMMHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E72AA0)
#define DEPCKFHMMHD_GET_ID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define DEPCKFHMMHD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define DEPCKFHMMHD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B385EE0)
#define DEPCKFHMMHD_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B385EC0)
#define DEPCKFHMMHD_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E72A80)
#define DEPCKFHMMHD_SET_ID_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define DEPCKFHMMHD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFDBF80)
#define DEPCKFHMMHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E72A70)

inline static constexpr unsigned int DEPCKFHMMHD_TypeDefinitionIndex = 53038;

	struct alignas(4) DEPCKFHMMHD
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::DEPCKFHMMHD a1, ::DEPCKFHMMHD a2)
		{
			return ((::System::Boolean(*)(::DEPCKFHMMHD, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::DEPCKFHMMHD a1, ::DEPCKFHMMHD a2)
		{
			return ((::System::Boolean(*)(::DEPCKFHMMHD, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::DEPCKFHMMHD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DEPCKFHMMHD_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
