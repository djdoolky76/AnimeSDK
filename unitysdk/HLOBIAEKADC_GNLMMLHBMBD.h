#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HLOBIAEKADC_GNLMMLHBMBD_CCCOACKHKAA_OFFSET UNITYSDK_OFFSET(0x140C1090)
#define HLOBIAEKADC_GNLMMLHBMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x140C1080)

inline static constexpr unsigned int HLOBIAEKADC_GNLMMLHBMBD_TypeDefinitionIndex = 61910;

class HLOBIAEKADC_GNLMMLHBMBD : public ::System::Object
{
public:
	::System::Int32 BBBFMDJILAD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOBIAEKADC_GNLMMLHBMBD__CTOR_OFFSET))(this);
	}

	::System::Void CCCOACKHKAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOBIAEKADC_GNLMMLHBMBD_CCCOACKHKAA_OFFSET))(this);
	}
};
