#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define PHKJJGKLEEK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D627DF0)
#define PHKJJGKLEEK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D627D20)
#define PHKJJGKLEEK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D627BE0)
#define PHKJJGKLEEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D627DE0)

inline static constexpr unsigned int PHKJJGKLEEK_TypeDefinitionIndex = 81043;

class PHKJJGKLEEK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HODPPKHAJAG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKJJGKLEEK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHKJJGKLEEK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKJJGKLEEK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHKJJGKLEEK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
