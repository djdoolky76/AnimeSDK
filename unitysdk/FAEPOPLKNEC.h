#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class GHJMFKHDKLI;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define FAEPOPLKNEC_AFCFEOLDFAE_OFFSET UNITYSDK_OFFSET(0x14281930)
#define FAEPOPLKNEC_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1427EF50)
#define FAEPOPLKNEC_BOPMGFPCGEC_OFFSET UNITYSDK_OFFSET(0x1427D3D0)
#define FAEPOPLKNEC_CEOFACIOCHG_OFFSET UNITYSDK_OFFSET(0x1427DA80)
#define FAEPOPLKNEC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1427D150)
#define FAEPOPLKNEC_EKBKMAFDAHB_OFFSET UNITYSDK_OFFSET(0x1427E5A0)
#define FAEPOPLKNEC_FFJHHNKEPHL_OFFSET UNITYSDK_OFFSET(0x14281110)
#define FAEPOPLKNEC_FLENFHLCIPC_OFFSET UNITYSDK_OFFSET(0x14281A80)
#define FAEPOPLKNEC_GDNOOHMKEID_OFFSET UNITYSDK_OFFSET(0x14281390)
#define FAEPOPLKNEC_GKDLLNDGCND_1_OFFSET UNITYSDK_OFFSET(0x14281690)
#define FAEPOPLKNEC_GKDLLNDGCND_OFFSET UNITYSDK_OFFSET(0x1427EC80)
#define FAEPOPLKNEC_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1427F8E0)
#define FAEPOPLKNEC_HMOLJGLICPO_OFFSET UNITYSDK_OFFSET(0x1427D580)
#define FAEPOPLKNEC_ICGFLJOBIOM_OFFSET UNITYSDK_OFFSET(0x1427EED0)
#define FAEPOPLKNEC_LGKLEEIKFOK_OFFSET UNITYSDK_OFFSET(0x1427DE80)
#define FAEPOPLKNEC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1427E510)
#define FAEPOPLKNEC_NGJIJEOJECJ_OFFSET UNITYSDK_OFFSET(0x1427E8F0)
#define FAEPOPLKNEC_OIFECLGNKHC_OFFSET UNITYSDK_OFFSET(0x14281540)
#define FAEPOPLKNEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1427D380)

inline static constexpr unsigned int FAEPOPLKNEC_TypeDefinitionIndex = 77345;

class FAEPOPLKNEC : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEPOPLKNEC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void BOPMGFPCGEC(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Int32 ABHBKFJKINO, ::System::String* DLAONKFCEJG, ::System::Boolean JGKNENLOGDD)
	{
		return ((::System::Void(*)(::GHJMFKHDKLI*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_BOPMGFPCGEC_OFFSET))(KGMDJDNMFIB, ABHBKFJKINO, DLAONKFCEJG, JGKNENLOGDD);
	}

	static ::System::Void CEOFACIOCHG(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Int32 DMJBFBDLKIN, ::System::Collections::Generic::List_1<::System::Int32>*& IFFNIKIGEBG)
	{
		return ((::System::Void(*)(::GHJMFKHDKLI*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_CEOFACIOCHG_OFFSET))(KGMDJDNMFIB, DMJBFBDLKIN, IFFNIKIGEBG);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void EKBKMAFDAHB(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Boolean JKBLDFBGBPK, ::System::Int32 DMJBFBDLKIN, ::System::Collections::Generic::List_1<::System::Int32>*& IFFNIKIGEBG)
	{
		return ((::System::Void(*)(::GHJMFKHDKLI*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_EKBKMAFDAHB_OFFSET))(KGMDJDNMFIB, JKBLDFBGBPK, DMJBFBDLKIN, IFFNIKIGEBG);
	}

	static ::UnityEngine::Collider* NGJIJEOJECJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 PIPGGOOELKG)
	{
		return ((::UnityEngine::Collider*(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_NGJIJEOJECJ_OFFSET))(KECKGDFIALJ, PIPGGOOELKG);
	}

	static ::System::Boolean GKDLLNDGCND(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG, ::System::Int32 HEJPAPDHOAC)
	{
		return ((::System::Boolean(*)(::GHJMFKHDKLI*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_GKDLLNDGCND_OFFSET))(KGMDJDNMFIB, JMDOANHOEJG, HEJPAPDHOAC);
	}

	static ::System::Void HMOLJGLICPO(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::String* DLAONKFCEJG)
	{
		return ((::System::Void(*)(::GHJMFKHDKLI*, ::System::String*))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_HMOLJGLICPO_OFFSET))(KGMDJDNMFIB, DLAONKFCEJG);
	}

	static ::System::Void ICGFLJOBIOM(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Boolean EKEGGLFJJFA, ::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::GHJMFKHDKLI*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_ICGFLJOBIOM_OFFSET))(KGMDJDNMFIB, EKEGGLFJJFA, JKBLDFBGBPK);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void LGKLEEIKFOK(::GHJMFKHDKLI* KGMDJDNMFIB)
	{
		return ((::System::Void(*)(::GHJMFKHDKLI*))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_LGKLEEIKFOK_OFFSET))(KGMDJDNMFIB);
	}

	static ::System::Void FFJHHNKEPHL(::GHJMFKHDKLI* KGMDJDNMFIB)
	{
		return ((::System::Void(*)(::GHJMFKHDKLI*))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_FFJHHNKEPHL_OFFSET))(KGMDJDNMFIB);
	}

	static ::System::Void GDNOOHMKEID(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Int32 ABHBKFJKINO, ::System::String* DLAONKFCEJG, ::System::Boolean JGKNENLOGDD)
	{
		return ((::System::Void(*)(::GHJMFKHDKLI*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_GDNOOHMKEID_OFFSET))(KGMDJDNMFIB, ABHBKFJKINO, DLAONKFCEJG, JGKNENLOGDD);
	}

	static ::System::Int32 OIFECLGNKHC(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Boolean JKBLDFBGBPK, ::System::String* DLAONKFCEJG, ::System::Boolean JGKNENLOGDD)
	{
		return ((::System::Int32(*)(::GHJMFKHDKLI*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_OIFECLGNKHC_OFFSET))(KGMDJDNMFIB, JKBLDFBGBPK, DLAONKFCEJG, JGKNENLOGDD);
	}

	static ::System::Boolean GKDLLNDGCND_1(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::List_1<::System::Int32>* PKGHOIJFKLA)
	{
		return ((::System::Boolean(*)(::GHJMFKHDKLI*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_GKDLLNDGCND_1_OFFSET))(KGMDJDNMFIB, JMDOANHOEJG, PKGHOIJFKLA);
	}

	static ::System::Int32 AFCFEOLDFAE(::GHJMFKHDKLI* KGMDJDNMFIB, ::System::Boolean JKBLDFBGBPK, ::System::String* DLAONKFCEJG, ::System::Boolean JGKNENLOGDD)
	{
		return ((::System::Int32(*)(::GHJMFKHDKLI*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_AFCFEOLDFAE_OFFSET))(KGMDJDNMFIB, JKBLDFBGBPK, DLAONKFCEJG, JGKNENLOGDD);
	}

	static ::System::Void FLENFHLCIPC(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FAEPOPLKNEC_FLENFHLCIPC_OFFSET))(FBILHHBPEHD, KECKGDFIALJ);
	}
};
