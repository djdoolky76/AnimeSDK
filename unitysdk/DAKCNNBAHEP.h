#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define DAKCNNBAHEP_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define DAKCNNBAHEP_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3F10380)
#define DAKCNNBAHEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F24840)
#define DAKCNNBAHEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F247E0)
#define DAKCNNBAHEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F247D0)
#define DAKCNNBAHEP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E523970)
#define DAKCNNBAHEP_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E523950)
#define DAKCNNBAHEP_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3F246F0)
#define DAKCNNBAHEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F246E0)

inline static constexpr unsigned int DAKCNNBAHEP_TypeDefinitionIndex = 45269;

	struct alignas(8) DAKCNNBAHEP
	{
		::System::String* ELEPDOMDAGA; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::DAKCNNBAHEP a1, ::DAKCNNBAHEP a2)
		{
			return ((::System::Boolean(*)(::DAKCNNBAHEP, ::DAKCNNBAHEP))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::DAKCNNBAHEP a1, ::DAKCNNBAHEP a2)
		{
			return ((::System::Boolean(*)(::DAKCNNBAHEP, ::DAKCNNBAHEP))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::DAKCNNBAHEP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAKCNNBAHEP))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DAKCNNBAHEP_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
