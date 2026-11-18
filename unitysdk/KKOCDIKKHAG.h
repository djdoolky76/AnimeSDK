#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOKBMFNAOKC.h"
#include "unitysdk/JFGPIOKIKMC.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/PEBKOGJHCAF.h"

class BOOAPJIDGLO;
class CMLEOMMLODC;
class IEDOEBNKHBF;
class MLPGEJOFJBL;
class NBGLGKLHEMP;
namespace MoleMole { class HollowEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKOCDIKKHAG_DMGOGJLKPLE_OFFSET UNITYSDK_OFFSET(0x18634C80)
#define KKOCDIKKHAG_FMGINIECAID_OFFSET UNITYSDK_OFFSET(0x18634B30)
#define KKOCDIKKHAG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18634850)
#define KKOCDIKKHAG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x18634B40)
#define KKOCDIKKHAG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x18634D20)
#define KKOCDIKKHAG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18634920)
#define KKOCDIKKHAG_OPLNBOBGBGJ_OFFSET UNITYSDK_OFFSET(0x18634DC0)
#define KKOCDIKKHAG_PDGEKFAPEFB_OFFSET UNITYSDK_OFFSET(0x18634A90)
#define KKOCDIKKHAG_PJGOEKAOFJG_OFFSET UNITYSDK_OFFSET(0x18634DB0)
#define KKOCDIKKHAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x186348A0)
#define KKOCDIKKHAG__CTOR_OFFSET UNITYSDK_OFFSET(0x186349D0)

inline static constexpr unsigned int KKOCDIKKHAG_TypeDefinitionIndex = 41146;

class KKOCDIKKHAG : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x21D; // 0x0
	::IEDOEBNKHBF* AKOLOBNNKOL; // 0x50
	::NBGLGKLHEMP* _PNGHOICHINO_k__BackingField; // 0x58
	::CMLEOMMLODC* DADIMFPBONJ; // 0x60
	::MoleMole::HollowEntityConfig* EKLMAPOMAHK; // 0x68
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::PEBKOGJHCAF>* GENBCFEBECO; // 0x70
	::AOKBMFNAOKC EKAAICKEDGK; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKOCDIKKHAG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCDIKKHAG__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCDIKKHAG_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCDIKKHAG_ONCLEAN_OFFSET))(this);
	}

	::BOOAPJIDGLO* PDGEKFAPEFB()
	{
		return ((::BOOAPJIDGLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCDIKKHAG_PDGEKFAPEFB_OFFSET))(this);
	}

	::NBGLGKLHEMP* FMGINIECAID()
	{
		return ((::NBGLGKLHEMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCDIKKHAG_FMGINIECAID_OFFSET))(this);
	}

	static ::KKOCDIKKHAG* JFDOOELFAOA()
	{
		return ((::KKOCDIKKHAG*(*)())((::PBYTE)hIl2Cpp + KKOCDIKKHAG_JFDOOELFAOA_OFFSET))();
	}

	::MLPGEJOFJBL* DMGOGJLKPLE()
	{
		return ((::MLPGEJOFJBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCDIKKHAG_DMGOGJLKPLE_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCDIKKHAG_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void PJGOEKAOFJG(::NBGLGKLHEMP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NBGLGKLHEMP*))((::PBYTE)hIl2Cpp + KKOCDIKKHAG_PJGOEKAOFJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::JFGPIOKIKMC OPLNBOBGBGJ()
	{
		return ((::JFGPIOKIKMC(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCDIKKHAG_OPLNBOBGBGJ_OFFSET))(this);
	}
};
