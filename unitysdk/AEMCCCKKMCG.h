#pragma once
#include "unitysdk/unitysdk.h"

#define AEMCCCKKMCG__CTOR_OFFSET UNITYSDK_OFFSET(0x135D9BB0)

inline static constexpr unsigned int AEMCCCKKMCG_TypeDefinitionIndex = 71127;

class AEMCCCKKMCG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMCCCKKMCG__CTOR_OFFSET))(this);
	}
};
