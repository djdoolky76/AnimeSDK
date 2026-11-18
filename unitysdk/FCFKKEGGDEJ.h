#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define FCFKKEGGDEJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x116A4810)
#define FCFKKEGGDEJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x116A4710)
#define FCFKKEGGDEJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x116A44B0)
#define FCFKKEGGDEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x116A4800)

inline static constexpr unsigned int FCFKKEGGDEJ_TypeDefinitionIndex = 89153;

class FCFKKEGGDEJ : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* BLEONJCBJME; // 0x18
	::FGCOIBFFCHB* IDIKHBOADLP; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* BIGLEMFIPJB; // 0x30
	::GCIMMDDIFBJ* OGBGPGKNJKD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKKEGGDEJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCFKKEGGDEJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCFKKEGGDEJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKKEGGDEJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
