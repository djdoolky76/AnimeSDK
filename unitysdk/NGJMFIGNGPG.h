#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NGJMFIGNGPG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F73BA0)
#define NGJMFIGNGPG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F73AD0)
#define NGJMFIGNGPG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F73950)
#define NGJMFIGNGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x11F73B90)

inline static constexpr unsigned int NGJMFIGNGPG_TypeDefinitionIndex = 50532;

class NGJMFIGNGPG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* CPNLLIEHPDN; // 0x18
	::UnityEngine::GameObject* FMLHPKIHFJC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GIMDNILAFKM; // 0x28
	::FGCOIBFFCHB* BFEBPKGJAPC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJMFIGNGPG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGJMFIGNGPG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGJMFIGNGPG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJMFIGNGPG_KGEBDLGBGNM_OFFSET))(this);
	}
};
