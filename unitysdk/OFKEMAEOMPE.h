#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OFKEMAEOMPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A53E50)
#define OFKEMAEOMPE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A53DA0)
#define OFKEMAEOMPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A53BA0)
#define OFKEMAEOMPE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A53E40)

inline static constexpr unsigned int OFKEMAEOMPE_TypeDefinitionIndex = 47486;

class OFKEMAEOMPE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKEMAEOMPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFKEMAEOMPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKEMAEOMPE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFKEMAEOMPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
