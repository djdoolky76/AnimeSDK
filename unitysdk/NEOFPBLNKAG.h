#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define NEOFPBLNKAG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F728B0)
#define NEOFPBLNKAG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F72800)
#define NEOFPBLNKAG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F726A0)
#define NEOFPBLNKAG__CTOR_OFFSET UNITYSDK_OFFSET(0x11F728A0)

inline static constexpr unsigned int NEOFPBLNKAG_TypeDefinitionIndex = 58390;

class NEOFPBLNKAG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* APPIEHBBKMA; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOFPBLNKAG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEOFPBLNKAG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEOFPBLNKAG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOFPBLNKAG_KGEBDLGBGNM_OFFSET))(this);
	}
};
