#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define GDDAGCJIFPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10EE3560)
#define GDDAGCJIFPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EE34B0)
#define GDDAGCJIFPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EE3330)
#define GDDAGCJIFPM__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE3550)

inline static constexpr unsigned int GDDAGCJIFPM_TypeDefinitionIndex = 93011;

class GDDAGCJIFPM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDAGCJIFPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDDAGCJIFPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDAGCJIFPM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDDAGCJIFPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
