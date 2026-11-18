#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JINADFNGAKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1873D5C0)
#define JINADFNGAKI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1873D510)
#define JINADFNGAKI_MFLPDINICKI_OFFSET UNITYSDK_OFFSET(0x1873D330)
#define JINADFNGAKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1873D140)
#define JINADFNGAKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1873D5B0)

inline static constexpr unsigned int JINADFNGAKI_TypeDefinitionIndex = 87387;

class JINADFNGAKI : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* FNMPBCHGDHE; // 0x18
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* IMDLLNDGIGD; // 0x20
	::FGCOIBFFCHB* BBECFBKCDMK; // 0x28
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x30
	::FGCOIBFFCHB* KIINBKLFBLP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINADFNGAKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JINADFNGAKI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JINADFNGAKI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* MFLPDINICKI(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JINADFNGAKI_MFLPDINICKI_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINADFNGAKI_KGEBDLGBGNM_OFFSET))(this);
	}
};
