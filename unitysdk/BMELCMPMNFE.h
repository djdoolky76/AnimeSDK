#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define BMELCMPMNFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1857FBC0)
#define BMELCMPMNFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1857FAF0)
#define BMELCMPMNFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1857F950)
#define BMELCMPMNFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1857FBB0)

inline static constexpr unsigned int BMELCMPMNFE_TypeDefinitionIndex = 91907;

class BMELCMPMNFE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x20
	::FGCOIBFFCHB* HELAMPHDBEH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMELCMPMNFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMELCMPMNFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMELCMPMNFE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMELCMPMNFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
