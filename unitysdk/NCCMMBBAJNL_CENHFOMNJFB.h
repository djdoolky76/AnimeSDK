#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NCCMMBBAJNL;

#define NCCMMBBAJNL_CENHFOMNJFB_BAMPBEFFDDH_OFFSET UNITYSDK_OFFSET(0x1288AF10)
#define NCCMMBBAJNL_CENHFOMNJFB_PBBDBMBLCCI_OFFSET UNITYSDK_OFFSET(0x1288B060)
#define NCCMMBBAJNL_CENHFOMNJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1288AF00)

inline static constexpr unsigned int NCCMMBBAJNL_CENHFOMNJFB_TypeDefinitionIndex = 90773;

class NCCMMBBAJNL_CENHFOMNJFB : public ::System::Object
{
public:
	::NCCMMBBAJNL* KLHPEBKNIFB; // 0x10
	::System::Single EKGMLLJEJHM; // 0x18
	::System::Single EEODALLOKMF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMMBBAJNL_CENHFOMNJFB__CTOR_OFFSET))(this);
	}

	::System::Void BAMPBEFFDDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMMBBAJNL_CENHFOMNJFB_BAMPBEFFDDH_OFFSET))(this);
	}

	::System::Void PBBDBMBLCCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMMBBAJNL_CENHFOMNJFB_PBBDBMBLCCI_OFFSET))(this);
	}
};
