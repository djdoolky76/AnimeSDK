#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define ALKMLMCBKBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14374F80)
#define ALKMLMCBKBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14374E60)
#define ALKMLMCBKBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14374C90)
#define ALKMLMCBKBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14374F70)

inline static constexpr unsigned int ALKMLMCBKBJ_TypeDefinitionIndex = 79532;

class ALKMLMCBKBJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PNMKACIKKMM; // 0x18
	::FGCOIBFFCHB* PBBPOGEDNON; // 0x20
	::FGCOIBFFCHB* OHBJCKIHICL; // 0x28
	::FGCOIBFFCHB* CHDLLELAEIH; // 0x30
	::FGCOIBFFCHB* NNFHDDEELHD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMLMCBKBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALKMLMCBKBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALKMLMCBKBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKMLMCBKBJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
