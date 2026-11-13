#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ABMNAENMFJL_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define ABMNAENMFJL_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3DA3F00)
#define ABMNAENMFJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3DFDC50)
#define ABMNAENMFJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3DFDC30)
#define ABMNAENMFJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3DFDC20)
#define ABMNAENMFJL_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define ABMNAENMFJL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1827A980)
#define ABMNAENMFJL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1827A960)
#define ABMNAENMFJL_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3DFDBB0)
#define ABMNAENMFJL_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define ABMNAENMFJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3DFDBA0)

inline static constexpr unsigned int ABMNAENMFJL_TypeDefinitionIndex = 53085;

	struct alignas(4) ABMNAENMFJL
	{
		::System::UInt32 _WorldLevel_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABMNAENMFJL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNAENMFJL_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABMNAENMFJL_SET_WORLDLEVEL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNAENMFJL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ABMNAENMFJL_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::ABMNAENMFJL a1, ::ABMNAENMFJL a2)
		{
			return ((::System::Boolean(*)(::ABMNAENMFJL, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + ABMNAENMFJL_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::ABMNAENMFJL a1, ::ABMNAENMFJL a2)
		{
			return ((::System::Boolean(*)(::ABMNAENMFJL, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + ABMNAENMFJL_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMNAENMFJL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABMNAENMFJL_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::ABMNAENMFJL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + ABMNAENMFJL_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABMNAENMFJL_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
