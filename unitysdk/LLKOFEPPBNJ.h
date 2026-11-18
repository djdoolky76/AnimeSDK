#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADCIIHIOAMH.h"

#define LLKOFEPPBNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBE760)

inline static constexpr unsigned int LLKOFEPPBNJ_TypeDefinitionIndex = 67740;

class LLKOFEPPBNJ : public ::ADCIIHIOAMH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKOFEPPBNJ__CTOR_OFFSET))(this);
	}
};
