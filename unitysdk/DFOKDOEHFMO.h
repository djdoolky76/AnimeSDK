#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define DFOKDOEHFMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149A3820)
#define DFOKDOEHFMO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149A3720)
#define DFOKDOEHFMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149A3540)
#define DFOKDOEHFMO__CTOR_OFFSET UNITYSDK_OFFSET(0x149A3810)

inline static constexpr unsigned int DFOKDOEHFMO_TypeDefinitionIndex = 47052;

class DFOKDOEHFMO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::FGCOIBFFCHB* ILOBEELCFOK; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30
	::UnityEngine::RectTransform* AOOFHEONBNH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOKDOEHFMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFOKDOEHFMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOKDOEHFMO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFOKDOEHFMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
