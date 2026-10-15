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

#define DKJCHLBOHOO_ADMOLMEAKKA_OFFSET UNITYSDK_OFFSET(0xF887330)
#define DKJCHLBOHOO_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xF884480)
#define DKJCHLBOHOO_BGBJGJMDABI_OFFSET UNITYSDK_OFFSET(0xF8853F0)
#define DKJCHLBOHOO_BOLFKCDMPAI_OFFSET UNITYSDK_OFFSET(0xF8836E0)
#define DKJCHLBOHOO_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xF887CA0)
#define DKJCHLBOHOO_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xF8843A0)
#define DKJCHLBOHOO_CTOR_OFFSET UNITYSDK_OFFSET(0xF887FC0)
#define DKJCHLBOHOO_EEJFPNICDOP_OFFSET UNITYSDK_OFFSET(0xF887D40)
#define DKJCHLBOHOO_FLPAACJOGLJ_OFFSET UNITYSDK_OFFSET(0xF8872C0)
#define DKJCHLBOHOO_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xF883CA0)
#define DKJCHLBOHOO_FPADGAEPGMH_OFFSET UNITYSDK_OFFSET(0xF882390)
#define DKJCHLBOHOO_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xF886F60)
#define DKJCHLBOHOO_GLNIGIAAKBA_OFFSET UNITYSDK_OFFSET(0xF884750)
#define DKJCHLBOHOO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xF884670)
#define DKJCHLBOHOO_HPOKGGLPPEM_OFFSET UNITYSDK_OFFSET(0xF882B50)
#define DKJCHLBOHOO_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xF882C40)
#define DKJCHLBOHOO_JDDGFPDDCNM_OFFSET UNITYSDK_OFFSET(0xF8845B0)
#define DKJCHLBOHOO_KDKLEPAECAJ_OFFSET UNITYSDK_OFFSET(0xF882EE0)
#define DKJCHLBOHOO_KIFJJLFEGAJ_OFFSET UNITYSDK_OFFSET(0xF887270)
#define DKJCHLBOHOO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF881940)
#define DKJCHLBOHOO_LDFGBFLJDNC_OFFSET UNITYSDK_OFFSET(0xF883D30)
#define DKJCHLBOHOO_LECPKEBGGFL_OFFSET UNITYSDK_OFFSET(0xF8868A0)
#define DKJCHLBOHOO_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xF887000)
#define DKJCHLBOHOO_LHEJLLDPHAG_OFFSET UNITYSDK_OFFSET(0xF887CF0)
#define DKJCHLBOHOO_MIFODHIOHBF_OFFSET UNITYSDK_OFFSET(0xF882E10)
#define DKJCHLBOHOO_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0xF883670)
#define DKJCHLBOHOO_OBMOFHGPCNA_OFFSET UNITYSDK_OFFSET(0xF886E90)
#define DKJCHLBOHOO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xF883A80)

inline static constexpr unsigned int DKJCHLBOHOO_TypeDefinitionIndex = 77015;

	class DKJCHLBOHOO : public ::CBIKMJHGEDE
	{
	public:
		::UnityEngine::CapsuleCollider* KDPFKMCHCEF; // 0x18
		::RPG::GameCore::HoyoTagContainer* KOCIGKHOMBI; // 0x20
		::FiveDimPlayerSkillCurveAsset* KOCHLFCKBBG; // 0x28
		::UnityEngine::Vector3 AMBHDMPIKHP; // 0x30
		::System::Single CEGEFFGMPNL; // 0x3C
		::System::Single GFGHPPEKBOA; // 0x40
		::KLNKLOMDIIC NKPEHADNNOF; // 0x44
		::System::Single FDDOLIGMKLP; // 0xAC
		::System::Single PNJBOKGHLBB; // 0xB0
		::System::Single FLHOEGBFPJB; // 0xB4
		::System::Single OMKLKMJOBPL; // 0xB8
		::KLNKLOMDIIC CGILGDIDBFA; // 0xBC
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
