#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISuibianDirectionIconWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define APCHBEADDOB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17DFC560)
#define APCHBEADDOB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17DFC490)
#define APCHBEADDOB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17DFC2E0)
#define APCHBEADDOB__CTOR_OFFSET UNITYSDK_OFFSET(0x17DFC550)

inline static constexpr unsigned int APCHBEADDOB_TypeDefinitionIndex = 75646;

class APCHBEADDOB : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UISuibianDirectionIconWidgetController*>* LDLECMDIMKA; // 0x18
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UISuibianDirectionIconWidgetController*>* GCKOPAHFGCD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHBEADDOB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APCHBEADDOB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APCHBEADDOB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHBEADDOB_KGEBDLGBGNM_OFFSET))(this);
	}
};
