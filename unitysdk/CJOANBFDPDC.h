#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CJOANBFDPDC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1496B570)
#define CJOANBFDPDC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1496B4A0)
#define CJOANBFDPDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1496B290)
#define CJOANBFDPDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1496B560)

inline static constexpr unsigned int CJOANBFDPDC_TypeDefinitionIndex = 64176;

class CJOANBFDPDC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* MNHOFEMCLNH; // 0x18
	::LGINJIKKBJA* MPKFJGANKMF; // 0x20
	::UnityEngine::GameObject* FEKAMKHOIMK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x38
	::LGINJIKKBJA* JCADOOGJMJO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x48
	::UnityEngine::RectTransform* PNDFHLLILAK; // 0x50
	::LGINJIKKBJA* LCHPJHAFJGE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOANBFDPDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJOANBFDPDC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOANBFDPDC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJOANBFDPDC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
