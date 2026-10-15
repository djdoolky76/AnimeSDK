#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/RPG/GameCore/ActionBarType.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class DEKDEPEBHNC;
class DFFPKLFKGAO;
class EBBJGCKIBAA;
class ENGBNDIPDJL;
class FODPNNIJCJI;
class GEDMHFPPBHN;
class LODCPPPMJJG;
class NJPNJAKPNDL;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelSingleInsertAbilityFinishOrAbort; }
namespace RPG::GameCore { class LevelTurnUltraSkillEnd; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define KKHNFGNFJFD_AAAFKDNNJHI_OFFSET UNITYSDK_OFFSET(0xB4CB4A0)
#define KKHNFGNFJFD_AABPBLOMCHE_OFFSET UNITYSDK_OFFSET(0xB4C5020)
#define KKHNFGNFJFD_AANLAOCCCJA_OFFSET UNITYSDK_OFFSET(0xB4CAD10)
#define KKHNFGNFJFD_ADKBCLOLJFA_OFFSET UNITYSDK_OFFSET(0xB4C68F0)
#define KKHNFGNFJFD_AFIJBDMGDPE_OFFSET UNITYSDK_OFFSET(0xB4BE9F0)
#define KKHNFGNFJFD_AHDODIOEGMO_OFFSET UNITYSDK_OFFSET(0xB4C0100)
#define KKHNFGNFJFD_AHLDNLDKMGF_OFFSET UNITYSDK_OFFSET(0xB4BF030)
#define KKHNFGNFJFD_ANAGAHONMKO_OFFSET UNITYSDK_OFFSET(0xB4C6D40)
#define KKHNFGNFJFD_BCJPPPDNCJO_OFFSET UNITYSDK_OFFSET(0xB4C42D0)
#define KKHNFGNFJFD_BGBPLLINJDN_OFFSET UNITYSDK_OFFSET(0xB4C8840)
#define KKHNFGNFJFD_BKGHFFJHOOA_OFFSET UNITYSDK_OFFSET(0xB4CA420)
#define KKHNFGNFJFD_BMNMINCCNLK_OFFSET UNITYSDK_OFFSET(0xB4CAB50)
#define KKHNFGNFJFD_BMPGJHHCMOI_OFFSET UNITYSDK_OFFSET(0xB4BE140)
#define KKHNFGNFJFD_CBMFHLPLDHM_OFFSET UNITYSDK_OFFSET(0xB4BFBA0)
#define KKHNFGNFJFD_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4CBC50)
#define KKHNFGNFJFD_CMCMNIBNEAG_OFFSET UNITYSDK_OFFSET(0xB4C0D10)
#define KKHNFGNFJFD_COPPNLLPEIE_OFFSET UNITYSDK_OFFSET(0xB4C94C0)
#define KKHNFGNFJFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB4BD160)
#define KKHNFGNFJFD_DENMKBPCCLL_OFFSET UNITYSDK_OFFSET(0xB4BF2A0)
#define KKHNFGNFJFD_DEPDICEBBOD_OFFSET UNITYSDK_OFFSET(0xB4C49C0)
#define KKHNFGNFJFD_DHEBCIIAHCL_OFFSET UNITYSDK_OFFSET(0xB4C6480)
#define KKHNFGNFJFD_DKDKKHGIKFI_OFFSET UNITYSDK_OFFSET(0xB4BFEE0)
#define KKHNFGNFJFD_DNDCLGMIFFJ_OFFSET UNITYSDK_OFFSET(0xB4BDAD0)
#define KKHNFGNFJFD_EABMHFJCHPI_OFFSET UNITYSDK_OFFSET(0xB4C0EC0)
#define KKHNFGNFJFD_EACGAGNBMMK_OFFSET UNITYSDK_OFFSET(0xB4C2C80)
#define KKHNFGNFJFD_EADOPLNBMML_OFFSET UNITYSDK_OFFSET(0xB4BF7A0)
#define KKHNFGNFJFD_EAIIEAEOMLH_OFFSET UNITYSDK_OFFSET(0xB4CB680)
#define KKHNFGNFJFD_EBJAHNGPLCB_OFFSET UNITYSDK_OFFSET(0xB4C14B0)
#define KKHNFGNFJFD_ECKJGBIPAEM_OFFSET UNITYSDK_OFFSET(0xB4C2E00)
#define KKHNFGNFJFD_ECLJOEHBPOD_OFFSET UNITYSDK_OFFSET(0xB4C3140)
#define KKHNFGNFJFD_ELDEKOFDGJC_OFFSET UNITYSDK_OFFSET(0xB4C9EF0)
#define KKHNFGNFJFD_FCJNFLMBKCM_OFFSET UNITYSDK_OFFSET(0xB4C8220)
#define KKHNFGNFJFD_FDLGEJFANHH_OFFSET UNITYSDK_OFFSET(0xB4C4930)
#define KKHNFGNFJFD_FGPGLNJHBIO_OFFSET UNITYSDK_OFFSET(0xB4CAD70)
#define KKHNFGNFJFD_FIJHCPHMBFP_OFFSET UNITYSDK_OFFSET(0xB4CAE80)
#define KKHNFGNFJFD_FKFCANENMMA_OFFSET UNITYSDK_OFFSET(0xB4BF730)
#define KKHNFGNFJFD_FOGAGEEKFCM_OFFSET UNITYSDK_OFFSET(0xB4BF600)
#define KKHNFGNFJFD_GAFOALCDJAI_OFFSET UNITYSDK_OFFSET(0xB4C72D0)
#define KKHNFGNFJFD_GAMNKBDNDBL_OFFSET UNITYSDK_OFFSET(0xB4C3CF0)
#define KKHNFGNFJFD_GHADGBEAMCI_OFFSET UNITYSDK_OFFSET(0xB4C5200)
#define KKHNFGNFJFD_GJLBDDMHEDD_OFFSET UNITYSDK_OFFSET(0xB4C2880)
#define KKHNFGNFJFD_GPBPEDLJHLO_OFFSET UNITYSDK_OFFSET(0xB4C8B20)
#define KKHNFGNFJFD_HAGAMPJDHHL_OFFSET UNITYSDK_OFFSET(0xB4C6BD0)
#define KKHNFGNFJFD_HKMEMAGBBLE_OFFSET UNITYSDK_OFFSET(0xB4C1800)
#define KKHNFGNFJFD_HKOCHMDPCDM_OFFSET UNITYSDK_OFFSET(0xB4BD870)
#define KKHNFGNFJFD_HMACMHFBCBI_OFFSET UNITYSDK_OFFSET(0xB4C92F0)
#define KKHNFGNFJFD_HPBNJPHKKGO_OFFSET UNITYSDK_OFFSET(0xB4C4800)
#define KKHNFGNFJFD_IBPAAIILAIF_OFFSET UNITYSDK_OFFSET(0xB4C0430)
#define KKHNFGNFJFD_IDODIFGFFIK_OFFSET UNITYSDK_OFFSET(0xB4BE980)
#define KKHNFGNFJFD_IEPOOMNLDIB_OFFSET UNITYSDK_OFFSET(0xB4C06E0)
#define KKHNFGNFJFD_IJPFBLDMPCD_OFFSET UNITYSDK_OFFSET(0xB4C0F50)
#define KKHNFGNFJFD_IKBNPFBHEKN_OFFSET UNITYSDK_OFFSET(0xB4C5AF0)
#define KKHNFGNFJFD_ILCIIABNJNB_OFFSET UNITYSDK_OFFSET(0xB4CAC80)
#define KKHNFGNFJFD_JBCCHFGEIPD_OFFSET UNITYSDK_OFFSET(0xB4C1220)
#define KKHNFGNFJFD_JCGJHOHBLFN_OFFSET UNITYSDK_OFFSET(0xB4C4DB0)
#define KKHNFGNFJFD_JCHLABMJCGE_OFFSET UNITYSDK_OFFSET(0xB4CA310)
#define KKHNFGNFJFD_JGHDHKFMMLJ_OFFSET UNITYSDK_OFFSET(0xB4BDE10)
#define KKHNFGNFJFD_JIHOMKCFMBF_OFFSET UNITYSDK_OFFSET(0xB4C4880)
#define KKHNFGNFJFD_JLBHDKKJEPD_OFFSET UNITYSDK_OFFSET(0xB4C5990)
#define KKHNFGNFJFD_JMIGGHODMPB_OFFSET UNITYSDK_OFFSET(0xB4BE060)
#define KKHNFGNFJFD_JOODBGFJOLG_OFFSET UNITYSDK_OFFSET(0xB4C8FA0)
#define KKHNFGNFJFD_KDIFOLBBJLN_OFFSET UNITYSDK_OFFSET(0xB4C8CF0)
#define KKHNFGNFJFD_KEKOAGKLNPK_1_OFFSET UNITYSDK_OFFSET(0xB4C0BA0)
#define KKHNFGNFJFD_KEKOAGKLNPK_OFFSET UNITYSDK_OFFSET(0xB4C0B30)
#define KKHNFGNFJFD_KFKOCPJJMDA_OFFSET UNITYSDK_OFFSET(0xB4C08F0)
#define KKHNFGNFJFD_KLJCDNFEKHO_OFFSET UNITYSDK_OFFSET(0xB4C3B70)
#define KKHNFGNFJFD_KLNFPMFPCCN_OFFSET UNITYSDK_OFFSET(0xB4CADE0)
#define KKHNFGNFJFD_KMHOONLFPOL_OFFSET UNITYSDK_OFFSET(0xB4C1B30)
#define KKHNFGNFJFD_KNEEOPNBMCE_OFFSET UNITYSDK_OFFSET(0xB4C6150)
#define KKHNFGNFJFD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB4C1FA0)
#define KKHNFGNFJFD_LDKIBHEJNGO_OFFSET UNITYSDK_OFFSET(0xB4C6DC0)
#define KKHNFGNFJFD_LKJJKLFGDEB_OFFSET UNITYSDK_OFFSET(0xB4C4D20)
#define KKHNFGNFJFD_LOEFFPNGPAI_OFFSET UNITYSDK_OFFSET(0xB4CB5C0)
#define KKHNFGNFJFD_MFANPMBPOCN_OFFSET UNITYSDK_OFFSET(0xB4C6CA0)
#define KKHNFGNFJFD_MNDPLIACKBB_OFFSET UNITYSDK_OFFSET(0xB4C4B90)
#define KKHNFGNFJFD_MOLACKFELDB_OFFSET UNITYSDK_OFFSET(0xB4CAF60)
#define KKHNFGNFJFD_NDHMDJFECKI_OFFSET UNITYSDK_OFFSET(0xB4C2F80)
#define KKHNFGNFJFD_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xB4CAE30)
#define KKHNFGNFJFD_NFAEMIEIODB_OFFSET UNITYSDK_OFFSET(0xB4C5100)
#define KKHNFGNFJFD_NHNOBPKJBBC_OFFSET UNITYSDK_OFFSET(0xB4CB130)
#define KKHNFGNFJFD_NNFMFAPLEGM_OFFSET UNITYSDK_OFFSET(0xB4BD110)
#define KKHNFGNFJFD_NNMMHHGOJEI_OFFSET UNITYSDK_OFFSET(0xB4BD710)
#define KKHNFGNFJFD_NPKAANGMIAD_OFFSET UNITYSDK_OFFSET(0xB4C89D0)
#define KKHNFGNFJFD_OCAIBOFLHLA_OFFSET UNITYSDK_OFFSET(0xB4C0DB0)
#define KKHNFGNFJFD_OEJDOGDPEPH_OFFSET UNITYSDK_OFFSET(0xB4C4080)
#define KKHNFGNFJFD_OEKJAENHBJJ_OFFSET UNITYSDK_OFFSET(0xB4C1510)
#define KKHNFGNFJFD_OEPPEMAJKOF_OFFSET UNITYSDK_OFFSET(0xB4C01C0)
#define KKHNFGNFJFD_OFIAFGGKEDG_OFFSET UNITYSDK_OFFSET(0xB4C3D40)
#define KKHNFGNFJFD_OLJNNFMIANK_OFFSET UNITYSDK_OFFSET(0xB4BD990)
#define KKHNFGNFJFD_ONDKICMKDAC_OFFSET UNITYSDK_OFFSET(0xB4C1150)
#define KKHNFGNFJFD_OOGONDHLBOE_OFFSET UNITYSDK_OFFSET(0xB4CAED0)
#define KKHNFGNFJFD_PDCMHNCFOME_OFFSET UNITYSDK_OFFSET(0xB4C5340)
#define KKHNFGNFJFD_PDKACHEBDDA_OFFSET UNITYSDK_OFFSET(0xB4C2290)
#define KKHNFGNFJFD_PIGIHFCLJBC_OFFSET UNITYSDK_OFFSET(0xB4CBBB0)
#define KKHNFGNFJFD_PJEKMCNAOLI_OFFSET UNITYSDK_OFFSET(0xB4CB2A0)
#define KKHNFGNFJFD_PKMHJFLBBKC_OFFSET UNITYSDK_OFFSET(0xB4CB1B0)
#define KKHNFGNFJFD_PLDMHCDHCKJ_OFFSET UNITYSDK_OFFSET(0xB4BF410)
#define KKHNFGNFJFD_PMDJCGNEAPL_OFFSET UNITYSDK_OFFSET(0xB4C8E10)
#define KKHNFGNFJFD_POOMPHLBIHD_OFFSET UNITYSDK_OFFSET(0xB4C9D00)
#define KKHNFGNFJFD__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_22_0_OFFSET UNITYSDK_OFFSET(0xB4BE8F0)

	class KKHNFGNFJFD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* HFDJMJDAKDB; // 0x10
		::EBBJGCKIBAA* AEBBPNCLBDD; // 0x18
		::LODCPPPMJJG* FJDPPJMNMGG; // 0x20
		::DFFPKLFKGAO* IEGBIPMGBPA; // 0x28
		::GEDMHFPPBHN* DCAIEJFNLME; // 0x30
		::NJPNJAKPNDL* EBOBHDFAMCC; // 0x38
		::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>* EAIAALEFKIP; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BNHKNGJKCOI; // 0x48
		::System::Collections::Generic::Queue_1<::RPG::GameCore::LevelEntityActionDelayChanged*>* NBBAOKLLKBH; // 0x50
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* BADNJDBHBFD; // 0x58
		::RPG::GameCore::TurnBasedGameMode* BHJDJDPLCLP; // 0x60
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* IBLOIPMKMLH; // 0x68
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* HLNAMDHDFPA; // 0x70
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* OEBJBOGABMI; // 0x78
		::System::Boolean CPLNIAILKOF; // 0x80
		::System::Boolean DDFAAKFPMEI; // 0x81
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>** StaticGet_NAOJEOFOLFB()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>**)UnitySDK::FromName("", "KKHNFGNFJFD")->GetStaticField(0x50E70);
		}

		static ::System::String** StaticGet_FBIMJFGIBAN()
		{
			return (::System::String**)UnitySDK::FromName("", "KKHNFGNFJFD")->GetStaticField(0x50E78);
		}

		// static const ::System::String* BNDPKDDCDBI; // 0x0
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKHNFGNFJFD_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* NNFMFAPLEGM()
		{
			return ((::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_NNFMFAPLEGM_OFFSET))(this);
		}

		::System::Void NNMMHHGOJEI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_NNMMHHGOJEI_OFFSET))(this, a1);
		}

		::System::Void HKOCHMDPCDM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_HKOCHMDPCDM_OFFSET))(this, a1);
		}

		::System::Void OLJNNFMIANK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_OLJNNFMIANK_OFFSET))(this, a1);
		}

		::System::Int32 BMPGJHHCMOI(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_BMPGJHHCMOI_OFFSET))(this, a1, a2);
		}

		::System::Int32 IDODIFGFFIK(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_IDODIFGFFIK_OFFSET))(this, a1, a2);
		}

		::System::Void JMIGGHODMPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_JMIGGHODMPB_OFFSET))(this);
		}

		::System::Void AFIJBDMGDPE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_AFIJBDMGDPE_OFFSET))(this, a1);
		}

		::System::Void DENMKBPCCLL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_DENMKBPCCLL_OFFSET))(this, a1);
		}

		::System::Void PLDMHCDHCKJ(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_PLDMHCDHCKJ_OFFSET))(this, a1);
		}

		::System::Int32 FOGAGEEKFCM(::DEKDEPEBHNC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_FOGAGEEKFCM_OFFSET))(this, a1);
		}

		::System::Void FKFCANENMMA(::DEKDEPEBHNC* a1, ::DEKDEPEBHNC* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*, ::DEKDEPEBHNC*, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_FKFCANENMMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CBMFHLPLDHM(::System::Int32 a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_CBMFHLPLDHM_OFFSET))(this, a1, a2);
		}

		::System::Void AHDODIOEGMO(::RPG::GameCore::LevelTurnUltraSkillEnd* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillEnd*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_AHDODIOEGMO_OFFSET))(this, a1);
		}

		::System::Void IBPAAIILAIF(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_IBPAAIILAIF_OFFSET))(this, a1);
		}

		::System::Void KFKOCPJJMDA(::ENGBNDIPDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KFKOCPJJMDA_OFFSET))(this, a1);
		}

		::System::Void KEKOAGKLNPK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KEKOAGKLNPK_OFFSET))(this, a1);
		}

		::System::Void KEKOAGKLNPK_1(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KEKOAGKLNPK_1_OFFSET))(this, a1);
		}

		::System::Void JGHDHKFMMLJ(::GEDMHFPPBHN* a1, ::RPG::Client::ActionBarItemAction a2, ::RPG::Client::ActionBarItemAction a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_JGHDHKFMMLJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CMCMNIBNEAG(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_CMCMNIBNEAG_OFFSET))(this, a1);
		}

		::System::Void EABMHFJCHPI(::ENGBNDIPDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_EABMHFJCHPI_OFFSET))(this, a1);
		}

		::System::Void JBCCHFGEIPD(::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_JBCCHFGEIPD_OFFSET))(this, a1);
		}

		::System::Void EBJAHNGPLCB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_EBJAHNGPLCB_OFFSET))(this, a1);
		}

		::System::Void HKMEMAGBBLE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_HKMEMAGBBLE_OFFSET))(this, a1);
		}

		::System::Void KMHOONLFPOL(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KMHOONLFPOL_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PDKACHEBDDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_PDKACHEBDDA_OFFSET))(this);
		}

		::System::Void OEKJAENHBJJ(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2, ::RPG::Client::ActionBarItemAction a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_OEKJAENHBJJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EADOPLNBMML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_EADOPLNBMML_OFFSET))(this);
		}

		::System::Void OCAIBOFLHLA(::RPG::Client::ActionBarItemAction a1, ::GEDMHFPPBHN* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::GEDMHFPPBHN*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_OCAIBOFLHLA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GJLBDDMHEDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_GJLBDDMHEDD_OFFSET))(this);
		}

		::System::Void AHLDNLDKMGF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_AHLDNLDKMGF_OFFSET))(this, a1);
		}

		::System::Int32 EACGAGNBMMK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_EACGAGNBMMK_OFFSET))(this);
		}

		::System::Boolean ECKJGBIPAEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_ECKJGBIPAEM_OFFSET))(this);
		}

		::GEDMHFPPBHN* NDHMDJFECKI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_NDHMDJFECKI_OFFSET))(this, a1);
		}

		::System::Boolean IEPOOMNLDIB(::GEDMHFPPBHN* a1, ::RPG::Client::ActionBarItemAction a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::Client::ActionBarItemAction, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_IEPOOMNLDIB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DKDKKHGIKFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_DKDKKHGIKFI_OFFSET))(this);
		}

		::System::Void GAMNKBDNDBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_GAMNKBDNDBL_OFFSET))(this);
		}

		::System::Void KLJCDNFEKHO(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KLJCDNFEKHO_OFFSET))(this, a1);
		}

		::System::Void OFIAFGGKEDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_OFIAFGGKEDG_OFFSET))(this);
		}

		::System::Void OEJDOGDPEPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_OEJDOGDPEPH_OFFSET))(this);
		}

		::System::Void BCJPPPDNCJO(::RPG::GameCore::TurnState a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_BCJPPPDNCJO_OFFSET))(this, a1, a2);
		}

		::System::Void OEPPEMAJKOF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_OEPPEMAJKOF_OFFSET))(this, a1);
		}

		::System::Void JIHOMKCFMBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_JIHOMKCFMBF_OFFSET))(this);
		}

		::System::Void FDLGEJFANHH(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_FDLGEJFANHH_OFFSET))(this, a1);
		}

		::System::Int32 DEPDICEBBOD(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_DEPDICEBBOD_OFFSET))(this, a1);
		}

		::System::Int32 MNDPLIACKBB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_MNDPLIACKBB_OFFSET))(this, a1, a2);
		}

		::System::Int32 LKJJKLFGDEB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_LKJJKLFGDEB_OFFSET))(this, a1);
		}

		::System::Boolean JCGJHOHBLFN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_JCGJHOHBLFN_OFFSET))(this, a1);
		}

		::System::Boolean AABPBLOMCHE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_AABPBLOMCHE_OFFSET))(this, a1);
		}

		::GEDMHFPPBHN* NFAEMIEIODB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_NFAEMIEIODB_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GHADGBEAMCI(::RPG::GameCore::DynamicFloat* a1, ::FODPNNIJCJI* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*, ::FODPNNIJCJI*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_GHADGBEAMCI_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ActionDelayChangeTypeMask PDCMHNCFOME(::GEDMHFPPBHN* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_PDCMHNCFOME_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ActionDelayChangeTypeMask JLBHDKKJEPD(::GEDMHFPPBHN* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::FODPNNIJCJI* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::FODPNNIJCJI*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_JLBHDKKJEPD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::ActionDelayChangeTypeMask IKBNPFBHEKN(::GEDMHFPPBHN* a1, ::FODPNNIJCJI* a2, ::RPG::GameCore::ActionDelayPreshowConfig* a3)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::GEDMHFPPBHN*, ::FODPNNIJCJI*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_IKBNPFBHEKN_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::GameCore::ActionDelayChangeTypeMask KNEEOPNBMCE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KNEEOPNBMCE_OFFSET))(a1, a2);
		}

		::RPG::GameCore::ActionDelayChangeTypeMask DHEBCIIAHCL(::GEDMHFPPBHN* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::FODPNNIJCJI* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::FODPNNIJCJI*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_DHEBCIIAHCL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ADKBCLOLJFA(::GEDMHFPPBHN* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_ADKBCLOLJFA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ActionDelayChangeTypeMask HAGAMPJDHHL(::GEDMHFPPBHN* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::FODPNNIJCJI* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::FODPNNIJCJI*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_HAGAMPJDHHL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::ActionDelayChangeTypeMask MFANPMBPOCN(::GEDMHFPPBHN* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_MFANPMBPOCN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::SkillData* ANAGAHONMKO(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_ANAGAHONMKO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ActionDelayPreshowConfig* LDKIBHEJNGO(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::RPG::GameCore::ActionDelayPreshowConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_LDKIBHEJNGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GAFOALCDJAI(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_GAFOALCDJAI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FCJNFLMBKCM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_FCJNFLMBKCM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NPKAANGMIAD(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_NPKAANGMIAD_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ActionDelayChangeTypeMask GPBPEDLJHLO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_GPBPEDLJHLO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KDIFOLBBJLN(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KDIFOLBBJLN_OFFSET))(this, a1, a2);
		}

		::GEDMHFPPBHN* PMDJCGNEAPL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_PMDJCGNEAPL_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* BGBPLLINJDN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_BGBPLLINJDN_OFFSET))(this);
		}

		::System::Void JOODBGFJOLG(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_JOODBGFJOLG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HMACMHFBCBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_HMACMHFBCBI_OFFSET))(this);
		}

		::System::Void COPPNLLPEIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_COPPNLLPEIE_OFFSET))(this);
		}

		::System::Void POOMPHLBIHD(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_POOMPHLBIHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ELDEKOFDGJC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_ELDEKOFDGJC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JCHLABMJCGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_JCHLABMJCGE_OFFSET))(this);
		}

		::System::Boolean BMNMINCCNLK(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_BMNMINCCNLK_OFFSET))(this, a1, a2);
		}

		::System::Void BKGHFFJHOOA(::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* a1, ::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*, ::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_BKGHFFJHOOA_OFFSET))(this, a1, a2);
		}

		::System::Boolean ILCIIABNJNB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_ILCIIABNJNB_OFFSET))(this, a1);
		}

		::System::Boolean AANLAOCCCJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_AANLAOCCCJA_OFFSET))(this, a1);
		}

		::System::Boolean FGPGLNJHBIO(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_FGPGLNJHBIO_OFFSET))(this, a1);
		}

		::System::Boolean ONDKICMKDAC(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_ONDKICMKDAC_OFFSET))(this, a1, a2);
		}

		::System::Boolean HPBNJPHKKGO(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_HPBNJPHKKGO_OFFSET))(this, a1, a2);
		}

		::System::Void DNDCLGMIFFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_DNDCLGMIFFJ_OFFSET))(this);
		}

		::System::Void KLNFPMFPCCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_KLNFPMFPCCN_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void FIJHCPHMBFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_FIJHCPHMBFP_OFFSET))(this);
		}

		::System::Void OOGONDHLBOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_OOGONDHLBOE_OFFSET))(this);
		}

		::RPG::Client::ActionBarItemUIStyle ECLJOEHBPOD(::GEDMHFPPBHN* a1)
		{
			return ((::RPG::Client::ActionBarItemUIStyle(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_ECLJOEHBPOD_OFFSET))(this, a1);
		}

		::System::Boolean PKMHJFLBBKC(::RPG::GameCore::ActionBarType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::RPG::Client::ActionBarItemUIStyle a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_PKMHJFLBBKC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean NHNOBPKJBBC(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_NHNOBPKJBBC_OFFSET))(this, a1);
		}

		::System::Boolean AAAFKDNNJHI(::GEDMHFPPBHN* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*, ::System::String*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_AAAFKDNNJHI_OFFSET))(this, a1, a2);
		}

		::System::Boolean MOLACKFELDB(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_MOLACKFELDB_OFFSET))(this, a1);
		}

		::System::Boolean PJEKMCNAOLI(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_PJEKMCNAOLI_OFFSET))(this, a1);
		}

		::GEDMHFPPBHN* IJPFBLDMPCD()
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_IJPFBLDMPCD_OFFSET))(this);
		}

		::GEDMHFPPBHN* LOEFFPNGPAI(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_LOEFFPNGPAI_OFFSET))(this, a1, a2);
		}

		::GEDMHFPPBHN* EAIIEAEOMLH(::System::Collections::Generic::IEnumerable_1<::GEDMHFPPBHN*>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GEDMHFPPBHN*>*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_EAIIEAEOMLH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PIGIHFCLJBC(::GEDMHFPPBHN* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + KKHNFGNFJFD_PIGIHFCLJBC_OFFSET))(this, a1, a2, a3);
		}

		static ::System::ValueTuple _SkillPreViewSortByActionDelayCmp_g___GetOverrideValue_22_0(::GEDMHFPPBHN* a1)
		{
			return ((::System::ValueTuple(*)(::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_22_0_OFFSET))(a1);
		}

	};
