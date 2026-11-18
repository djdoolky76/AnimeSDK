#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IMDFMDBOODE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16AAB7B0)
#define IMDFMDBOODE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16AAB700)
#define IMDFMDBOODE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16AAB500)
#define IMDFMDBOODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAB7A0)

inline static constexpr unsigned int IMDFMDBOODE_TypeDefinitionIndex = 65571;

class IMDFMDBOODE : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* FIDHNODLLCB; // 0x20
	::UnityEngine::RectTransform* CFKEAPOGCLD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::UnityEngine::RectTransform* EIJPBDNNHPN; // 0x38
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x40
	::LGINJIKKBJA* PPKPOIOFFDG; // 0x48
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x50
	::MonoUITableScrollV2* FKAOANLPJKJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDFMDBOODE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMDFMDBOODE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDFMDBOODE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMDFMDBOODE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
