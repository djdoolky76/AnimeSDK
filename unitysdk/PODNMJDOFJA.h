#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIAntiqueCollectWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define PODNMJDOFJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1BF35140)
#define PODNMJDOFJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1BF35070)
#define PODNMJDOFJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1BF34E70)
#define PODNMJDOFJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF35130)

inline static constexpr unsigned int PODNMJDOFJA_TypeDefinitionIndex = 56564;

class PODNMJDOFJA : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIAntiqueCollectWidgetController*>* FNDLGBDHAPE; // 0x20
	::LGINJIKKBJA* HODPPKHAJAG; // 0x28
	::MonoUITableScrollV2* MMJCBBOAPHH; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBtn03WidgetController*>* CNEMGKPCIBB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODNMJDOFJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PODNMJDOFJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PODNMJDOFJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODNMJDOFJA_KGEBDLGBGNM_OFFSET))(this);
	}
};
