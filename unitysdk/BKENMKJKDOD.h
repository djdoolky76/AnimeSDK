#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DNGEKLMPBAC;
class HILFGNKLBFN;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigPlayLightDiffusionAnimation; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define BKENMKJKDOD_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x13977180)
#define BKENMKJKDOD_GIPPAHDFBIO_OFFSET UNITYSDK_OFFSET(0x13976F70)
#define BKENMKJKDOD_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x13976A50)
#define BKENMKJKDOD_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x13976AC0)
#define BKENMKJKDOD__CTOR_OFFSET UNITYSDK_OFFSET(0x13977120)

inline static constexpr unsigned int BKENMKJKDOD_TypeDefinitionIndex = 52918;

class BKENMKJKDOD
{
public:
	::MoleMole::Config::ConfigPlayLightDiffusionAnimation* CEJENBBHBBG; // 0x40
	::HILFGNKLBFN* OAEBANBJFDG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKENMKJKDOD__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigPlayLightDiffusionAnimation* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayLightDiffusionAnimation*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BKENMKJKDOD_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKENMKJKDOD_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Boolean GIPPAHDFBIO(::MoleMole::HollowChessboard::HollowCell& NFBAMGPDGKC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + BKENMKJKDOD_GIPPAHDFBIO_OFFSET))(this, NFBAMGPDGKC);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKENMKJKDOD_EEOOAGEDKLM_OFFSET))(this);
	}
};
