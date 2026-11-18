#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define HNIIBECPMEM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140C3600)
#define HNIIBECPMEM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140C3530)
#define HNIIBECPMEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140C3390)
#define HNIIBECPMEM__CTOR_OFFSET UNITYSDK_OFFSET(0x140C35F0)

inline static constexpr unsigned int HNIIBECPMEM_TypeDefinitionIndex = 60858;

class HNIIBECPMEM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::UnityEngine::UI::Extension::UITabButton* HJIHNMPIEJL; // 0x28
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIIBECPMEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNIIBECPMEM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIIBECPMEM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNIIBECPMEM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
