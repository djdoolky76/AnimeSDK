#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class LACHKEHCGNO;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HDPHBLGACFF_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x14D1C100)
#define HDPHBLGACFF_BICPFAHMBMC_OFFSET UNITYSDK_OFFSET(0x14D20420)
#define HDPHBLGACFF_BJILJGMHMOD_OFFSET UNITYSDK_OFFSET(0x14D1E7A0)
#define HDPHBLGACFF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14D1BCD0)
#define HDPHBLGACFF_DLABNAMLENL_1_OFFSET UNITYSDK_OFFSET(0x14D207A0)
#define HDPHBLGACFF_DLABNAMLENL_OFFSET UNITYSDK_OFFSET(0x14D1CC60)
#define HDPHBLGACFF_EDAIMIOHGNE_OFFSET UNITYSDK_OFFSET(0x14D1E1D0)
#define HDPHBLGACFF_FCIKIONGDFL_OFFSET UNITYSDK_OFFSET(0x14D20A80)
#define HDPHBLGACFF_FPAHHJGPNCP_OFFSET UNITYSDK_OFFSET(0x14D205A0)
#define HDPHBLGACFF_GMFPBEBOIIB_OFFSET UNITYSDK_OFFSET(0x14D1D160)
#define HDPHBLGACFF_HHAFFDJJKLO_OFFSET UNITYSDK_OFFSET(0x14D1EAA0)
#define HDPHBLGACFF_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x14D1FBF0)
#define HDPHBLGACFF_KIJEHKFHFAA_OFFSET UNITYSDK_OFFSET(0x14D1F220)
#define HDPHBLGACFF_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14D1BF30)
#define HDPHBLGACFF_LKCHLJKCNBG_OFFSET UNITYSDK_OFFSET(0x14D1C6D0)
#define HDPHBLGACFF_MMJLFDCKJNC_OFFSET UNITYSDK_OFFSET(0x14D1E340)
#define HDPHBLGACFF_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x14D20BB0)
#define HDPHBLGACFF_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x14D1C9F0)
#define HDPHBLGACFF_OBBMGJHEAHB_OFFSET UNITYSDK_OFFSET(0x14D1F530)
#define HDPHBLGACFF_PCLHGFCEGKH_OFFSET UNITYSDK_OFFSET(0x14D1D440)
#define HDPHBLGACFF_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x14D20A30)
#define HDPHBLGACFF_PNBEHKHEPCJ_OFFSET UNITYSDK_OFFSET(0x14D1CA80)
#define HDPHBLGACFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D1C0F0)
#define HDPHBLGACFF__CTOR_OFFSET UNITYSDK_OFFSET(0x14D1C0A0)

inline static constexpr unsigned int HDPHBLGACFF_TypeDefinitionIndex = 60807;

class HDPHBLGACFF : public ::OAOOLPCNHKA
{
public:
	static ::System::Boolean* StaticGet_CDMCGDGKGID()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HDPHBLGACFF_TypeDefinitionIndex)->GetStaticField(0x113C0);
	}
	static ::System::Boolean* StaticGet_AHCGAOHGNEM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HDPHBLGACFF_TypeDefinitionIndex)->GetStaticField(0x113C1);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPHBLGACFF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDPHBLGACFF__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPHBLGACFF_LATEUPDATE_OFFSET))(this);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void LKCHLJKCNBG(::LACHKEHCGNO* ENIJIEEOKFD, ::System::String* NNDPEENOBEO)
	{
		return ((::System::Void(*)(::LACHKEHCGNO*, ::System::String*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_LKCHLJKCNBG_OFFSET))(ENIJIEEOKFD, NNDPEENOBEO);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPHBLGACFF_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 PNBEHKHEPCJ(::LACHKEHCGNO* ENIJIEEOKFD)
	{
		return ((::UnityEngine::Vector3(*)(::LACHKEHCGNO*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_PNBEHKHEPCJ_OFFSET))(ENIJIEEOKFD);
	}

	static ::System::Boolean DLABNAMLENL(::LACHKEHCGNO* ENIJIEEOKFD, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI, ::System::Single AMDGNAMFBGF, ::System::Boolean DIPPDAOMOHA, ::System::Int32 BPKGCFEFAHC, ::System::Boolean KCOMNAGJHPO)
	{
		return ((::System::Boolean(*)(::LACHKEHCGNO*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HDPHBLGACFF_DLABNAMLENL_OFFSET))(ENIJIEEOKFD, OIKMICDBAPP, CJBJONJDOLI, AMDGNAMFBGF, DIPPDAOMOHA, BPKGCFEFAHC, KCOMNAGJHPO);
	}

	static ::UnityEngine::Vector3 EDAIMIOHGNE(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HDPHBLGACFF_EDAIMIOHGNE_OFFSET))(OPMPKFEHOBM, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Single MMJLFDCKJNC(::LACHKEHCGNO* ENIJIEEOKFD, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Single(*)(::LACHKEHCGNO*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_MMJLFDCKJNC_OFFSET))(ENIJIEEOKFD, OHPJHPEOFLD);
	}

	static ::System::Void GMFPBEBOIIB(::LACHKEHCGNO* ENIJIEEOKFD)
	{
		return ((::System::Void(*)(::LACHKEHCGNO*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_GMFPBEBOIIB_OFFSET))(ENIJIEEOKFD);
	}

	static ::System::Boolean BJILJGMHMOD(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::Single NCCDJLDKFGA, ::UnityEngine::AI::NavMeshHit& OFLHPPDJLNL, ::UnityEngine::Vector3& GICNMIKEPON, ::System::Int32 LIMNECOMDOM)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + HDPHBLGACFF_BJILJGMHMOD_OFFSET))(GIAEPMKCBIB, DOBFFIICAII, NCCDJLDKFGA, OFLHPPDJLNL, GICNMIKEPON, LIMNECOMDOM);
	}

	static ::System::Void KIJEHKFHFAA(::LACHKEHCGNO* ENIJIEEOKFD, ::System::String* NNDPEENOBEO)
	{
		return ((::System::Void(*)(::LACHKEHCGNO*, ::System::String*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_KIJEHKFHFAA_OFFSET))(ENIJIEEOKFD, NNDPEENOBEO);
	}

	static ::System::Boolean HHAFFDJJKLO(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::Single NCCDJLDKFGA, ::UnityEngine::AI::NavMeshHit& OFLHPPDJLNL, ::UnityEngine::Vector3& GICNMIKEPON, ::System::Int32 LIMNECOMDOM)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + HDPHBLGACFF_HHAFFDJJKLO_OFFSET))(GIAEPMKCBIB, DOBFFIICAII, NCCDJLDKFGA, OFLHPPDJLNL, GICNMIKEPON, LIMNECOMDOM);
	}

	static ::System::Void PCLHGFCEGKH(::LACHKEHCGNO* ENIJIEEOKFD, ::System::Single AMDGNAMFBGF, ::System::Int32 LPKKNLEKFKK, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI, ::System::Int32 BPKGCFEFAHC, ::System::Boolean KCOMNAGJHPO)
	{
		return ((::System::Void(*)(::LACHKEHCGNO*, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HDPHBLGACFF_PCLHGFCEGKH_OFFSET))(ENIJIEEOKFD, AMDGNAMFBGF, LPKKNLEKFKK, CJBJONJDOLI, BPKGCFEFAHC, KCOMNAGJHPO);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDPHBLGACFF_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Boolean BICPFAHMBMC(::LACHKEHCGNO* ENIJIEEOKFD)
	{
		return ((::System::Boolean(*)(::LACHKEHCGNO*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_BICPFAHMBMC_OFFSET))(ENIJIEEOKFD);
	}

	static ::System::Void FPAHHJGPNCP(::LACHKEHCGNO* ENIJIEEOKFD, ::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Boolean ODNMHKNPOMP)
	{
		return ((::System::Void(*)(::LACHKEHCGNO*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + HDPHBLGACFF_FPAHHJGPNCP_OFFSET))(ENIJIEEOKFD, OHOGDOMNHNK, ODNMHKNPOMP);
	}

	static ::System::Boolean DLABNAMLENL_1(::LACHKEHCGNO* ENIJIEEOKFD, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI, ::System::Int32 BPKGCFEFAHC, ::System::Boolean KCOMNAGJHPO)
	{
		return ((::System::Boolean(*)(::LACHKEHCGNO*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HDPHBLGACFF_DLABNAMLENL_1_OFFSET))(ENIJIEEOKFD, OIKMICDBAPP, CJBJONJDOLI, BPKGCFEFAHC, KCOMNAGJHPO);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Boolean OBBMGJHEAHB(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::UnityEngine::Vector3 CMLFALFJONB, ::System::Single MDAGKAHADBO, ::UnityEngine::Vector3& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HDPHBLGACFF_OBBMGJHEAHB_OFFSET))(GIAEPMKCBIB, DOBFFIICAII, CMLFALFJONB, MDAGKAHADBO, IGAAKDOIPNN);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HDPHBLGACFF_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean FCIKIONGDFL(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HDPHBLGACFF_FCIKIONGDFL_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
