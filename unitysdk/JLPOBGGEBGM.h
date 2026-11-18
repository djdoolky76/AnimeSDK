#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define JLPOBGGEBGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1762DEC0)
#define JLPOBGGEBGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1762DE30)
#define JLPOBGGEBGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1762DCF0)
#define JLPOBGGEBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1762DEB0)

inline static constexpr unsigned int JLPOBGGEBGM_TypeDefinitionIndex = 74120;

class JLPOBGGEBGM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* IIKLIFKNCFO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPOBGGEBGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLPOBGGEBGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPOBGGEBGM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLPOBGGEBGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
