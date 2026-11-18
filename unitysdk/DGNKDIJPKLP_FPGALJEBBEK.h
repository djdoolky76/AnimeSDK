#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NMILKOJNFFF.h"

#define DGNKDIJPKLP_FPGALJEBBEK_COMPARE_OFFSET UNITYSDK_OFFSET(0x19410C60)
#define DGNKDIJPKLP_FPGALJEBBEK__CTOR_OFFSET UNITYSDK_OFFSET(0x19410CD0)

inline static constexpr unsigned int DGNKDIJPKLP_FPGALJEBBEK_TypeDefinitionIndex = 73386;

class DGNKDIJPKLP_FPGALJEBBEK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_FPGALJEBBEK__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::NMILKOJNFFF HAAEBCOBKFF, ::NMILKOJNFFF BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::NMILKOJNFFF, ::NMILKOJNFFF))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_FPGALJEBBEK_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
