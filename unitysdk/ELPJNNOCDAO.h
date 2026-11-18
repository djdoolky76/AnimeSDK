#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IAILHEEBLFF;
class JOOHBDMHGCA;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class ConfigHitData; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }

#define ELPJNNOCDAO_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x158BFF70)
#define ELPJNNOCDAO_BDJDMLDOGPJ_OFFSET UNITYSDK_OFFSET(0x158BFDC0)
#define ELPJNNOCDAO_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x158BDCD0)
#define ELPJNNOCDAO_DLBMEEBNOHH_OFFSET UNITYSDK_OFFSET(0x158BEBD0)
#define ELPJNNOCDAO_EJHEIDAODLN_OFFSET UNITYSDK_OFFSET(0x158BF7C0)
#define ELPJNNOCDAO_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x158BDF80)
#define ELPJNNOCDAO_GIBKOOCKEIK_OFFSET UNITYSDK_OFFSET(0x158BE580)
#define ELPJNNOCDAO_HACCKHHIOHA_OFFSET UNITYSDK_OFFSET(0x158BF2F0)
#define ELPJNNOCDAO_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x158C0100)
#define ELPJNNOCDAO_HNCCEKONAHD_OFFSET UNITYSDK_OFFSET(0x158BE140)
#define ELPJNNOCDAO_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x158BE8E0)
#define ELPJNNOCDAO_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x158BFEE0)
#define ELPJNNOCDAO_LMMEHFHCCKH_OFFSET UNITYSDK_OFFSET(0x158BEC70)
#define ELPJNNOCDAO_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x158BEB40)
#define ELPJNNOCDAO_NHKNCFGAIGA_OFFSET UNITYSDK_OFFSET(0x158BE7D0)
#define ELPJNNOCDAO_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x158BE3A0)
#define ELPJNNOCDAO__CTOR_OFFSET UNITYSDK_OFFSET(0x158BE0F0)

inline static constexpr unsigned int ELPJNNOCDAO_TypeDefinitionIndex = 78781;

class ELPJNNOCDAO : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPJNNOCDAO__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_FIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void HNCCEKONAHD(::IAILHEEBLFF* HPMMECGBFFF, ::UnityEngine::Vector3 CBDLICIIEKF, ::System::Single MDPPNMIPDMP, ::System::Single FAMLBPMPFEI, ::System::Single FNKPIGFFJNC, ::UnityEngine::AnimationCurve* OHGBNKMFIDA, ::UnityEngine::AnimationCurve* ELLCFNKMCKF, ::System::Boolean NGHFFNMAAJJ)
	{
		return ((::System::Void(*)(::IAILHEEBLFF*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_HNCCEKONAHD_OFFSET))(HPMMECGBFFF, CBDLICIIEKF, MDPPNMIPDMP, FAMLBPMPFEI, FNKPIGFFJNC, OHGBNKMFIDA, ELLCFNKMCKF, NGHFFNMAAJJ);
	}

	static ::System::Void NPIJFJJOBCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_NPIJFJJOBCA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void GIBKOOCKEIK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_GIBKOOCKEIK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void DLBMEEBNOHH(::UnityEngine::AnimatorStateInfo OJBJPFBIMPJ, ::UnityEngine::AnimatorStateInfo FDDFDLEINFM, ::System::Int32 EEGBEFGJJBM, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_DLBMEEBNOHH_OFFSET))(OJBJPFBIMPJ, FDDFDLEINFM, EEGBEFGJJBM, KECKGDFIALJ);
	}

	static ::System::Single LMMEHFHCCKH(::IAILHEEBLFF* PLGIFCMOBOL, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Config::ConfigHitData* LJHGKEGKPLJ, ::MoleMole::Config::ConfigEntityAttackPattern* KBCCBKNJJOO)
	{
		return ((::System::Single(*)(::IAILHEEBLFF*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigHitData*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_LMMEHFHCCKH_OFFSET))(PLGIFCMOBOL, MFMPICKHAMJ, LJHGKEGKPLJ, KBCCBKNJJOO);
	}

	static ::UnityEngine::Vector3 HACCKHHIOHA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single NPMJMKPIDCD)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_HACCKHHIOHA_OFFSET))(KECKGDFIALJ, NPMJMKPIDCD);
	}

	static ::System::Void EJHEIDAODLN(::System::Single AIJNECNFKEP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_EJHEIDAODLN_OFFSET))(AIJNECNFKEP, KECKGDFIALJ);
	}

	static ::System::Void BDJDMLDOGPJ(::IAILHEEBLFF* PLGIFCMOBOL, ::UnityEngine::Vector3 CBDLICIIEKF, ::System::Single MDPPNMIPDMP, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Config::ConfigHitData* LJHGKEGKPLJ, ::MoleMole::Config::ConfigEntityAttackPattern* LCGFGJOIAPN, ::System::Boolean NGHFFNMAAJJ)
	{
		return ((::System::Void(*)(::IAILHEEBLFF*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigHitData*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_BDJDMLDOGPJ_OFFSET))(PLGIFCMOBOL, CBDLICIIEKF, MDPPNMIPDMP, MFMPICKHAMJ, LJHGKEGKPLJ, LCGFGJOIAPN, NGHFFNMAAJJ);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_INEGOEGIOKM_OFFSET))(this);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void NHKNCFGAIGA(::IAILHEEBLFF* HPMMECGBFFF, ::JOOHBDMHGCA* ADPGHCMLFPH)
	{
		return ((::System::Void(*)(::IAILHEEBLFF*, ::JOOHBDMHGCA*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_NHKNCFGAIGA_OFFSET))(HPMMECGBFFF, ADPGHCMLFPH);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}
};
