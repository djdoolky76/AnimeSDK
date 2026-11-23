#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E606D165FF9BCC82.h"

#define F7FFF2AA489964CE_B35A9D5250EFB66F_OFFSET UNITYSDK_OFFSET(0x40D8900)
#define F7FFF2AA489964CE_FDF77BED408E6F28_OFFSET UNITYSDK_OFFSET(0x40D89D0)
#define F7FFF2AA489964CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7FFF2AA489964CE_TypeDefinitionIndex = 20245;

class F7FFF2AA489964CE : public ::E606D165FF9BCC82
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7FFF2AA489964CE__CTOR_OFFSET))(this);
	}

	::System::Int64 B35A9D5250EFB66F()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + F7FFF2AA489964CE_B35A9D5250EFB66F_OFFSET))(this);
	}

	::System::Int64 FDF77BED408E6F28()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + F7FFF2AA489964CE_FDF77BED408E6F28_OFFSET))(this);
	}
};
