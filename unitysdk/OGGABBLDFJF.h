#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMEDHELDEM.h"

class BJFGACIKBLM;

#define OGGABBLDFJF_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0xE14C610)
#define OGGABBLDFJF__CTOR_OFFSET UNITYSDK_OFFSET(0xE14C600)

inline static constexpr unsigned int OGGABBLDFJF_TypeDefinitionIndex = 70778;

class OGGABBLDFJF : public ::IFMEDHELDEM
{
public:
	::BJFGACIKBLM* LCDLAKOLLJJ; // 0x10
	::BJFGACIKBLM* LBOICOIDEIH; // 0x18

	::System::Void _ctor(::BJFGACIKBLM* LCDLAKOLLJJ, ::BJFGACIKBLM* LBOICOIDEIH)
	{
		return ((::System::Void(*)(::PVOID, ::BJFGACIKBLM*, ::BJFGACIKBLM*))((::PBYTE)hIl2Cpp + OGGABBLDFJF__CTOR_OFFSET))(this, LCDLAKOLLJJ, LBOICOIDEIH);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGABBLDFJF_GPKMPDHNCGL_OFFSET))(this);
	}
};
