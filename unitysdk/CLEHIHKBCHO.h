#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CLEHIHKBCHO__CTOR_OFFSET UNITYSDK_OFFSET(0x16968F00)

inline static constexpr unsigned int CLEHIHKBCHO_TypeDefinitionIndex = 41141;

class CLEHIHKBCHO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEHIHKBCHO__CTOR_OFFSET))(this);
	}
};
