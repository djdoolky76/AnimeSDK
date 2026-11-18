#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHMMBAGOCLO.h"
#include "unitysdk/NLCDDKKFDHI.h"

#define EAGLJKJJOED_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1DE49380)
#define EAGLJKJJOED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE493D0)

inline static constexpr unsigned int EAGLJKJJOED_TypeDefinitionIndex = 94247;

class EAGLJKJJOED
{
public:
	::System::Single MLEEKAMODAB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGLJKJJOED__CTOR_OFFSET))(this);
	}

	::NLCDDKKFDHI MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::NLCDDKKFDHI(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + EAGLJKJJOED_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
