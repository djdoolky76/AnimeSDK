#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PJJCJCDLDEN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178DDAD0)
#define PJJCJCDLDEN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178DD9E0)
#define PJJCJCDLDEN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178DD7B0)
#define PJJCJCDLDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x178DDAC0)

inline static constexpr unsigned int PJJCJCDLDEN_TypeDefinitionIndex = 49729;

class PJJCJCDLDEN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* NOALGBKIDGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KBFEDEAEGMK; // 0x20
	::FGCOIBFFCHB* BPMHHNGFEBN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x30
	::LGINJIKKBJA* EGKGPAHJGFN; // 0x38
	::UnityEngine::Transform* ODALDIOFMPH; // 0x40
	::UnityEngine::Animation* NDIEOPDFNDM; // 0x48
	::UnityEngine::Animation* BOMMBCGMJCL; // 0x50
	::UnityEngine::Animation* NOKGOOLHOKA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJCJCDLDEN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJJCJCDLDEN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJCJCDLDEN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJJCJCDLDEN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
