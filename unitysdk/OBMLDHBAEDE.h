#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }

#define OBMLDHBAEDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x49A240)
#define OBMLDHBAEDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x49A1A0)
#define OBMLDHBAEDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x49A250)
#define OBMLDHBAEDE_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x49A310)
#define OBMLDHBAEDE_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x49A370)
#define OBMLDHBAEDE__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int OBMLDHBAEDE_TypeDefinitionIndex = 84850;

struct alignas(4) OBMLDHBAEDE
{
	::UnityEngine::Vector2 JAPACFEMANE; // 0x10
	::UnityEngine::Vector2 LLOJCOLCKJL; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2 KDEHMPGOCEP, ::UnityEngine::Vector2 PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OBMLDHBAEDE__CTOR_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	/*
	::System::Boolean Equals(::OBMLDHBAEDE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OBMLDHBAEDE))((::PBYTE)hIl2Cpp + OBMLDHBAEDE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBMLDHBAEDE_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMLDHBAEDE_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMLDHBAEDE_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBMLDHBAEDE_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
