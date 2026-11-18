#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PEFLGKCMLAM_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1B9D1370)
#define PEFLGKCMLAM_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x1B9D13B0)
#define PEFLGKCMLAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D1420)

inline static constexpr unsigned int PEFLGKCMLAM_TypeDefinitionIndex = 40985;

class PEFLGKCMLAM : public ::System::Object
{
public:
	::System::Boolean MBMACCFFIKC; // 0x10
	::System::Boolean MIMIBNMLGJF; // 0x11
	::System::Boolean MMKHPCPIAOI; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLGKCMLAM__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLGKCMLAM_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLGKCMLAM_ILEEFLAOOOM_OFFSET))(this);
	}
};
