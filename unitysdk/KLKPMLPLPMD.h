#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define KLKPMLPLPMD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1681EC90)
#define KLKPMLPLPMD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1681EC00)
#define KLKPMLPLPMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1681E9F0)
#define KLKPMLPLPMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1681EC80)

inline static constexpr unsigned int KLKPMLPLPMD_TypeDefinitionIndex = 78369;

class KLKPMLPLPMD : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* JIAOCDBNEID; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HNODDINBKAH; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x30
	::UnityEngine::Transform* ODALDIOFMPH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x40
	::UnityEngine::Transform* DBOCLHHKEJG; // 0x48
	::UnityEngine::GameObject* GKFGGAELCIB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKPMLPLPMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLKPMLPLPMD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLKPMLPLPMD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKPMLPLPMD_KGEBDLGBGNM_OFFSET))(this);
	}
};
