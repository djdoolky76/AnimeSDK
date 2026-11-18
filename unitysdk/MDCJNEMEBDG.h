#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define MDCJNEMEBDG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D53A80)
#define MDCJNEMEBDG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D539B0)
#define MDCJNEMEBDG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D537A0)
#define MDCJNEMEBDG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D53A70)

inline static constexpr unsigned int MDCJNEMEBDG_TypeDefinitionIndex = 87755;

class MDCJNEMEBDG : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OGBGPGKNJKD; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* ANCAPPBAAHG; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* FDLLDCJADAB; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJNEMEBDG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MDCJNEMEBDG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MDCJNEMEBDG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCJNEMEBDG_KGEBDLGBGNM_OFFSET))(this);
	}
};
