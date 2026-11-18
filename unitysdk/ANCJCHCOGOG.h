#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MBAJDDCOJJN;
class NGEJCFNLLKD;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define ANCJCHCOGOG_ABLPKGCMGOI_OFFSET UNITYSDK_OFFSET(0x16D961A0)
#define ANCJCHCOGOG_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0x16D96110)
#define ANCJCHCOGOG_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x16D95ED0)
#define ANCJCHCOGOG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16D958C0)
#define ANCJCHCOGOG_GHOHPMCGGJH_OFFSET UNITYSDK_OFFSET(0x16D95F10)
#define ANCJCHCOGOG_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16D95CC0)
#define ANCJCHCOGOG_HONDNFBNHGF_OFFSET UNITYSDK_OFFSET(0x16D962B0)
#define ANCJCHCOGOG_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0x16D95FF0)
#define ANCJCHCOGOG_MGCGFFOGLNJ_OFFSET UNITYSDK_OFFSET(0x16D96640)
#define ANCJCHCOGOG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16D96080)
#define ANCJCHCOGOG_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x16D95FB0)
#define ANCJCHCOGOG_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16D95AF0)
#define ANCJCHCOGOG_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16D95B30)
#define ANCJCHCOGOG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D95C70)

inline static constexpr unsigned int ANCJCHCOGOG_TypeDefinitionIndex = 62514;

class ANCJCHCOGOG : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCJCHCOGOG__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void GHOHPMCGGJH(::MBAJDDCOJJN* OBOOCDDHCJH, ::System::Boolean FACGPJKOONB)
	{
		return ((::System::Void(*)(::MBAJDDCOJJN*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_GHOHPMCGGJH_OFFSET))(OBOOCDDHCJH, FACGPJKOONB);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_LDCJONOBGEB_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_AHDLBAAJCCC_OFFSET))(this);
	}

	static ::System::Void ABLPKGCMGOI(::MBAJDDCOJJN* OBOOCDDHCJH, ::NGEJCFNLLKD* APOJHMPCELH, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 JBCNPOHMGPE, ::MoleMole::Battle::Entity* MFEHPHCJIMF, ::MoleMole::Config::ConfigPosRot* ICJMAMIPCBG)
	{
		return ((::System::Void(*)(::MBAJDDCOJJN*, ::NGEJCFNLLKD*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_ABLPKGCMGOI_OFFSET))(OBOOCDDHCJH, APOJHMPCELH, IACKHFCLPJI, JBCNPOHMGPE, MFEHPHCJIMF, ICJMAMIPCBG);
	}

	static ::System::Void MGCGFFOGLNJ(::MBAJDDCOJJN* OBOOCDDHCJH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::MBAJDDCOJJN*, ::System::Single))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_MGCGFFOGLNJ_OFFSET))(OBOOCDDHCJH, PMNLNNGEIFM);
	}

	static ::System::Void HONDNFBNHGF(::MBAJDDCOJJN* OBOOCDDHCJH, ::NGEJCFNLLKD* APOJHMPCELH, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::MBAJDDCOJJN*, ::NGEJCFNLLKD*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ANCJCHCOGOG_HONDNFBNHGF_OFFSET))(OBOOCDDHCJH, APOJHMPCELH, IACKHFCLPJI, JBCNPOHMGPE);
	}
};
