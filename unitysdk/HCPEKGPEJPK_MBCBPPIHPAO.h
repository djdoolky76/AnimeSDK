#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define HCPEKGPEJPK_MBCBPPIHPAO_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define HCPEKGPEJPK_MBCBPPIHPAO_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define HCPEKGPEJPK_MBCBPPIHPAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define HCPEKGPEJPK_MBCBPPIHPAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

inline static constexpr unsigned int HCPEKGPEJPK_MBCBPPIHPAO_TypeDefinitionIndex = 14370;

	struct alignas(4) HCPEKGPEJPK_MBCBPPIHPAO
	{
		::System::UInt32 DHGCNNPEJCK; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCPEKGPEJPK_MBCBPPIHPAO_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPEKGPEJPK_MBCBPPIHPAO_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::HCPEKGPEJPK_MBCBPPIHPAO a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCPEKGPEJPK_MBCBPPIHPAO))((::PBYTE)hIl2Cpp + HCPEKGPEJPK_MBCBPPIHPAO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPEKGPEJPK_MBCBPPIHPAO_GETHASHCODE_OFFSET))(this);
		}

	};
