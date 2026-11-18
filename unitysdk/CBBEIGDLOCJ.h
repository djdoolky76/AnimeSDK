#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CBBEIGDLOCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1477D370)
#define CBBEIGDLOCJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1477D260)
#define CBBEIGDLOCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1477D070)
#define CBBEIGDLOCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1477D360)

inline static constexpr unsigned int CBBEIGDLOCJ_TypeDefinitionIndex = 53002;

class CBBEIGDLOCJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x18
	::UnityEngine::GameObject* LNBIEGJBAKA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HAALNKAAEIB; // 0x28
	::UnityEngine::UI::Text* NAEHMGJNJHJ; // 0x30
	::LGINJIKKBJA* KHCELBIACLD; // 0x38
	::FGCOIBFFCHB* MAMNIGKOFLN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBEIGDLOCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBBEIGDLOCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBEIGDLOCJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBBEIGDLOCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
