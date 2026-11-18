#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FBDPBECBEKG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB31810)

inline static constexpr unsigned int FBDPBECBEKG_TypeDefinitionIndex = 64697;

class FBDPBECBEKG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDPBECBEKG__CTOR_OFFSET))(this);
	}
};
