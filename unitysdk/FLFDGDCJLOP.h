#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define FLFDGDCJLOP_IFBGNHDGMFP_OFFSET UNITYSDK_OFFSET(0x165B1570)
#define FLFDGDCJLOP_JEBDHFLEPJO_OFFSET UNITYSDK_OFFSET(0x165B1510)
#define FLFDGDCJLOP__CTOR_OFFSET UNITYSDK_OFFSET(0x165B1560)

inline static constexpr unsigned int FLFDGDCJLOP_TypeDefinitionIndex = 58368;

class FLFDGDCJLOP : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFDGDCJLOP__CTOR_OFFSET))(this);
	}

	::System::Int32 JEBDHFLEPJO(::System::Int32 PFCEKKHBDEO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLFDGDCJLOP_JEBDHFLEPJO_OFFSET))(this, PFCEKKHBDEO);
	}

	::System::Int32 IFBGNHDGMFP(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLFDGDCJLOP_IFBGNHDGMFP_OFFSET))(this, MIALFKCCCPI);
	}
};
