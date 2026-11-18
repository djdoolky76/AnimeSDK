#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MCCHEFEMJCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DDA0F0)
#define MCCHEFEMJCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DD9FE0)
#define MCCHEFEMJCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DD9D70)
#define MCCHEFEMJCM__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDA0E0)

inline static constexpr unsigned int MCCHEFEMJCM_TypeDefinitionIndex = 69867;

class MCCHEFEMJCM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GGMJGKKMLLF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AIONHELBGBC; // 0x20
	::FGCOIBFFCHB* PHENNEGFIAB; // 0x28
	::FGCOIBFFCHB* GPEIBODHMDE; // 0x30
	::UnityEngine::GameObject* HPDMBJFALNM; // 0x38
	::FGCOIBFFCHB* GMIHHNHMDPH; // 0x40
	::UnityEngine::GameObject* LKCPFCFFILO; // 0x48
	::UnityEngine::GameObject* GMABNNKNIIF; // 0x50
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BEKDJJKCOIB; // 0x60
	::UnityEngine::GameObject* HMPNHFMMJBE; // 0x68
	::UnityEngine::UI::Text* BCFDBICFCOP; // 0x70
	::UnityEngine::UI::Extension::UIButtonEx* KHOJKFHFKIJ; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHEFEMJCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCCHEFEMJCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCCHEFEMJCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHEFEMJCM_KGEBDLGBGNM_OFFSET))(this);
	}
};
