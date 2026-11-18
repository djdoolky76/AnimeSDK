#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OCBNMBGBLFM__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF51A0)

inline static constexpr unsigned int OCBNMBGBLFM_TypeDefinitionIndex = 61176;

class OCBNMBGBLFM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBNMBGBLFM__CTOR_OFFSET))(this);
	}
};
