#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define BFKBHNOFEPI_CTOR_OFFSET UNITYSDK_OFFSET(0xFDE0)
#define BFKBHNOFEPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xFE80)
#define BFKBHNOFEPI_EQUALS_OFFSET UNITYSDK_OFFSET(0xFE10)
#define BFKBHNOFEPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFE90)
#define BFKBHNOFEPI_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define BFKBHNOFEPI_GET_REALID_OFFSET UNITYSDK_OFFSET(0xFDF0)
#define BFKBHNOFEPI_GET_SKINID_OFFSET UNITYSDK_OFFSET(0xE620)
#define BFKBHNOFEPI_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xACF0)
#define BFKBHNOFEPI_SET_REALID_OFFSET UNITYSDK_OFFSET(0xFE00)
#define BFKBHNOFEPI_SET_SKINID_OFFSET UNITYSDK_OFFSET(0xAF40)

inline static constexpr unsigned int BFKBHNOFEPI_TypeDefinitionIndex = 62483;

	struct alignas(4) BFKBHNOFEPI
	{
		::System::UInt32 _SkinId_k__BackingField; // 0x10
		::System::UInt32 _RealId_k__BackingField; // 0x14
		::System::UInt32 _EnhancedId_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_SkinId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_GET_SKINID_OFFSET))(this);
		}

		::System::Void set_SkinId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_SET_SKINID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RealId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_GET_REALID_OFFSET))(this);
		}

		::System::Void set_RealId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_SET_REALID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnhancedId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_SET_ENHANCEDID_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals(::BFKBHNOFEPI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFKBHNOFEPI))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKBHNOFEPI_GETHASHCODE_OFFSET))(this);
		}

	};
