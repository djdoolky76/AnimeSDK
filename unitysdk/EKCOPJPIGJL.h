#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EKCOPJPIGJL_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x78EFF0)
#define EKCOPJPIGJL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x78F050)
#define EKCOPJPIGJL__CTOR_OFFSET UNITYSDK_OFFSET(0x3CCA00)

inline static constexpr unsigned int EKCOPJPIGJL_TypeDefinitionIndex = 87152;

struct alignas(4) EKCOPJPIGJL
{
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x10
	::System::Single IBCCEKBIJBH; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single IBCCEKBIJBH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EKCOPJPIGJL__CTOR_OFFSET))(this, OHOGDOMNHNK, IBCCEKBIJBH);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCOPJPIGJL_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCOPJPIGJL_PHOADBJGFBE_OFFSET))(this);
	}
};
