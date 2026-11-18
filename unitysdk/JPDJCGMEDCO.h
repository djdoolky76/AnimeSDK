#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define JPDJCGMEDCO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B5D350)
#define JPDJCGMEDCO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B5D2A0)
#define JPDJCGMEDCO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B5D110)
#define JPDJCGMEDCO__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5D340)

inline static constexpr unsigned int JPDJCGMEDCO_TypeDefinitionIndex = 88962;

class JPDJCGMEDCO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* LBFPGDJHPDB; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::LGINJIKKBJA* DBHPOLGPNMM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDJCGMEDCO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPDJCGMEDCO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDJCGMEDCO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPDJCGMEDCO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
