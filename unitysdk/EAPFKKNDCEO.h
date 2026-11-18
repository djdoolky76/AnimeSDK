#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHadalTabRowWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define EAPFKKNDCEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BDC910)
#define EAPFKKNDCEO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BDC840)
#define EAPFKKNDCEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BDC670)
#define EAPFKKNDCEO__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDC900)

inline static constexpr unsigned int EAPFKKNDCEO_TypeDefinitionIndex = 59552;

class EAPFKKNDCEO : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIHadalTabRowWidgetController*>* LMJLJBGAPMH; // 0x18
	::GCIMMDDIFBJ* KOIKCNBGPLM; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIHadalTabRowWidgetController*>* CKHPIJPFJGA; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIHadalTabRowWidgetController*>* BFEEFNBEPFL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFKKNDCEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAPFKKNDCEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFKKNDCEO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAPFKKNDCEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
