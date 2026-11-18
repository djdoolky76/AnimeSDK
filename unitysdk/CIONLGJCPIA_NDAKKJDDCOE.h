#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIONLGJCPIA;

#define CIONLGJCPIA_NDAKKJDDCOE_EAHKBJLNCDK_OFFSET UNITYSDK_OFFSET(0x13263560)
#define CIONLGJCPIA_NDAKKJDDCOE__CTOR_OFFSET UNITYSDK_OFFSET(0x13263550)

inline static constexpr unsigned int CIONLGJCPIA_NDAKKJDDCOE_TypeDefinitionIndex = 51255;

class CIONLGJCPIA_NDAKKJDDCOE : public ::System::Object
{
public:
	::CIONLGJCPIA* KLHPEBKNIFB; // 0x10
	::System::Int32 AJFAHKNGPCM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA_NDAKKJDDCOE__CTOR_OFFSET))(this);
	}

	::System::Void EAHKBJLNCDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA_NDAKKJDDCOE_EAHKBJLNCDK_OFFSET))(this);
	}
};
