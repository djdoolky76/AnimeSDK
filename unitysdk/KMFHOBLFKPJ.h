#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class DCAPDHHFBNN;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define KMFHOBLFKPJ_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1516B960)
#define KMFHOBLFKPJ_BOBHLBHMHEM_OFFSET UNITYSDK_OFFSET(0x1516B0E0)
#define KMFHOBLFKPJ_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1516BBB0)
#define KMFHOBLFKPJ_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1516A740)
#define KMFHOBLFKPJ_DICKPLPPDMM_OFFSET UNITYSDK_OFFSET(0x1516AEE0)
#define KMFHOBLFKPJ_DOCDKNEPLEE_OFFSET UNITYSDK_OFFSET(0x1516ABD0)
#define KMFHOBLFKPJ_FCJGPDJDMKH_OFFSET UNITYSDK_OFFSET(0x1516B090)
#define KMFHOBLFKPJ_GFMFKJIOGDO_OFFSET UNITYSDK_OFFSET(0x1516B470)
#define KMFHOBLFKPJ_GLEAKOEFKKF_OFFSET UNITYSDK_OFFSET(0x1516B3D0)
#define KMFHOBLFKPJ_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1516B780)
#define KMFHOBLFKPJ_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x1516B420)
#define KMFHOBLFKPJ_JEDMBDDNPBD_OFFSET UNITYSDK_OFFSET(0x1516B660)
#define KMFHOBLFKPJ_LDCHGHNODDE_OFFSET UNITYSDK_OFFSET(0x1516AD90)
#define KMFHOBLFKPJ_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1516B000)
#define KMFHOBLFKPJ_UPDATE_OFFSET UNITYSDK_OFFSET(0x1516AA10)
#define KMFHOBLFKPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1516AB80)

inline static constexpr unsigned int KMFHOBLFKPJ_TypeDefinitionIndex = 77869;

class KMFHOBLFKPJ : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_UPDATE_OFFSET))(this);
	}

	::System::Void DOCDKNEPLEE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_DOCDKNEPLEE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void DICKPLPPDMM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_DICKPLPPDMM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void FCJGPDJDMKH(::DCAPDHHFBNN* BJCHAFCBJLB)
	{
		return ((::System::Void(*)(::DCAPDHHFBNN*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_FCJGPDJDMKH_OFFSET))(BJCHAFCBJLB);
	}

	::System::Void LDCHGHNODDE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_LDCHGHNODDE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void BOBHLBHMHEM(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_BOBHLBHMHEM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void GLEAKOEFKKF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_GLEAKOEFKKF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void GFMFKJIOGDO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_GFMFKJIOGDO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void JEDMBDDNPBD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_JEDMBDDNPBD_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_CMFOMGGDPPA_OFFSET))(this);
	}
};
