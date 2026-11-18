#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define MLKECPODBDD_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x11F5A7B0)
#define MLKECPODBDD_BOBHLBHMHEM_OFFSET UNITYSDK_OFFSET(0x11F5A2A0)
#define MLKECPODBDD_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11F599F0)
#define MLKECPODBDD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11F59280)
#define MLKECPODBDD_DICKPLPPDMM_OFFSET UNITYSDK_OFFSET(0x11F59C50)
#define MLKECPODBDD_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x11F5A730)
#define MLKECPODBDD_FCHNANGDMJF_OFFSET UNITYSDK_OFFSET(0x11F59810)
#define MLKECPODBDD_GLEAKOEFKKF_OFFSET UNITYSDK_OFFSET(0x11F597D0)
#define MLKECPODBDD_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x11F59A80)
#define MLKECPODBDD_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x11F599B0)
#define MLKECPODBDD_JEDMBDDNPBD_OFFSET UNITYSDK_OFFSET(0x11F59DB0)
#define MLKECPODBDD_KOKGOCONHLH_OFFSET UNITYSDK_OFFSET(0x11F5A0B0)
#define MLKECPODBDD_LDCHGHNODDE_OFFSET UNITYSDK_OFFSET(0x11F5A5E0)
#define MLKECPODBDD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x11F5A210)
#define MLKECPODBDD_ODJIPLCEBDO_OFFSET UNITYSDK_OFFSET(0x11F59F10)
#define MLKECPODBDD_UPDATE_OFFSET UNITYSDK_OFFSET(0x11F59610)
#define MLKECPODBDD__CTOR_OFFSET UNITYSDK_OFFSET(0x11F59780)

inline static constexpr unsigned int MLKECPODBDD_TypeDefinitionIndex = 53195;

class MLKECPODBDD : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKECPODBDD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MLKECPODBDD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKECPODBDD_UPDATE_OFFSET))(this);
	}

	static ::System::Void GLEAKOEFKKF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_GLEAKOEFKKF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void FCHNANGDMJF(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_FCHNANGDMJF_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKECPODBDD_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLKECPODBDD_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void DICKPLPPDMM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_DICKPLPPDMM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void JEDMBDDNPBD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_JEDMBDDNPBD_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void ODJIPLCEBDO(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_ODJIPLCEBDO_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void KOKGOCONHLH(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_KOKGOCONHLH_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MLKECPODBDD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BOBHLBHMHEM(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_BOBHLBHMHEM_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void LDCHGHNODDE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLKECPODBDD_LDCHGHNODDE_OFFSET))(KECKGDFIALJ);
	}
};
