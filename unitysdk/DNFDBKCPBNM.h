#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define DNFDBKCPBNM_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define DNFDBKCPBNM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF130)
#define DNFDBKCPBNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198F7F0)
#define DNFDBKCPBNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x198F7D0)
#define DNFDBKCPBNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198F7C0)
#define DNFDBKCPBNM_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xE620)
#define DNFDBKCPBNM_KJLHEHPOICD_OFFSET UNITYSDK_OFFSET(0x198F730)
#define DNFDBKCPBNM_LGMKAMBPBAL_OFFSET UNITYSDK_OFFSET(0x1194CC40)
#define DNFDBKCPBNM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1194CD00)
#define DNFDBKCPBNM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1194CF90)
#define DNFDBKCPBNM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x198F750)
#define DNFDBKCPBNM_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define DNFDBKCPBNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x198F740)

inline static constexpr unsigned int DNFDBKCPBNM_TypeDefinitionIndex = 51892;

	struct alignas(4) DNFDBKCPBNM
	{
		::System::UInt32 _RoleID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_GET_ROLEID_OFFSET))(this);
		}

		::System::Void set_RoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_SET_ROLEID_OFFSET))(this, a1);
		}

		/*
		static ::DNFDBKCPBNM LGMKAMBPBAL()
		{
			return ((::DNFDBKCPBNM(*)())((::PBYTE)hIl2Cpp + DNFDBKCPBNM_LGMKAMBPBAL_OFFSET))();
		}
		*/

		::System::Boolean KJLHEHPOICD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_KJLHEHPOICD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::DNFDBKCPBNM a1, ::DNFDBKCPBNM a2)
		{
			return ((::System::Boolean(*)(::DNFDBKCPBNM, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::DNFDBKCPBNM a1, ::DNFDBKCPBNM a2)
		{
			return ((::System::Boolean(*)(::DNFDBKCPBNM, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::DNFDBKCPBNM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNFDBKCPBNM_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
