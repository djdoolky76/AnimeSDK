#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CDIOCHMJBHC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16863390)
#define CDIOCHMJBHC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x168632C0)
#define CDIOCHMJBHC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16863170)
#define CDIOCHMJBHC__CTOR_OFFSET UNITYSDK_OFFSET(0x16863380)

inline static constexpr unsigned int CDIOCHMJBHC_TypeDefinitionIndex = 44069;

class CDIOCHMJBHC : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIOCHMJBHC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDIOCHMJBHC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDIOCHMJBHC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIOCHMJBHC_KGEBDLGBGNM_OFFSET))(this);
	}
};
