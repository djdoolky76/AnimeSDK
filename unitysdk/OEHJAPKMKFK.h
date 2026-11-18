#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNHPELCKOHH.h"

#define OEHJAPKMKFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE17A10)

inline static constexpr unsigned int OEHJAPKMKFK_TypeDefinitionIndex = 96393;

class OEHJAPKMKFK : public ::PNHPELCKOHH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHJAPKMKFK__CTOR_OFFSET))(this);
	}
};
