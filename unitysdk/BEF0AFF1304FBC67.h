#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5F5FB0FFBDC346.h"

#define BEF0AFF1304FBC67_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3C05A90)
#define BEF0AFF1304FBC67__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5AEC0)

inline static constexpr unsigned int BEF0AFF1304FBC67_TypeDefinitionIndex = 11372;

class BEF0AFF1304FBC67 : public ::AC5F5FB0FFBDC346
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF0AFF1304FBC67__CTOR_OFFSET))(this);
	}

	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF0AFF1304FBC67_A3345B9AC9D75C45_OFFSET))(this);
	}
};
