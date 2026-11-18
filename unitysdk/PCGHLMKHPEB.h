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

#define PCGHLMKHPEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A87460)
#define PCGHLMKHPEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A87360)
#define PCGHLMKHPEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A87110)
#define PCGHLMKHPEB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A87450)

inline static constexpr unsigned int PCGHLMKHPEB_TypeDefinitionIndex = 72000;

class PCGHLMKHPEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::GameObject* LLJCBDLEDKK; // 0x20
	::FGCOIBFFCHB* MCJDMJHOBJO; // 0x28
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x30
	::FGCOIBFFCHB* GNCABFOBJHO; // 0x38
	::FGCOIBFFCHB* LDIIGKLLBME; // 0x40
	::UnityEngine::GameObject* CJFCGNFOCFO; // 0x48
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* HGJGFBJDLAC; // 0x58
	::LGINJIKKBJA* CLEMGMGHBKC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGHLMKHPEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCGHLMKHPEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGHLMKHPEB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCGHLMKHPEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
