#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LGOHCKHPJBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F6BF0)
#define LGOHCKHPJBN_FADFAEDDOGB_OFFSET UNITYSDK_OFFSET(0x7F6C30)

inline static constexpr unsigned int LGOHCKHPJBN_TypeDefinitionIndex = 51970;

struct alignas(4) LGOHCKHPJBN
{
	::System::Single HDPHOOIKDBM; // 0x10
	::System::Single NCAMHEALMCB; // 0x14
	::UnityEngine::Vector2 MNJAFCANADJ; // 0x18
	::UnityEngine::Vector2 PKPGKCPDAHO; // 0x20
	::UnityEngine::Bounds IKGHBCFKOOE; // 0x28
	::System::Single JEJMGCNBMAD; // 0x40
	::System::Single IFEFGIHOKOC; // 0x44

	/*
	::System::Boolean Equals(::LGOHCKHPJBN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGOHCKHPJBN))((::PBYTE)hIl2Cpp + LGOHCKHPJBN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::UnityEngine::Vector2 FADFAEDDOGB(::UnityEngine::Vector3 BAECLPHLLHO)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LGOHCKHPJBN_FADFAEDDOGB_OFFSET))(this, BAECLPHLLHO);
	}
};
