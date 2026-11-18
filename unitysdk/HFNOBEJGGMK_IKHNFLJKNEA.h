#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFNOBEJGGMK_JIBFKNHADON;

#define HFNOBEJGGMK_IKHNFLJKNEA_FEBELEDMBOD_OFFSET UNITYSDK_OFFSET(0x11017D40)
#define HFNOBEJGGMK_IKHNFLJKNEA__CTOR_OFFSET UNITYSDK_OFFSET(0x11017CC0)

inline static constexpr unsigned int HFNOBEJGGMK_IKHNFLJKNEA_TypeDefinitionIndex = 68499;

class HFNOBEJGGMK_IKHNFLJKNEA : public ::System::Object
{
public:
	::HFNOBEJGGMK_JIBFKNHADON* MMLGNPNEFCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNOBEJGGMK_IKHNFLJKNEA__CTOR_OFFSET))(this);
	}

	::System::Void FEBELEDMBOD(::System::Int64 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HFNOBEJGGMK_IKHNFLJKNEA_FEBELEDMBOD_OFFSET))(this, ACHBBPJIBIE);
	}
};
