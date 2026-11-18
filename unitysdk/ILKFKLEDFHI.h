#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ILKFKLEDFHI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15ED4710)
#define ILKFKLEDFHI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15ED45D0)
#define ILKFKLEDFHI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15ED43B0)
#define ILKFKLEDFHI__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED4700)

inline static constexpr unsigned int ILKFKLEDFHI_TypeDefinitionIndex = 44236;

class ILKFKLEDFHI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::LGINJIKKBJA* MLGILBFIPPL; // 0x30
	::UnityEngine::UI::Text* MKAMEMNJEAM; // 0x38
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x40
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x48
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x50
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKFKLEDFHI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILKFKLEDFHI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILKFKLEDFHI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKFKLEDFHI_KGEBDLGBGNM_OFFSET))(this);
	}
};
