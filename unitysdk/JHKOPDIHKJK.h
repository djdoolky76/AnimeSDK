#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class LHLDPHDJLNL;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsEntity; }

#define JHKOPDIHKJK_AFTERCLEAN_OFFSET UNITYSDK_OFFSET(0x1C362380)
#define JHKOPDIHKJK_BFKOFMJCMHC_OFFSET UNITYSDK_OFFSET(0x1C3623E0)
#define JHKOPDIHKJK_CFINLEBEOPC_OFFSET UNITYSDK_OFFSET(0x1C362450)
#define JHKOPDIHKJK_GAODNKAAOLD_OFFSET UNITYSDK_OFFSET(0x1C3624E0)
#define JHKOPDIHKJK_KEJIFLBFNMN_OFFSET UNITYSDK_OFFSET(0x1C362540)
#define JHKOPDIHKJK_OLGLPNOCJMP_OFFSET UNITYSDK_OFFSET(0x1C3624F0)
#define JHKOPDIHKJK_ONADD_OFFSET UNITYSDK_OFFSET(0x1C3622A0)
#define JHKOPDIHKJK_PJEHJLMBJKP_OFFSET UNITYSDK_OFFSET(0x1C3623D0)
#define JHKOPDIHKJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35A310)

inline static constexpr unsigned int JHKOPDIHKJK_TypeDefinitionIndex = 43511;

class JHKOPDIHKJK : public ::MJHDNMKGLBJ
{
public:
	::MoleMole::HollowChessboard::HollowEntity* _CHHKFPHOGHM_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPDIHKJK__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JHKOPDIHKJK_ONADD_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void AfterClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPDIHKJK_AFTERCLEAN_OFFSET))(this);
	}

	::System::Void PJEHJLMBJKP(::MoleMole::HollowChessboard::HollowEntity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + JHKOPDIHKJK_PJEHJLMBJKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::LHLDPHDJLNL* BFKOFMJCMHC()
	{
		return ((::LHLDPHDJLNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPDIHKJK_BFKOFMJCMHC_OFFSET))(this);
	}

	::System::Void CFINLEBEOPC(::Nap::NapECS::EcsEntity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JHKOPDIHKJK_CFINLEBEOPC_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::HollowChessboard::HollowEntity* GAODNKAAOLD()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPDIHKJK_GAODNKAAOLD_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* OLGLPNOCJMP()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPDIHKJK_OLGLPNOCJMP_OFFSET))(this);
	}

	::System::Void KEJIFLBFNMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPDIHKJK_KEJIFLBFNMN_OFFSET))(this);
	}
};
