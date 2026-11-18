#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define FHODABCKNKP_PMPEPIJPJBC_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14AD52D0)
#define FHODABCKNKP_PMPEPIJPJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD52C0)

inline static constexpr unsigned int FHODABCKNKP_PMPEPIJPJBC_TypeDefinitionIndex = 64745;

class FHODABCKNKP_PMPEPIJPJBC : public ::System::Object
{
public:
	::HOCDHMEPPEG FGJJJKHJLJC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHODABCKNKP_PMPEPIJPJBC__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHODABCKNKP_PMPEPIJPJBC_LIDNPLMPHAL_OFFSET))(this);
	}
};
