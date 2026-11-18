#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPCMLEONLI.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChangeBG_ChangeBGType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
class IKPNFEPCOFI;
class JIGODLIKGDA_MGLEGEKPNIN;
class PNJDGHBEMLK;
namespace MoleMole::HollowChessboard { class CellDiffusionConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIGODLIKGDA_CBHKHICOKDH_CLDJHKPLJGK_OFFSET UNITYSDK_OFFSET(0x1557C9F0)
#define JIGODLIKGDA_CBHKHICOKDH_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x1557C840)
#define JIGODLIKGDA_CBHKHICOKDH_FMILOCFONMC_OFFSET UNITYSDK_OFFSET(0x1557CA80)
#define JIGODLIKGDA_CBHKHICOKDH_GJJFFCAGLCP_OFFSET UNITYSDK_OFFSET(0x1557C930)
#define JIGODLIKGDA_CBHKHICOKDH_IEKMNOGJPGL_OFFSET UNITYSDK_OFFSET(0x1557C690)
#define JIGODLIKGDA_CBHKHICOKDH_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1557CEE0)
#define JIGODLIKGDA_CBHKHICOKDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1557C8B0)

inline static constexpr unsigned int JIGODLIKGDA_CBHKHICOKDH_TypeDefinitionIndex = 58739;

class JIGODLIKGDA_CBHKHICOKDH : public ::GIPCMLEONLI
{
public:
	::MoleMole::HollowChessboard::CellDiffusionConfig* LFKMPLLGFGP; // 0x40
	::IKPNFEPCOFI* OKGKGBPBONI; // 0x48
	::JIGODLIKGDA_MGLEGEKPNIN* HPKKCCCMHEK; // 0x50
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x58
	::MoleMole::Config::ConfigHollowChangeBG_ChangeBGType KFJIDELKONJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_CBHKHICOKDH__CTOR_OFFSET))(this);
	}

	::System::Void IEKMNOGJPGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_CBHKHICOKDH_IEKMNOGJPGL_OFFSET))(this);
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JIGODLIKGDA_CBHKHICOKDH_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Boolean GJJFFCAGLCP(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_CBHKHICOKDH_GJJFFCAGLCP_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void CLDJHKPLJGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_CBHKHICOKDH_CLDJHKPLJGK_OFFSET))(this);
	}

	::System::Void FMILOCFONMC(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* NFBGFHDACPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_CBHKHICOKDH_FMILOCFONMC_OFFSET))(this, NFBGFHDACPD);
	}

	::System::Void LCJEELHBNHG(::JIGODLIKGDA_MGLEGEKPNIN* EHLMKCPMLME, ::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::System::Void(*)(::PVOID, ::JIGODLIKGDA_MGLEGEKPNIN*, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_CBHKHICOKDH_LCJEELHBNHG_OFFSET))(this, EHLMKCPMLME, COBEJJHGMPO);
	}
};
