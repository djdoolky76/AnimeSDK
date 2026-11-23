#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B1522B2109DC12E7.h"

class AEED0FC788CAF227;

#define E941FE2D6FB8AB46_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1AA1670)
#define E941FE2D6FB8AB46__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA16F0)

inline static constexpr unsigned int E941FE2D6FB8AB46_TypeDefinitionIndex = 1898;

class E941FE2D6FB8AB46 : public ::B1522B2109DC12E7
{
public:
	::AEED0FC788CAF227* F5F683020D2EAD68; // 0x40

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E941FE2D6FB8AB46_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E941FE2D6FB8AB46__CTOR_OFFSET))(this);
	}
};
