#pragma once
#include "unitysdk/unitysdk.h"

#define IACLLPLKEPC__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9CBC0)

inline static constexpr unsigned int IACLLPLKEPC_TypeDefinitionIndex = 47151;

class IACLLPLKEPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACLLPLKEPC__CTOR_OFFSET))(this);
	}
};
