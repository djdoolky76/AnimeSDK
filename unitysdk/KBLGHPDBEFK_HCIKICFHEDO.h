#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBLGHPDBEFK;

#define KBLGHPDBEFK_HCIKICFHEDO_HJMDOIBBKDC_OFFSET UNITYSDK_OFFSET(0x155DA4E0)
#define KBLGHPDBEFK_HCIKICFHEDO__CTOR_OFFSET UNITYSDK_OFFSET(0x155DA140)

inline static constexpr unsigned int KBLGHPDBEFK_HCIKICFHEDO_TypeDefinitionIndex = 75425;

class KBLGHPDBEFK_HCIKICFHEDO : public ::System::Object
{
public:
	::KBLGHPDBEFK* KLHPEBKNIFB; // 0x10
	::System::Int32 PDILCNBMHOI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_HCIKICFHEDO__CTOR_OFFSET))(this);
	}

	::System::Void HJMDOIBBKDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_HCIKICFHEDO_HJMDOIBBKDC_OFFSET))(this);
	}
};
