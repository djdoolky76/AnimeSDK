#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFMHGFHEDCM.h"
#include "unitysdk/IDNJPAFNAGO.h"

class KGBFLHNJHHN;

#define MMEJKGKHEBK_DPIIPEIDMGK_OFFSET UNITYSDK_OFFSET(0x1BA9CF40)
#define MMEJKGKHEBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9CF30)

inline static constexpr unsigned int MMEJKGKHEBK_TypeDefinitionIndex = 13677;

class MMEJKGKHEBK : public ::AFMHGFHEDCM
{
public:
	::System::Void _ctor(::IDNJPAFNAGO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IDNJPAFNAGO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MMEJKGKHEBK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean DPIIPEIDMGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEJKGKHEBK_DPIIPEIDMGK_OFFSET))(this);
	}
};
