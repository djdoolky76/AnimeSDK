#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LBLHACFFAOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1523C800)
#define LBLHACFFAOP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1523C700)
#define LBLHACFFAOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1523C460)
#define LBLHACFFAOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1523C7F0)

inline static constexpr unsigned int LBLHACFFAOP_TypeDefinitionIndex = 68585;

class LBLHACFFAOP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DCEHHBBEFEG; // 0x18
	::LGINJIKKBJA* KALKEGOMIFJ; // 0x20
	::MonoUITableScrollV2* KIBLHKKKNCB; // 0x28
	::MoleMole::MonoGamepadModule* GGEOBOHGCIM; // 0x30
	::MonoUITableScrollV2* PGGPACGPJBF; // 0x38
	::UnityEngine::RectTransform* ODJBNHKDKNK; // 0x40
	::MonoUITableScrollV2* ADIHEDCMBHA; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MNAIJCONLBG; // 0x50
	::FGCOIBFFCHB* JHPHEDNIKOB; // 0x58
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x60
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x68
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* LOBBFFCEAOP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLHACFFAOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBLHACFFAOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBLHACFFAOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLHACFFAOP_KGEBDLGBGNM_OFFSET))(this);
	}
};
