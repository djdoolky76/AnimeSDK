#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGLNFGCBOJ.h"
#include "unitysdk/MoleMole/Config/AtmosphereSourceType.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define OJKLFNGHMPF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x172CEA70)
#define OJKLFNGHMPF_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x172CF270)
#define OJKLFNGHMPF_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x172CEB90)
#define OJKLFNGHMPF_MEHEMNMBNDH_OFFSET UNITYSDK_OFFSET(0x172CEB50)
#define OJKLFNGHMPF_NMCGLMJENHI_OFFSET UNITYSDK_OFFSET(0x172CF1E0)
#define OJKLFNGHMPF_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x172CF1D0)
#define OJKLFNGHMPF__CTOR_OFFSET UNITYSDK_OFFSET(0x172CF180)

inline static constexpr unsigned int OJKLFNGHMPF_TypeDefinitionIndex = 64433;

class OJKLFNGHMPF : public ::MDGLNFGCBOJ
{
public:
	::System::String* ELEOHHGJBGC; // 0x40
	::MoleMole::Config::AtmosphereSourceType FKHOOEIFEJO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLFNGHMPF__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + OJKLFNGHMPF_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Boolean MEHEMNMBNDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLFNGHMPF_MEHEMNMBNDH_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLFNGHMPF_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + OJKLFNGHMPF_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Boolean NMCGLMJENHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLFNGHMPF_NMCGLMJENHI_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLFNGHMPF_EEOOAGEDKLM_OFFSET))(this);
	}
};
