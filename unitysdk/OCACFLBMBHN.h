#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define OCACFLBMBHN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F58F40)
#define OCACFLBMBHN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F58DD0)
#define OCACFLBMBHN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F58A60)
#define OCACFLBMBHN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F58F30)

inline static constexpr unsigned int OCACFLBMBHN_TypeDefinitionIndex = 82470;

class OCACFLBMBHN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OOFMDKGGOBG; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::UnityEngine::RectTransform* PEPJNPJGLOE; // 0x28
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x30
	::UnityEngine::RectTransform* IBIDHFENHPA; // 0x38
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x40
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x48
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x50
	::FGCOIBFFCHB* KICAIFJDNGC; // 0x58
	::UnityEngine::CanvasGroup* MNAMBILCMBH; // 0x60
	::UnityEngine::RectTransform* PJCJKBJCGFH; // 0x68
	::FGCOIBFFCHB* PODLCCMICAN; // 0x70
	::UnityEngine::RectTransform* HJJBPNCHIJH; // 0x78
	::FGCOIBFFCHB* KIBCDLKICEF; // 0x80
	::UnityEngine::GameObject* GJFKDEHNOFK; // 0x88
	::UnityEngine::RectTransform* HGMNLNMGBBG; // 0x90
	::UnityEngine::CanvasGroup* KIGCKBIKGPH; // 0x98
	::FGCOIBFFCHB* KCIEEMNKOML; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCACFLBMBHN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCACFLBMBHN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCACFLBMBHN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCACFLBMBHN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
