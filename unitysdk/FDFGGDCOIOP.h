#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FDFGGDCOIOP__CTOR_OFFSET UNITYSDK_OFFSET(0xBB384B0)

inline static constexpr unsigned int FDFGGDCOIOP_TypeDefinitionIndex = 87917;

class FDFGGDCOIOP : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGGDCOIOP__CTOR_OFFSET))(this);
	}
};
