#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIConsoleCameraBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralConsoleBtnWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define PIBNJOHIIDO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1197E660)
#define PIBNJOHIIDO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1197E440)
#define PIBNJOHIIDO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1197E130)
#define PIBNJOHIIDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1197E650)

inline static constexpr unsigned int PIBNJOHIIDO_TypeDefinitionIndex = 79281;

class PIBNJOHIIDO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* OKEFLLGLMKJ; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIGeneralConsoleBtnWidgetController*>* OGBINPGAFCL; // 0x20
	::LGINJIKKBJA* KIOCAJHABDM; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIGeneralConsoleBtnWidgetController*>* KPNMONCGEMD; // 0x30
	::LGINJIKKBJA* IFEDLNCELKF; // 0x38
	::LGINJIKKBJA* MENCFOAHKLI; // 0x40
	::LGINJIKKBJA* FEKPDKLBPPL; // 0x48
	::LGINJIKKBJA* CNJGNMLJKBG; // 0x50
	::LGINJIKKBJA* ADANPAKJOGJ; // 0x58
	::LGINJIKKBJA* HIBLCNPKDCO; // 0x60
	::MEKABAIJMNM_1<::MoleMole::UIConsoleCameraBtnWidgetController*>* NGBOLLGFJEG; // 0x68
	::LGINJIKKBJA* GHGEDJBKMBC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBNJOHIIDO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIBNJOHIIDO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBNJOHIIDO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIBNJOHIIDO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
