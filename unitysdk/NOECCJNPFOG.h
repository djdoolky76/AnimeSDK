#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NOECCJNPFOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x115AF280)
#define NOECCJNPFOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x115AF1B0)
#define NOECCJNPFOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115AEFE0)
#define NOECCJNPFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x115AF270)

inline static constexpr unsigned int NOECCJNPFOG_TypeDefinitionIndex = 80237;

class NOECCJNPFOG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* JIDINKGJAJH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DEMGHPAAOKC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PJALIOOGAFJ; // 0x28
	::LGINJIKKBJA* GPLJEKNNGLO; // 0x30
	::UnityEngine::GameObject* MCNIHBDGDIN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FKBCLGOEHKB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JKDHPEBMIOH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOECCJNPFOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOECCJNPFOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOECCJNPFOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOECCJNPFOG_KGEBDLGBGNM_OFFSET))(this);
	}
};
