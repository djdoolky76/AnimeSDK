#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class LLNLKGOKNLG;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigHollowResultBlinkAnimNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLFBPJBGABP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16968F80)
#define CLFBPJBGABP_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x16969220)
#define CLFBPJBGABP_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x16969120)
#define CLFBPJBGABP_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x169692B0)
#define CLFBPJBGABP__CTOR_OFFSET UNITYSDK_OFFSET(0x16969210)

inline static constexpr unsigned int CLFBPJBGABP_TypeDefinitionIndex = 50244;

class CLFBPJBGABP : public ::LLKOFEPPBNJ
{
public:
	::LLNLKGOKNLG* ENEDBJGNPAJ; // 0x28
	::MoleMole::Config::ConfigHollowResultBlinkAnimNode* CEJENBBHBBG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBPJBGABP__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + CLFBPJBGABP_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBPJBGABP_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBPJBGABP_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + CLFBPJBGABP_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
