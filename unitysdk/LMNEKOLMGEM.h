#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define LMNEKOLMGEM_CKKLGBJNNBJ_OFFSET UNITYSDK_OFFSET(0xC02DC30)
#define LMNEKOLMGEM_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1ED70)
#define LMNEKOLMGEM_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define LMNEKOLMGEM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF110)
#define LMNEKOLMGEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EE80)
#define LMNEKOLMGEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EE60)
#define LMNEKOLMGEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EE50)
#define LMNEKOLMGEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xE600)
#define LMNEKOLMGEM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC02DF60)
#define LMNEKOLMGEM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC02DF40)
#define LMNEKOLMGEM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1EDE0)
#define LMNEKOLMGEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define LMNEKOLMGEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EDD0)

inline static constexpr unsigned int LMNEKOLMGEM_TypeDefinitionIndex = 53066;

	struct alignas(4) LMNEKOLMGEM
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_SET_ID_OFFSET))(this, a1);
		}

		/*
		static ::LMNEKOLMGEM CKKLGBJNNBJ()
		{
			return ((::LMNEKOLMGEM(*)())((::PBYTE)hIl2Cpp + LMNEKOLMGEM_CKKLGBJNNBJ_OFFSET))();
		}
		*/

		/*
		::System::Int32 CompareTo(::LMNEKOLMGEM a1)
		{
			return ((::System::Int32(*)(::PVOID, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_COMPARETO_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::LMNEKOLMGEM a1, ::LMNEKOLMGEM a2)
		{
			return ((::System::Boolean(*)(::LMNEKOLMGEM, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::LMNEKOLMGEM a1, ::LMNEKOLMGEM a2)
		{
			return ((::System::Boolean(*)(::LMNEKOLMGEM, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::LMNEKOLMGEM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMNEKOLMGEM_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
