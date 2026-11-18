#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBICIOFFGBM.h"

#define NGHOPIPMKLJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE57F040)

inline static constexpr unsigned int NGHOPIPMKLJ_TypeDefinitionIndex = 40762;

class NGHOPIPMKLJ : public ::FBICIOFFGBM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHOPIPMKLJ__CTOR_OFFSET))(this);
	}
};
