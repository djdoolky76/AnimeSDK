#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerBeatBackReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerRebornReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMiniGameEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMiniGameExitType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPlayerInteractType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimStatisticPlayerActionType.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/System/Object.h"
class DIMDJPECCEM_KCDKJMCHJJB;
class DMDIHKEBDJJ;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define DIMDJPECCEM_ALNKIGCIDFN_OFFSET UNITYSDK_OFFSET(0xF21AF20)
#define DIMDJPECCEM_BAKFOEBOKOB_OFFSET UNITYSDK_OFFSET(0xF21CCE0)
#define DIMDJPECCEM_BEILLFHJABJ_OFFSET UNITYSDK_OFFSET(0xF21C800)
#define DIMDJPECCEM_BKMBADFPBBP_OFFSET UNITYSDK_OFFSET(0xF212810)
#define DIMDJPECCEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xF21CFF0)
#define DIMDJPECCEM_CGDBOCACODE_OFFSET UNITYSDK_OFFSET(0xF21B390)
#define DIMDJPECCEM_CIPBKBPEJNF_OFFSET UNITYSDK_OFFSET(0xF21AFF0)
#define DIMDJPECCEM_CMCAMJOKIIC_OFFSET UNITYSDK_OFFSET(0xF21CD70)
#define DIMDJPECCEM_CNHKBHKIDLC_OFFSET UNITYSDK_OFFSET(0xF219020)
#define DIMDJPECCEM_COBKCFCNJDI_OFFSET UNITYSDK_OFFSET(0xF217DF0)
#define DIMDJPECCEM_CTOR_OFFSET UNITYSDK_OFFSET(0xF20E900)
#define DIMDJPECCEM_DCMFMGDAKEL_OFFSET UNITYSDK_OFFSET(0xF21B8D0)
#define DIMDJPECCEM_DEJOKPHFBPK_OFFSET UNITYSDK_OFFSET(0xF216470)
#define DIMDJPECCEM_DEJOLJPPLPF_OFFSET UNITYSDK_OFFSET(0xF21C490)
#define DIMDJPECCEM_DEOLNDCECME_OFFSET UNITYSDK_OFFSET(0xF20EAB0)
#define DIMDJPECCEM_DFHEMLHAAPL_OFFSET UNITYSDK_OFFSET(0xF20EE70)
#define DIMDJPECCEM_DHLIBDLNNIP_OFFSET UNITYSDK_OFFSET(0xF21CC50)
#define DIMDJPECCEM_DIFJHNOJINF_1_OFFSET UNITYSDK_OFFSET(0xF21A860)
#define DIMDJPECCEM_DIFJHNOJINF_2_OFFSET UNITYSDK_OFFSET(0xF21A730)
#define DIMDJPECCEM_DIFJHNOJINF_OFFSET UNITYSDK_OFFSET(0xF21A6B0)
#define DIMDJPECCEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF20EA60)
#define DIMDJPECCEM_DMFELKLGJDN_OFFSET UNITYSDK_OFFSET(0xF21ACA0)
#define DIMDJPECCEM_DOEJDDBEECI_OFFSET UNITYSDK_OFFSET(0xF215B80)
#define DIMDJPECCEM_DPDOFFIHBKD_OFFSET UNITYSDK_OFFSET(0xF21B220)
#define DIMDJPECCEM_DPGDOEEDJIB_OFFSET UNITYSDK_OFFSET(0xF21AB90)
#define DIMDJPECCEM_EAHFHFNFDFL_OFFSET UNITYSDK_OFFSET(0xF218950)
#define DIMDJPECCEM_EBEGBPCAMFO_OFFSET UNITYSDK_OFFSET(0xF217640)
#define DIMDJPECCEM_EHNNAIDLLCK_OFFSET UNITYSDK_OFFSET(0xF21CA10)
#define DIMDJPECCEM_EMMANDGNNDI_OFFSET UNITYSDK_OFFSET(0xF2151C0)
#define DIMDJPECCEM_HDEFHDMIGBK_OFFSET UNITYSDK_OFFSET(0xF20F300)
#define DIMDJPECCEM_HKEODMEEDJM_OFFSET UNITYSDK_OFFSET(0xF219940)
#define DIMDJPECCEM_HLEJKLFJJFD_OFFSET UNITYSDK_OFFSET(0xF20EF10)
#define DIMDJPECCEM_HNKAOPNANBM_OFFSET UNITYSDK_OFFSET(0xF21AAD0)
#define DIMDJPECCEM_IHLPKPNPGIA_OFFSET UNITYSDK_OFFSET(0xF20FE60)
#define DIMDJPECCEM_INONBLEGBOH_OFFSET UNITYSDK_OFFSET(0xF20EE00)
#define DIMDJPECCEM_JCPPIHMMCMP_OFFSET UNITYSDK_OFFSET(0xF218440)
#define DIMDJPECCEM_JFKOGOMOMMM_OFFSET UNITYSDK_OFFSET(0xF21CEC0)
#define DIMDJPECCEM_JKHEMICEOHP_OFFSET UNITYSDK_OFFSET(0xF21CAA0)
#define DIMDJPECCEM_JPHJDNAKGED_OFFSET UNITYSDK_OFFSET(0xF216DE0)
#define DIMDJPECCEM_KHGKAHMFCMM_OFFSET UNITYSDK_OFFSET(0xF21BEB0)
#define DIMDJPECCEM_KJEPNOCACHC_OFFSET UNITYSDK_OFFSET(0xF21B580)
#define DIMDJPECCEM_KNBANMOAPBI_OFFSET UNITYSDK_OFFSET(0xF217210)
#define DIMDJPECCEM_LGGOMPENFAA_OFFSET UNITYSDK_OFFSET(0xF20ED00)
#define DIMDJPECCEM_LJGDNFIALHL_OFFSET UNITYSDK_OFFSET(0xF218090)
#define DIMDJPECCEM_LLNMPPFDKBC_OFFSET UNITYSDK_OFFSET(0xF21C6F0)
#define DIMDJPECCEM_LOAEKEGCJGH_OFFSET UNITYSDK_OFFSET(0xF219430)
#define DIMDJPECCEM_MNPGHMDPAEP_OFFSET UNITYSDK_OFFSET(0xF21CF50)
#define DIMDJPECCEM_MPNPJCGLBCE_OFFSET UNITYSDK_OFFSET(0xF217A60)
#define DIMDJPECCEM_OOHPCLCONCP_OFFSET UNITYSDK_OFFSET(0xF217FE0)
#define DIMDJPECCEM_PBHKKNMGCKG_OFFSET UNITYSDK_OFFSET(0xF21C590)
#define DIMDJPECCEM_PJDMFPDOFFA_OFFSET UNITYSDK_OFFSET(0xF218C70)

inline static constexpr unsigned int DIMDJPECCEM_TypeDefinitionIndex = 76898;

	class DIMDJPECCEM : public ::System::Object
	{
	public:
		::DIMDJPECCEM_KCDKJMCHJJB* CONHPJGMDKE; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* EAFLKELCAJA; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::String*>** StaticGet_GIAKNOADPMN()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::String*>**)UnitySDK::FromName("", "DIMDJPECCEM")->GetStaticField(0x52490);
		}

		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIMDJPECCEM_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DISPOSE_OFFSET))(this);
		}

		::System::Void DEOLNDCECME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DEOLNDCECME_OFFSET))(this);
		}

		::System::Void LGGOMPENFAA(::System::String* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimEnterType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGame::FiveDim::FiveDimEnterType, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_LGGOMPENFAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DFHEMLHAAPL(::RPG::Client::LittleGame::FiveDim::FiveDimExitType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DFHEMLHAAPL_OFFSET))(this, a1, a2);
		}

		::System::Void HLEJKLFJJFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_HLEJKLFJJFD_OFFSET))(this);
		}

		::System::Void HDEFHDMIGBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_HDEFHDMIGBK_OFFSET))(this);
		}

		::System::Void MPNPJCGLBCE(::RPG::GameCore::FiveDimGameplayMode a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameEnterType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameEnterType))((::PBYTE)hIl2Cpp + DIMDJPECCEM_MPNPJCGLBCE_OFFSET))(this, a1, a2);
		}

		::System::Void LJGDNFIALHL(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_LJGDNFIALHL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JCPPIHMMCMP(::RPG::GameCore::FiveDimGameplayMode a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameExitType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameExitType))((::PBYTE)hIl2Cpp + DIMDJPECCEM_JCPPIHMMCMP_OFFSET))(this, a1, a2);
		}

		::System::Void EAHFHFNFDFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_EAHFHFNFDFL_OFFSET))(this, a1);
		}

		::System::Void PJDMFPDOFFA(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_PJDMFPDOFFA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CNHKBHKIDLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_CNHKBHKIDLC_OFFSET))(this, a1);
		}

		::System::Void LOAEKEGCJGH(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_LOAEKEGCJGH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* HKEODMEEDJM(::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_HKEODMEEDJM_OFFSET))(this, a1);
		}

		::System::Boolean COBKCFCNJDI(::RPG::GameCore::FiveDimGameplayMode a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::System::String*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_COBKCFCNJDI_OFFSET))(this, a1, a2);
		}

		::System::UInt32 OOHPCLCONCP(::RPG::GameCore::FiveDimGameplayMode a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + DIMDJPECCEM_OOHPCLCONCP_OFFSET))(this, a1);
		}

		::System::Void INONBLEGBOH(::DMDIHKEBDJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDIHKEBDJJ*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_INONBLEGBOH_OFFSET))(this, a1);
		}

		::System::Boolean DIFJHNOJINF(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DIFJHNOJINF_OFFSET))(this, a1);
		}

		::System::Boolean DIFJHNOJINF_1(::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DIFJHNOJINF_1_OFFSET))(this, a1);
		}

		::System::Boolean DIFJHNOJINF_2(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DIFJHNOJINF_2_OFFSET))(this, a1);
		}

		::System::Void HNKAOPNANBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_HNKAOPNANBM_OFFSET))(this, a1);
		}

		::System::Void DPGDOEEDJIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DPGDOEEDJIB_OFFSET))(this, a1);
		}

		::System::Void DMFELKLGJDN(::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DMFELKLGJDN_OFFSET))(this, a1);
		}

		::System::String* IHLPKPNPGIA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_IHLPKPNPGIA_OFFSET))(this);
		}

		::System::Void CIPBKBPEJNF(::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason))((::PBYTE)hIl2Cpp + DIMDJPECCEM_CIPBKBPEJNF_OFFSET))(this, a1);
		}

		::System::String* BKMBADFPBBP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_BKMBADFPBBP_OFFSET))(this);
		}

		::System::Void DPDOFFIHBKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DPDOFFIHBKD_OFFSET))(this);
		}

		::System::Void KJEPNOCACHC(::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KJEPNOCACHC_OFFSET))(this, a1);
		}

		::System::Void DCMFMGDAKEL(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DCMFMGDAKEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void KHGKAHMFCMM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KHGKAHMFCMM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DEJOLJPPLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DEJOLJPPLPF_OFFSET))(this);
		}

		::System::Void PBHKKNMGCKG(::RPG::Client::LittleGame::Move::MoveState a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DIMDJPECCEM_PBHKKNMGCKG_OFFSET))(this, a1, a2);
		}

		::System::Void LLNMPPFDKBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_LLNMPPFDKBC_OFFSET))(this);
		}

		::System::String* DEJOKPHFBPK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DEJOKPHFBPK_OFFSET))(this);
		}

		::System::String* JPHJDNAKGED()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_JPHJDNAKGED_OFFSET))(this);
		}

		::System::String* KNBANMOAPBI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KNBANMOAPBI_OFFSET))(this);
		}

		::System::Void BEILLFHJABJ(::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::UInt32>* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::UInt32>*, ::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType))((::PBYTE)hIl2Cpp + DIMDJPECCEM_BEILLFHJABJ_OFFSET))(this, a1, a2);
		}

		::System::String* EMMANDGNNDI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_EMMANDGNNDI_OFFSET))(this);
		}

		::System::Void CGDBOCACODE(::DMDIHKEBDJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDIHKEBDJJ*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_CGDBOCACODE_OFFSET))(this, a1);
		}

		::System::Void EHNNAIDLLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_EHNNAIDLLCK_OFFSET))(this);
		}

		::System::Void JKHEMICEOHP(::RPG::Client::LittleGame::FiveDim::FiveDimPlayerInteractType a1, ::HIOEAKHGILF* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimPlayerInteractType, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIMDJPECCEM_JKHEMICEOHP_OFFSET))(this, a1, a2, a3);
		}

		::System::String* DOEJDDBEECI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DOEJDDBEECI_OFFSET))(this);
		}

		::System::String* EBEGBPCAMFO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_EBEGBPCAMFO_OFFSET))(this);
		}

		::System::Void DHLIBDLNNIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_DHLIBDLNNIP_OFFSET))(this);
		}

		::System::Void BAKFOEBOKOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_BAKFOEBOKOB_OFFSET))(this);
		}

		::System::Void CMCAMJOKIIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_CMCAMJOKIIC_OFFSET))(this, a1);
		}

		::System::Void JFKOGOMOMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_JFKOGOMOMMM_OFFSET))(this);
		}

		::System::Void MNPGHMDPAEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMDJPECCEM_MNPGHMDPAEP_OFFSET))(this, a1);
		}

		::System::UInt32 ALNKIGCIDFN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_ALNKIGCIDFN_OFFSET))(this);
		}

	};
