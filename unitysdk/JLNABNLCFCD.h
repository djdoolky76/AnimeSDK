#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define JLNABNLCFCD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18744580)
#define JLNABNLCFCD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18744490)
#define JLNABNLCFCD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18744320)
#define JLNABNLCFCD__CTOR_OFFSET UNITYSDK_OFFSET(0x18744570)

inline static constexpr unsigned int JLNABNLCFCD_TypeDefinitionIndex = 91341;

class JLNABNLCFCD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FJHCCABFMBD; // 0x18
	::LGINJIKKBJA* GJLKPEACOBG; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNABNLCFCD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLNABNLCFCD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNABNLCFCD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLNABNLCFCD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
