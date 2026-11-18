#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define CFFPKELDIII_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10E355F0)
#define CFFPKELDIII_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E354D0)
#define CFFPKELDIII_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E35280)
#define CFFPKELDIII__CTOR_OFFSET UNITYSDK_OFFSET(0x10E355E0)

inline static constexpr unsigned int CFFPKELDIII_TypeDefinitionIndex = 85147;

class CFFPKELDIII : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIconCardRarityWidgetController*>* MPPIKJIFCIA; // 0x18
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x38
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPKELDIII__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFFPKELDIII_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFPKELDIII_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFFPKELDIII_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
