#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }

#define LMBJACEJBNF_CDPEOPGPPCM_OFFSET UNITYSDK_OFFSET(0x11F22730)
#define LMBJACEJBNF_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x11F224F0)
#define LMBJACEJBNF_EMONHCAAFHN_OFFSET UNITYSDK_OFFSET(0x11F22600)
#define LMBJACEJBNF_FNHHLEGCABA_OFFSET UNITYSDK_OFFSET(0x11F22870)
#define LMBJACEJBNF_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x11F22720)
#define LMBJACEJBNF_LABDICEGKIL_OFFSET UNITYSDK_OFFSET(0x11F228E0)
#define LMBJACEJBNF__CTOR_OFFSET UNITYSDK_OFFSET(0x11F22690)

inline static constexpr unsigned int LMBJACEJBNF_TypeDefinitionIndex = 38488;

class LMBJACEJBNF : public ::PKMJPMFCNBK
{
public:
	::MGHNAPKHBOG JFOBGECEJGC; // 0x80
	::LFGBJHCEJID NAMKHHBACEC; // 0x98
	::UnityEngine::Vector3 EKNNACICCAF; // 0xB4
	::UnityEngine::Vector3 GJBDJHEPNEH; // 0xC0
	::System::Boolean EHBCIFJMHOO; // 0xCC
	::System::Boolean JCGKKOICLIM; // 0xCD
	::System::Boolean CALPHBGCPPK; // 0xCE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBJACEJBNF__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBJACEJBNF_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void EMONHCAAFHN(::UnityEngine::AnimatorStateInfo JHPKEHLIIOH, ::UnityEngine::AnimatorStateInfo MLMIIBHFIBI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + LMBJACEJBNF_EMONHCAAFHN_OFFSET))(this, JHPKEHLIIOH, MLMIIBHFIBI);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBJACEJBNF_KHJELIBOECB_OFFSET))(this);
	}

	::System::Void CDPEOPGPPCM(::UnityEngine::AnimatorStateInfo MIALFKCCCPI, ::UnityEngine::AnimatorStateInfo KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + LMBJACEJBNF_CDPEOPGPPCM_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::MoleMole::Battle::Entity* FNHHLEGCABA()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBJACEJBNF_FNHHLEGCABA_OFFSET))(this);
	}

	::OAMAMDGEJKH* LABDICEGKIL()
	{
		return ((::OAMAMDGEJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBJACEJBNF_LABDICEGKIL_OFFSET))(this);
	}
};
