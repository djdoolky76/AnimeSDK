#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class EHKKPCGAJHO;
class ENGKPGFGGLM;
class MonoRenderEntity;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define PEBLFLEEBPA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x13A8C6C0)
#define PEBLFLEEBPA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13A8BD40)
#define PEBLFLEEBPA_HABNFIGGKPM_OFFSET UNITYSDK_OFFSET(0x13A8CD60)
#define PEBLFLEEBPA_IKKDALJPNBM_OFFSET UNITYSDK_OFFSET(0x13A8C750)
#define PEBLFLEEBPA_ILLMFNMNFDM_OFFSET UNITYSDK_OFFSET(0x13A8D560)
#define PEBLFLEEBPA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x13A8D4D0)
#define PEBLFLEEBPA_NIEMGNCPHCE_OFFSET UNITYSDK_OFFSET(0x13A8D240)
#define PEBLFLEEBPA_NJBLJEAPEAM_OFFSET UNITYSDK_OFFSET(0x13A8C960)
#define PEBLFLEEBPA_UPDATE_OFFSET UNITYSDK_OFFSET(0x13A8C530)
#define PEBLFLEEBPA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8C670)

inline static constexpr unsigned int PEBLFLEEBPA_TypeDefinitionIndex = 52806;

class PEBLFLEEBPA : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* EAFJMOICJFI; // 0x20
	::Nap::NapECS::EcsFilter* CABPONEMIMM; // 0x28
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLFLEEBPA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_UPDATE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::MonoRenderEntity* IKKDALJPNBM(::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::MonoRenderEntity*(*)(::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_IKKDALJPNBM_OFFSET))(POBADKEDFOE);
	}

	static ::System::Void NJBLJEAPEAM(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_NJBLJEAPEAM_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void HABNFIGGKPM(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_HABNFIGGKPM_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void NIEMGNCPHCE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_NIEMGNCPHCE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void ILLMFNMNFDM(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEBLFLEEBPA_ILLMFNMNFDM_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}
};
