#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigGachaPerformanceAnimSpeedNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define NLNNJIPEKHD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10D84240)
#define NLNNJIPEKHD_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x10D84A60)
#define NLNNJIPEKHD_KOHABOKICHK_OFFSET UNITYSDK_OFFSET(0x10D84230)
#define NLNNJIPEKHD_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x10D84390)
#define NLNNJIPEKHD_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x10D84AF0)
#define NLNNJIPEKHD__CTOR_OFFSET UNITYSDK_OFFSET(0x10D84A50)

inline static constexpr unsigned int NLNNJIPEKHD_TypeDefinitionIndex = 81872;

class NLNNJIPEKHD : public ::LLKOFEPPBNJ
{
public:
	::MoleMole::Config::ConfigGachaPerformanceAnimSpeedNode* GELPLHLJCDL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNNJIPEKHD__CTOR_OFFSET))(this);
	}

	::System::Boolean KOHABOKICHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNNJIPEKHD_KOHABOKICHK_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + NLNNJIPEKHD_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNNJIPEKHD_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNNJIPEKHD_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + NLNNJIPEKHD_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
