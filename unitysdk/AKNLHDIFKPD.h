#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define AKNLHDIFKPD_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define AKNLHDIFKPD_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3E00220)
#define AKNLHDIFKPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E3AF40)
#define AKNLHDIFKPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E3AEE0)
#define AKNLHDIFKPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E3AED0)
#define AKNLHDIFKPD_GET_COMPLEXITY_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define AKNLHDIFKPD_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define AKNLHDIFKPD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x197AA610)
#define AKNLHDIFKPD_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x197AA5F0)
#define AKNLHDIFKPD_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E3AEB0)
#define AKNLHDIFKPD_SET_COMPLEXITY_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define AKNLHDIFKPD_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0xFDBF80)
#define AKNLHDIFKPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E3AEA0)

inline static constexpr unsigned int AKNLHDIFKPD_TypeDefinitionIndex = 79852;

	struct alignas(4) AKNLHDIFKPD
	{
		::System::UInt32 _Complexity_k__BackingField; // 0x10
		::System::UInt32 _MaxCount_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Complexity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_GET_COMPLEXITY_OFFSET))(this);
		}

		::System::Void set_Complexity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_SET_COMPLEXITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_SET_MAXCOUNT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::AKNLHDIFKPD a1, ::AKNLHDIFKPD a2)
		{
			return ((::System::Boolean(*)(::AKNLHDIFKPD, ::AKNLHDIFKPD))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::AKNLHDIFKPD a1, ::AKNLHDIFKPD a2)
		{
			return ((::System::Boolean(*)(::AKNLHDIFKPD, ::AKNLHDIFKPD))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::AKNLHDIFKPD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKNLHDIFKPD))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKNLHDIFKPD_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
