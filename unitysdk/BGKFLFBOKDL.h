#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BGKFLFBOKDL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D2C300)
#define BGKFLFBOKDL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D2C230)
#define BGKFLFBOKDL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D2C0B0)
#define BGKFLFBOKDL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D2C2F0)

inline static constexpr unsigned int BGKFLFBOKDL_TypeDefinitionIndex = 53092;

class BGKFLFBOKDL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MCEHDEKBNAF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AHJGLPIFAHF; // 0x20
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKFLFBOKDL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGKFLFBOKDL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGKFLFBOKDL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKFLFBOKDL_KGEBDLGBGNM_OFFSET))(this);
	}
};
