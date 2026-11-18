#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KNDPHDMOIFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18642930)
#define KNDPHDMOIFA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x186427F0)
#define KNDPHDMOIFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18642520)
#define KNDPHDMOIFA__CTOR_OFFSET UNITYSDK_OFFSET(0x18642920)

inline static constexpr unsigned int KNDPHDMOIFA_TypeDefinitionIndex = 92557;

class KNDPHDMOIFA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DNKGKHODLKA; // 0x18
	::UnityEngine::GameObject* AIPBLBNMKMM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* CHFFDJKHGJP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LAEDJPJNPIJ; // 0x30
	::UnityEngine::GameObject* MEEMJOGDKFC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BDLJNNENJBJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ENKFOKOKPID; // 0x48
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x50
	::FGCOIBFFCHB* FMEINHMDFNO; // 0x58
	::FGCOIBFFCHB* BMHOONPMBAC; // 0x60
	::MonoUITableScrollV2* CIIHLBELFPC; // 0x68
	::LGINJIKKBJA* CACBCKLNKFO; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* ELKAPHLNHFK; // 0x78
	::UnityEngine::Transform* IHKBIAIDFOB; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* LCGACNNCFLD; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDPHDMOIFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNDPHDMOIFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNDPHDMOIFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDPHDMOIFA_KGEBDLGBGNM_OFFSET))(this);
	}
};
