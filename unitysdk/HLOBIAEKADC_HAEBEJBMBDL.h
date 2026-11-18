#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HLOBIAEKADC_HAEBEJBMBDL_JJMBMJMCFKP_OFFSET UNITYSDK_OFFSET(0x15BDED50)
#define HLOBIAEKADC_HAEBEJBMBDL__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDED40)

inline static constexpr unsigned int HLOBIAEKADC_HAEBEJBMBDL_TypeDefinitionIndex = 61913;

class HLOBIAEKADC_HAEBEJBMBDL : public ::System::Object
{
public:
	::System::Int32 HLFOCIAHLIB; // 0x10
	::System::Int32 BBBFMDJILAD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOBIAEKADC_HAEBEJBMBDL__CTOR_OFFSET))(this);
	}

	::System::Void JJMBMJMCFKP(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOBIAEKADC_HAEBEJBMBDL_JJMBMJMCFKP_OFFSET))(this, EBFCACIEKBC);
	}
};
