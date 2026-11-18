#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOPDPELAFKN.h"

#define NFNEGLFDHHA__CTOR_OFFSET UNITYSDK_OFFSET(0x105B6CA0)

inline static constexpr unsigned int NFNEGLFDHHA_TypeDefinitionIndex = 76500;

class NFNEGLFDHHA : public ::MOPDPELAFKN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNEGLFDHHA__CTOR_OFFSET))(this);
	}
};
