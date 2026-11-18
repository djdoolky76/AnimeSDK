#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInterKnotOverNightPostWidgetController; }
namespace MoleMole { class UIInterKnotPageConfig; }
template <typename T> class MEKABAIJMNM_1;

#define IMCLMALOHME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16AAB460)
#define IMCLMALOHME_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16AAB370)
#define IMCLMALOHME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16AAB1D0)
#define IMCLMALOHME__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAB450)

inline static constexpr unsigned int IMCLMALOHME_TypeDefinitionIndex = 41527;

class IMCLMALOHME : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIInterKnotOverNightPostWidgetController*>* FEIIJDMMELI; // 0x20
	::MoleMole::UIInterKnotPageConfig* AHMFPFACACD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCLMALOHME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMCLMALOHME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMCLMALOHME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCLMALOHME_KGEBDLGBGNM_OFFSET))(this);
	}
};
