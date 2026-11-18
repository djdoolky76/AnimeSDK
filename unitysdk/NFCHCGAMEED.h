#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define NFCHCGAMEED_CLKLOEINEPG_OFFSET UNITYSDK_OFFSET(0x120FEC60)
#define NFCHCGAMEED_GDAMKIHFLPN_OFFSET UNITYSDK_OFFSET(0x120FEAF0)
#define NFCHCGAMEED__CTOR_OFFSET UNITYSDK_OFFSET(0x120FEC50)

inline static constexpr unsigned int NFCHCGAMEED_TypeDefinitionIndex = 81589;

class NFCHCGAMEED : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCHCGAMEED__CTOR_OFFSET))(this);
	}

	::System::Int32 GDAMKIHFLPN(::System::Int32 GBEFNDPENOA)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFCHCGAMEED_GDAMKIHFLPN_OFFSET))(this, GBEFNDPENOA);
	}

	::System::Int32 CLKLOEINEPG(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFCHCGAMEED_CLKLOEINEPG_OFFSET))(this, MIALFKCCCPI);
	}
};
