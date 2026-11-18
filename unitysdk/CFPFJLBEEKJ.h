#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CFPFJLBEEKJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128ED740)
#define CFPFJLBEEKJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128ED5A0)
#define CFPFJLBEEKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x128ED730)

inline static constexpr unsigned int CFPFJLBEEKJ_TypeDefinitionIndex = 70301;

class CFPFJLBEEKJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AHHKNMGOMNK; // 0x20
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x28
	::UnityEngine::RectTransform* FICECLJKFNM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MEDKJIBMCJN; // 0x38
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DEPCMCJMGPE; // 0x48
	::UnityEngine::RectTransform* JCDFEMFJLJH; // 0x50
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* CEPGMCIPFBA; // 0x60
	::UnityEngine::RectTransform* CCPAAKFACLB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPFJLBEEKJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFPFJLBEEKJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFPFJLBEEKJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
