#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define HLCGMDBHKMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E65130)
#define HLCGMDBHKMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E65060)
#define HLCGMDBHKMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E64EC0)
#define HLCGMDBHKMC__CTOR_OFFSET UNITYSDK_OFFSET(0x12E65120)

inline static constexpr unsigned int HLCGMDBHKMC_TypeDefinitionIndex = 42237;

class HLCGMDBHKMC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* MMMNNMPBJMI; // 0x18
	::FGCOIBFFCHB* BOKMJMOAONH; // 0x20
	::UnityEngine::UI::Text* IOAAHPKLJMO; // 0x28
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x30
	::UnityEngine::GameObject* EJAMLGKCJED; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCGMDBHKMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLCGMDBHKMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLCGMDBHKMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCGMDBHKMC_KGEBDLGBGNM_OFFSET))(this);
	}
};
