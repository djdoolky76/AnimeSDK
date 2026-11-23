#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5F5FB0FFBDC346.h"

#define FF27A5898573EB59_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3CF0C70)
#define FF27A5898573EB59__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5AEC0)

inline static constexpr unsigned int FF27A5898573EB59_TypeDefinitionIndex = 10733;

class FF27A5898573EB59 : public ::AC5F5FB0FFBDC346
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF27A5898573EB59__CTOR_OFFSET))(this);
	}

	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FF27A5898573EB59_A3345B9AC9D75C45_OFFSET))(this);
	}
};
