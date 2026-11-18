#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FELCBINCEBB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB3A7E0)
#define FELCBINCEBB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB3A6A0)
#define FELCBINCEBB__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3A7D0)

inline static constexpr unsigned int FELCBINCEBB_TypeDefinitionIndex = 81787;

class FELCBINCEBB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x30
	::UnityEngine::RectTransform* DNJLPEHIEAE; // 0x38
	::UnityEngine::UI::Text* EPMEILNJMFF; // 0x40
	::UnityEngine::UI::Text* JDJKPGMLGDN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELCBINCEBB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FELCBINCEBB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FELCBINCEBB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
