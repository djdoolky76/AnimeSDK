#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define OLKOHBKIJGK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B44920)
#define OLKOHBKIJGK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11B447C0)
#define OLKOHBKIJGK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B445F0)
#define OLKOHBKIJGK__CTOR_OFFSET UNITYSDK_OFFSET(0x11B44910)

inline static constexpr unsigned int OLKOHBKIJGK_TypeDefinitionIndex = 80667;

class OLKOHBKIJGK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DLOHMPCFOGN; // 0x18
	::FGCOIBFFCHB* FKBBPCBFCGD; // 0x20
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x28
	::FGCOIBFFCHB* OBNGPGLBFGI; // 0x30
	::FGCOIBFFCHB* GHKIIFHHJGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKOHBKIJGK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLKOHBKIJGK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLKOHBKIJGK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKOHBKIJGK_KGEBDLGBGNM_OFFSET))(this);
	}
};
