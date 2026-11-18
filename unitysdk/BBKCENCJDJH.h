#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BBKCENCJDJH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1267BDA0)
#define BBKCENCJDJH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1267BC90)
#define BBKCENCJDJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1267BA90)
#define BBKCENCJDJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1267BD90)

inline static constexpr unsigned int BBKCENCJDJH_TypeDefinitionIndex = 66288;

class BBKCENCJDJH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LKABCAJPCHI; // 0x18
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x20
	::UnityEngine::Transform* PDACHPLBKIE; // 0x28
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x30
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HPCCLNODIOJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JIAPDEAHAMM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKCENCJDJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBKCENCJDJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKCENCJDJH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBKCENCJDJH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
