#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JOBNCKOAMLK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13AE3A20)
#define JOBNCKOAMLK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13AE3910)
#define JOBNCKOAMLK__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE3A10)

inline static constexpr unsigned int JOBNCKOAMLK_TypeDefinitionIndex = 50764;

class JOBNCKOAMLK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KGEAGFGKBBE; // 0x18
	::UnityEngine::Transform* HGEBLKNDDPG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KEKEMNFFJHN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBNCKOAMLK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOBNCKOAMLK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOBNCKOAMLK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
