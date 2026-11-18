#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJBECFGNAMH.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigNewbie_CircleEffect; }
namespace MoleMole { class ConfigNewbie_NewbieStep; }
namespace MoleMole { class ConfigNewbie_TargetPath; }
namespace MoleMole { class UINewbiePopWindowController; }
namespace UnityEngine { class GameObject; }

#define LIMEFAECFMC_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x12A5F330)
#define LIMEFAECFMC_FPGJGCELMGB_OFFSET UNITYSDK_OFFSET(0x12A5EA70)
#define LIMEFAECFMC_GFFPMEMNPDJ_OFFSET UNITYSDK_OFFSET(0x12A5F2A0)
#define LIMEFAECFMC_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x12A5E710)
#define LIMEFAECFMC_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x12A5EBE0)
#define LIMEFAECFMC_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x12A5EE90)
#define LIMEFAECFMC__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5F290)

inline static constexpr unsigned int LIMEFAECFMC_TypeDefinitionIndex = 89165;

class LIMEFAECFMC : public ::BJBECFGNAMH
{
public:
	::MoleMole::ConfigNewbie_TargetPath* GONOCPOOFEN; // 0x10
	::UnityEngine::GameObject* HPEFMJFCIHN; // 0x18
	::System::Single MJFKGAIKNPM; // 0x20
	::System::Single AMMFGNGANDO; // 0x24
	::System::Single JDGEDGMDKGB; // 0x28
	::System::Single KKJKPJEGKJC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMEFAECFMC__CTOR_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + LIMEFAECFMC_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PLPONJAKNEB(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + LIMEFAECFMC_PLPONJAKNEB_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void GFFPMEMNPDJ(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + LIMEFAECFMC_GFFPMEMNPDJ_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ConfigNewbie_CircleEffect* FPGJGCELMGB(::MoleMole::ConfigNewbie_NewbieStep* POPICJHAPAD)
	{
		return ((::MoleMole::ConfigNewbie_CircleEffect*(*)(::PVOID, ::MoleMole::ConfigNewbie_NewbieStep*))((::PBYTE)hIl2Cpp + LIMEFAECFMC_FPGJGCELMGB_OFFSET))(this, POPICJHAPAD);
	}

	::UnityEngine::Vector2 LBCBPEJEHNB(::UnityEngine::GameObject* HODAIDNDKHD)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LIMEFAECFMC_LBCBPEJEHNB_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void BKJPMPBEHDO(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + LIMEFAECFMC_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}
};
