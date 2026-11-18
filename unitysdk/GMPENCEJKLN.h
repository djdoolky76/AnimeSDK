#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchAppBgForTransitionWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define GMPENCEJKLN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F0A1B0)
#define GMPENCEJKLN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F0A0E0)
#define GMPENCEJKLN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F09F90)
#define GMPENCEJKLN__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0A1A0)

inline static constexpr unsigned int GMPENCEJKLN_TypeDefinitionIndex = 88070;

class GMPENCEJKLN : public ::GIBMJLOJLKD
{
public:
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIWorkBenchAppBgForTransitionWidgetController*>* PHJLPIMNGKN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPENCEJKLN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMPENCEJKLN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPENCEJKLN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMPENCEJKLN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
