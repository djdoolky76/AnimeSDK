#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GCCJFOJCKKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13247020)
#define GCCJFOJCKKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13246F30)
#define GCCJFOJCKKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13246D30)
#define GCCJFOJCKKP__CTOR_OFFSET UNITYSDK_OFFSET(0x13247010)

inline static constexpr unsigned int GCCJFOJCKKP_TypeDefinitionIndex = 56822;

class GCCJFOJCKKP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DEBFJDFPLCO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NAKOOKMAJHG; // 0x28
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x30
	::UnityEngine::GameObject* FFPCPJONELK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JJBCJGPICJO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* KKBCLLDCMBK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCJFOJCKKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCCJFOJCKKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCCJFOJCKKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCJFOJCKKP_KGEBDLGBGNM_OFFSET))(this);
	}
};
