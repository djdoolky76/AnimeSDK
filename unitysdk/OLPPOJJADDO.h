#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKMLFIAKFOO_OMJIEHPIKLI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define OLPPOJJADDO_EQUALS_OFFSET UNITYSDK_OFFSET(0x70A220)

inline static constexpr unsigned int OLPPOJJADDO_TypeDefinitionIndex = 64837;

struct alignas(8) OLPPOJJADDO
{
	::UnityEngine::Vector3 EFKNDPBOGME; // 0x10
	::System::Single BPAMMHKFIJI; // 0x1C
	::System::Boolean PPCCLMOPDDH; // 0x20
	::System::Boolean MJIMNNFEKNB; // 0x21
	::System::Byte _padding0[0x6];
	::LKMLFIAKFOO_OMJIEHPIKLI LEOPKJBMNCC; // 0x28
	::UnityEngine::Vector3 LDGKHFADIIC; // 0x48
	::System::Byte _padding1[0x4];
	::System::String* JNAJDCADOOA; // 0x58

	/*
	::System::Boolean Equals(::OLPPOJJADDO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OLPPOJJADDO))((::PBYTE)hIl2Cpp + OLPPOJJADDO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
