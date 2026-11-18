#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define ELAIPFIHJAJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11A99A40)
#define ELAIPFIHJAJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11A99930)
#define ELAIPFIHJAJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11A99790)
#define ELAIPFIHJAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11A99A30)

inline static constexpr unsigned int ELAIPFIHJAJ_TypeDefinitionIndex = 75638;

class ELAIPFIHJAJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x18
	::LGINJIKKBJA* CJBOGNKLKFJ; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* DNGFGABBHEG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAIPFIHJAJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELAIPFIHJAJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELAIPFIHJAJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAIPFIHJAJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
