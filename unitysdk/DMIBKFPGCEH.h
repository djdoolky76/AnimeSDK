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

#define DMIBKFPGCEH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169788C0)
#define DMIBKFPGCEH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16978780)
#define DMIBKFPGCEH__CTOR_OFFSET UNITYSDK_OFFSET(0x169788B0)

inline static constexpr unsigned int DMIBKFPGCEH_TypeDefinitionIndex = 41326;

class DMIBKFPGCEH : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadTabButtonGroup* PGIBPKEMIPF; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* FBLMLOANCHG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HNODDINBKAH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::Transform* JABIILAAGIH; // 0x40
	::UnityEngine::RectTransform* HMNIHDPPGPD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIBKFPGCEH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DMIBKFPGCEH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DMIBKFPGCEH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
