#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJGBALGMMNE.h"

#define CLGFDIKNEAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F71EEB0)

inline static constexpr unsigned int CLGFDIKNEAC_TypeDefinitionIndex = 96451;

class CLGFDIKNEAC : public ::NJGBALGMMNE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGFDIKNEAC__CTOR_OFFSET))(this);
	}
};
