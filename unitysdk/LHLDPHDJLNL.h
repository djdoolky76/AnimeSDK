#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorld.h"

class MBCEALDIBEL;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHLDPHDJLNL_ACBOALCHICM_OFFSET UNITYSDK_OFFSET(0x11F12100)
#define LHLDPHDJLNL_AIMMIKJPNNK_OFFSET UNITYSDK_OFFSET(0x11F11B40)
#define LHLDPHDJLNL_AMJNAOHDDCJ_OFFSET UNITYSDK_OFFSET(0x11F11970)
#define LHLDPHDJLNL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11F11200)
#define LHLDPHDJLNL_BEGMNCEOIEA_OFFSET UNITYSDK_OFFSET(0x11F12040)
#define LHLDPHDJLNL_DKDFDDIJHFJ_OFFSET UNITYSDK_OFFSET(0x11F113E0)
#define LHLDPHDJLNL_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x11F11840)
#define LHLDPHDJLNL_EGMMKOEBPOB_OFFSET UNITYSDK_OFFSET(0x11F12060)
#define LHLDPHDJLNL_EIMKFKGAHBN_OFFSET UNITYSDK_OFFSET(0x11F12540)
#define LHLDPHDJLNL_FJMHCNINFPD_OFFSET UNITYSDK_OFFSET(0x11F127C0)
#define LHLDPHDJLNL_FOFBGONGFPJ_OFFSET UNITYSDK_OFFSET(0x11F12620)
#define LHLDPHDJLNL_GFBJLHMNBAD_OFFSET UNITYSDK_OFFSET(0x11F12120)
#define LHLDPHDJLNL_HFPNDCOOPFK_OFFSET UNITYSDK_OFFSET(0x11F120F0)
#define LHLDPHDJLNL_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x11F12110)
#define LHLDPHDJLNL_IGLKEGFGCEI_OFFSET UNITYSDK_OFFSET(0x11F12140)
#define LHLDPHDJLNL_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x11F118B0)
#define LHLDPHDJLNL_JOHOEIBAGCP_OFFSET UNITYSDK_OFFSET(0x11F117B0)
#define LHLDPHDJLNL_LLKPAHJAODP_OFFSET UNITYSDK_OFFSET(0x11F12030)
#define LHLDPHDJLNL_OHMMFPILOOE_OFFSET UNITYSDK_OFFSET(0x11F12050)
#define LHLDPHDJLNL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11F11520)
#define LHLDPHDJLNL_OOKPBJBCCIC_OFFSET UNITYSDK_OFFSET(0x11F126F0)
#define LHLDPHDJLNL_PEBOGFEOMPJ_OFFSET UNITYSDK_OFFSET(0x11F12130)
#define LHLDPHDJLNL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x11F12070)
#define LHLDPHDJLNL__CTOR_OFFSET UNITYSDK_OFFSET(0x11F11110)

inline static constexpr unsigned int LHLDPHDJLNL_TypeDefinitionIndex = 77435;

class LHLDPHDJLNL : public ::Nap::NapECS::EcsWorld
{
public:
	::System::Action_1<::System::Single>* _PIKNFKHHOMA_k__BackingField; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* OGFCADNLGFO; // 0x68
	::MBCEALDIBEL* _NFMCJBAAGIF_k__BackingField; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* OACDKFNJOOA; // 0x78
	::MoleMole::HollowChessboard::HollowEntity* LDKGILKJIFC; // 0x80
	::System::Action_1<::System::Single>* _CNHEPMCHAHI_k__BackingField; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* DLONKBKFFIE; // 0x90
	::System::Single _FKNKKJNKBDB_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MBCEALDIBEL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MBCEALDIBEL*))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_BBOMJDBNHIC_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_ONDESTROY_OFFSET))(this);
	}

	::System::Void JDDMFEELKDH(::System::Single PMNLNNGEIFM, ::System::Action_1<::System::Single>* HNNHBOMOOEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_JDDMFEELKDH_OFFSET))(this, PMNLNNGEIFM, HNNHBOMOOEM);
	}

	::System::Action_1<::System::Single>* LLKPAHJAODP()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_LLKPAHJAODP_OFFSET))(this);
	}

	::System::Void BEGMNCEOIEA(::MBCEALDIBEL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MBCEALDIBEL*))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_BEGMNCEOIEA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* JOHOEIBAGCP()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_JOHOEIBAGCP_OFFSET))(this);
	}

	::System::Single OHMMFPILOOE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_OHMMFPILOOE_OFFSET))(this);
	}

	::System::Void DKDFDDIJHFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_DKDFDDIJHFJ_OFFSET))(this);
	}

	::System::Void EGMMKOEBPOB(::System::Action_1<::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_EGMMKOEBPOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Action_1<::System::Single>* HFPNDCOOPFK()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_HFPNDCOOPFK_OFFSET))(this);
	}

	::System::Void EFGOADGCJMA(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_EFGOADGCJMA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void ACBOALCHICM(::System::Action_1<::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_ACBOALCHICM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_IFHNMAGGFAE_OFFSET))(this);
	}

	::MBCEALDIBEL* GFBJLHMNBAD()
	{
		return ((::MBCEALDIBEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_GFBJLHMNBAD_OFFSET))(this);
	}

	::System::Void PEBOGFEOMPJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_PEBOGFEOMPJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IGLKEGFGCEI(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_IGLKEGFGCEI_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void AIMMIKJPNNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_AIMMIKJPNNK_OFFSET))(this);
	}

	::System::Void FOFBGONGFPJ(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_FOFBGONGFPJ_OFFSET))(this, PBCAAADNEPK);
	}

	::MoleMole::HollowChessboard::HollowEntity* EIMKFKGAHBN(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_EIMKFKGAHBN_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void OOKPBJBCCIC(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_OOKPBJBCCIC_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void FJMHCNINFPD(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_FJMHCNINFPD_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void AMJNAOHDDCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLDPHDJLNL_AMJNAOHDDCJ_OFFSET))(this);
	}
};
