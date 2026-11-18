#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define BNCIMIABNLM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128B48A0)
#define BNCIMIABNLM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x128B47D0)
#define BNCIMIABNLM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128B4630)
#define BNCIMIABNLM__CTOR_OFFSET UNITYSDK_OFFSET(0x128B4890)

inline static constexpr unsigned int BNCIMIABNLM_TypeDefinitionIndex = 90136;

class BNCIMIABNLM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::FGCOIBFFCHB* HELAMPHDBEH; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIMIABNLM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNCIMIABNLM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCIMIABNLM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNCIMIABNLM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
