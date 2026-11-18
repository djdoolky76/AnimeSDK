#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/BDPJBNLHJJG.h"

#define NPIAGDEBHHF_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x709A90)
#define NPIAGDEBHHF__CTOR_OFFSET UNITYSDK_OFFSET(0x36BEF0)

inline static constexpr unsigned int NPIAGDEBHHF_TypeDefinitionIndex = 58386;

struct alignas(4) NPIAGDEBHHF
{
	// static const ::BAALPDONIGK ONJOPMEPJOP = 0xFF0; // 0x0
	::UnityEngine::Vector3Int BDBJLDHJCKK; // 0x10

	::System::Void _ctor(::UnityEngine::Vector3Int EBCHCKILAFJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + NPIAGDEBHHF__CTOR_OFFSET))(this, EBCHCKILAFJ);
	}

	::BDPJBNLHJJG KJGFHDAMHGO()
	{
		return ((::BDPJBNLHJJG(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIAGDEBHHF_KJGFHDAMHGO_OFFSET))(this);
	}
};
