#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HLOHDPOEMDK_APFBEFJEGOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC0)
#define HLOHDPOEMDK_APFBEFJEGOK_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2E7EEA0)
#define HLOHDPOEMDK_APFBEFJEGOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E7EE90)
#define HLOHDPOEMDK_APFBEFJEGOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E7EE30)
#define HLOHDPOEMDK_APFBEFJEGOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E7EE20)
#define HLOHDPOEMDK_APFBEFJEGOK_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x14EB0)
#define HLOHDPOEMDK_APFBEFJEGOK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xE620)
#define HLOHDPOEMDK_APFBEFJEGOK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15D74E70)
#define HLOHDPOEMDK_APFBEFJEGOK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15D74E50)
#define HLOHDPOEMDK_APFBEFJEGOK_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E7EE00)
#define HLOHDPOEMDK_APFBEFJEGOK_SET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x14EC0)
#define HLOHDPOEMDK_APFBEFJEGOK_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xAF40)
#define HLOHDPOEMDK_APFBEFJEGOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E7EDF0)

inline static constexpr unsigned int HLOHDPOEMDK_APFBEFJEGOK_TypeDefinitionIndex = 81102;

	struct alignas(4) HLOHDPOEMDK_APFBEFJEGOK
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Boolean _IsStackable_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_GET_ISSTACKABLE_OFFSET))(this);
		}

		::System::Void set_IsStackable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_SET_ISSTACKABLE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::HLOHDPOEMDK_APFBEFJEGOK a1, ::HLOHDPOEMDK_APFBEFJEGOK a2)
		{
			return ((::System::Boolean(*)(::HLOHDPOEMDK_APFBEFJEGOK, ::HLOHDPOEMDK_APFBEFJEGOK))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::HLOHDPOEMDK_APFBEFJEGOK a1, ::HLOHDPOEMDK_APFBEFJEGOK a2)
		{
			return ((::System::Boolean(*)(::HLOHDPOEMDK_APFBEFJEGOK, ::HLOHDPOEMDK_APFBEFJEGOK))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::HLOHDPOEMDK_APFBEFJEGOK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLOHDPOEMDK_APFBEFJEGOK))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_APFBEFJEGOK_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
