#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define LMNEKOLMGEM_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define LMNEKOLMGEM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF130)
#define LMNEKOLMGEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B0D0)
#define LMNEKOLMGEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B070)
#define LMNEKOLMGEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B060)
#define LMNEKOLMGEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xE620)
#define LMNEKOLMGEM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB7D17E0)
#define LMNEKOLMGEM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB7D17C0)
#define LMNEKOLMGEM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1AFF0)
#define LMNEKOLMGEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define LMNEKOLMGEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFE0)

inline static constexpr unsigned int LMNEKOLMGEM_TypeDefinitionIndex = 51961;

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
