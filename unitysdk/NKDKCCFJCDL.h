#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENBNCOFEDBM.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NKDKCCFJCDL_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0xE761580)
#define NKDKCCFJCDL_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0xE7617F0)
#define NKDKCCFJCDL__CTOR_OFFSET UNITYSDK_OFFSET(0x5A6B90)

inline static constexpr unsigned int NKDKCCFJCDL_TypeDefinitionIndex = 64432;

struct alignas(4) NKDKCCFJCDL
{
	::ENBNCOFEDBM AIBAJMFDEHL; // 0x10
	::ENBNCOFEDBM LBFIGHJBKMG; // 0x20

	::System::Void _ctor(::MoleMole::Config::BaseProperty NFCJNEMDHIJ, ::MoleMole::Config::BaseProperty DIMJCCLCNBF, ::System::String* DKBGEHIJPLC, ::System::String* KIIKFFKPDEL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NKDKCCFJCDL__CTOR_OFFSET))(this, NFCJNEMDHIJ, DIMJCCLCNBF, DKBGEHIJPLC, KIIKFFKPDEL);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::NKDKCCFJCDL EJCBEJMGFAJ, ::NKDKCCFJCDL EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::NKDKCCFJCDL, ::NKDKCCFJCDL))((::PBYTE)hIl2Cpp + NKDKCCFJCDL_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::System::Boolean NOGJIJMACNO(::NKDKCCFJCDL EJCBEJMGFAJ, ::NKDKCCFJCDL EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::NKDKCCFJCDL, ::NKDKCCFJCDL))((::PBYTE)hIl2Cpp + NKDKCCFJCDL_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/
};
