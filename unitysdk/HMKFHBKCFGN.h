#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define HMKFHBKCFGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x3055250)
#define HMKFHBKCFGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3055260)

inline static constexpr unsigned int HMKFHBKCFGN_TypeDefinitionIndex = 71798;

	struct alignas(8) HMKFHBKCFGN
	{
		::Il2CppArray<::UnityEngine::Material*>* BPIHKOEBGLD; // 0x10
		/*
		::System::Boolean Equals(::HMKFHBKCFGN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMKFHBKCFGN))((::PBYTE)hIl2Cpp + HMKFHBKCFGN_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKFHBKCFGN_GETHASHCODE_OFFSET))(this);
		}

	};
