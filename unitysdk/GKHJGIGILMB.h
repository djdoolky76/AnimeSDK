#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

#define GKHJGIGILMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD9340)

inline static constexpr unsigned int GKHJGIGILMB_TypeDefinitionIndex = 28823;

class GKHJGIGILMB : public ::MHOBPPAJKIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHJGIGILMB__CTOR_OFFSET))(this);
	}
};
