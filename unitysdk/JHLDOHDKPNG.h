#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigSetSection; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define JHLDOHDKPNG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x138442C0)
#define JHLDOHDKPNG_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x13844580)
#define JHLDOHDKPNG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x138443E0)
#define JHLDOHDKPNG_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x13844570)
#define JHLDOHDKPNG__CTOR_OFFSET UNITYSDK_OFFSET(0x13844520)

inline static constexpr unsigned int JHLDOHDKPNG_TypeDefinitionIndex = 68485;

class JHLDOHDKPNG : public ::MDGLNFGCBOJ
{
public:
	::MoleMole::Config::ConfigSetSection* CEJENBBHBBG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLDOHDKPNG__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + JHLDOHDKPNG_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLDOHDKPNG_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + JHLDOHDKPNG_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLDOHDKPNG_EEOOAGEDKLM_OFFSET))(this);
	}
};
