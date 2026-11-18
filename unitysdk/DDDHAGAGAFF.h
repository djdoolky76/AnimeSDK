#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGuideUIConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DDDHAGAGAFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A36E60)
#define DDDHAGAGAFF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A36D70)
#define DDDHAGAGAFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A36B10)
#define DDDHAGAGAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x19A36E50)

inline static constexpr unsigned int DDDHAGAGAFF_TypeDefinitionIndex = 81345;

class DDDHAGAGAFF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HLCMIEKCKAP; // 0x18
	::UnityEngine::RectTransform* EMDOIDLAFDB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KIKKEBAHHOA; // 0x28
	::UnityEngine::Animation* AOKJEGNBALI; // 0x30
	::MoleMole::MonoGuideUIConfig* DFMKILICPFB; // 0x38
	::UnityEngine::RectTransform* GKLEIMGLOGA; // 0x40
	::UnityEngine::RectTransform* MCCNMLNMCJF; // 0x48
	::UnityEngine::Animation* NJNAACMKEBD; // 0x50
	::UnityEngine::CanvasGroup* OCKENNPJMHL; // 0x58
	::FGCOIBFFCHB* LOELDBNKAKF; // 0x60
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDHAGAGAFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DDDHAGAGAFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DDDHAGAGAFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDHAGAGAFF_KGEBDLGBGNM_OFFSET))(this);
	}
};
