#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCJLOPPJO.h"

class AJAMLAJJNHA;
class JNDBAFKOOCP;
class NPBCMMABDHF;

#define EGODGKJKJCG_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x154AAEC0)
#define EGODGKJKJCG_KCCFDFNOIJC_OFFSET UNITYSDK_OFFSET(0x154AB320)
#define EGODGKJKJCG_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x154AB290)
#define EGODGKJKJCG__CTOR_OFFSET UNITYSDK_OFFSET(0x154AAE00)

inline static constexpr unsigned int EGODGKJKJCG_TypeDefinitionIndex = 46870;

class EGODGKJKJCG : public ::BBDCJLOPPJO
{
public:
	::JNDBAFKOOCP* CBBNPKFNDNA; // 0x50
	::NPBCMMABDHF* NBDGBBDJPIP; // 0x58

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + EGODGKJKJCG__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGODGKJKJCG_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGODGKJKJCG_OFINMOFKGFI_OFFSET))(this);
	}

	::System::Void KCCFDFNOIJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGODGKJKJCG_KCCFDFNOIJC_OFFSET))(this);
	}
};
