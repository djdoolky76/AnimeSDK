#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMEDHELDEM.h"

class BJFGACIKBLM;

#define BLCFGJIBNKI_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x14C4DEB0)
#define BLCFGJIBNKI__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4DEA0)

inline static constexpr unsigned int BLCFGJIBNKI_TypeDefinitionIndex = 40475;

class BLCFGJIBNKI : public ::IFMEDHELDEM
{
public:
	::BJFGACIKBLM* LCDLAKOLLJJ; // 0x10
	::BJFGACIKBLM* LBOICOIDEIH; // 0x18

	::System::Void _ctor(::BJFGACIKBLM* LCDLAKOLLJJ, ::BJFGACIKBLM* LBOICOIDEIH)
	{
		return ((::System::Void(*)(::PVOID, ::BJFGACIKBLM*, ::BJFGACIKBLM*))((::PBYTE)hIl2Cpp + BLCFGJIBNKI__CTOR_OFFSET))(this, LCDLAKOLLJJ, LBOICOIDEIH);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCFGJIBNKI_GPKMPDHNCGL_OFFSET))(this);
	}
};
