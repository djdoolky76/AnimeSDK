#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define ENIDILFIECJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x161650D0)
#define ENIDILFIECJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16165000)
#define ENIDILFIECJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16164E40)
#define ENIDILFIECJ__CTOR_OFFSET UNITYSDK_OFFSET(0x161650C0)

inline static constexpr unsigned int ENIDILFIECJ_TypeDefinitionIndex = 66978;

class ENIDILFIECJ : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* OEDLLABBPAP; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* NIENBJEFKAF; // 0x28
	::LGINJIKKBJA* BJMKOLMEPHI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDILFIECJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENIDILFIECJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDILFIECJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENIDILFIECJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
