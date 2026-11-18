#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GLBIJIKPMLD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11DBBDC0)
#define GLBIJIKPMLD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11DBBCA0)
#define GLBIJIKPMLD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11DBB970)
#define GLBIJIKPMLD__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBBDB0)

inline static constexpr unsigned int GLBIJIKPMLD_TypeDefinitionIndex = 51927;

class GLBIJIKPMLD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x18
	::UnityEngine::RectTransform* CFKIJJEHMJA; // 0x20
	::UnityEngine::UI::SmoothMask* JPEFHJMLLFF; // 0x28
	::UnityEngine::RectTransform* DBFBJAEMGCN; // 0x30
	::FGCOIBFFCHB* NEHMCGEKACP; // 0x38
	::FGCOIBFFCHB* FCOCNDLFIKE; // 0x40
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x48
	::GCIMMDDIFBJ* EMGEHDJBKOH; // 0x50
	::FGCOIBFFCHB* DPGBIANNGPG; // 0x58
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x60
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* PMCNDKMMFDG; // 0x70
	::UnityEngine::UI::Text* IHLIGOJAEAE; // 0x78
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x80
	::UnityEngine::CanvasGroup* GPHAEDMALMK; // 0x88
	::UnityEngine::RectTransform* HMCINHNBPJG; // 0x90
	::UnityEngine::RectTransform* PELMEAEIGJK; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBIJIKPMLD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLBIJIKPMLD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBIJIKPMLD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLBIJIKPMLD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
