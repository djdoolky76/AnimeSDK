#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceDirection.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class JBCHHGDHKIG;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace System { class Object; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGDBIAIAHPJ_AFIGANPJNLE_OFFSET UNITYSDK_OFFSET(0x1D76DDE0)
#define DGDBIAIAHPJ_BBEGJGDOPDE_OFFSET UNITYSDK_OFFSET(0x1D76DF60)
#define DGDBIAIAHPJ_BCDNBBILEGB_OFFSET UNITYSDK_OFFSET(0x1D76DB50)
#define DGDBIAIAHPJ_BFCBAFDJCAK_OFFSET UNITYSDK_OFFSET(0x1D76CE00)
#define DGDBIAIAHPJ_BKCBPDHJKKE_1_OFFSET UNITYSDK_OFFSET(0x1D76DD90)
#define DGDBIAIAHPJ_BKCBPDHJKKE_OFFSET UNITYSDK_OFFSET(0x1D76DA40)
#define DGDBIAIAHPJ_BMLKIDEOPBB_OFFSET UNITYSDK_OFFSET(0x1D76D730)
#define DGDBIAIAHPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D76E000)
#define DGDBIAIAHPJ_CMDFLKEMIDO_OFFSET UNITYSDK_OFFSET(0x1D76D200)
#define DGDBIAIAHPJ_CMDODPBMJDM_OFFSET UNITYSDK_OFFSET(0x1D76B660)
#define DGDBIAIAHPJ_CMNCGFKEMJC_OFFSET UNITYSDK_OFFSET(0x1D76B070)
#define DGDBIAIAHPJ_DDHOOHPCBPI_OFFSET UNITYSDK_OFFSET(0x1D76DA90)
#define DGDBIAIAHPJ_EBIOIPBOECO_OFFSET UNITYSDK_OFFSET(0x1D76D6D0)
#define DGDBIAIAHPJ_EKJHICIAJHH_OFFSET UNITYSDK_OFFSET(0x1D76B700)
#define DGDBIAIAHPJ_FNGLHAPGDNA_OFFSET UNITYSDK_OFFSET(0x1D76D680)
#define DGDBIAIAHPJ_HKPPGIJAAMM_OFFSET UNITYSDK_OFFSET(0x1D76DEA0)
#define DGDBIAIAHPJ_IDOHLDIAKJM_1_OFFSET UNITYSDK_OFFSET(0x1D76C880)
#define DGDBIAIAHPJ_IDOHLDIAKJM_OFFSET UNITYSDK_OFFSET(0x1D76C750)
#define DGDBIAIAHPJ_IEAHJEBDIBP_OFFSET UNITYSDK_OFFSET(0x1D76D4B0)
#define DGDBIAIAHPJ_IHBIJDMCCPE_OFFSET UNITYSDK_OFFSET(0x1D76C5C0)
#define DGDBIAIAHPJ_JCHLKOMEGBM_OFFSET UNITYSDK_OFFSET(0x1D76D630)
#define DGDBIAIAHPJ_JDEDIJHNCMP_1_OFFSET UNITYSDK_OFFSET(0x1D76B610)
#define DGDBIAIAHPJ_JDEDIJHNCMP_2_OFFSET UNITYSDK_OFFSET(0x1D76CAD0)
#define DGDBIAIAHPJ_JDEDIJHNCMP_OFFSET UNITYSDK_OFFSET(0x1D76CA70)
#define DGDBIAIAHPJ_JDEGIEFMOJK_OFFSET UNITYSDK_OFFSET(0x1D76AEB0)
#define DGDBIAIAHPJ_JDEOAJOCNNK_OFFSET UNITYSDK_OFFSET(0x1D76D8C0)
#define DGDBIAIAHPJ_JHAAICIBHOI_OFFSET UNITYSDK_OFFSET(0x1D76C6C0)
#define DGDBIAIAHPJ_JLJJMAHMFBA_OFFSET UNITYSDK_OFFSET(0x1D76B130)
#define DGDBIAIAHPJ_KFFIPIOJHIA_OFFSET UNITYSDK_OFFSET(0x1D76D030)
#define DGDBIAIAHPJ_KOKHNMDFPCC_OFFSET UNITYSDK_OFFSET(0x1D76B280)
#define DGDBIAIAHPJ_KPPBAJJNIII_OFFSET UNITYSDK_OFFSET(0x1D76D5E0)
#define DGDBIAIAHPJ_LDKMJCPDLLJ_OFFSET UNITYSDK_OFFSET(0x1D76B1D0)
#define DGDBIAIAHPJ_LELCAKIDOGO_OFFSET UNITYSDK_OFFSET(0x1D76C0C0)
#define DGDBIAIAHPJ_LJNEGKPAHPP_OFFSET UNITYSDK_OFFSET(0x1D76B6B0)
#define DGDBIAIAHPJ_MAIPKHPFJBB_OFFSET UNITYSDK_OFFSET(0x1D76D800)
#define DGDBIAIAHPJ_MCGIFJKCNGM_OFFSET UNITYSDK_OFFSET(0x1D76D9B0)
#define DGDBIAIAHPJ_MIMEAFNJEMI_OFFSET UNITYSDK_OFFSET(0x1D76C660)
#define DGDBIAIAHPJ_MNFFCDELMAE_OFFSET UNITYSDK_OFFSET(0x1D76DC10)
#define DGDBIAIAHPJ_NIKADEILMND_OFFSET UNITYSDK_OFFSET(0x1D76B740)
#define DGDBIAIAHPJ_ODKOOMPDJHB_OFFSET UNITYSDK_OFFSET(0x1D76CB20)
#define DGDBIAIAHPJ_OEIICNLGGIM_OFFSET UNITYSDK_OFFSET(0x1D76BF30)
#define DGDBIAIAHPJ_OIHOLIDCEIG_OFFSET UNITYSDK_OFFSET(0x1D76B9D0)
#define DGDBIAIAHPJ_OMJBKJKIIIN_OFFSET UNITYSDK_OFFSET(0x1D76DD30)
#define DGDBIAIAHPJ_PGIPDOHHOCD_OFFSET UNITYSDK_OFFSET(0x1D76B2D0)
#define DGDBIAIAHPJ_PHNNNAHOOIP_OFFSET UNITYSDK_OFFSET(0x1D76CEA0)
#define DGDBIAIAHPJ_PKHEJFBFHLO_OFFSET UNITYSDK_OFFSET(0x1D76D920)

inline static constexpr unsigned int DGDBIAIAHPJ_TypeDefinitionIndex = 38152;

	class DGDBIAIAHPJ : public ::System::Object
	{
	public:
		static ::RPG::MVector3* StaticGet_KNIDOMPLDKM()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "DGDBIAIAHPJ")->GetStaticField(0x15110);
		}

		static ::RPG::MVector3* StaticGet_MJJFNKHFICE()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "DGDBIAIAHPJ")->GetStaticField(0x1511C);
		}

		static ::RPG::MVector3* StaticGet_HFHMEHIPGOE()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "DGDBIAIAHPJ")->GetStaticField(0x15128);
		}

		static ::RPG::MVector3* StaticGet_DLPJFJDEGPE()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "DGDBIAIAHPJ")->GetStaticField(0x15134);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_CCTOR_OFFSET))();
		}

		static ::System::Void JDEGIEFMOJK(::IFBFJDCECML* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::IFBFJDCECML*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_JDEGIEFMOJK_OFFSET))(a1, a2);
		}

		static ::System::Boolean CMNCGFKEMJC(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_CMNCGFKEMJC_OFFSET))(a1);
		}

		static ::System::Boolean JLJJMAHMFBA(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_JLJJMAHMFBA_OFFSET))(a1);
		}

		static ::RPG::MVector3 LDKMJCPDLLJ(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_LDKMJCPDLLJ_OFFSET))(a1);
		}

		static ::System::Boolean KOKHNMDFPCC(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_KOKHNMDFPCC_OFFSET))(a1);
		}

		static ::System::Void PGIPDOHHOCD(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_PGIPDOHHOCD_OFFSET))(a1, a2);
		}

		static ::System::Boolean CMDODPBMJDM(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_CMDODPBMJDM_OFFSET))(a1);
		}

		static ::System::Boolean LJNEGKPAHPP(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_LJNEGKPAHPP_OFFSET))(a1);
		}

		static ::System::Boolean EKJHICIAJHH(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_EKJHICIAJHH_OFFSET))(a1);
		}

		static ::RPG::MVector3 NIKADEILMND(::RPG::GameCore::CakeRaceDirection a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::CakeRaceDirection))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_NIKADEILMND_OFFSET))(a1);
		}

		static ::RPG::GameCore::CakeRaceDirection OIHOLIDCEIG(::RPG::MVector3 a1)
		{
			return ((::RPG::GameCore::CakeRaceDirection(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_OIHOLIDCEIG_OFFSET))(a1);
		}

		static ::RPG::MVector3 OEIICNLGGIM(::RPG::GameCore::CakeRaceDirection a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::CakeRaceDirection))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_OEIICNLGGIM_OFFSET))(a1);
		}

		static ::RPG::MVector3 LELCAKIDOGO(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_LELCAKIDOGO_OFFSET))(a1);
		}

		static ::System::Boolean IHBIJDMCCPE(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_IHBIJDMCCPE_OFFSET))(a1);
		}

		static ::System::Boolean MIMEAFNJEMI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_MIMEAFNJEMI_OFFSET))(a1, a2);
		}

		static ::System::Boolean JHAAICIBHOI(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_JHAAICIBHOI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 IDOHLDIAKJM(::RPG::GameCore::CakeRaceDirection a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::CakeRaceDirection))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_IDOHLDIAKJM_OFFSET))(a1);
		}

		static ::System::Int32 IDOHLDIAKJM_1(::RPG::MVector3 a1)
		{
			return ((::System::Int32(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_IDOHLDIAKJM_1_OFFSET))(a1);
		}

		static ::System::Single JDEDIJHNCMP(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_JDEDIJHNCMP_OFFSET))(a1);
		}

		static ::System::Single JDEDIJHNCMP_1(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_JDEDIJHNCMP_1_OFFSET))(a1);
		}

		static ::System::Single JDEDIJHNCMP_2(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_JDEDIJHNCMP_2_OFFSET))(a1);
		}

		static ::RPG::MVector3 ODKOOMPDJHB(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_ODKOOMPDJHB_OFFSET))(a1, a2, a3);
		}

		static ::JBCHHGDHKIG* BFCBAFDJCAK(::RPG::MVector3 a1)
		{
			return ((::JBCHHGDHKIG*(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_BFCBAFDJCAK_OFFSET))(a1);
		}

		static ::System::Boolean PHNNNAHOOIP(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::Random* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Random*, ::System::UInt32))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_PHNNNAHOOIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CMDFLKEMIDO(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::Random* a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Random*, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_CMDFLKEMIDO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 KFFIPIOJHIA(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::Random* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Random*, ::System::UInt32))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_KFFIPIOJHIA_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 IEAHJEBDIBP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_IEAHJEBDIBP_OFFSET))(a1, a2);
		}

		static ::System::Boolean KPPBAJJNIII(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_KPPBAJJNIII_OFFSET))(a1);
		}

		static ::System::Boolean JCHLKOMEGBM(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_JCHLKOMEGBM_OFFSET))(a1);
		}

		static ::System::Boolean FNGLHAPGDNA(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_FNGLHAPGDNA_OFFSET))(a1);
		}

		static ::System::Boolean EBIOIPBOECO(::RPG::GameCore::CakeRaceAIState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_EBIOIPBOECO_OFFSET))(a1);
		}

		static ::System::Boolean BMLKIDEOPBB(::RPG::GameCore::CakeRaceAIState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_BMLKIDEOPBB_OFFSET))(a1);
		}

		static ::System::Boolean MAIPKHPFJBB(::RPG::GameCore::CakeRaceAIState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_MAIPKHPFJBB_OFFSET))(a1);
		}

		static ::System::Boolean JDEOAJOCNNK(::RPG::GameCore::CakeRaceAIState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_JDEOAJOCNNK_OFFSET))(a1);
		}

		static ::System::UInt32 PKHEJFBFHLO(::IFBFJDCECML* a1)
		{
			return ((::System::UInt32(*)(::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_PKHEJFBFHLO_OFFSET))(a1);
		}

		static ::System::Int32 MCGIFJKCNGM(::RPG::GameCore::CakeRaceRegionCellConfig* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::CakeRaceRegionCellConfig*))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_MCGIFJKCNGM_OFFSET))(a1);
		}

		static ::System::UInt64 BKCBPDHJKKE(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::System::UInt64(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_BKCBPDHJKKE_OFFSET))(a1);
		}

		static ::System::Boolean DDHOOHPCBPI(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_DDHOOHPCBPI_OFFSET))(a1);
		}

		static ::System::Boolean BCDNBBILEGB(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_BCDNBBILEGB_OFFSET))(a1);
		}

		static ::System::Boolean MNFFCDELMAE(::RPG::GameCore::CakeRaceMoveState a1, ::RPG::GameCore::CakeRaceAIState a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_MNFFCDELMAE_OFFSET))(a1, a2);
		}

		static ::System::UInt64 OMJBKJKIIIN(::RPG::GameCore::CakeRaceAIState a1)
		{
			return ((::System::UInt64(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_OMJBKJKIIIN_OFFSET))(a1);
		}

		static ::System::UInt64 BKCBPDHJKKE_1(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::UInt64(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_BKCBPDHJKKE_1_OFFSET))(a1);
		}

		static ::System::Boolean AFIGANPJNLE(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_AFIGANPJNLE_OFFSET))(a1);
		}

		static ::System::Boolean HKPPGIJAAMM(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_HKPPGIJAAMM_OFFSET))(a1);
		}

		static ::System::UInt64 BBEGJGDOPDE(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + DGDBIAIAHPJ_BBEGJGDOPDE_OFFSET))(a1, a2);
		}

	};
