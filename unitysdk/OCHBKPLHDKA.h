#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OCHBKPLHDKA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12920120)
#define OCHBKPLHDKA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1291FFC0)
#define OCHBKPLHDKA__CTOR_OFFSET UNITYSDK_OFFSET(0x12920110)

inline static constexpr unsigned int OCHBKPLHDKA_TypeDefinitionIndex = 54766;

class OCHBKPLHDKA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x18
	::UnityEngine::UI::Text* PNDHOGLJAHH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* OIJMFDBGDJD; // 0x28
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Text* JDJKPGMLGDN; // 0x40
	::UnityEngine::RectTransform* DNJLPEHIEAE; // 0x48
	::UnityEngine::UI::Text* EPMEILNJMFF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBKPLHDKA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCHBKPLHDKA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCHBKPLHDKA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
