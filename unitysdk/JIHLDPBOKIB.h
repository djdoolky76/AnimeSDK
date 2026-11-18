#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define JIHLDPBOKIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18A1F1E0)
#define JIHLDPBOKIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18A1F090)
#define JIHLDPBOKIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18A1ED50)
#define JIHLDPBOKIB__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1F1D0)

inline static constexpr unsigned int JIHLDPBOKIB_TypeDefinitionIndex = 85714;

class JIHLDPBOKIB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BLKJBOKKKHK; // 0x18
	::LGINJIKKBJA* CCLPLBPBAOD; // 0x20
	::FGCOIBFFCHB* IIOAAHIHEAN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HHDMKFPFEJO; // 0x30
	::UnityEngine::UI::Extension::UISlider* EGAGEFLKHHA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DOALMIEGGHL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* EOGNDEDLNNM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x50
	::FGCOIBFFCHB* JOEPPCOADBJ; // 0x58
	::FGCOIBFFCHB* EHEOPBCFKOB; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* ICKNMNPOBKC; // 0x68
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x70
	::LGINJIKKBJA* HODPPKHAJAG; // 0x78
	::UnityEngine::CanvasGroup* GFBDLCGCOLB; // 0x80
	::LGINJIKKBJA* BKBMFOJCMOJ; // 0x88
	::UnityEngine::GameObject* ICHNNHOAOMI; // 0x90
	::MoleMole::UIGeneralButtonController* PKBNGCODFMP; // 0x98
	::UnityEngine::GameObject* DIGNIPOLJOL; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHLDPBOKIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIHLDPBOKIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHLDPBOKIB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIHLDPBOKIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
