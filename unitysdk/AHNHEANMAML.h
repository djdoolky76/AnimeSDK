#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMGACHPGILO.h"
#include "unitysdk/FCLELDBLEDP.h"
#include "unitysdk/MoleMole/Config/DirectionPlayerOnKey.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"

class OBKNEEOLOPB;
namespace MoleMole::Config { class ConfigChessSkin; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class String; }

#define AHNHEANMAML_BMHPINLHCIJ_OFFSET UNITYSDK_OFFSET(0x134CBEE0)
#define AHNHEANMAML_CFELAGMKAIB_OFFSET UNITYSDK_OFFSET(0x134CBEC0)
#define AHNHEANMAML_CFINLEBEOPC_OFFSET UNITYSDK_OFFSET(0x134CBE80)
#define AHNHEANMAML_CKNJGNLKBKI_OFFSET UNITYSDK_OFFSET(0x134CBA80)
#define AHNHEANMAML_FLFGDNFPCDE_OFFSET UNITYSDK_OFFSET(0x134CBDD0)
#define AHNHEANMAML_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x134CB8D0)
#define AHNHEANMAML_HBKIMBGDPPD_OFFSET UNITYSDK_OFFSET(0x134CBED0)
#define AHNHEANMAML_IKNHHBNDIEP_OFFSET UNITYSDK_OFFSET(0x134CBD30)
#define AHNHEANMAML_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x134CBCB0)
#define AHNHEANMAML_LHPOAPFOILK_OFFSET UNITYSDK_OFFSET(0x134CBC50)
#define AHNHEANMAML_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x134CBD40)
#define AHNHEANMAML_MGKBKLPDBOP_OFFSET UNITYSDK_OFFSET(0x134CBC60)
#define AHNHEANMAML_MPBDMHFGNLL_OFFSET UNITYSDK_OFFSET(0x134CBC70)
#define AHNHEANMAML_NAEAAMBOFKG_OFFSET UNITYSDK_OFFSET(0x134CBF90)
#define AHNHEANMAML_NKDIKEFHPHB_OFFSET UNITYSDK_OFFSET(0x134CBCA0)
#define AHNHEANMAML_OHBADDCDDIM_OFFSET UNITYSDK_OFFSET(0x134CBC90)
#define AHNHEANMAML_ONADD_OFFSET UNITYSDK_OFFSET(0x134CBAD0)
#define AHNHEANMAML_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x134CB9A0)
#define AHNHEANMAML_PCCNGFGMCJC_OFFSET UNITYSDK_OFFSET(0x134CBC80)
#define AHNHEANMAML_PGKDBENJJPN_OFFSET UNITYSDK_OFFSET(0x134CBF80)
#define AHNHEANMAML__CCTOR_OFFSET UNITYSDK_OFFSET(0x134CB920)
#define AHNHEANMAML__CTOR_OFFSET UNITYSDK_OFFSET(0x134CBC30)

inline static constexpr unsigned int AHNHEANMAML_TypeDefinitionIndex = 59895;

class AHNHEANMAML
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x237; // 0x0
	::OBKNEEOLOPB* HJLKIJBHDBM; // 0x58
	::MoleMole::HollowChessboard::RenderDataHandle CMFDINEANBO; // 0x60
	::MoleMole::Config::ConfigHollowChessboard* NGFHKHLKEHD; // 0x70
	::System::String* _KKOLBMMBLDM_k__BackingField; // 0x78
	::System::Action* PPOCGGMLPHO; // 0x80
	::MoleMole::Config::DirectionPlayerOnKey OIFMLDKALDL; // 0x88
	::CMGACHPGILO MEPEAGKMFOH; // 0x8C
	::MoleMole::PlayerOnViewState EDGPOOBBFEO; // 0x90
	::FCLELDBLEDP JJFCNCAOLCE; // 0x94

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNHEANMAML__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_ONCLEAN_OFFSET))(this);
	}

	::System::Boolean CKNJGNLKBKI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_CKNJGNLKBKI_OFFSET))(this);
	}

	::System::Void OnAdd(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + AHNHEANMAML_ONADD_OFFSET))(this, KECKGDFIALJ);
	}

	::FCLELDBLEDP LHPOAPFOILK()
	{
		return ((::FCLELDBLEDP(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_LHPOAPFOILK_OFFSET))(this);
	}

	::System::Void MGKBKLPDBOP(::MoleMole::Config::DirectionPlayerOnKey EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DirectionPlayerOnKey))((::PBYTE)hIl2Cpp + AHNHEANMAML_MGKBKLPDBOP_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::DirectionPlayerOnKey MPBDMHFGNLL()
	{
		return ((::MoleMole::Config::DirectionPlayerOnKey(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_MPBDMHFGNLL_OFFSET))(this);
	}

	::MoleMole::PlayerOnViewState PCCNGFGMCJC()
	{
		return ((::MoleMole::PlayerOnViewState(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_PCCNGFGMCJC_OFFSET))(this);
	}

	::System::String* OHBADDCDDIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_OHBADDCDDIM_OFFSET))(this);
	}

	::System::Void NKDIKEFHPHB(::MoleMole::PlayerOnViewState EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PlayerOnViewState))((::PBYTE)hIl2Cpp + AHNHEANMAML_NKDIKEFHPHB_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::AHNHEANMAML* JFDOOELFAOA()
	{
		return ((::AHNHEANMAML*(*)())((::PBYTE)hIl2Cpp + AHNHEANMAML_JFDOOELFAOA_OFFSET))();
	}

	::System::Void IKNHHBNDIEP(::FCLELDBLEDP EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FCLELDBLEDP))((::PBYTE)hIl2Cpp + AHNHEANMAML_IKNHHBNDIEP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_MEFBHFEOKGH_OFFSET))(this);
	}

	::MoleMole::Config::ConfigChessSkin* FLFGDNFPCDE()
	{
		return ((::MoleMole::Config::ConfigChessSkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_FLFGDNFPCDE_OFFSET))(this);
	}

	::System::Void CFINLEBEOPC(::Nap::NapECS::EcsEntity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + AHNHEANMAML_CFINLEBEOPC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Action* CFELAGMKAIB()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_CFELAGMKAIB_OFFSET))(this);
	}

	::CMGACHPGILO HBKIMBGDPPD()
	{
		return ((::CMGACHPGILO(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNHEANMAML_HBKIMBGDPPD_OFFSET))(this);
	}

	::System::Void BMHPINLHCIJ(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AHNHEANMAML_BMHPINLHCIJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PGKDBENJJPN(::CMGACHPGILO EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CMGACHPGILO))((::PBYTE)hIl2Cpp + AHNHEANMAML_PGKDBENJJPN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NAEAAMBOFKG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AHNHEANMAML_NAEAAMBOFKG_OFFSET))(this, EGEGIMGMJHN);
	}
};
