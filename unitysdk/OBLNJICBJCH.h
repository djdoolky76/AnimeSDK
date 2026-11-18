#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OBLNJICBJCH_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x16BF3FC0)
#define OBLNJICBJCH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BF4040)
#define OBLNJICBJCH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BF3F00)
#define OBLNJICBJCH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BF3C70)
#define OBLNJICBJCH_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x16BF40E0)
#define OBLNJICBJCH__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF4030)

inline static constexpr unsigned int OBLNJICBJCH_TypeDefinitionIndex = 54443;

class OBLNJICBJCH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PDPEIOOJKNB; // 0x18
	::UnityEngine::Transform* JHGGHHOJDPF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* INOKEAFJFNF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BDKBBOKFMOB; // 0x30
	::UnityEngine::UI::Text* EIJIICLEGNI; // 0x38
	::LGINJIKKBJA* FEHGBHMCHMB; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x50
	::UnityEngine::RectTransform* BJHPNJKHFAL; // 0x58
	::LGINJIKKBJA* CLPKGBMDHNM; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* MCJKDBEDPBJ; // 0x68
	::UnityEngine::UI::Text* AJHAGPKPDGN; // 0x70
	::UnityEngine::GameObject* DAHBBHLPCDG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLNJICBJCH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBLNJICBJCH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + OBLNJICBJCH_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBLNJICBJCH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + OBLNJICBJCH_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLNJICBJCH_KGEBDLGBGNM_OFFSET))(this);
	}
};
