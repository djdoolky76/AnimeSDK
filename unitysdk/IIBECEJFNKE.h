#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMMFGMLPGLP.h"
#include "unitysdk/GFKJFGKPGLL.h"

class BPEJGCLGENA;
class KGBFLHNJHHN;

#define IIBECEJFNKE_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DC938A0)
#define IIBECEJFNKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC93890)

inline static constexpr unsigned int IIBECEJFNKE_TypeDefinitionIndex = 94174;

class IIBECEJFNKE : public ::NMMFGMLPGLP
{
public:
	::System::Void _ctor(::GFKJFGKPGLL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GFKJFGKPGLL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IIBECEJFNKE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::BPEJGCLGENA* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::BPEJGCLGENA*))((::PBYTE)hIl2Cpp + IIBECEJFNKE_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
