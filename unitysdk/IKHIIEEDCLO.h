#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IKHIIEEDCLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1ACB7300)
#define IKHIIEEDCLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1ACB71A0)
#define IKHIIEEDCLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB72F0)

inline static constexpr unsigned int IKHIIEEDCLO_TypeDefinitionIndex = 93079;

class IKHIIEEDCLO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x18
	::UnityEngine::RectTransform* DNJLPEHIEAE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x28
	::UnityEngine::UI::Text* EPMEILNJMFF; // 0x30
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x38
	::UnityEngine::UI::Text* JDJKPGMLGDN; // 0x40
	::UnityEngine::RectTransform* HMEJBAFNJKL; // 0x48
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHIIEEDCLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKHIIEEDCLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKHIIEEDCLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
