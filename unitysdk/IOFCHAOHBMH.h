#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IOFCHAOHBMH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13825DF0)
#define IOFCHAOHBMH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13825D40)
#define IOFCHAOHBMH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13825BD0)
#define IOFCHAOHBMH__CTOR_OFFSET UNITYSDK_OFFSET(0x13825DE0)

inline static constexpr unsigned int IOFCHAOHBMH_TypeDefinitionIndex = 70880;

class IOFCHAOHBMH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCHAOHBMH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOFCHAOHBMH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFCHAOHBMH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOFCHAOHBMH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
