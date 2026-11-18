#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FJBIMIPLCGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E30D0)

inline static constexpr unsigned int FJBIMIPLCGG_TypeDefinitionIndex = 94165;

class FJBIMIPLCGG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBIMIPLCGG__CTOR_OFFSET))(this);
	}
};
