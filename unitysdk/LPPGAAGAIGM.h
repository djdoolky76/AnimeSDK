#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LPPGAAGAIGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1568AD20)
#define LPPGAAGAIGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1568AC50)
#define LPPGAAGAIGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1568AA50)
#define LPPGAAGAIGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1568AD10)

inline static constexpr unsigned int LPPGAAGAIGM_TypeDefinitionIndex = 77920;

class LPPGAAGAIGM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::Transform* MBKACMJJMBH; // 0x28
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x30
	::MoleMole::UIGeneralButtonController* ACAAAJMHIFH; // 0x38
	::UnityEngine::RectTransform* LCHHCIIDNKE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x48
	::UnityEngine::Transform* OOENDNEIFDO; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* FKIIMEJJPBB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPGAAGAIGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LPPGAAGAIGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPGAAGAIGM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LPPGAAGAIGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
