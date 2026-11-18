#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define INLLBCMNOFH_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x197E1CA0)
#define INLLBCMNOFH_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x197E10E0)
#define INLLBCMNOFH_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x197E1920)
#define INLLBCMNOFH_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x197E1AB0)
#define INLLBCMNOFH_JFIJPEBCKKI_OFFSET UNITYSDK_OFFSET(0x197E1D40)
#define INLLBCMNOFH_JJPBGEPJFPA_OFFSET UNITYSDK_OFFSET(0x197E17B0)
#define INLLBCMNOFH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x197E13B0)
#define INLLBCMNOFH_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x197E1570)
#define INLLBCMNOFH_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x197E1F30)
#define INLLBCMNOFH_NFLLMLKEFAP_OFFSET UNITYSDK_OFFSET(0x197E1600)
#define INLLBCMNOFH_PEIAKCFFJAJ_OFFSET UNITYSDK_OFFSET(0x197E1FC0)
#define INLLBCMNOFH__CTOR_OFFSET UNITYSDK_OFFSET(0x197E1520)

inline static constexpr unsigned int INLLBCMNOFH_TypeDefinitionIndex = 92359;

class INLLBCMNOFH : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLLBCMNOFH__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + INLLBCMNOFH_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLLBCMNOFH_LATEUPDATE_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + INLLBCMNOFH_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void NFLLMLKEFAP(::System::Boolean CLHNFKEHKCO, ::UnityEngine::Vector2 HPPGKELKPDM, ::System::Single IGKLCJPLNFK, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector2, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + INLLBCMNOFH_NFLLMLKEFAP_OFFSET))(CLHNFKEHKCO, HPPGKELKPDM, IGKLCJPLNFK, KECKGDFIALJ);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INLLBCMNOFH_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + INLLBCMNOFH_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + INLLBCMNOFH_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void JFIJPEBCKKI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + INLLBCMNOFH_JFIJPEBCKKI_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLLBCMNOFH_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void JJPBGEPJFPA(::System::Boolean OIHAIKADAAF, ::System::Single OOICCNHGPMA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + INLLBCMNOFH_JJPBGEPJFPA_OFFSET))(OIHAIKADAAF, OOICCNHGPMA, KECKGDFIALJ);
	}

	static ::System::Void PEIAKCFFJAJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + INLLBCMNOFH_PEIAKCFFJAJ_OFFSET))(KECKGDFIALJ);
	}
};
