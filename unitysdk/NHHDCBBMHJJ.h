#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define NHHDCBBMHJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AF00)
#define NHHDCBBMHJJ_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3DAFD90)
#define NHHDCBBMHJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3DAFD80)
#define NHHDCBBMHJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x3DAFD20)
#define NHHDCBBMHJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3DAFD10)
#define NHHDCBBMHJJ_GET_BLOCKROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xFDBF20)
#define NHHDCBBMHJJ_GET_EFFECTIVEVISIBLE_OFFSET UNITYSDK_OFFSET(0x7CEE40)
#define NHHDCBBMHJJ_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x14898FC0)
#define NHHDCBBMHJJ_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x14898FA0)
#define NHHDCBBMHJJ_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3DAFCF0)
#define NHHDCBBMHJJ_SET_BLOCKROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xFDBF30)
#define NHHDCBBMHJJ_SET_EFFECTIVEVISIBLE_OFFSET UNITYSDK_OFFSET(0xADBB90)
#define NHHDCBBMHJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3DAFCE0)

inline static constexpr unsigned int NHHDCBBMHJJ_TypeDefinitionIndex = 76052;

	struct alignas(4) NHHDCBBMHJJ
	{
		::System::Boolean _EffectiveVisible_k__BackingField; // 0x10
		::System::Boolean _BlockRootActive_k__BackingField; // 0x11
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_EffectiveVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_GET_EFFECTIVEVISIBLE_OFFSET))(this);
		}

		::System::Void set_EffectiveVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_SET_EFFECTIVEVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockRootActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_GET_BLOCKROOTACTIVE_OFFSET))(this);
		}

		::System::Void set_BlockRootActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_SET_BLOCKROOTACTIVE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::NHHDCBBMHJJ a1, ::NHHDCBBMHJJ a2)
		{
			return ((::System::Boolean(*)(::NHHDCBBMHJJ, ::NHHDCBBMHJJ))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::NHHDCBBMHJJ a1, ::NHHDCBBMHJJ a2)
		{
			return ((::System::Boolean(*)(::NHHDCBBMHJJ, ::NHHDCBBMHJJ))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::NHHDCBBMHJJ a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHHDCBBMHJJ))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NHHDCBBMHJJ_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
