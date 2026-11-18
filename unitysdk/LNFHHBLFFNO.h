#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LNFHHBLFFNO__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3D9C0)

inline static constexpr unsigned int LNFHHBLFFNO_TypeDefinitionIndex = 68378;

class LNFHHBLFFNO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFHHBLFFNO__CTOR_OFFSET))(this);
	}
};
