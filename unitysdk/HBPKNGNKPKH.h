#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/EKCOPJPIGJL.h"

#define HBPKNGNKPKH_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x721310)
#define HBPKNGNKPKH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x721370)
#define HBPKNGNKPKH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7212A0)
#define HBPKNGNKPKH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7212E0)
#define HBPKNGNKPKH__CTOR_OFFSET UNITYSDK_OFFSET(0x721260)

inline static constexpr unsigned int HBPKNGNKPKH_TypeDefinitionIndex = 57126;

struct alignas(4) HBPKNGNKPKH
{
	::System::UInt32 IDDPBGCBMLJ; // 0x10
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x14
	::System::Single IBCCEKBIJBH; // 0x20
	::System::Boolean LBPPIKPKOHP; // 0x24

	::System::Void _ctor(::System::UInt32 IDDPBGCBMLJ, ::EKCOPJPIGJL AMDPLEJDOPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::EKCOPJPIGJL))((::PBYTE)hIl2Cpp + HBPKNGNKPKH__CTOR_OFFSET))(this, IDDPBGCBMLJ, AMDPLEJDOPK);
	}

	::System::Void _ctor_1(::System::UInt32 IDDPBGCBMLJ, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single IBCCEKBIJBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HBPKNGNKPKH__CTOR_1_OFFSET))(this, IDDPBGCBMLJ, OHOGDOMNHNK, IBCCEKBIJBH);
	}

	::System::Void _ctor_2(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single IBCCEKBIJBH, ::System::Boolean HIEHKJCABHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HBPKNGNKPKH__CTOR_2_OFFSET))(this, OHOGDOMNHNK, IBCCEKBIJBH, HIEHKJCABHI);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPKNGNKPKH_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPKNGNKPKH_PHOADBJGFBE_OFFSET))(this);
	}
};
