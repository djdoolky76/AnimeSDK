#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHDMAEDNPAM.h"

#define FGGCCFOCCBK_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x14295FF0)
#define FGGCCFOCCBK__CTOR_OFFSET UNITYSDK_OFFSET(0x142961E0)

inline static constexpr unsigned int FGGCCFOCCBK_TypeDefinitionIndex = 83210;

class FGGCCFOCCBK : public ::GHDMAEDNPAM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGCCFOCCBK__CTOR_OFFSET))(this);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGCCFOCCBK_GPKMPDHNCGL_OFFSET))(this);
	}
};
