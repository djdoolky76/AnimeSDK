#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define GFCLGNDKNHI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FD22C0)
#define GFCLGNDKNHI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FD2160)
#define GFCLGNDKNHI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FD1F90)
#define GFCLGNDKNHI__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD22B0)

inline static constexpr unsigned int GFCLGNDKNHI_TypeDefinitionIndex = 43023;

class GFCLGNDKNHI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OIAGFBGJGCG; // 0x18
	::FGCOIBFFCHB* EMEMNFAKEIK; // 0x20
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x28
	::FGCOIBFFCHB* KBNHIOECNNI; // 0x30
	::FGCOIBFFCHB* DJINNAKKAGM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCLGNDKNHI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFCLGNDKNHI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFCLGNDKNHI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCLGNDKNHI_KGEBDLGBGNM_OFFSET))(this);
	}
};
