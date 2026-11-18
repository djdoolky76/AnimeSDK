#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOKPKFDLENO.h"

#define OFKCHDNGMME_GDFCDGAEPHN_OFFSET UNITYSDK_OFFSET(0x114F43D0)
#define OFKCHDNGMME_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x114F4380)
#define OFKCHDNGMME__CTOR_OFFSET UNITYSDK_OFFSET(0x114F4AF0)

inline static constexpr unsigned int OFKCHDNGMME_TypeDefinitionIndex = 91278;

class OFKCHDNGMME : public ::DOKPKFDLENO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKCHDNGMME__CTOR_OFFSET))(this);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKCHDNGMME_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void GDFCDGAEPHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKCHDNGMME_GDFCDGAEPHN_OFFSET))(this);
	}
};
