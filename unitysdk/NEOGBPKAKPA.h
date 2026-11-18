#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define NEOGBPKAKPA_HPJLFGGDCAA_OFFSET UNITYSDK_OFFSET(0x12C58830)
#define NEOGBPKAKPA_IAEBBPJBFEF_OFFSET UNITYSDK_OFFSET(0x12C58850)
#define NEOGBPKAKPA_LFELJLDHGCF_OFFSET UNITYSDK_OFFSET(0x12C58870)
#define NEOGBPKAKPA_MMLKFIPGNJE_OFFSET UNITYSDK_OFFSET(0x12C58820)
#define NEOGBPKAKPA_NANFCAFBJAF_OFFSET UNITYSDK_OFFSET(0x12C58840)
#define NEOGBPKAKPA_OGNADODLAOH_OFFSET UNITYSDK_OFFSET(0x12C58860)
#define NEOGBPKAKPA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C58810)

inline static constexpr unsigned int NEOGBPKAKPA_TypeDefinitionIndex = 45931;

class NEOGBPKAKPA : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + NEOGBPKAKPA__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean MMLKFIPGNJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGBPKAKPA_MMLKFIPGNJE_OFFSET))(this);
	}

	::System::Boolean HPJLFGGDCAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGBPKAKPA_HPJLFGGDCAA_OFFSET))(this);
	}

	::System::Boolean NANFCAFBJAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGBPKAKPA_NANFCAFBJAF_OFFSET))(this);
	}

	::System::Boolean IAEBBPJBFEF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGBPKAKPA_IAEBBPJBFEF_OFFSET))(this);
	}

	::System::Boolean OGNADODLAOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGBPKAKPA_OGNADODLAOH_OFFSET))(this);
	}

	::System::Boolean LFELJLDHGCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOGBPKAKPA_LFELJLDHGCF_OFFSET))(this);
	}
};
