#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HJMFICEIAKK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14952550)
#define HJMFICEIAKK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149523F0)
#define HJMFICEIAKK__CTOR_OFFSET UNITYSDK_OFFSET(0x14952540)

inline static constexpr unsigned int HJMFICEIAKK_TypeDefinitionIndex = 68252;

class HJMFICEIAKK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x18
	::UnityEngine::RectTransform* AMDDAMFPOKG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KGEAGFGKBBE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KEKEMNFFJHN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::UnityEngine::RectTransform* HGEBLKNDDPG; // 0x40
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x48
	::UnityEngine::RectTransform* JLLJPNMPKJA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMFICEIAKK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMFICEIAKK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMFICEIAKK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
