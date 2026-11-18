#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GLJGGLFAPPC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x125DA2F0)
#define GLJGGLFAPPC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x125DA1E0)
#define GLJGGLFAPPC__CTOR_OFFSET UNITYSDK_OFFSET(0x125DA2E0)

inline static constexpr unsigned int GLJGGLFAPPC_TypeDefinitionIndex = 89371;

class GLJGGLFAPPC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* ECJHBBIFIFK; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::UnityEngine::RectTransform* OFNDMBEELON; // 0x28
	::UnityEngine::RectTransform* PHGPKDJBHJF; // 0x30
	::UnityEngine::RectTransform* OBEMLOACGAF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJGGLFAPPC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLJGGLFAPPC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLJGGLFAPPC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
