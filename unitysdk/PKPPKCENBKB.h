#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/MoleMole/Config/ShoesType.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BABEDBMHCLD;
class CGKMBHKOFKF;
class ENGKPGFGGLM;
class GEIHCPAOKKK;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define PKPPKCENBKB_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1BF22450)
#define PKPPKCENBKB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1BF21920)
#define PKPPKCENBKB_FLENFHLCIPC_OFFSET UNITYSDK_OFFSET(0x1BF24930)
#define PKPPKCENBKB_FLNKHKMHJNM_OFFSET UNITYSDK_OFFSET(0x1BF24A20)
#define PKPPKCENBKB_GLEAKOEFKKF_OFFSET UNITYSDK_OFFSET(0x1BF225B0)
#define PKPPKCENBKB_HIHPNDLEEOB_OFFSET UNITYSDK_OFFSET(0x1BF22AA0)
#define PKPPKCENBKB_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1BF22790)
#define PKPPKCENBKB_ICJAPEMNLCF_1_OFFSET UNITYSDK_OFFSET(0x1BF22920)
#define PKPPKCENBKB_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x1BF22740)
#define PKPPKCENBKB_IDGNNNKHFNF_OFFSET UNITYSDK_OFFSET(0x1BF246E0)
#define PKPPKCENBKB_JBFBLIEPOPA_OFFSET UNITYSDK_OFFSET(0x1BF21F00)
#define PKPPKCENBKB_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x1BF23970)
#define PKPPKCENBKB_KPAKGCEBGGL_OFFSET UNITYSDK_OFFSET(0x1BF22EF0)
#define PKPPKCENBKB_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BF21B80)
#define PKPPKCENBKB_LKOLIKLBJCG_OFFSET UNITYSDK_OFFSET(0x1BF24160)
#define PKPPKCENBKB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1BF245E0)
#define PKPPKCENBKB_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x1BF24990)
#define PKPPKCENBKB_NMBMFMEFMGC_OFFSET UNITYSDK_OFFSET(0x1BF21D40)
#define PKPPKCENBKB_PBNEIIACCIG_OFFSET UNITYSDK_OFFSET(0x1BF22FA0)
#define PKPPKCENBKB_PFOCFGMMLGF_OFFSET UNITYSDK_OFFSET(0x1BF239C0)
#define PKPPKCENBKB_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x1BF24670)
#define PKPPKCENBKB_POJOHJDIENH_OFFSET UNITYSDK_OFFSET(0x1BF233E0)
#define PKPPKCENBKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF21CF0)

inline static constexpr unsigned int PKPPKCENBKB_TypeDefinitionIndex = 74043;

class PKPPKCENBKB : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPPKCENBKB__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPPKCENBKB_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void NMBMFMEFMGC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_NMBMFMEFMGC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void JBFBLIEPOPA(::MoleMole::Config::TerrainMatType KNNDDLMOKCG, ::System::String*& GCMFNEDFOAK, ::System::String*& BLNPKKGMONJ)
	{
		return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + PKPPKCENBKB_JBFBLIEPOPA_OFFSET))(KNNDDLMOKCG, GCMFNEDFOAK, BLNPKKGMONJ);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void ICJAPEMNLCF(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKPPKCENBKB_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void HIHPNDLEEOB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_HIHPNDLEEOB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void PBNEIIACCIG(::MoleMole::Config::TerrainMatType KNNDDLMOKCG, ::System::String*& GCMFNEDFOAK, ::System::String*& BLNPKKGMONJ)
	{
		return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + PKPPKCENBKB_PBNEIIACCIG_OFFSET))(KNNDDLMOKCG, GCMFNEDFOAK, BLNPKKGMONJ);
	}

	static ::System::Boolean POJOHJDIENH(::UnityEngine::Vector3 CKPGOKHECCH, ::MoleMole::Config::TerrainMatType& PJDMCGIFAPI, ::MoleMole::Config::TerrainMatType& FJIPMELDMDF)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::MoleMole::Config::TerrainMatType&, ::MoleMole::Config::TerrainMatType&))((::PBYTE)hIl2Cpp + PKPPKCENBKB_POJOHJDIENH_OFFSET))(CKPGOKHECCH, PJDMCGIFAPI, FJIPMELDMDF);
	}

	static ::System::Void ICJAPEMNLCF_1(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_ICJAPEMNLCF_1_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void PFOCFGMMLGF(::System::String* OINOPLGMNDE, ::System::String* EEMOPKCLEGM, ::System::String* AEDIILOHKHD, ::System::String* HIEKPPDAMLM, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_PFOCFGMMLGF_OFFSET))(OINOPLGMNDE, EEMOPKCLEGM, AEDIILOHKHD, HIEKPPDAMLM, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::String* KPAKGCEBGGL(::MoleMole::Config::ShoesType IJPKJMHLHMI)
	{
		return ((::System::String*(*)(::MoleMole::Config::ShoesType))((::PBYTE)hIl2Cpp + PKPPKCENBKB_KPAKGCEBGGL_OFFSET))(IJPKJMHLHMI);
	}

	static ::System::Void LKOLIKLBJCG(::BABEDBMHCLD* IGHKGIEFBMG, ::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Boolean EFHIMMGNDKB)
	{
		return ((::System::Void(*)(::BABEDBMHCLD*, ::GEIHCPAOKKK*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKPPKCENBKB_LKOLIKLBJCG_OFFSET))(IGHKGIEFBMG, OHPJHPEOFLD, EFHIMMGNDKB);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void IDGNNNKHFNF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::AnimatorZoneFootPrint_FootType AEDIILOHKHD, ::System::Boolean LCGFMJIAPGL, ::System::Boolean BDABKJFAGLK)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneFootPrint_FootType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKPPKCENBKB_IDGNNNKHFNF_OFFSET))(KECKGDFIALJ, AEDIILOHKHD, LCGFMJIAPGL, BDABKJFAGLK);
	}

	::System::Void GLEAKOEFKKF(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_GLEAKOEFKKF_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void FLENFHLCIPC(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_FLENFHLCIPC_OFFSET))(FBILHHBPEHD, KECKGDFIALJ);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPPKCENBKB_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void FLNKHKMHJNM(::CGKMBHKOFKF* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::CGKMBHKOFKF*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PKPPKCENBKB_FLNKHKMHJNM_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}
};
