#pragma once
#include "unitysdk/unitysdk.h"

#define IMJOHEPEJHK_FMEMJJAFKDD_OFFSET UNITYSDK_OFFSET(0x1870FC20)
#define IMJOHEPEJHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1870FBB0)

inline static constexpr unsigned int IMJOHEPEJHK_TypeDefinitionIndex = 72661;

class IMJOHEPEJHK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJOHEPEJHK__CTOR_OFFSET))(this);
	}

	::System::Void FMEMJJAFKDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJOHEPEJHK_FMEMJJAFKDD_OFFSET))(this);
	}
};
