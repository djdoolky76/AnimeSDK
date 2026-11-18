#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLPNBCHEONJ.h"

#define MPODODIOMHF__CTOR_OFFSET UNITYSDK_OFFSET(0x14D9B660)

inline static constexpr unsigned int MPODODIOMHF_TypeDefinitionIndex = 65513;

class MPODODIOMHF : public ::GLPNBCHEONJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPODODIOMHF__CTOR_OFFSET))(this);
	}
};
