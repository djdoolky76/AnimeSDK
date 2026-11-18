#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PENBHIMBDGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1949A390)

inline static constexpr unsigned int PENBHIMBDGP_TypeDefinitionIndex = 74010;

class PENBHIMBDGP : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENBHIMBDGP__CTOR_OFFSET))(this);
	}
};
