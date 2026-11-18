#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MHOIPDFLKEM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x20053560)
#define MHOIPDFLKEM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x20053490)
#define MHOIPDFLKEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x200532F0)
#define MHOIPDFLKEM__CTOR_OFFSET UNITYSDK_OFFSET(0x20053550)

inline static constexpr unsigned int MHOIPDFLKEM_TypeDefinitionIndex = 96525;

class MHOIPDFLKEM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* OAKAIIJLMIL; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Text* LOIEHBLKDPE; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOIPDFLKEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHOIPDFLKEM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHOIPDFLKEM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOIPDFLKEM_KGEBDLGBGNM_OFFSET))(this);
	}
};
