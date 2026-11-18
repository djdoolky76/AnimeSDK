#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UINewbieGuidePopularTeamRowWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define ALAJMPOPDPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17CDD9E0)
#define ALAJMPOPDPK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17CDD8E0)
#define ALAJMPOPDPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17CDD700)
#define ALAJMPOPDPK__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDD9D0)

inline static constexpr unsigned int ALAJMPOPDPK_TypeDefinitionIndex = 44576;

class ALAJMPOPDPK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FHEECNKIEAL; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::LGINJIKKBJA* BDPBNNJCIPM; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UINewbieGuidePopularTeamRowWidgetController*>* KGJOBFOAEFK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAJMPOPDPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALAJMPOPDPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAJMPOPDPK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALAJMPOPDPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
