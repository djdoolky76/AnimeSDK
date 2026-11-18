#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OINGKLAHGOI;

#define OINGKLAHGOI_EBFFAGEAPJB_GGOGIGJPGFL_OFFSET UNITYSDK_OFFSET(0x11B36120)
#define OINGKLAHGOI_EBFFAGEAPJB__CTOR_OFFSET UNITYSDK_OFFSET(0x11B36110)

inline static constexpr unsigned int OINGKLAHGOI_EBFFAGEAPJB_TypeDefinitionIndex = 65247;

class OINGKLAHGOI_EBFFAGEAPJB : public ::System::Object
{
public:
	::OINGKLAHGOI* KLHPEBKNIFB; // 0x10
	::System::UInt32 BCCCMFIGOOI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_EBFFAGEAPJB__CTOR_OFFSET))(this);
	}

	::System::Void GGOGIGJPGFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_EBFFAGEAPJB_GGOGIGJPGFL_OFFSET))(this);
	}
};
