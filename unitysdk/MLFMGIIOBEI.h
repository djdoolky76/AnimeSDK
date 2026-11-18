#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class GEIHCPAOKKK;
class NCPPHHEDIIN;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define MLFMGIIOBEI_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x12FFD0C0)
#define MLFMGIIOBEI_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x12FFCAB0)
#define MLFMGIIOBEI_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12FFAB60)
#define MLFMGIIOBEI_FHHDEFIGLBN_OFFSET UNITYSDK_OFFSET(0x12FFB630)
#define MLFMGIIOBEI_HCHMEFICEPN_OFFSET UNITYSDK_OFFSET(0x12FFBE60)
#define MLFMGIIOBEI_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x12FFD5E0)
#define MLFMGIIOBEI_IECIOBOIPDH_OFFSET UNITYSDK_OFFSET(0x12FFD590)
#define MLFMGIIOBEI_KCMIMEBHAOJ_OFFSET UNITYSDK_OFFSET(0x12FFC440)
#define MLFMGIIOBEI_KOFEJLIOHME_OFFSET UNITYSDK_OFFSET(0x12FFCD90)
#define MLFMGIIOBEI_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12FFAF80)
#define MLFMGIIOBEI_LLIJKLLEGBH_OFFSET UNITYSDK_OFFSET(0x12FFD000)
#define MLFMGIIOBEI_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x12FFD500)
#define MLFMGIIOBEI_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x12FFDB90)
#define MLFMGIIOBEI_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x12FFB0F0)
#define MLFMGIIOBEI_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x12FFBB40)
#define MLFMGIIOBEI_PFIBCCHHNEI_OFFSET UNITYSDK_OFFSET(0x12FFCB90)
#define MLFMGIIOBEI_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x12FFCB40)
#define MLFMGIIOBEI_UPDATE_OFFSET UNITYSDK_OFFSET(0x12FFAE10)
#define MLFMGIIOBEI__CTOR_OFFSET UNITYSDK_OFFSET(0x12FFC3F0)

inline static constexpr unsigned int MLFMGIIOBEI_TypeDefinitionIndex = 60242;

class MLFMGIIOBEI : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFMGIIOBEI__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP, ::System::Object* ANJGNKPAJAN)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_ONTRIGGERENTER_OFFSET))(LIBPKNHDIGP, ANJGNKPAJAN);
	}

	static ::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP, ::System::Object* ANJGNKPAJAN)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_ONTRIGGEREXIT_OFFSET))(LIBPKNHDIGP, ANJGNKPAJAN);
	}

	static ::System::Void KCMIMEBHAOJ(::NCPPHHEDIIN* HMOJPGAALFA)
	{
		return ((::System::Void(*)(::NCPPHHEDIIN*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_KCMIMEBHAOJ_OFFSET))(HMOJPGAALFA);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* BFDPPMDEOFF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_PMHJBNNPCLB_OFFSET))(this, BFDPPMDEOFF);
	}

	static ::System::Void PFIBCCHHNEI(::NCPPHHEDIIN* HMOJPGAALFA, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::NCPPHHEDIIN*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_PFIBCCHHNEI_OFFSET))(HMOJPGAALFA, OHPJHPEOFLD);
	}

	static ::System::Void KOFEJLIOHME(::UnityEngine::Collider* EHHHMFKHNAI, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_KOFEJLIOHME_OFFSET))(EHHHMFKHNAI, KECKGDFIALJ);
	}

	static ::System::Void FHHDEFIGLBN(::UnityEngine::Collider* LIBPKNHDIGP, ::NCPPHHEDIIN* HMOJPGAALFA)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::NCPPHHEDIIN*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_FHHDEFIGLBN_OFFSET))(LIBPKNHDIGP, HMOJPGAALFA);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HCHMEFICEPN(::UnityEngine::Collider* LIBPKNHDIGP, ::NCPPHHEDIIN* HMOJPGAALFA)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::NCPPHHEDIIN*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_HCHMEFICEPN_OFFSET))(LIBPKNHDIGP, HMOJPGAALFA);
	}

	static ::System::Void IECIOBOIPDH(::NCPPHHEDIIN* HMOJPGAALFA, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::NCPPHHEDIIN*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_IECIOBOIPDH_OFFSET))(HMOJPGAALFA, OHPJHPEOFLD);
	}

	static ::System::Boolean LLIJKLLEGBH(::System::UInt32 CJIMCNGPADB, ::NCPPHHEDIIN* HMOJPGAALFA)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::NCPPHHEDIIN*))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_LLIJKLLEGBH_OFFSET))(CJIMCNGPADB, HMOJPGAALFA);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFMGIIOBEI_MNEJHDIKCGJ_OFFSET))(this);
	}
};
