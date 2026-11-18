#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ModifyHollowParticleHDRConfig; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define DJBCFPNFNND_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x16BA2870)
#define DJBCFPNFNND_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x16BA24E0)
#define DJBCFPNFNND_HLLDGILFILP_OFFSET UNITYSDK_OFFSET(0x16BA2780)
#define DJBCFPNFNND_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x16BA2550)
#define DJBCFPNFNND__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA2720)

inline static constexpr unsigned int DJBCFPNFNND_TypeDefinitionIndex = 68559;

class DJBCFPNFNND
{
public:
	::MoleMole::Config::ModifyHollowParticleHDRConfig* CEJENBBHBBG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBCFPNFNND__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ModifyHollowParticleHDRConfig* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ModifyHollowParticleHDRConfig*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + DJBCFPNFNND_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBCFPNFNND_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Boolean HLLDGILFILP(::PNJDGHBEMLK* EBJICBIMOHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + DJBCFPNFNND_HLLDGILFILP_OFFSET))(this, EBJICBIMOHN);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBCFPNFNND_EEOOAGEDKLM_OFFSET))(this);
	}
};
