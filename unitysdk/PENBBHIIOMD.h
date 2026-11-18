#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define PENBBHIIOMD__CTOR_OFFSET UNITYSDK_OFFSET(0x11975D30)

inline static constexpr unsigned int PENBBHIIOMD_TypeDefinitionIndex = 64125;

class PENBBHIIOMD : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENBBHIIOMD__CTOR_OFFSET))(this);
	}
};
