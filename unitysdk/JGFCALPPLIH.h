#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define JGFCALPPLIH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14FB4350)
#define JGFCALPPLIH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14FB4250)
#define JGFCALPPLIH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14FB4090)
#define JGFCALPPLIH__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB4340)

inline static constexpr unsigned int JGFCALPPLIH_TypeDefinitionIndex = 54962;

class JGFCALPPLIH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HELAMPHDBEH; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::FGCOIBFFCHB* DLONPENKLAH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFCALPPLIH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGFCALPPLIH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFCALPPLIH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGFCALPPLIH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
