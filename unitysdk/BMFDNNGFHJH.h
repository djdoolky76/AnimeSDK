#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DKPJAEANAPO;
namespace MoleMole { class MonoSteer; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define BMFDNNGFHJH_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x115FD4C0)
#define BMFDNNGFHJH_DNKCHIOOBDL_1_OFFSET UNITYSDK_OFFSET(0x115FE280)
#define BMFDNNGFHJH_DNKCHIOOBDL_OFFSET UNITYSDK_OFFSET(0x115FD6A0)
#define BMFDNNGFHJH_FCBDNAHEGJK_OFFSET UNITYSDK_OFFSET(0x115FDDE0)
#define BMFDNNGFHJH_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x115FDE60)
#define BMFDNNGFHJH_JGBAFDIIOHO_OFFSET UNITYSDK_OFFSET(0x115FE000)
#define BMFDNNGFHJH_LHDCJPLHEMG_OFFSET UNITYSDK_OFFSET(0x115FE8F0)
#define BMFDNNGFHJH_MEABHONJLNH_OFFSET UNITYSDK_OFFSET(0x115FDD10)
#define BMFDNNGFHJH_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x115FDC80)
#define BMFDNNGFHJH__CTOR_OFFSET UNITYSDK_OFFSET(0x115FD650)

inline static constexpr unsigned int BMFDNNGFHJH_TypeDefinitionIndex = 56938;

class BMFDNNGFHJH : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFDNNGFHJH__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::UnityEngine::Vector3 DNKCHIOOBDL(::DKPJAEANAPO* ONEFAGGPEFP, ::System::Int32 NOKKOLKEDBG)
	{
		return ((::UnityEngine::Vector3(*)(::DKPJAEANAPO*, ::System::Int32))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_DNKCHIOOBDL_OFFSET))(ONEFAGGPEFP, NOKKOLKEDBG);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void MEABHONJLNH(::DKPJAEANAPO* ONEFAGGPEFP, ::MoleMole::MonoSteer* HLBPNEAKGBE)
	{
		return ((::System::Void(*)(::DKPJAEANAPO*, ::MoleMole::MonoSteer*))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_MEABHONJLNH_OFFSET))(ONEFAGGPEFP, HLBPNEAKGBE);
	}

	static ::System::Boolean FCBDNAHEGJK(::DKPJAEANAPO* ONEFAGGPEFP)
	{
		return ((::System::Boolean(*)(::DKPJAEANAPO*))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_FCBDNAHEGJK_OFFSET))(ONEFAGGPEFP);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::UnityEngine::Vector3 DNKCHIOOBDL_1(::DKPJAEANAPO* ONEFAGGPEFP, ::System::Int32& EOBHCJEDNME)
	{
		return ((::UnityEngine::Vector3(*)(::DKPJAEANAPO*, ::System::Int32&))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_DNKCHIOOBDL_1_OFFSET))(ONEFAGGPEFP, EOBHCJEDNME);
	}

	static ::System::Void LHDCJPLHEMG(::DKPJAEANAPO* ONEFAGGPEFP)
	{
		return ((::System::Void(*)(::DKPJAEANAPO*))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_LHDCJPLHEMG_OFFSET))(ONEFAGGPEFP);
	}

	::System::Void JGBAFDIIOHO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BMFDNNGFHJH_JGBAFDIIOHO_OFFSET))(this, KECKGDFIALJ);
	}
};
