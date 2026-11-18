#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMDMCHNBLBJ.h"

#define NAOCOIBFNGB__CTOR_OFFSET UNITYSDK_OFFSET(0x13C22160)

inline static constexpr unsigned int NAOCOIBFNGB_TypeDefinitionIndex = 86566;

class NAOCOIBFNGB : public ::MMDMCHNBLBJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOCOIBFNGB__CTOR_OFFSET))(this);
	}
};
