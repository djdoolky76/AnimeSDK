#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DNGEKLMPBAC;
class KNLAALJNIKN;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigPlayInnerWorldDiffusionAnimation; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define AJMDNKGOOEG_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x18208280)
#define AJMDNKGOOEG_GIPPAHDFBIO_OFFSET UNITYSDK_OFFSET(0x18208070)
#define AJMDNKGOOEG_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x18207B50)
#define AJMDNKGOOEG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x18207BC0)
#define AJMDNKGOOEG__CTOR_OFFSET UNITYSDK_OFFSET(0x18208220)

inline static constexpr unsigned int AJMDNKGOOEG_TypeDefinitionIndex = 84377;

class AJMDNKGOOEG
{
public:
	::KNLAALJNIKN* INAGMACEKFD; // 0x40
	::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation* CEJENBBHBBG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMDNKGOOEG__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + AJMDNKGOOEG_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMDNKGOOEG_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMDNKGOOEG_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Boolean GIPPAHDFBIO(::MoleMole::HollowChessboard::HollowCell& NFBAMGPDGKC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + AJMDNKGOOEG_GIPPAHDFBIO_OFFSET))(this, NFBAMGPDGKC);
	}
};
