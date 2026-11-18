#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MoleMole/HollowChessboard/HackerGameCollisionData.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class LHCBLCANAGG;
class MBJCLLBMALO;
class PBGECGKKLKD;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCBGONMBHAE_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x13CE5160)
#define KCBGONMBHAE_BPFEFMNKGKI_OFFSET UNITYSDK_OFFSET(0x13CE4CD0)
#define KCBGONMBHAE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13CE4640)
#define KCBGONMBHAE_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x13CE4D90)
#define KCBGONMBHAE_MGALNDPKPOC_OFFSET UNITYSDK_OFFSET(0x13CE4CC0)
#define KCBGONMBHAE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x13CE50B0)
#define KCBGONMBHAE_OPGMNEMMKEG_OFFSET UNITYSDK_OFFSET(0x13CE5150)
#define KCBGONMBHAE_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13CE48D0)
#define KCBGONMBHAE__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE4B50)

inline static constexpr unsigned int KCBGONMBHAE_TypeDefinitionIndex = 59196;

class KCBGONMBHAE : public ::FJCAJJEAJPC
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* IHPBOFNGOFM; // 0x40
	::System::Action_1<::PBGECGKKLKD*>* OJJKGEJBLDM; // 0x48
	::Nap::NapECS::EcsFilter* _GCNLOFNHHPC_k__BackingField; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* EFCHKBODEBI; // 0x58
	::System::Action_2<::LHCBLCANAGG*, ::MBJCLLBMALO*>* OBLJOCLJBIO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBGONMBHAE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KCBGONMBHAE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCBGONMBHAE_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::Nap::NapECS::EcsFilter* MGALNDPKPOC()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBGONMBHAE_MGALNDPKPOC_OFFSET))(this);
	}

	::System::Void BPFEFMNKGKI(::LHCBLCANAGG* DMHKCLNEMHJ, ::MBJCLLBMALO* EFEBFFCEJEF)
	{
		return ((::System::Void(*)(::PVOID, ::LHCBLCANAGG*, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + KCBGONMBHAE_BPFEFMNKGKI_OFFSET))(this, DMHKCLNEMHJ, EFEBFFCEJEF);
	}

	::System::Void JDDMFEELKDH(::PBGECGKKLKD* PFBADNEIOHG)
	{
		return ((::System::Void(*)(::PVOID, ::PBGECGKKLKD*))((::PBYTE)hIl2Cpp + KCBGONMBHAE_JDDMFEELKDH_OFFSET))(this, PFBADNEIOHG);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KCBGONMBHAE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OPGMNEMMKEG(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + KCBGONMBHAE_OPGMNEMMKEG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCBGONMBHAE_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}
};
