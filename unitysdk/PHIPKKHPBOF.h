#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKPCAPOLHGN.h"

#define PHIPKKHPBOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA92F0)

inline static constexpr unsigned int PHIPKKHPBOF_TypeDefinitionIndex = 28666;

class PHIPKKHPBOF : public ::PKPCAPOLHGN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIPKKHPBOF__CTOR_OFFSET))(this);
	}
};
