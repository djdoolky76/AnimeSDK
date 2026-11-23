#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/E602D86BC88653D1.h"
#include "unitysdk/System/Object.h"

#define E0A0D3B11094EFDC_BC027A3F1442DAD8_OFFSET UNITYSDK_OFFSET(0x1F95E40)
#define E0A0D3B11094EFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E0A0D3B11094EFDC_TypeDefinitionIndex = 6864;

class E0A0D3B11094EFDC : public ::System::Object
{
public:
	::E0B58AD87D1F143C::E602D86BC88653D1 BC027A3F1442DAD8()
	{
		return ((::E0B58AD87D1F143C::E602D86BC88653D1(*)(::PVOID))((::PBYTE)hIl2Cpp + E0A0D3B11094EFDC_BC027A3F1442DAD8_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0A0D3B11094EFDC__CTOR_OFFSET))(this);
	}
};
