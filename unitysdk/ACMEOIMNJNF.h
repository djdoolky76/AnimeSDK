#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ACMEOIMNJNF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16466E50)
#define ACMEOIMNJNF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16466DC0)
#define ACMEOIMNJNF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16466C50)
#define ACMEOIMNJNF__CTOR_OFFSET UNITYSDK_OFFSET(0x16466E40)

inline static constexpr unsigned int ACMEOIMNJNF_TypeDefinitionIndex = 42497;

class ACMEOIMNJNF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::UnityEngine::RectTransform* EPDJDKJFBHP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GANCEGMMNMB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMEOIMNJNF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACMEOIMNJNF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMEOIMNJNF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACMEOIMNJNF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
