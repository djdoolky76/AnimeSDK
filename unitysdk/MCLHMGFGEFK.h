#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define MCLHMGFGEFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F0)
#define MCLHMGFGEFK_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xB886DE0)
#define MCLHMGFGEFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C610)
#define MCLHMGFGEFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C530)
#define MCLHMGFGEFK_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xB886CA0)
#define MCLHMGFGEFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C620)
#define MCLHMGFGEFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C770)

inline static constexpr unsigned int MCLHMGFGEFK_TypeDefinitionIndex = 73864;

	struct alignas(8) MCLHMGFGEFK
	{
		::System::UInt32 FJDOOKALCBI; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* LFNJPJFJMOH; // 0x18
		::System::String* JFGKMOEEMBL; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MCLHMGFGEFK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Boolean Equals(::MCLHMGFGEFK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCLHMGFGEFK))((::PBYTE)hIl2Cpp + MCLHMGFGEFK_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCLHMGFGEFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLHMGFGEFK_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::MCLHMGFGEFK a1, ::MCLHMGFGEFK a2)
		{
			return ((::System::Boolean(*)(::MCLHMGFGEFK, ::MCLHMGFGEFK))((::PBYTE)hIl2Cpp + MCLHMGFGEFK_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::MCLHMGFGEFK a1, ::MCLHMGFGEFK a2)
		{
			return ((::System::Boolean(*)(::MCLHMGFGEFK, ::MCLHMGFGEFK))((::PBYTE)hIl2Cpp + MCLHMGFGEFK_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLHMGFGEFK_TOSTRING_OFFSET))(this);
		}

	};
