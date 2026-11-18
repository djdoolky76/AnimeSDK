#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class DGOGFACOMBJ;
class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Collider; }

#define GCKKNDKPIEN_AEGEBFPFBKN_OFFSET UNITYSDK_OFFSET(0x165EA510)
#define GCKKNDKPIEN_AMMOEGCHBHH_OFFSET UNITYSDK_OFFSET(0x165E7340)
#define GCKKNDKPIEN_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x165EA030)
#define GCKKNDKPIEN_CJFAJIMMOAH_OFFSET UNITYSDK_OFFSET(0x165EA3F0)
#define GCKKNDKPIEN_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x165E6E10)
#define GCKKNDKPIEN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x165E5EB0)
#define GCKKNDKPIEN_DCMHHDPBHMP_OFFSET UNITYSDK_OFFSET(0x165E7AD0)
#define GCKKNDKPIEN_ECANFAPKLEJ_OFFSET UNITYSDK_OFFSET(0x165E7330)
#define GCKKNDKPIEN_GIENHOJHOFA_OFFSET UNITYSDK_OFFSET(0x165E9850)
#define GCKKNDKPIEN_GLEAKOEFKKF_OFFSET UNITYSDK_OFFSET(0x165EA2A0)
#define GCKKNDKPIEN_HCPMPPFKNGH_OFFSET UNITYSDK_OFFSET(0x165E7970)
#define GCKKNDKPIEN_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x165E6EA0)
#define GCKKNDKPIEN_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x165E7180)
#define GCKKNDKPIEN_JEKGHPHKCEO_OFFSET UNITYSDK_OFFSET(0x165E6CF0)
#define GCKKNDKPIEN_KOKGOCONHLH_OFFSET UNITYSDK_OFFSET(0x165E7F50)
#define GCKKNDKPIEN_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x165E7BD0)
#define GCKKNDKPIEN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x165E6340)
#define GCKKNDKPIEN_LDCHGHNODDE_OFFSET UNITYSDK_OFFSET(0x165E80D0)
#define GCKKNDKPIEN_LIJDPLLDAFN_OFFSET UNITYSDK_OFFSET(0x165E66C0)
#define GCKKNDKPIEN_MDGAANIPDPM_OFFSET UNITYSDK_OFFSET(0x165E9100)
#define GCKKNDKPIEN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x165EA8E0)
#define GCKKNDKPIEN_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x165E8260)
#define GCKKNDKPIEN_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x165E64B0)
#define GCKKNDKPIEN_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x165E6A60)
#define GCKKNDKPIEN_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x165EA550)
#define GCKKNDKPIEN_POJGLGHKJLB_OFFSET UNITYSDK_OFFSET(0x165E82F0)
#define GCKKNDKPIEN_UPDATE_OFFSET UNITYSDK_OFFSET(0x165E61D0)
#define GCKKNDKPIEN__CTOR_OFFSET UNITYSDK_OFFSET(0x165E6CA0)

inline static constexpr unsigned int GCKKNDKPIEN_TypeDefinitionIndex = 69792;

class GCKKNDKPIEN : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_ONTRIGGERENTER_OFFSET))(LIBPKNHDIGP, DJMEFDIHNDO);
	}

	static ::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP, ::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_ONTRIGGEREXIT_OFFSET))(LIBPKNHDIGP, DJMEFDIHNDO);
	}

	static ::System::Void JEKGHPHKCEO(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_JEKGHPHKCEO_OFFSET))(DJMEFDIHNDO);
	}

	static ::MoleMole::Battle::Entity* LIJDPLLDAFN(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::MoleMole::Battle::Entity*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_LIJDPLLDAFN_OFFSET))(LIBPKNHDIGP);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 PIMPILMPLHN)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_HMLGKBFFNHI_OFFSET))(PIMPILMPLHN);
	}

	static ::System::Void DCMHHDPBHMP(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_DCMHHDPBHMP_OFFSET))(DJMEFDIHNDO);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, DJMEFDIHNDO);
	}

	static ::System::Void AMMOEGCHBHH(::DGOGFACOMBJ* ENHFOMIDAEA)
	{
		return ((::System::Void(*)(::DGOGFACOMBJ*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_AMMOEGCHBHH_OFFSET))(ENHFOMIDAEA);
	}

	static ::System::Void LDCHGHNODDE(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_LDCHGHNODDE_OFFSET))(DJMEFDIHNDO);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void POJGLGHKJLB(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_POJGLGHKJLB_OFFSET))(FFNKDGGHBPP, DJMEFDIHNDO);
	}

	static ::System::Void KOKGOCONHLH(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_KOKGOCONHLH_OFFSET))(FFNKDGGHBPP, DJMEFDIHNDO);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* BHEOGANDDKE)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_APAGIJMHEAK_OFFSET))(BHEOGANDDKE);
	}

	static ::System::Void CJFAJIMMOAH(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_CJFAJIMMOAH_OFFSET))(DJMEFDIHNDO);
	}

	static ::System::Void GLEAKOEFKKF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_GLEAKOEFKKF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void GIENHOJHOFA(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_GIENHOJHOFA_OFFSET))(FFNKDGGHBPP, DJMEFDIHNDO);
	}

	static ::System::Void AEGEBFPFBKN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCKKNDKPIEN_AEGEBFPFBKN_OFFSET))();
	}

	static ::System::Void HCPMPPFKNGH(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_HCPMPPFKNGH_OFFSET))(DJMEFDIHNDO);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* BHEOGANDDKE)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_PMHJBNNPCLB_OFFSET))(BHEOGANDDKE);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean ECANFAPKLEJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GCKKNDKPIEN_ECANFAPKLEJ_OFFSET))();
	}

	static ::System::Void MDGAANIPDPM(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_MDGAANIPDPM_OFFSET))(FFNKDGGHBPP, DJMEFDIHNDO);
	}
};
