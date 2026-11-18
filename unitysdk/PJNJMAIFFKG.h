#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define PJNJMAIFFKG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194AAF80)
#define PJNJMAIFFKG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x194AAEB0)
#define PJNJMAIFFKG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194AAD60)
#define PJNJMAIFFKG__CTOR_OFFSET UNITYSDK_OFFSET(0x194AAF70)

inline static constexpr unsigned int PJNJMAIFFKG_TypeDefinitionIndex = 44920;

class PJNJMAIFFKG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* EGKGPAHJGFN; // 0x18
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNJMAIFFKG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJNJMAIFFKG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNJMAIFFKG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJNJMAIFFKG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
