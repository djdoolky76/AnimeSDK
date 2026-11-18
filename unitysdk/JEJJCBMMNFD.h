#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JEJJCBMMNFD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CAD7F0)
#define JEJJCBMMNFD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CAD6B0)
#define JEJJCBMMNFD__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAD7E0)

inline static constexpr unsigned int JEJJCBMMNFD_TypeDefinitionIndex = 83434;

class JEJJCBMMNFD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* JDJKPGMLGDN; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::UnityEngine::UI::Text* EPMEILNJMFF; // 0x28
	::UnityEngine::RectTransform* DNJLPEHIEAE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x38
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x40
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJJCBMMNFD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEJJCBMMNFD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEJJCBMMNFD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
