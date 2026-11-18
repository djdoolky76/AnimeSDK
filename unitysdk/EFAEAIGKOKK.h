#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EFAEAIGKOKK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10634770)
#define EFAEAIGKOKK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10634660)
#define EFAEAIGKOKK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10634400)
#define EFAEAIGKOKK__CTOR_OFFSET UNITYSDK_OFFSET(0x10634760)

inline static constexpr unsigned int EFAEAIGKOKK_TypeDefinitionIndex = 92317;

class EFAEAIGKOKK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* OOENDNEIFDO; // 0x18
	::UnityEngine::Transform* EPFKLDOLLEB; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::UI::Text* PNDHOGLJAHH; // 0x30
	::UnityEngine::Transform* AIBOHAIMPOJ; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IAHPPPIKLOD; // 0x40
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x48
	::LGINJIKKBJA* HEOACLIFDNO; // 0x50
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DJJCIKHKIAG; // 0x60
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x68
	::UnityEngine::GameObject* CNDCHJDEFMK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAEAIGKOKK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EFAEAIGKOKK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EFAEAIGKOKK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAEAIGKOKK_KGEBDLGBGNM_OFFSET))(this);
	}
};
