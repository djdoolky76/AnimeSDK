#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class MEKABAIJMNM_1;

#define OEMOKNKFCGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x114EBF20)
#define OEMOKNKFCGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x114EBE50)
#define OEMOKNKFCGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x114EBC90)
#define OEMOKNKFCGM__CTOR_OFFSET UNITYSDK_OFFSET(0x114EBF10)

inline static constexpr unsigned int OEMOKNKFCGM_TypeDefinitionIndex = 38789;

class OEMOKNKFCGM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FKILIGLNPCF; // 0x18
	::LGINJIKKBJA* KGAIBJBCCLN; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x28
	::MonoUITableScrollV2* PPHIHKGGDLE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOKNKFCGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEMOKNKFCGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEMOKNKFCGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOKNKFCGM_KGEBDLGBGNM_OFFSET))(this);
	}
};
