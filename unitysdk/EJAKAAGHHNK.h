#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EJAKAAGHHNK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11A8AA60)
#define EJAKAAGHHNK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11A8A930)
#define EJAKAAGHHNK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11A8A5C0)
#define EJAKAAGHHNK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A8AA50)

inline static constexpr unsigned int EJAKAAGHHNK_TypeDefinitionIndex = 40009;

class EJAKAAGHHNK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBGPCLIHCAP; // 0x18
	::MonoUITableScrollV2* NMGGGEJPBOC; // 0x20
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x30
	::MoleMole::MonoGamepadScrollView* AHGMHLLFFON; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GENIDBMBJDC; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* OKJBNCEFOKB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* KONPMOGCPID; // 0x50
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x58
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x60
	::UnityEngine::RectTransform* OKLLFEIJKHN; // 0x68
	::FGCOIBFFCHB* ABPJHAJFPGJ; // 0x70
	::FGCOIBFFCHB* IPCOIFBOEPA; // 0x78
	::UnityEngine::RectTransform* ICKNPABEDEE; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x88
	::GCIMMDDIFBJ* OGOAFIHPFKO; // 0x90
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x98
	::LGINJIKKBJA* PMBLECALCKB; // 0xA0
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKAAGHHNK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJAKAAGHHNK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKAAGHHNK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJAKAAGHHNK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
