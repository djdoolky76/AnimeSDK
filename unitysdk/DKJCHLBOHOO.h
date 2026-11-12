#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FiveDimPlayerSkillCurveAsset;
class HIOEAKHGILF;
class POHNBOACDHB;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace UnityEngine { class CapsuleCollider; }

#define DKJCHLBOHOO_ADMOLMEAKKA_OFFSET UNITYSDK_OFFSET(0xFFECDE0)
#define DKJCHLBOHOO_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xFFEA050)
#define DKJCHLBOHOO_BGBJGJMDABI_OFFSET UNITYSDK_OFFSET(0xFFEAFA0)
#define DKJCHLBOHOO_BOLFKCDMPAI_OFFSET UNITYSDK_OFFSET(0xFFE92C0)
#define DKJCHLBOHOO_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xFFED730)
#define DKJCHLBOHOO_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xFFE9F70)
#define DKJCHLBOHOO_CTOR_OFFSET UNITYSDK_OFFSET(0xFFEDA50)
#define DKJCHLBOHOO_EEJFPNICDOP_OFFSET UNITYSDK_OFFSET(0xFFED7D0)
#define DKJCHLBOHOO_FLPAACJOGLJ_OFFSET UNITYSDK_OFFSET(0xFFECD70)
#define DKJCHLBOHOO_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xFFE9880)
#define DKJCHLBOHOO_FPADGAEPGMH_OFFSET UNITYSDK_OFFSET(0xFFE7FB0)
#define DKJCHLBOHOO_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xFFECA20)
#define DKJCHLBOHOO_GLNIGIAAKBA_OFFSET UNITYSDK_OFFSET(0xFFEA320)
#define DKJCHLBOHOO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xFFEA240)
#define DKJCHLBOHOO_HPOKGGLPPEM_OFFSET UNITYSDK_OFFSET(0xFFE8760)
#define DKJCHLBOHOO_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xFFE8850)
#define DKJCHLBOHOO_JDDGFPDDCNM_OFFSET UNITYSDK_OFFSET(0xFFEA180)
#define DKJCHLBOHOO_KDKLEPAECAJ_OFFSET UNITYSDK_OFFSET(0xFFE8AE0)
#define DKJCHLBOHOO_KIFJJLFEGAJ_OFFSET UNITYSDK_OFFSET(0xFFECD20)
#define DKJCHLBOHOO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xFFE7560)
#define DKJCHLBOHOO_LDFGBFLJDNC_OFFSET UNITYSDK_OFFSET(0xFFE9910)
#define DKJCHLBOHOO_LECPKEBGGFL_OFFSET UNITYSDK_OFFSET(0xFFEC380)
#define DKJCHLBOHOO_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xFFECAC0)
#define DKJCHLBOHOO_LHEJLLDPHAG_OFFSET UNITYSDK_OFFSET(0xFFED780)
#define DKJCHLBOHOO_MIFODHIOHBF_OFFSET UNITYSDK_OFFSET(0xFFE8A10)
#define DKJCHLBOHOO_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0xFFE9250)
#define DKJCHLBOHOO_OBMOFHGPCNA_OFFSET UNITYSDK_OFFSET(0xFFEC950)
#define DKJCHLBOHOO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xFFE9660)

inline static constexpr unsigned int DKJCHLBOHOO_TypeDefinitionIndex = 79349;

	class DKJCHLBOHOO : public ::CBIKMJHGEDE
	{
	public:
		::UnityEngine::CapsuleCollider* KDPFKMCHCEF; // 0x18
		::FiveDimPlayerSkillCurveAsset* KOCHLFCKBBG; // 0x20
		::RPG::GameCore::HoyoTagContainer* KOCIGKHOMBI; // 0x28
		::UnityEngine::Vector3 AMBHDMPIKHP; // 0x30
		::KLNKLOMDIIC CGILGDIDBFA; // 0x3C
		::System::Single OMKLKMJOBPL; // 0xA4
		::System::Single FLHOEGBFPJB; // 0xA8
		::System::Single PNJBOKGHLBB; // 0xAC
		::KLNKLOMDIIC NKPEHADNNOF; // 0xB0
		::System::Single FDDOLIGMKLP; // 0x118
		::System::Single CEGEFFGMPNL; // 0x11C
		::System::Single GFGHPPEKBOA; // 0x120
		// static const ::System::Object KDBOELACBCP; // 0x0
		// static const ::System::Object OCFGJEGKEAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HPOKGGLPPEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_HPOKGGLPPEM_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void JDDGFPDDCNM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_JDDGFPDDCNM_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void BGBJGJMDABI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_BGBJGJMDABI_OFFSET))(this, a1);
		}

		::System::Void OBMOFHGPCNA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_OBMOFHGPCNA_OFFSET))(this, a1);
		}

		::System::Void LFIFIEGFMOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_LFIFIEGFMOM_OFFSET))(this, a1);
		}

		::System::Void LDFGBFLJDNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_LDFGBFLJDNC_OFFSET))(this);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_GBCHFFLMIIC_OFFSET))(this);
		}

		::System::Void KIFJJLFEGAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_KIFJJLFEGAJ_OFFSET))(this);
		}

		::System::Void MIFODHIOHBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_MIFODHIOHBF_OFFSET))(this);
		}

		::System::Void MNMPLEEMKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_MNMPLEEMKKN_OFFSET))(this);
		}

		::System::Void FLPAACJOGLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_FLPAACJOGLJ_OFFSET))(this);
		}

		::System::Boolean KDKLEPAECAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_KDKLEPAECAJ_OFFSET))(this);
		}

		::System::Boolean ADMOLMEAKKA(::KLNKLOMDIIC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_ADMOLMEAKKA_OFFSET))(this, a1);
		}

		::System::Void BOLFKCDMPAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_BOLFKCDMPAI_OFFSET))(this, a1);
		}

		::KLNKLOMDIIC FPADGAEPGMH(::System::Single a1, ::System::Boolean a2, ::HIOEAKHGILF* a3)
		{
			return ((::KLNKLOMDIIC(*)(::PVOID, ::System::Single, ::System::Boolean, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_FPADGAEPGMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LECPKEBGGFL(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_LECPKEBGGFL_OFFSET))(this, a1, a2);
		}

		::System::Void GLNIGIAAKBA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_GLNIGIAAKBA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_BPMGPFLHPLC_OFFSET))(this);
		}

		::System::Single LHEJLLDPHAG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_LHEJLLDPHAG_OFFSET))(this);
		}

		::System::Single EEJFPNICDOP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJCHLBOHOO_EEJFPNICDOP_OFFSET))(this);
		}

	};
