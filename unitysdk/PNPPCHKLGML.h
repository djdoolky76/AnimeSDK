#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBICJCMGMIC.h"
#include "unitysdk/System/ValueType.h"

class CJIEIHEDMME;

#define PNPPCHKLGML__CTOR_OFFSET UNITYSDK_OFFSET(0x3CF6D0)

inline static constexpr unsigned int PNPPCHKLGML_TypeDefinitionIndex = 73286;

struct alignas(8) PNPPCHKLGML
{
	::CJIEIHEDMME* OKIDCPPOFEG; // 0x10
	::OBICJCMGMIC LONGCHCAEMN; // 0x18

	::System::Void _ctor(::CJIEIHEDMME* LADPIPOMBJM, ::OBICJCMGMIC NGEFNCPDKFH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*, ::OBICJCMGMIC))((::PBYTE)hIl2Cpp + PNPPCHKLGML__CTOR_OFFSET))(this, LADPIPOMBJM, NGEFNCPDKFH);
	}
};
