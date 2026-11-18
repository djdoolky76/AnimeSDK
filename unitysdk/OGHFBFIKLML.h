#pragma once
#include "unitysdk/unitysdk.h"

#define OGHFBFIKLML_MPGMKIJCIEJ_OFFSET UNITYSDK_OFFSET(0x114F5750)
#define OGHFBFIKLML__CTOR_OFFSET UNITYSDK_OFFSET(0x114F5930)

inline static constexpr unsigned int OGHFBFIKLML_TypeDefinitionIndex = 78972;

class OGHFBFIKLML
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHFBFIKLML__CTOR_OFFSET))(this);
	}

	::System::Void MPGMKIJCIEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHFBFIKLML_MPGMKIJCIEJ_OFFSET))(this);
	}
};
