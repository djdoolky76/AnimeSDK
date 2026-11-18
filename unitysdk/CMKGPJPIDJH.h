#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define CMKGPJPIDJH_FPJCBGDDECA_OFFSET UNITYSDK_OFFSET(0x193E8540)
#define CMKGPJPIDJH_HPJLFGGDCAA_OFFSET UNITYSDK_OFFSET(0x193E8590)
#define CMKGPJPIDJH_IAEBBPJBFEF_OFFSET UNITYSDK_OFFSET(0x193E8580)
#define CMKGPJPIDJH_LHDKCEJNHGM_OFFSET UNITYSDK_OFFSET(0x193E8550)
#define CMKGPJPIDJH_OGNADODLAOH_OFFSET UNITYSDK_OFFSET(0x193E8560)
#define CMKGPJPIDJH_PJNHFCDICAP_OFFSET UNITYSDK_OFFSET(0x193E8570)
#define CMKGPJPIDJH__CTOR_OFFSET UNITYSDK_OFFSET(0x193E8530)

inline static constexpr unsigned int CMKGPJPIDJH_TypeDefinitionIndex = 54035;

class CMKGPJPIDJH : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + CMKGPJPIDJH__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean FPJCBGDDECA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKGPJPIDJH_FPJCBGDDECA_OFFSET))(this);
	}

	::System::Boolean LHDKCEJNHGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKGPJPIDJH_LHDKCEJNHGM_OFFSET))(this);
	}

	::System::Boolean OGNADODLAOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKGPJPIDJH_OGNADODLAOH_OFFSET))(this);
	}

	::System::Boolean PJNHFCDICAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKGPJPIDJH_PJNHFCDICAP_OFFSET))(this);
	}

	::System::Boolean IAEBBPJBFEF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKGPJPIDJH_IAEBBPJBFEF_OFFSET))(this);
	}

	::System::Boolean HPJLFGGDCAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKGPJPIDJH_HPJLFGGDCAA_OFFSET))(this);
	}
};
