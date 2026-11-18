#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JLCGJEBFKBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CCAE40)
#define JLCGJEBFKBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CCAD70)
#define JLCGJEBFKBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CCAC20)
#define JLCGJEBFKBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCAE30)

inline static constexpr unsigned int JLCGJEBFKBJ_TypeDefinitionIndex = 59090;

class JLCGJEBFKBJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::LGINJIKKBJA* HODPPKHAJAG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCGJEBFKBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLCGJEBFKBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLCGJEBFKBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCGJEBFKBJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
