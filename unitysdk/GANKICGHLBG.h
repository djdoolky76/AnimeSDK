#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GANKICGHLBG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11C88DA0)
#define GANKICGHLBG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11C88CB0)
#define GANKICGHLBG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C88AE0)
#define GANKICGHLBG__CTOR_OFFSET UNITYSDK_OFFSET(0x11C88D90)

inline static constexpr unsigned int GANKICGHLBG_TypeDefinitionIndex = 76577;

class GANKICGHLBG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UIButtonEx* KHOJKFHFKIJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AIONHELBGBC; // 0x20
	::FGCOIBFFCHB* PHENNEGFIAB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BEKDJJKCOIB; // 0x30
	::UnityEngine::GameObject* HPDMBJFALNM; // 0x38
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x40
	::FGCOIBFFCHB* GMIHHNHMDPH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANKICGHLBG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GANKICGHLBG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANKICGHLBG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GANKICGHLBG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
