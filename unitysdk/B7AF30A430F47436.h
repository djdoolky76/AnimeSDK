#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B7AF30A430F47436_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x20F41E0)
#define B7AF30A430F47436_B8DB5D6E1C281F6F_OFFSET UNITYSDK_OFFSET(0x20F4230)
#define B7AF30A430F47436_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x20F42A0)
#define B7AF30A430F47436__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B7AF30A430F47436_TypeDefinitionIndex = 8639;

class B7AF30A430F47436 : public ::System::Object
{
public:
	::System::Void B8DB5D6E1C281F6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7AF30A430F47436_B8DB5D6E1C281F6F_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7AF30A430F47436__CTOR_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7AF30A430F47436_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7AF30A430F47436_E8AF1E0387A100FA_OFFSET))(this);
	}
};
