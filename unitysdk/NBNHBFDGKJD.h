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

#define NBNHBFDGKJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18F9AC30)
#define NBNHBFDGKJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18F9AAF0)
#define NBNHBFDGKJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18F9A8B0)
#define NBNHBFDGKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x18F9AC20)

inline static constexpr unsigned int NBNHBFDGKJD_TypeDefinitionIndex = 68983;

class NBNHBFDGKJD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LDIIGKLLBME; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HGJGFBJDLAC; // 0x20
	::FGCOIBFFCHB* MCJDMJHOBJO; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30
	::UnityEngine::GameObject* CJFCGNFOCFO; // 0x38
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x40
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x48
	::FGCOIBFFCHB* GNCABFOBJHO; // 0x50
	::LGINJIKKBJA* CLEMGMGHBKC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNHBFDGKJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBNHBFDGKJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNHBFDGKJD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBNHBFDGKJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
