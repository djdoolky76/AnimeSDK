#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GEMEJEPJKDN_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0xBB89F40)
#define GEMEJEPJKDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB8A060)
#define GEMEJEPJKDN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xBB89EA0)
#define GEMEJEPJKDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB89C70)
#define GEMEJEPJKDN_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0xBB89FC0)
#define GEMEJEPJKDN__CTOR_OFFSET UNITYSDK_OFFSET(0xBB89FB0)

inline static constexpr unsigned int GEMEJEPJKDN_TypeDefinitionIndex = 66741;

class GEMEJEPJKDN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EKFNNJIKOPL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x38
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x40
	::UnityEngine::GameObject* JFMEGBECFML; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x58
	::UnityEngine::GameObject* CONBBLDCMED; // 0x60
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMEJEPJKDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEMEJEPJKDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + GEMEJEPJKDN_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + GEMEJEPJKDN_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEMEJEPJKDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMEJEPJKDN_KGEBDLGBGNM_OFFSET))(this);
	}
};
