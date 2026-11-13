#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MNBKKAFFKJC_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define MNBKKAFFKJC_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3F10380)
#define MNBKKAFFKJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F250C0)
#define MNBKKAFFKJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F25060)
#define MNBKKAFFKJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F25050)
#define MNBKKAFFKJC_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E543DC0)
#define MNBKKAFFKJC_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E543DA0)
#define MNBKKAFFKJC_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3F24F70)
#define MNBKKAFFKJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F24F60)

inline static constexpr unsigned int MNBKKAFFKJC_TypeDefinitionIndex = 45296;

	struct alignas(8) MNBKKAFFKJC
	{
		::System::Action* IMDLGFPMPEK; // 0x10
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::MNBKKAFFKJC a1, ::MNBKKAFFKJC a2)
		{
			return ((::System::Boolean(*)(::MNBKKAFFKJC, ::MNBKKAFFKJC))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::MNBKKAFFKJC a1, ::MNBKKAFFKJC a2)
		{
			return ((::System::Boolean(*)(::MNBKKAFFKJC, ::MNBKKAFFKJC))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::MNBKKAFFKJC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNBKKAFFKJC))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNBKKAFFKJC_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
