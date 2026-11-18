#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define GMDMIPIFGPN__CTOR_OFFSET UNITYSDK_OFFSET(0x10FED510)

inline static constexpr unsigned int GMDMIPIFGPN_TypeDefinitionIndex = 77934;

class GMDMIPIFGPN : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDMIPIFGPN__CTOR_OFFSET))(this);
	}
};
