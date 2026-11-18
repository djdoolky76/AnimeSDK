#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CABLBKNPKIO.h"

#define CBMMKDOEHDB__CTOR_OFFSET UNITYSDK_OFFSET(0x145A8520)

inline static constexpr unsigned int CBMMKDOEHDB_TypeDefinitionIndex = 41128;

class CBMMKDOEHDB : public ::CABLBKNPKIO
{
public:
	::System::Void _ctor(::System::Int32 INFACOGDIIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBMMKDOEHDB__CTOR_OFFSET))(this, INFACOGDIIC);
	}
};
