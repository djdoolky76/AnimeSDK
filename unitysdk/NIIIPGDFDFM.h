#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define NIIIPGDFDFM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE1A0560)
#define NIIIPGDFDFM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE1A0460)
#define NIIIPGDFDFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE1A0250)
#define NIIIPGDFDFM__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A0550)

inline static constexpr unsigned int NIIIPGDFDFM_TypeDefinitionIndex = 91857;

class NIIIPGDFDFM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::FGCOIBFFCHB* ACBDELCFGNN; // 0x30
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x38
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x40
	::UnityEngine::RectTransform* ENEFOLIDNMM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIIPGDFDFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIIIPGDFDFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIIIPGDFDFM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIIPGDFDFM_KGEBDLGBGNM_OFFSET))(this);
	}
};
