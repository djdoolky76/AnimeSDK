#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define DGMNKINFKFH_CTOR_OFFSET UNITYSDK_OFFSET(0x3DD9C80)
#define DGMNKINFKFH_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3DA3F00)
#define DGMNKINFKFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E6E330)
#define DGMNKINFKFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E6E2D0)
#define DGMNKINFKFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E6E2C0)
#define DGMNKINFKFH_GET_ID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define DGMNKINFKFH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1ADC17A0)
#define DGMNKINFKFH_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1ADC1780)
#define DGMNKINFKFH_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E6E250)
#define DGMNKINFKFH_SET_ID_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define DGMNKINFKFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E6E240)

inline static constexpr unsigned int DGMNKINFKFH_TypeDefinitionIndex = 53062;

	struct alignas(4) DGMNKINFKFH
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGMNKINFKFH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMNKINFKFH_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGMNKINFKFH_SET_ID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMNKINFKFH_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DGMNKINFKFH_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::DGMNKINFKFH a1, ::DGMNKINFKFH a2)
		{
			return ((::System::Boolean(*)(::DGMNKINFKFH, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + DGMNKINFKFH_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::DGMNKINFKFH a1, ::DGMNKINFKFH a2)
		{
			return ((::System::Boolean(*)(::DGMNKINFKFH, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + DGMNKINFKFH_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMNKINFKFH_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGMNKINFKFH_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::DGMNKINFKFH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + DGMNKINFKFH_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGMNKINFKFH_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
