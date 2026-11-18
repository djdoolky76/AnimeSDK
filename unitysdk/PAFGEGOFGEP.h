#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define PAFGEGOFGEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FF7D40)
#define PAFGEGOFGEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FF7C30)
#define PAFGEGOFGEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FF7A90)
#define PAFGEGOFGEP__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF7D30)

inline static constexpr unsigned int PAFGEGOFGEP_TypeDefinitionIndex = 56865;

class PAFGEGOFGEP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EGFDBLBBAAG; // 0x18
	::FGCOIBFFCHB* KKOAAMFGBNM; // 0x20
	::LGINJIKKBJA* JDDJCJDJMLP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFGEGOFGEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAFGEGOFGEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFGEGOFGEP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAFGEGOFGEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
