#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define LIANNBENDCB__CTOR_OFFSET UNITYSDK_OFFSET(0x125672C0)

inline static constexpr unsigned int LIANNBENDCB_TypeDefinitionIndex = 52110;

class LIANNBENDCB : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIANNBENDCB__CTOR_OFFSET))(this);
	}
};
