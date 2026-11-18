#pragma once
#include "unitysdk/unitysdk.h"

#define DAPKHGONNCL__CTOR_OFFSET UNITYSDK_OFFSET(0x15355090)

inline static constexpr unsigned int DAPKHGONNCL_TypeDefinitionIndex = 56293;

class DAPKHGONNCL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPKHGONNCL__CTOR_OFFSET))(this);
	}
};
