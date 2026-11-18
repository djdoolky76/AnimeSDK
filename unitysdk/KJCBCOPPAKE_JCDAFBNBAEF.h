#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define KJCBCOPPAKE_JCDAFBNBAEF_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x15B93C50)
#define KJCBCOPPAKE_JCDAFBNBAEF_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15B93CF0)
#define KJCBCOPPAKE_JCDAFBNBAEF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B93C40)

inline static constexpr unsigned int KJCBCOPPAKE_JCDAFBNBAEF_TypeDefinitionIndex = 79933;

class KJCBCOPPAKE_JCDAFBNBAEF : public ::System::Object
{
public:
	::HOCDHMEPPEG LAIDIILNEOC; // 0x10
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCBCOPPAKE_JCDAFBNBAEF__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCBCOPPAKE_JCDAFBNBAEF_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCBCOPPAKE_JCDAFBNBAEF_LIDNPLMPHAL_OFFSET))(this);
	}
};
