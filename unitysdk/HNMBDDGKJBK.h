#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovZeroFriendTabWidgetController; }
namespace MoleMole { class UIZenkovZeroHollowTabWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define HNMBDDGKJBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BE0910)
#define HNMBDDGKJBK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BE0860)
#define HNMBDDGKJBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BE0690)
#define HNMBDDGKJBK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE0900)

inline static constexpr unsigned int HNMBDDGKJBK_TypeDefinitionIndex = 92128;

class HNMBDDGKJBK : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIZenkovZeroFriendTabWidgetController*>* EJHPIMJAFBO; // 0x18
	::GCIMMDDIFBJ* KOIKCNBGPLM; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIZenkovZeroHollowTabWidgetController*>* OKMJMAONOBK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMBDDGKJBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNMBDDGKJBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMBDDGKJBK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNMBDDGKJBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
