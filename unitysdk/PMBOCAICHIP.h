#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PMBOCAICHIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C2BF3F0)
#define PMBOCAICHIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C2BF340)
#define PMBOCAICHIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C2BF110)
#define PMBOCAICHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BF3E0)

inline static constexpr unsigned int PMBOCAICHIP_TypeDefinitionIndex = 81367;

class PMBOCAICHIP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PDKDEAJCIAI; // 0x18
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NJGBKALDPIP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ANNGOIKAINP; // 0x38
	::MoleMole::MonoGamepadCustomList* GGJDBMNCFBH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* OCLIMFLCDLB; // 0x48
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x50
	::FGCOIBFFCHB* OKLLFEIJKHN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBOCAICHIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMBOCAICHIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMBOCAICHIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBOCAICHIP_KGEBDLGBGNM_OFFSET))(this);
	}
};
