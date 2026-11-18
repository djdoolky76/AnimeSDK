#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ANKCGFJOEAH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11BCAAE0)
#define ANKCGFJOEAH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11BCAA10)
#define ANKCGFJOEAH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11BCA8C0)
#define ANKCGFJOEAH__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCAAD0)

inline static constexpr unsigned int ANKCGFJOEAH_TypeDefinitionIndex = 82851;

class ANKCGFJOEAH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKCGFJOEAH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANKCGFJOEAH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANKCGFJOEAH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANKCGFJOEAH_KGEBDLGBGNM_OFFSET))(this);
	}
};
