#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CKJAPPJEFLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169675C0)
#define CKJAPPJEFLE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169674F0)
#define CKJAPPJEFLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16967310)
#define CKJAPPJEFLE__CTOR_OFFSET UNITYSDK_OFFSET(0x169675B0)

inline static constexpr unsigned int CKJAPPJEFLE_TypeDefinitionIndex = 58249;

class CKJAPPJEFLE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* AFPNENOGGLH; // 0x18
	::UnityEngine::RectTransform* ANDFIBAKEAE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x28
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x40
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJAPPJEFLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CKJAPPJEFLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJAPPJEFLE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CKJAPPJEFLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
