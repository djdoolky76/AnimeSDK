#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define JBJKMOMNPCF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1382D870)
#define JBJKMOMNPCF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1382D7C0)
#define JBJKMOMNPCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1382D5B0)
#define JBJKMOMNPCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1382D860)

inline static constexpr unsigned int JBJKMOMNPCF_TypeDefinitionIndex = 81779;

class JBJKMOMNPCF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::UnityEngine::RectTransform* FGEJALAOJJI; // 0x20
	::GCIMMDDIFBJ* MHCNINCABBM; // 0x28
	::GCIMMDDIFBJ* ILKAAEBGCAM; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::RectTransform* FJDCKKMGNHB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJKMOMNPCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBJKMOMNPCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJKMOMNPCF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBJKMOMNPCF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
