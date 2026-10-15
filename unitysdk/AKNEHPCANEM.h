#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define AKNEHPCANEM_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define AKNEHPCANEM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF130)
#define AKNEHPCANEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2309160)
#define AKNEHPCANEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x2309100)
#define AKNEHPCANEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x23090F0)
#define AKNEHPCANEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xE620)
#define AKNEHPCANEM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12CD4380)
#define AKNEHPCANEM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12CD4360)
#define AKNEHPCANEM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2309080)
#define AKNEHPCANEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define AKNEHPCANEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2309070)

inline static constexpr unsigned int AKNEHPCANEM_TypeDefinitionIndex = 51982;

	struct alignas(4) AKNEHPCANEM
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKNEHPCANEM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNEHPCANEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKNEHPCANEM_SET_ID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNEHPCANEM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + AKNEHPCANEM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::AKNEHPCANEM a1, ::AKNEHPCANEM a2)
		{
			return ((::System::Boolean(*)(::AKNEHPCANEM, ::AKNEHPCANEM))((::PBYTE)hIl2Cpp + AKNEHPCANEM_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::AKNEHPCANEM a1, ::AKNEHPCANEM a2)
		{
			return ((::System::Boolean(*)(::AKNEHPCANEM, ::AKNEHPCANEM))((::PBYTE)hIl2Cpp + AKNEHPCANEM_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNEHPCANEM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKNEHPCANEM_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::AKNEHPCANEM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKNEHPCANEM))((::PBYTE)hIl2Cpp + AKNEHPCANEM_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKNEHPCANEM_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
