#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ANLJBPGNECD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x182103A0)
#define ANLJBPGNECD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18210260)
#define ANLJBPGNECD__CTOR_OFFSET UNITYSDK_OFFSET(0x18210390)

inline static constexpr unsigned int ANLJBPGNECD_TypeDefinitionIndex = 77262;

class ANLJBPGNECD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DNJLPEHIEAE; // 0x18
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x28
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x30
	::UnityEngine::UI::Text* JDJKPGMLGDN; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::UnityEngine::UI::Text* EPMEILNJMFF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLJBPGNECD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANLJBPGNECD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANLJBPGNECD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
