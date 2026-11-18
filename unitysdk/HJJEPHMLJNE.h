#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define HJJEPHMLJNE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13DA6050)
#define HJJEPHMLJNE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13DA5F60)
#define HJJEPHMLJNE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13DA5DE0)
#define HJJEPHMLJNE__CTOR_OFFSET UNITYSDK_OFFSET(0x13DA6040)

inline static constexpr unsigned int HJJEPHMLJNE_TypeDefinitionIndex = 72241;

class HJJEPHMLJNE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IPKEANCNNHP; // 0x18
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEPHMLJNE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJJEPHMLJNE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEPHMLJNE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJJEPHMLJNE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
