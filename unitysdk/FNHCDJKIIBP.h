#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define FNHCDJKIIBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15CB01B0)
#define FNHCDJKIIBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15CB00F0)
#define FNHCDJKIIBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CAFF70)
#define FNHCDJKIIBP__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB0190)

inline static constexpr unsigned int FNHCDJKIIBP_TypeDefinitionIndex = 45493;

class FNHCDJKIIBP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::LGINJIKKBJA* GKONPPJGCCB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHCDJKIIBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNHCDJKIIBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNHCDJKIIBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHCDJKIIBP_KGEBDLGBGNM_OFFSET))(this);
	}
};
