#pragma once
#include "unitysdk/unitysdk.h"

#define GPFMHCOONKI__CTOR_OFFSET UNITYSDK_OFFSET(0x18168500)

inline static constexpr unsigned int GPFMHCOONKI_TypeDefinitionIndex = 59934;

class GPFMHCOONKI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFMHCOONKI__CTOR_OFFSET))(this);
	}
};
