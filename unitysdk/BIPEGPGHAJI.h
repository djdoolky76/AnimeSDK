#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define BIPEGPGHAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71BE30)

inline static constexpr unsigned int BIPEGPGHAJI_TypeDefinitionIndex = 93440;

class BIPEGPGHAJI : public ::CGGLJLECNJM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPEGPGHAJI__CTOR_OFFSET))(this);
	}
};
