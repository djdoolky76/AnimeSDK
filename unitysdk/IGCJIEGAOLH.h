#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define IGCJIEGAOLH_CTOR_OFFSET UNITYSDK_OFFSET(0x12B00)
#define IGCJIEGAOLH_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x12BE0)
#define IGCJIEGAOLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3056C10)
#define IGCJIEGAOLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3056BE0)
#define IGCJIEGAOLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3056BD0)
#define IGCJIEGAOLH_GET_ID_OFFSET UNITYSDK_OFFSET(0xE600)
#define IGCJIEGAOLH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x12B10)
#define IGCJIEGAOLH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x173A5160)
#define IGCJIEGAOLH_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x173A5140)
#define IGCJIEGAOLH_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3056BB0)
#define IGCJIEGAOLH_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define IGCJIEGAOLH_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x12B20)
#define IGCJIEGAOLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3056BA0)

inline static constexpr unsigned int IGCJIEGAOLH_TypeDefinitionIndex = 53036;

	struct alignas(4) IGCJIEGAOLH
	{
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::IGCJIEGAOLH a1, ::IGCJIEGAOLH a2)
		{
			return ((::System::Boolean(*)(::IGCJIEGAOLH, ::IGCJIEGAOLH))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::IGCJIEGAOLH a1, ::IGCJIEGAOLH a2)
		{
			return ((::System::Boolean(*)(::IGCJIEGAOLH, ::IGCJIEGAOLH))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::IGCJIEGAOLH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGCJIEGAOLH))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCJIEGAOLH_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
