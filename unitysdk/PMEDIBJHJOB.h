#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInterKnotOverNightPostWidgetController; }
namespace MoleMole { class UIInterKnotPageConfig; }
template <typename T> class MEKABAIJMNM_1;

#define PMEDIBJHJOB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11997BF0)
#define PMEDIBJHJOB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11997B00)
#define PMEDIBJHJOB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11997960)
#define PMEDIBJHJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x11997BE0)

inline static constexpr unsigned int PMEDIBJHJOB_TypeDefinitionIndex = 57619;

class PMEDIBJHJOB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::MoleMole::UIInterKnotPageConfig* AHMFPFACACD; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIInterKnotOverNightPostWidgetController*>* FEIIJDMMELI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEDIBJHJOB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMEDIBJHJOB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEDIBJHJOB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMEDIBJHJOB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
