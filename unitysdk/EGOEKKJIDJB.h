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

#define EGOEKKJIDJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16997BE0)
#define EGOEKKJIDJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16997B10)
#define EGOEKKJIDJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16997910)
#define EGOEKKJIDJB__CTOR_OFFSET UNITYSDK_OFFSET(0x16997BD0)

inline static constexpr unsigned int EGOEKKJIDJB_TypeDefinitionIndex = 71228;

class EGOEKKJIDJB : public ::GIBMJLOJLKD
{
public:
	::MoleMole::ImgTextParserBase* AMEEMEPHGEL; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x30
	::UnityEngine::Transform* EBGGJKEIFIO; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::UnityEngine::RectTransform* KFOKPEHEAPI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOEKKJIDJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGOEKKJIDJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOEKKJIDJB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGOEKKJIDJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
