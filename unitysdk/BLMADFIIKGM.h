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
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BLMADFIIKGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1692C4C0)
#define BLMADFIIKGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1692C3B0)
#define BLMADFIIKGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1692C160)
#define BLMADFIIKGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1692C4B0)

inline static constexpr unsigned int BLMADFIIKGM_TypeDefinitionIndex = 51769;

class BLMADFIIKGM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x18
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PBBPJNPCIEK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MAFBMEHCDFJ; // 0x30
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x38
	::FGCOIBFFCHB* OEPHKDECLGP; // 0x40
	::UnityEngine::RectTransform* MLNKAEFAIFI; // 0x48
	::UnityEngine::Animation* DHCKPIBEKNB; // 0x50
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x58
	::UnityEngine::GameObject* ODKGAHDFMAP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMADFIIKGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLMADFIIKGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMADFIIKGM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLMADFIIKGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
