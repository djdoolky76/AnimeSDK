#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define OIFLMPGJHCI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A63B20)
#define OIFLMPGJHCI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A63A50)
#define OIFLMPGJHCI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A63910)
#define OIFLMPGJHCI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A63B10)

inline static constexpr unsigned int OIFLMPGJHCI_TypeDefinitionIndex = 50270;

class OIFLMPGJHCI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PHEHCLKKBPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLMPGJHCI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIFLMPGJHCI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIFLMPGJHCI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLMPGJHCI_KGEBDLGBGNM_OFFSET))(this);
	}
};
