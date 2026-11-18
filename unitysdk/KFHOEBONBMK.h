#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KFHOEBONBMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1764E1C0)
#define KFHOEBONBMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1764E0C0)
#define KFHOEBONBMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1764E1B0)

inline static constexpr unsigned int KFHOEBONBMK_TypeDefinitionIndex = 80847;

class KFHOEBONBMK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FIEKKDIMMGC; // 0x18
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PAENLJOMKLI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHOEBONBMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFHOEBONBMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFHOEBONBMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
