#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define APGONDPFBDC_IGHEPPAEMGG_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x185447C0)
#define APGONDPFBDC_IGHEPPAEMGG__CTOR_OFFSET UNITYSDK_OFFSET(0x185447B0)

inline static constexpr unsigned int APGONDPFBDC_IGHEPPAEMGG_TypeDefinitionIndex = 39492;

class APGONDPFBDC_IGHEPPAEMGG : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGONDPFBDC_IGHEPPAEMGG__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGONDPFBDC_IGHEPPAEMGG_LIDNPLMPHAL_OFFSET))(this);
	}
};
