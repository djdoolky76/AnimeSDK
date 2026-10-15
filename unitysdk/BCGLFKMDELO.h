#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define BCGLFKMDELO_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define BCGLFKMDELO_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13B40)
#define BCGLFKMDELO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E800C0)
#define BCGLFKMDELO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E80090)
#define BCGLFKMDELO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E80080)
#define BCGLFKMDELO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE620)
#define BCGLFKMDELO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE70)
#define BCGLFKMDELO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15EA7360)
#define BCGLFKMDELO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15EA7340)
#define BCGLFKMDELO_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E80060)
#define BCGLFKMDELO_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define BCGLFKMDELO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE80)
#define BCGLFKMDELO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E80050)

inline static constexpr unsigned int BCGLFKMDELO_TypeDefinitionIndex = 51977;

	struct alignas(4) BCGLFKMDELO
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BCGLFKMDELO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGLFKMDELO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCGLFKMDELO_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGLFKMDELO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCGLFKMDELO_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGLFKMDELO_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + BCGLFKMDELO_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::BCGLFKMDELO a1, ::BCGLFKMDELO a2)
		{
			return ((::System::Boolean(*)(::BCGLFKMDELO, ::BCGLFKMDELO))((::PBYTE)hIl2Cpp + BCGLFKMDELO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::BCGLFKMDELO a1, ::BCGLFKMDELO a2)
		{
			return ((::System::Boolean(*)(::BCGLFKMDELO, ::BCGLFKMDELO))((::PBYTE)hIl2Cpp + BCGLFKMDELO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGLFKMDELO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCGLFKMDELO_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::BCGLFKMDELO a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCGLFKMDELO))((::PBYTE)hIl2Cpp + BCGLFKMDELO_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BCGLFKMDELO_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
