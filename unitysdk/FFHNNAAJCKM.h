#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define FFHNNAAJCKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AC55F0)
#define FFHNNAAJCKM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14AC5500)
#define FFHNNAAJCKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AC52D0)
#define FFHNNAAJCKM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC55E0)

inline static constexpr unsigned int FFHNNAAJCKM_TypeDefinitionIndex = 53811;

class FFHNNAAJCKM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* JEGHGLHGDKM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JAANAGAMJNN; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x30
	::UnityEngine::GameObject* JIKEHPNIEBP; // 0x38
	::UnityEngine::UI::Extension::UITabButton* HJIHNMPIEJL; // 0x40
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x48
	::UnityEngine::CanvasGroup* JACBIKIEAOM; // 0x50
	::LGINJIKKBJA* JKCFMIFPAGF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNNAAJCKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFHNNAAJCKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFHNNAAJCKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNNAAJCKM_KGEBDLGBGNM_OFFSET))(this);
	}
};
