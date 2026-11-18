#pragma once
#include "unitysdk/unitysdk.h"

#define ILBCHBLHDFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9A800)

inline static constexpr unsigned int ILBCHBLHDFG_TypeDefinitionIndex = 50013;

class ILBCHBLHDFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBCHBLHDFG__CTOR_OFFSET))(this);
	}
};
