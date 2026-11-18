#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHFONBEAAN.h"

#define FFPJENADBFB_OHDPCOIOMGF_OFFSET UNITYSDK_OFFSET(0x140F0E60)
#define FFPJENADBFB__CTOR_OFFSET UNITYSDK_OFFSET(0x140F0E20)

inline static constexpr unsigned int FFPJENADBFB_TypeDefinitionIndex = 86652;

class FFPJENADBFB : public ::OLHFONBEAAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPJENADBFB__CTOR_OFFSET))(this);
	}

	::System::Boolean OHDPCOIOMGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPJENADBFB_OHDPCOIOMGF_OFFSET))(this);
	}
};
