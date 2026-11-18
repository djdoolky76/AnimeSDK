#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class GEIHCPAOKKK;
class OGECDNFEBIO;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define FPBMAOBHBGI_CCMAICLOPOK_OFFSET UNITYSDK_OFFSET(0x165C6FC0)
#define FPBMAOBHBGI_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x165C7040)
#define FPBMAOBHBGI_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x165C6820)
#define FPBMAOBHBGI_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x165C6F70)
#define FPBMAOBHBGI_IDDNGMNFBCA_OFFSET UNITYSDK_OFFSET(0x165C6B40)
#define FPBMAOBHBGI_LAMBNPAJDJJ_OFFSET UNITYSDK_OFFSET(0x165C6CD0)
#define FPBMAOBHBGI_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x165C6EE0)
#define FPBMAOBHBGI_UPDATE_OFFSET UNITYSDK_OFFSET(0x165C69D0)
#define FPBMAOBHBGI__CTOR_OFFSET UNITYSDK_OFFSET(0x165C6AF0)

inline static constexpr unsigned int FPBMAOBHBGI_TypeDefinitionIndex = 78456;

class FPBMAOBHBGI : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBMAOBHBGI__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FPBMAOBHBGI_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBMAOBHBGI_UPDATE_OFFSET))(this);
	}

	static ::System::Void IDDNGMNFBCA(::OGECDNFEBIO* KJCFACMIAJB, ::System::Boolean OBCKMIFCDFC, ::System::UInt32 CLACNEMIOBA, ::System::UInt32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::OGECDNFEBIO*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FPBMAOBHBGI_IDDNGMNFBCA_OFFSET))(KJCFACMIAJB, OBCKMIFCDFC, CLACNEMIOBA, AOCOIDIMLIH);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FPBMAOBHBGI_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void LAMBNPAJDJJ(::OGECDNFEBIO* KJCFACMIAJB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::OGECDNFEBIO*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + FPBMAOBHBGI_LAMBNPAJDJJ_OFFSET))(KJCFACMIAJB, OHPJHPEOFLD);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FPBMAOBHBGI_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void CCMAICLOPOK(::OGECDNFEBIO* KJCFACMIAJB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::OGECDNFEBIO*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + FPBMAOBHBGI_CCMAICLOPOK_OFFSET))(this, KJCFACMIAJB, OHPJHPEOFLD);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBMAOBHBGI_CMFOMGGDPPA_OFFSET))(this);
	}
};
