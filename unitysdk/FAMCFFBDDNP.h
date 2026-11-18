#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define FAMCFFBDDNP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158C9550)
#define FAMCFFBDDNP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158C93F0)
#define FAMCFFBDDNP__CTOR_OFFSET UNITYSDK_OFFSET(0x158C9540)

inline static constexpr unsigned int FAMCFFBDDNP_TypeDefinitionIndex = 55954;

class FAMCFFBDDNP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* FBLMLOANCHG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::Transform* JABIILAAGIH; // 0x28
	::UnityEngine::Transform* ODALDIOFMPH; // 0x30
	::UnityEngine::RectTransform* HMNIHDPPGPD; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HNODDINBKAH; // 0x48
	::MoleMole::MonoGamepadTabButtonGroup* PGIBPKEMIPF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMCFFBDDNP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAMCFFBDDNP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAMCFFBDDNP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
