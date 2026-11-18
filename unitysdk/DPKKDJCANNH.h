#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMDMCHNBLBJ.h"

#define DPKKDJCANNH__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDB2A0)

inline static constexpr unsigned int DPKKDJCANNH_TypeDefinitionIndex = 85946;

class DPKKDJCANNH : public ::MMDMCHNBLBJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKKDJCANNH__CTOR_OFFSET))(this);
	}
};
