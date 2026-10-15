#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SurfaceBorderType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SwitchSurfaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/EHJIFGMNNPP.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class NOOHPODHIAA;
class PEEDLCHFAFL;
class POHNBOACDHB;
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class ConfigurableJoint; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CBIKMJHGEDE_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xC49BEA0)
#define CBIKMJHGEDE_AMPIMJJBKBE_OFFSET UNITYSDK_OFFSET(0xC49E550)
#define CBIKMJHGEDE_ANJDIBJDFKF_OFFSET UNITYSDK_OFFSET(0xC4A5DD0)
#define CBIKMJHGEDE_AOFPLLGOKJM_OFFSET UNITYSDK_OFFSET(0xC4A6820)
#define CBIKMJHGEDE_BGBJGJMDABI_OFFSET UNITYSDK_OFFSET(0xC4A07C0)
#define CBIKMJHGEDE_BHCILDNPGFD_OFFSET UNITYSDK_OFFSET(0xC49E7C0)
#define CBIKMJHGEDE_BOHOCEBKLHG_OFFSET UNITYSDK_OFFSET(0xC49EFC0)
#define CBIKMJHGEDE_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4A6AB0)
#define CBIKMJHGEDE_CLEAR_OFFSET UNITYSDK_OFFSET(0xC49BE00)
#define CBIKMJHGEDE_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xC49BE50)
#define CBIKMJHGEDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A6AA0)
#define CBIKMJHGEDE_DCACPFJPOFJ_OFFSET UNITYSDK_OFFSET(0xC49C580)
#define CBIKMJHGEDE_DGHLCFLEJFC_OFFSET UNITYSDK_OFFSET(0xC49E5E0)
#define CBIKMJHGEDE_DOCPIAKLICF_OFFSET UNITYSDK_OFFSET(0xC49CC50)
#define CBIKMJHGEDE_EAOCLDGEKOO_OFFSET UNITYSDK_OFFSET(0xC4A0860)
#define CBIKMJHGEDE_EEJFPNICDOP_OFFSET UNITYSDK_OFFSET(0xC4A6A10)
#define CBIKMJHGEDE_FEEKEILMJAD_OFFSET UNITYSDK_OFFSET(0xC49EE20)
#define CBIKMJHGEDE_FLPAACJOGLJ_OFFSET UNITYSDK_OFFSET(0xC4A1A10)
#define CBIKMJHGEDE_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xC49EF40)
#define CBIKMJHGEDE_FNLDKPJHDOO_OFFSET UNITYSDK_OFFSET(0xC49C7B0)
#define CBIKMJHGEDE_FOCCJGCECEG_OFFSET UNITYSDK_OFFSET(0xC4A2940)
#define CBIKMJHGEDE_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xC4A5F00)
#define CBIKMJHGEDE_GBOECLMFGGE_OFFSET UNITYSDK_OFFSET(0xC49C800)
#define CBIKMJHGEDE_GHAKCBLOBBL_OFFSET UNITYSDK_OFFSET(0xC4A6980)
#define CBIKMJHGEDE_GKLODMLNCCI_OFFSET UNITYSDK_OFFSET(0xC4A2E80)
#define CBIKMJHGEDE_GPKLKOBMOHM_OFFSET UNITYSDK_OFFSET(0xC4A6390)
#define CBIKMJHGEDE_HACLDBHKMEK_OFFSET UNITYSDK_OFFSET(0xC4A5F40)
#define CBIKMJHGEDE_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xC49C910)
#define CBIKMJHGEDE_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC4A0820)
#define CBIKMJHGEDE_HMCNFIGPFDL_OFFSET UNITYSDK_OFFSET(0xC49C710)
#define CBIKMJHGEDE_HMEIAHCNHKK_OFFSET UNITYSDK_OFFSET(0xC4A3F60)
#define CBIKMJHGEDE_HPOKGGLPPEM_OFFSET UNITYSDK_OFFSET(0xC49BDC0)
#define CBIKMJHGEDE_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xC49C850)
#define CBIKMJHGEDE_IDDMNPEOCBP_OFFSET UNITYSDK_OFFSET(0xC4A5E20)
#define CBIKMJHGEDE_INGFBKBPNNI_OFFSET UNITYSDK_OFFSET(0xC4A3C70)
#define CBIKMJHGEDE_IOPDMDLLBIN_OFFSET UNITYSDK_OFFSET(0xC49E640)
#define CBIKMJHGEDE_JDDGFPDDCNM_OFFSET UNITYSDK_OFFSET(0xC49D080)
#define CBIKMJHGEDE_KAILPNNLAOA_OFFSET UNITYSDK_OFFSET(0xC49C9A0)
#define CBIKMJHGEDE_KDKLEPAECAJ_OFFSET UNITYSDK_OFFSET(0xC4A2B30)
#define CBIKMJHGEDE_KEAFGCDMHEO_OFFSET UNITYSDK_OFFSET(0xC49C760)
#define CBIKMJHGEDE_KKOOIGIMEBK_OFFSET UNITYSDK_OFFSET(0xC4A1000)
#define CBIKMJHGEDE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC49BD70)
#define CBIKMJHGEDE_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xC49BEF0)
#define CBIKMJHGEDE_LHEJLLDPHAG_OFFSET UNITYSDK_OFFSET(0xC4A6940)
#define CBIKMJHGEDE_MFBBAKOLIKE_OFFSET UNITYSDK_OFFSET(0xC4A0750)
#define CBIKMJHGEDE_MGNAJNFCKLK_OFFSET UNITYSDK_OFFSET(0xC4A67D0)
#define CBIKMJHGEDE_MMPGJEFFEPH_OFFSET UNITYSDK_OFFSET(0xC4A6190)
#define CBIKMJHGEDE_NDJEGHKIAEG_OFFSET UNITYSDK_OFFSET(0xC4A19C0)
#define CBIKMJHGEDE_NJCMDMFEHLE_OFFSET UNITYSDK_OFFSET(0xC49F1F0)
#define CBIKMJHGEDE_NJJBGJHAFOB_OFFSET UNITYSDK_OFFSET(0xC4A6140)
#define CBIKMJHGEDE_OBMOFHGPCNA_OFFSET UNITYSDK_OFFSET(0xC49D5B0)
#define CBIKMJHGEDE_ODDFFNPOLJO_OFFSET UNITYSDK_OFFSET(0xC4A1A70)
#define CBIKMJHGEDE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC49C8B0)
#define CBIKMJHGEDE_PBHNKOHNJEO_OFFSET UNITYSDK_OFFSET(0xC4A06B0)
#define CBIKMJHGEDE_PCFKAIMMOJN_OFFSET UNITYSDK_OFFSET(0xC4A6870)
#define CBIKMJHGEDE_PIIBNJGPLLO_OFFSET UNITYSDK_OFFSET(0xC4A5EB0)

inline static constexpr unsigned int CBIKMJHGEDE_TypeDefinitionIndex = 77018;

	class CBIKMJHGEDE : public ::System::Object
	{
	public:
		::POHNBOACDHB* CBIGPGKJAEI; // 0x10
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "CBIKMJHGEDE")->GetStaticField(0x1C20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBIKMJHGEDE_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HPOKGGLPPEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_HPOKGGLPPEM_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_CLEAR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void LFIFIEGFMOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_LFIFIEGFMOM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void HBJBCBJAHOJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_HBJBCBJAHOJ_OFFSET))(this, a1);
		}

		::System::Void JDDGFPDDCNM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_JDDGFPDDCNM_OFFSET))(this, a1);
		}

		::System::Void OBMOFHGPCNA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_OBMOFHGPCNA_OFFSET))(this, a1);
		}

		::System::Void DGHLCFLEJFC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_DGHLCFLEJFC_OFFSET))(this, a1);
		}

		::System::Void IOPDMDLLBIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_IOPDMDLLBIN_OFFSET))(this);
		}

		::System::Void FEEKEILMJAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_FEEKEILMJAD_OFFSET))(this);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void BOHOCEBKLHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_BOHOCEBKLHG_OFFSET))(this);
		}

		::System::Void NJCMDMFEHLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_NJCMDMFEHLE_OFFSET))(this);
		}

		::System::Void BGBJGJMDABI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_BGBJGJMDABI_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Boolean EAOCLDGEKOO(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_EAOCLDGEKOO_OFFSET))(this, a1);
		}

		::System::Void KKOOIGIMEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_KKOOIGIMEBK_OFFSET))(this);
		}

		::System::Single NDJEGHKIAEG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_NDJEGHKIAEG_OFFSET))(this);
		}

		::System::Void FLPAACJOGLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_FLPAACJOGLJ_OFFSET))(this);
		}

		::System::Void ODDFFNPOLJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_ODDFFNPOLJO_OFFSET))(this);
		}

		::System::Void MFBBAKOLIKE(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_MFBBAKOLIKE_OFFSET))(this, a1);
		}

		::System::Boolean FOCCJGCECEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_FOCCJGCECEG_OFFSET))(this);
		}

		::System::Boolean KDKLEPAECAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_KDKLEPAECAJ_OFFSET))(this);
		}

		::System::Boolean GKLODMLNCCI(::RPG::Client::LittleGame::FiveDim::SurfaceBorderType a1, ::KLNKLOMDIIC a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_GKLODMLNCCI_OFFSET))(this, a1, a2);
		}

		::System::Boolean INGFBKBPNNI(::System::UInt32 a1, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType a2, ::KLNKLOMDIIC a3, ::KLNKLOMDIIC a4, ::System::UInt32 a5, ::RPG::Client::LittleGame::FiveDim::SwitchSurfaceType a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType, ::KLNKLOMDIIC, ::KLNKLOMDIIC, ::System::UInt32, ::RPG::Client::LittleGame::FiveDim::SwitchSurfaceType))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_INGFBKBPNNI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HMEIAHCNHKK(::RPG::Client::LittleGame::FiveDim::SurfaceBorderType a1, ::KLNKLOMDIIC a2, ::System::UInt32 a3, ::KLNKLOMDIIC a4, ::RPG::Client::LittleGame::FiveDim::SwitchSurfaceType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::SurfaceBorderType, ::KLNKLOMDIIC, ::System::UInt32, ::KLNKLOMDIIC, ::RPG::Client::LittleGame::FiveDim::SwitchSurfaceType))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_HMEIAHCNHKK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_GBCHFFLMIIC_OFFSET))(this);
		}

		::System::Void HACLDBHKMEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_HACLDBHKMEK_OFFSET))(this);
		}

		::System::Void BHCILDNPGFD(::System::Int32 a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_BHCILDNPGFD_OFFSET))(this, a1, a2);
		}

		::System::Void PBHNKOHNJEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_PBHNKOHNJEO_OFFSET))(this);
		}

		::System::Void DOCPIAKLICF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_DOCPIAKLICF_OFFSET))(this, a1);
		}

		::System::Void KAILPNNLAOA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_KAILPNNLAOA_OFFSET))(this, a1);
		}

		::System::Void MMPGJEFFEPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_MMPGJEFFEPH_OFFSET))(this);
		}

		::System::Void GPKLKOBMOHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_GPKLKOBMOHM_OFFSET))(this);
		}

		::PEEDLCHFAFL* FNLDKPJHDOO()
		{
			return ((::PEEDLCHFAFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_FNLDKPJHDOO_OFFSET))(this);
		}

		::NDDFLGNNMDK* PIIBNJGPLLO()
		{
			return ((::NDDFLGNNMDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_PIIBNJGPLLO_OFFSET))(this);
		}

		::HIOEAKHGILF* GBOECLMFGGE()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_GBOECLMFGGE_OFFSET))(this);
		}

		::HIOEAKHGILF* MGNAJNFCKLK()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_MGNAJNFCKLK_OFFSET))(this);
		}

		::NOOHPODHIAA* DCACPFJPOFJ()
		{
			return ((::NOOHPODHIAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_DCACPFJPOFJ_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimPropMoveConfig* AMPIMJJBKBE()
		{
			return ((::RPG::GameCore::FiveDimPropMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_AMPIMJJBKBE_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimPropBakedMoveConfig* ANJDIBJDFKF()
		{
			return ((::RPG::GameCore::FiveDimPropBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_ANJDIBJDFKF_OFFSET))(this);
		}

		::UnityEngine::Transform* HMCNFIGPFDL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_HMCNFIGPFDL_OFFSET))(this);
		}

		::UnityEngine::Transform* KEAFGCDMHEO()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_KEAFGCDMHEO_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* NJJBGJHAFOB()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_NJJBGJHAFOB_OFFSET))(this);
		}

		::UnityEngine::ConfigurableJoint* AOFPLLGOKJM()
		{
			return ((::UnityEngine::ConfigurableJoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_AOFPLLGOKJM_OFFSET))(this);
		}

		::System::Boolean PCFKAIMMOJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_PCFKAIMMOJN_OFFSET))(this);
		}

		::System::Single LHEJLLDPHAG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_LHEJLLDPHAG_OFFSET))(this);
		}

		::System::Single GHAKCBLOBBL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_GHAKCBLOBBL_OFFSET))(this);
		}

		::System::Single EEJFPNICDOP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_EEJFPNICDOP_OFFSET))(this);
		}

		::EHJIFGMNNPP IDDMNPEOCBP()
		{
			return ((::EHJIFGMNNPP(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKMJHGEDE_IDDMNPEOCBP_OFFSET))(this);
		}

	};
