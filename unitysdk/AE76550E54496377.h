#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/E602D86BC88653D1.h"
#include "unitysdk/System/Object.h"

class A4EDE04F705D1E98;

#define AE76550E54496377_BC027A3F1442DAD8_OFFSET UNITYSDK_OFFSET(0x20304A0)
#define AE76550E54496377__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE76550E54496377_TypeDefinitionIndex = 8266;

class AE76550E54496377 : public ::System::Object
{
public:
	::A4EDE04F705D1E98* A212EB9E23DEA10C; // 0x10

	::E0B58AD87D1F143C::E602D86BC88653D1 BC027A3F1442DAD8()
	{
		return ((::E0B58AD87D1F143C::E602D86BC88653D1(*)(::PVOID))((::PBYTE)hIl2Cpp + AE76550E54496377_BC027A3F1442DAD8_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE76550E54496377__CTOR_OFFSET))(this);
	}
};
