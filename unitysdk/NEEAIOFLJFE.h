#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NEEAIOFLJFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11585280)
#define NEEAIOFLJFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x115851B0)
#define NEEAIOFLJFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11585030)
#define NEEAIOFLJFE__CTOR_OFFSET UNITYSDK_OFFSET(0x11585270)

inline static constexpr unsigned int NEEAIOFLJFE_TypeDefinitionIndex = 72365;

class NEEAIOFLJFE : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MCEHDEKBNAF; // 0x20
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AHJGLPIFAHF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAIOFLJFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEEAIOFLJFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEEAIOFLJFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAIOFLJFE_KGEBDLGBGNM_OFFSET))(this);
	}
};
