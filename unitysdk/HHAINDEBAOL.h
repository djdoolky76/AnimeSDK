#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HHAINDEBAOL_CTOR_OFFSET UNITYSDK_OFFSET(0x14E00)
#define HHAINDEBAOL_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3C53010)
#define HHAINDEBAOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C53000)
#define HHAINDEBAOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52FA0)
#define HHAINDEBAOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52F90)
#define HHAINDEBAOL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC42010)
#define HHAINDEBAOL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC41FF0)
#define HHAINDEBAOL_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C52F10)
#define HHAINDEBAOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52F00)

inline static constexpr unsigned int HHAINDEBAOL_TypeDefinitionIndex = 44192;

	struct alignas(4) HHAINDEBAOL
	{
		::System::Single IEHPFADHJFD; // 0x10
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHAINDEBAOL_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAINDEBAOL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HHAINDEBAOL_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::HHAINDEBAOL a1, ::HHAINDEBAOL a2)
		{
			return ((::System::Boolean(*)(::HHAINDEBAOL, ::HHAINDEBAOL))((::PBYTE)hIl2Cpp + HHAINDEBAOL_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::HHAINDEBAOL a1, ::HHAINDEBAOL a2)
		{
			return ((::System::Boolean(*)(::HHAINDEBAOL, ::HHAINDEBAOL))((::PBYTE)hIl2Cpp + HHAINDEBAOL_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAINDEBAOL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHAINDEBAOL_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::HHAINDEBAOL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHAINDEBAOL))((::PBYTE)hIl2Cpp + HHAINDEBAOL_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHAINDEBAOL_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
