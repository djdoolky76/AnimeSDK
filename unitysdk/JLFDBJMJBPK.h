#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define JLFDBJMJBPK_HPJLFGGDCAA_OFFSET UNITYSDK_OFFSET(0x13090700)
#define JLFDBJMJBPK_IAEBBPJBFEF_OFFSET UNITYSDK_OFFSET(0x13090720)
#define JLFDBJMJBPK_LFELJLDHGCF_OFFSET UNITYSDK_OFFSET(0x13090740)
#define JLFDBJMJBPK_NANFCAFBJAF_OFFSET UNITYSDK_OFFSET(0x13090710)
#define JLFDBJMJBPK_NDDOPAIKGPH_OFFSET UNITYSDK_OFFSET(0x130906F0)
#define JLFDBJMJBPK_OGNADODLAOH_OFFSET UNITYSDK_OFFSET(0x13090730)
#define JLFDBJMJBPK__CTOR_OFFSET UNITYSDK_OFFSET(0x130906E0)

inline static constexpr unsigned int JLFDBJMJBPK_TypeDefinitionIndex = 61623;

class JLFDBJMJBPK : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + JLFDBJMJBPK__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean NDDOPAIKGPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFDBJMJBPK_NDDOPAIKGPH_OFFSET))(this);
	}

	::System::Boolean HPJLFGGDCAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFDBJMJBPK_HPJLFGGDCAA_OFFSET))(this);
	}

	::System::Boolean NANFCAFBJAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFDBJMJBPK_NANFCAFBJAF_OFFSET))(this);
	}

	::System::Boolean IAEBBPJBFEF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFDBJMJBPK_IAEBBPJBFEF_OFFSET))(this);
	}

	::System::Boolean OGNADODLAOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFDBJMJBPK_OGNADODLAOH_OFFSET))(this);
	}

	::System::Boolean LFELJLDHGCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFDBJMJBPK_LFELJLDHGCF_OFFSET))(this);
	}
};
