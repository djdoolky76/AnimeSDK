#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FDFKKGPCFBF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132039A0)
#define FDFKKGPCFBF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13203860)
#define FDFKKGPCFBF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132035F0)
#define FDFKKGPCFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x13203990)

inline static constexpr unsigned int FDFKKGPCFBF_TypeDefinitionIndex = 71976;

class FDFKKGPCFBF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MCJDMJHOBJO; // 0x18
	::LGINJIKKBJA* NBGOLFGKDBI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IPJHFCPGNLC; // 0x28
	::FGCOIBFFCHB* OIMBMENANOG; // 0x30
	::UnityEngine::GameObject* GCOEMIMAGJG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GHNMDMJBPMI; // 0x40
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x48
	::UnityEngine::UI::LayoutElement* MDCFOPEFBIM; // 0x50
	::UnityEngine::Animation* LJDCJJJEGGO; // 0x58
	::UnityEngine::RectTransform* JPHPNIDAFLA; // 0x60
	::FGCOIBFFCHB* NFKIGACNDGC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFKKGPCFBF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDFKKGPCFBF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDFKKGPCFBF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFKKGPCFBF_KGEBDLGBGNM_OFFSET))(this);
	}
};
