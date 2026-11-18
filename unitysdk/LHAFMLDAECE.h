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

#define LHAFMLDAECE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F0CDC0)
#define LHAFMLDAECE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F0CCF0)
#define LHAFMLDAECE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F0CAD0)
#define LHAFMLDAECE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F0CDB0)

inline static constexpr unsigned int LHAFMLDAECE_TypeDefinitionIndex = 40900;

class LHAFMLDAECE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::FGCOIBFFCHB* OAKLOCDAFEE; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::UnityEngine::GameObject* NCJLJGGCOJK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x48
	::UnityEngine::RectTransform* HMLLDMOOHAH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAFMLDAECE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHAFMLDAECE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHAFMLDAECE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAFMLDAECE_KGEBDLGBGNM_OFFSET))(this);
	}
};
