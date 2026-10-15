#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }

#define LHEIMENHMKI_CTOR_OFFSET UNITYSDK_OFFSET(0x19410)
#define LHEIMENHMKI_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x19500)
#define LHEIMENHMKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x194D0)
#define LHEIMENHMKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x19460)
#define LHEIMENHMKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19450)
#define LHEIMENHMKI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB6A7270)
#define LHEIMENHMKI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB6A7230)
#define LHEIMENHMKI_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x19430)
#define LHEIMENHMKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19420)

inline static constexpr unsigned int LHEIMENHMKI_TypeDefinitionIndex = 49761;

	struct alignas(8) LHEIMENHMKI
	{
		::UnityEngine::Transform* ICGKFDEILKA; // 0x10
		::UnityEngine::Transform* OLCHHDKKPLI; // 0x18
		::System::Single IEHPFADHJFD; // 0x20
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + LHEIMENHMKI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEIMENHMKI_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + LHEIMENHMKI_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::LHEIMENHMKI a1, ::LHEIMENHMKI a2)
		{
			return ((::System::Boolean(*)(::LHEIMENHMKI, ::LHEIMENHMKI))((::PBYTE)hIl2Cpp + LHEIMENHMKI_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::LHEIMENHMKI a1, ::LHEIMENHMKI a2)
		{
			return ((::System::Boolean(*)(::LHEIMENHMKI, ::LHEIMENHMKI))((::PBYTE)hIl2Cpp + LHEIMENHMKI_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEIMENHMKI_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHEIMENHMKI_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::LHEIMENHMKI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHEIMENHMKI))((::PBYTE)hIl2Cpp + LHEIMENHMKI_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + LHEIMENHMKI_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}

	};
