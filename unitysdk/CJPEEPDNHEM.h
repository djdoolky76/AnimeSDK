#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CJPEEPDNHEM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A136B0)
#define CJPEEPDNHEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A13570)
#define CJPEEPDNHEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A136A0)

inline static constexpr unsigned int CJPEEPDNHEM_TypeDefinitionIndex = 39774;

class CJPEEPDNHEM : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::Transform* JABIILAAGIH; // 0x20
	::UnityEngine::Transform* ODALDIOFMPH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HNODDINBKAH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x38
	::MoleMole::MonoGamepadTabButtonGroup* PGIBPKEMIPF; // 0x40
	::UnityEngine::UI::Extension::UITabButtonGroup* FBLMLOANCHG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPEEPDNHEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJPEEPDNHEM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJPEEPDNHEM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
