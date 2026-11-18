#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBBCFJKMFNF.h"

#define ACNCDMFEBEG__CTOR_OFFSET UNITYSDK_OFFSET(0x14396380)

inline static constexpr unsigned int ACNCDMFEBEG_TypeDefinitionIndex = 85945;

class ACNCDMFEBEG : public ::MBBCFJKMFNF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNCDMFEBEG__CTOR_OFFSET))(this);
	}
};
