#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class Graphic; }

#define IIEJPCIFPEF_CTOR_OFFSET UNITYSDK_OFFSET(0x2E81A20)
#define IIEJPCIFPEF_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2E81B20)
#define IIEJPCIFPEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E81AF0)
#define IIEJPCIFPEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E81A80)
#define IIEJPCIFPEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E81A70)
#define IIEJPCIFPEF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16439D50)
#define IIEJPCIFPEF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16439D10)
#define IIEJPCIFPEF_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E81A50)
#define IIEJPCIFPEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E81A40)

inline static constexpr unsigned int IIEJPCIFPEF_TypeDefinitionIndex = 49754;

	struct alignas(8) IIEJPCIFPEF
	{
		::UnityEngine::UI::Graphic* CEEGIDBAPJO; // 0x10
		::System::Single ICGKFDEILKA; // 0x18
		::System::Single OLCHHDKKPLI; // 0x1C
		::System::Single IEHPFADHJFD; // 0x20
		::System::Void _ctor(::UnityEngine::UI::Graphic* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::IIEJPCIFPEF a1, ::IIEJPCIFPEF a2)
		{
			return ((::System::Boolean(*)(::IIEJPCIFPEF, ::IIEJPCIFPEF))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::IIEJPCIFPEF a1, ::IIEJPCIFPEF a2)
		{
			return ((::System::Boolean(*)(::IIEJPCIFPEF, ::IIEJPCIFPEF))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::IIEJPCIFPEF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIEJPCIFPEF))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::UnityEngine::UI::Graphic* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIEJPCIFPEF_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4);
		}

	};
