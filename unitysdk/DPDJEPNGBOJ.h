#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DPDJEPNGBOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9A7C40)
#define DPDJEPNGBOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9A7B90)
#define DPDJEPNGBOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9A79B0)
#define DPDJEPNGBOJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9A7C30)

inline static constexpr unsigned int DPDJEPNGBOJ_TypeDefinitionIndex = 88042;

class DPDJEPNGBOJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KFOKPEHEAPI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x20
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x28
	::UnityEngine::Transform* EBGGJKEIFIO; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::MoleMole::ImgTextParserBase* AMEEMEPHGEL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDJEPNGBOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPDJEPNGBOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDJEPNGBOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPDJEPNGBOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
