#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PEAPKGNHOON__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD73B0)

inline static constexpr unsigned int PEAPKGNHOON_TypeDefinitionIndex = 45286;

class PEAPKGNHOON : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAPKGNHOON__CTOR_OFFSET))(this);
	}
};
