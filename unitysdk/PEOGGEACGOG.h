#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PEOGGEACGOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1AFDF9A0)
#define PEOGGEACGOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1AFDF8F0)
#define PEOGGEACGOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1AFDF6B0)
#define PEOGGEACGOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDF990)

inline static constexpr unsigned int PEOGGEACGOG_TypeDefinitionIndex = 75624;

class PEOGGEACGOG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x20
	::LGINJIKKBJA* OEIFHCEFEBG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OMHKAHABPEL; // 0x30
	::FGCOIBFFCHB* EIJEIMDHAEH; // 0x38
	::UnityEngine::GameObject* GGACKLNFPLN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IAEAGDGPJJN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* ICBJLIKNENB; // 0x50
	::UnityEngine::GameObject* GFJFJBJALFD; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* MABOIMDKIDA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOGGEACGOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEOGGEACGOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOGGEACGOG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEOGGEACGOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
