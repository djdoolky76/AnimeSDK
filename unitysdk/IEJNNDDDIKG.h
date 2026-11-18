#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define IEJNNDDDIKG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFFD00)

inline static constexpr unsigned int IEJNNDDDIKG_TypeDefinitionIndex = 72843;

class IEJNNDDDIKG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNNDDDIKG__CTOR_OFFSET))(this);
	}
};
