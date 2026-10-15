#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeGameMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class BOMFGKDLHIB;
class CNPJKKGEDPC;
class EFHNDMENDHI;
class EPPDPBEBKBO;
class FDPALAEIHPB;
class JGKEMOKPEBK;
class MBNKFCKGFCN;
class OKLLHAFFNAA;
class PLKAJKKLGOL;
class PMBGIIOPHGE;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeGame; }
namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BombCreateConfig; }
namespace RPG::GameCore::Match3 { class Match3BirdSkillConfig; }
namespace RPG::GameCore::Match3 { class PieceConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJDNCNIPOKM_BANGDNOLHCG_OFFSET UNITYSDK_OFFSET(0x15D0FA20)
#define HJDNCNIPOKM_BBHANAMMPHK_OFFSET UNITYSDK_OFFSET(0x15D0DA50)
#define HJDNCNIPOKM_BJDODFLFJOA_OFFSET UNITYSDK_OFFSET(0x15D0E130)
#define HJDNCNIPOKM_CBFIMEDGENA_OFFSET UNITYSDK_OFFSET(0x15D10EE0)
#define HJDNCNIPOKM_CEKEJHABBNH_OFFSET UNITYSDK_OFFSET(0x15D13030)
#define HJDNCNIPOKM_CFECLOCBHIO_OFFSET UNITYSDK_OFFSET(0x15D0F260)
#define HJDNCNIPOKM_CLABIOEEDDO_OFFSET UNITYSDK_OFFSET(0x15D0F1A0)
#define HJDNCNIPOKM_CLCGAIDLHNB_OFFSET UNITYSDK_OFFSET(0x15D0FC80)
#define HJDNCNIPOKM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D13E80)
#define HJDNCNIPOKM_DKAMIGJIOIF_OFFSET UNITYSDK_OFFSET(0x15D0E280)
#define HJDNCNIPOKM_EALFFFCKDPK_OFFSET UNITYSDK_OFFSET(0x15D118F0)
#define HJDNCNIPOKM_EDOODLNAKNN_OFFSET UNITYSDK_OFFSET(0x15D0E490)
#define HJDNCNIPOKM_EENDCLLONJL_OFFSET UNITYSDK_OFFSET(0x15D0EB20)
#define HJDNCNIPOKM_EIBDFGHFLJO_OFFSET UNITYSDK_OFFSET(0x15D12D20)
#define HJDNCNIPOKM_ENHIMFLIEPJ_OFFSET UNITYSDK_OFFSET(0x15D11980)
#define HJDNCNIPOKM_EOIHEIKFCLF_OFFSET UNITYSDK_OFFSET(0x15D11A30)
#define HJDNCNIPOKM_EPFOAEPBBLI_OFFSET UNITYSDK_OFFSET(0x15D12F90)
#define HJDNCNIPOKM_FFLKGGNEOGK_OFFSET UNITYSDK_OFFSET(0x15D0FF00)
#define HJDNCNIPOKM_FIPNHANOPNL_OFFSET UNITYSDK_OFFSET(0x15D0EA30)
#define HJDNCNIPOKM_FMBMGKLNCCP_OFFSET UNITYSDK_OFFSET(0x15D10F60)
#define HJDNCNIPOKM_FNBAPDFOBIH_OFFSET UNITYSDK_OFFSET(0x15D11220)
#define HJDNCNIPOKM_FPEEEBNBEAD_OFFSET UNITYSDK_OFFSET(0x15D0D320)
#define HJDNCNIPOKM_GBCGMPKFNOK_OFFSET UNITYSDK_OFFSET(0x15D0F0E0)
#define HJDNCNIPOKM_GBOENALBIIC_OFFSET UNITYSDK_OFFSET(0x15D0D230)
#define HJDNCNIPOKM_GDEEJHAEBFM_OFFSET UNITYSDK_OFFSET(0x15D11530)
#define HJDNCNIPOKM_GEDILJDDHIB_OFFSET UNITYSDK_OFFSET(0x15D13BC0)
#define HJDNCNIPOKM_GET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x15D13E40)
#define HJDNCNIPOKM_GET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x15D13E20)
#define HJDNCNIPOKM_GET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x15D13E60)
#define HJDNCNIPOKM_GMMFEEMDNCL_OFFSET UNITYSDK_OFFSET(0x15D0FA30)
#define HJDNCNIPOKM_GOCCCBMKPCA_OFFSET UNITYSDK_OFFSET(0x15D12780)
#define HJDNCNIPOKM_GPEIHDBNGDI_OFFSET UNITYSDK_OFFSET(0x15D139B0)
#define HJDNCNIPOKM_HAAJEMEAMFD_OFFSET UNITYSDK_OFFSET(0x15D106C0)
#define HJDNCNIPOKM_HFKNNJEEFAB_OFFSET UNITYSDK_OFFSET(0x15D0D680)
#define HJDNCNIPOKM_HKNKKOAJCJM_OFFSET UNITYSDK_OFFSET(0x15D0EFF0)
#define HJDNCNIPOKM_HPIPMPOLFBL_OFFSET UNITYSDK_OFFSET(0x15D130F0)
#define HJDNCNIPOKM_IACMGIOALHH_OFFSET UNITYSDK_OFFSET(0x15D0DE70)
#define HJDNCNIPOKM_IAEPNEMFGKH_OFFSET UNITYSDK_OFFSET(0x15D10840)
#define HJDNCNIPOKM_IEIEIPFBHGM_OFFSET UNITYSDK_OFFSET(0x15D12C70)
#define HJDNCNIPOKM_IFHHNNJFNOO_OFFSET UNITYSDK_OFFSET(0x15D0E020)
#define HJDNCNIPOKM_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x15D10FD0)
#define HJDNCNIPOKM_IKOIPJNFAEM_OFFSET UNITYSDK_OFFSET(0x15D0EB90)
#define HJDNCNIPOKM_INGAPLKFKGJ_OFFSET UNITYSDK_OFFSET(0x15D0FD80)
#define HJDNCNIPOKM_IOEMBMNGIIC_OFFSET UNITYSDK_OFFSET(0x15D13400)
#define HJDNCNIPOKM_JFNPBEOCKOD_OFFSET UNITYSDK_OFFSET(0x15D0E8B0)
#define HJDNCNIPOKM_JHLNDEPLFHM_OFFSET UNITYSDK_OFFSET(0x15D0ED50)
#define HJDNCNIPOKM_JNCMNJHEOOA_OFFSET UNITYSDK_OFFSET(0x15D129E0)
#define HJDNCNIPOKM_JOINOIMMLAC_OFFSET UNITYSDK_OFFSET(0x15D12E40)
#define HJDNCNIPOKM_JPAGJABFLCE_OFFSET UNITYSDK_OFFSET(0x15D0EE30)
#define HJDNCNIPOKM_KNIICBLCKLF_OFFSET UNITYSDK_OFFSET(0x15D0F150)
#define HJDNCNIPOKM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15D0CFA0)
#define HJDNCNIPOKM_LGGHPHPLIPN_OFFSET UNITYSDK_OFFSET(0x15D0D510)
#define HJDNCNIPOKM_MIPMEOLJNGI_OFFSET UNITYSDK_OFFSET(0x15D0E210)
#define HJDNCNIPOKM_MKKODKICHBN_OFFSET UNITYSDK_OFFSET(0x15D13710)
#define HJDNCNIPOKM_MLOECEPDAOB_OFFSET UNITYSDK_OFFSET(0x15D0E6A0)
#define HJDNCNIPOKM_NMLLENFFMKO_OFFSET UNITYSDK_OFFSET(0x15D0E1A0)
#define HJDNCNIPOKM_NOEENPADJKB_OFFSET UNITYSDK_OFFSET(0x15D12B90)
#define HJDNCNIPOKM_ONEFCHACIDP_OFFSET UNITYSDK_OFFSET(0x15D0EF10)
#define HJDNCNIPOKM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15D0D630)
#define HJDNCNIPOKM_PAKNPEGNPDB_OFFSET UNITYSDK_OFFSET(0x15D10D60)
#define HJDNCNIPOKM_PDHDDJOOLLL_OFFSET UNITYSDK_OFFSET(0x15D0EC70)
#define HJDNCNIPOKM_PHLPHJPECLN_OFFSET UNITYSDK_OFFSET(0x15D0D700)
#define HJDNCNIPOKM_PMNKHFHADCP_OFFSET UNITYSDK_OFFSET(0x15D0E970)
#define HJDNCNIPOKM_SET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x15D13E50)
#define HJDNCNIPOKM_SET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x15D13E30)
#define HJDNCNIPOKM_SET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x15D13E70)

	class HJDNCNIPOKM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BombCreateConfig*>* DIAGMGFBMNB; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::Match3::PieceConfig*>* GPLJOCJABDG; // 0x18
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x20
		::RPG::GameCore::GameEntity* LIDKFDENKAP; // 0x28
		::RPG::Client::LittleGame::MatchThreeTimelineBattleField* NJGEMGKDBCM; // 0x30
		::System::Action* EFKLHOJHCEG; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* NDOAIECPLBE; // 0x40
		::System::String* JLFLLPEIKGF; // 0x48
		::System::Action* MJBDDBBGBLJ; // 0x50
		::RPG::GameCore::Match3::Match3BirdSkillConfig* LJHHGLJAJFC; // 0x58
		::RPG::Client::MatchThreeBoard* PCDGPKPNIOE; // 0x60
		::System::Action* LKGCGEDKPDP; // 0x68
		::CNPJKKGEDPC* MOAHPOKJFMH; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::Match3::PieceConfig*>* DAMCNHHCGPB; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* NMHLIAHHGGM; // 0x80
		::RPG::GameCore::Match3::Match3BirdSkillConfig* CINFFNNKCHF; // 0x88
		::FDPALAEIHPB* FKINCGODJEP; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::Match3::PieceConfig*>* AEMBMHAIFMB; // 0x98
		::System::UInt32 CCNEOCIJAJA; // 0xA0
		::System::Boolean _IsPvpRoyaleNetworkDataReady_k__BackingField; // 0xA4
		::System::Boolean EMHAACACFOM; // 0xA5
		::System::Boolean _IsPvpNetworkDataReady_k__BackingField; // 0xA6
		::System::Boolean _IsPvp1v1NetworkDataReady_k__BackingField; // 0xA7
		::System::UInt32 NIGHDMEGFNF; // 0xA8
		::System::UInt32 JCGAHCNJFJP; // 0xAC
		::RPG::Client::LittleGame::Match3::MatchThreeGameMode GICHGNGMBGD; // 0xB0
		::System::UInt32 CNDNIFAFBGK; // 0xB4
		::System::UInt32 BMLFMMNOJJM; // 0xB8
		// static const ::System::Object PMEHFMCKBKJ; // 0x0
		// static const ::System::Object PPKPAIPGGJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void LGGHPHPLIPN(::RPG::Client::MatchThreeBoard* a1, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_LGGHPHPLIPN_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void PHLPHJPECLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_PHLPHJPECLN_OFFSET))(this);
		}

		::System::Void BBHANAMMPHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_BBHANAMMPHK_OFFSET))(this);
		}

		::System::Void BJDODFLFJOA(::EFHNDMENDHI* a1, ::RPG::Client::LittleGame::Match3::Match3GameState a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFHNDMENDHI*, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_BJDODFLFJOA_OFFSET))(this, a1, a2);
		}

		::System::Void NMLLENFFMKO(::EFHNDMENDHI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFHNDMENDHI*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_NMLLENFFMKO_OFFSET))(this, a1, a2);
		}

		::System::Boolean MIPMEOLJNGI(::System::Collections::Generic::List_1<::System::ValueTuple>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_MIPMEOLJNGI_OFFSET))(this, a1);
		}

		::System::Void DKAMIGJIOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_DKAMIGJIOIF_OFFSET))(this);
		}

		::System::Void EDOODLNAKNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_EDOODLNAKNN_OFFSET))(this);
		}

		::System::Void MLOECEPDAOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_MLOECEPDAOB_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Match3::Match3GameState JFNPBEOCKOD()
		{
			return ((::RPG::Client::LittleGame::Match3::Match3GameState(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_JFNPBEOCKOD_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Match3::ChessBoardState PMNKHFHADCP()
		{
			return ((::RPG::Client::LittleGame::Match3::ChessBoardState(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_PMNKHFHADCP_OFFSET))(this);
		}

		::System::Boolean FIPNHANOPNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_FIPNHANOPNL_OFFSET))(this);
		}

		::System::Boolean EENDCLLONJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_EENDCLLONJL_OFFSET))(this);
		}

		::MBNKFCKGFCN* IKOIPJNFAEM()
		{
			return ((::MBNKFCKGFCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_IKOIPJNFAEM_OFFSET))(this);
		}

		::PMBGIIOPHGE* PDHDDJOOLLL()
		{
			return ((::PMBGIIOPHGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_PDHDDJOOLLL_OFFSET))(this);
		}

		::OKLLHAFFNAA* JHLNDEPLFHM()
		{
			return ((::OKLLHAFFNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_JHLNDEPLFHM_OFFSET))(this);
		}

		::JGKEMOKPEBK* JPAGJABFLCE()
		{
			return ((::JGKEMOKPEBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_JPAGJABFLCE_OFFSET))(this);
		}

		::EPPDPBEBKBO* ONEFCHACIDP()
		{
			return ((::EPPDPBEBKBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_ONEFCHACIDP_OFFSET))(this);
		}

		::System::UInt64 HKNKKOAJCJM()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_HKNKKOAJCJM_OFFSET))(this);
		}

		::System::Boolean GBCGMPKFNOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GBCGMPKFNOK_OFFSET))(this);
		}

		::System::ValueTuple KNIICBLCKLF()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_KNIICBLCKLF_OFFSET))(this);
		}

		::System::Void CLABIOEEDDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_CLABIOEEDDO_OFFSET))(this);
		}

		::System::Void CFECLOCBHIO(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_CFECLOCBHIO_OFFSET))(this, a1, a2);
		}

		::System::Void INGAPLKFKGJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_INGAPLKFKGJ_OFFSET))(this, a1, a2);
		}

		::System::Void FFLKGGNEOGK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_FFLKGGNEOGK_OFFSET))(this, a1, a2);
		}

		::System::Void HAAJEMEAMFD(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_HAAJEMEAMFD_OFFSET))(this, a1, a2);
		}

		::System::Void IAEPNEMFGKH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_IAEPNEMFGKH_OFFSET))(this, a1, a2);
		}

		::System::Void PAKNPEGNPDB(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_PAKNPEGNPDB_OFFSET))(this, a1, a2);
		}

		::System::Void CBFIMEDGENA(::RPG::Client::LittleGame::Match3::ChessBoardState a1, ::RPG::Client::LittleGame::Match3::ChessBoardState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::ChessBoardState, ::RPG::Client::LittleGame::Match3::ChessBoardState))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_CBFIMEDGENA_OFFSET))(this, a1, a2);
		}

		::System::Void FMBMGKLNCCP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_FMBMGKLNCCP_OFFSET))(this, a1);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_IIFINBAGBDG_OFFSET))(this);
		}

		::System::Void FNBAPDFOBIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_FNBAPDFOBIH_OFFSET))(this);
		}

		::System::Void GBOENALBIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GBOENALBIIC_OFFSET))(this);
		}

		::System::Void EALFFFCKDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_EALFFFCKDPK_OFFSET))(this);
		}

		::System::Void GDEEJHAEBFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GDEEJHAEBFM_OFFSET))(this);
		}

		::EFHNDMENDHI* CEKEJHABBNH(::System::String* a1)
		{
			return ((::EFHNDMENDHI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_CEKEJHABBNH_OFFSET))(this, a1);
		}

		::System::Void ENHIMFLIEPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_ENHIMFLIEPJ_OFFSET))(this);
		}

		::System::Void IFHHNNJFNOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_IFHHNNJFNOO_OFFSET))(this);
		}

		::System::Void HFKNNJEEFAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_HFKNNJEEFAB_OFFSET))(this);
		}

		::System::Void GOCCCBMKPCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GOCCCBMKPCA_OFFSET))(this);
		}

		::System::Void EIBDFGHFLJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_EIBDFGHFLJO_OFFSET))(this);
		}

		::System::Void GMMFEEMDNCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GMMFEEMDNCL_OFFSET))(this);
		}

		::System::Void CLCGAIDLHNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_CLCGAIDLHNB_OFFSET))(this);
		}

		::System::Void EPFOAEPBBLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_EPFOAEPBBLI_OFFSET))(this);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::PLKAJKKLGOL*>* GPEIHDBNGDI(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* a1)
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::PLKAJKKLGOL*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GPEIHDBNGDI_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::System::UInt32>* GEDILJDDHIB(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* a1)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GEDILJDDHIB_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HPIPMPOLFBL(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_HPIPMPOLFBL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* IOEMBMNGIIC(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_IOEMBMNGIIC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>* MKKODKICHBN(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_MKKODKICHBN_OFFSET))(a1);
		}

		::System::Void JOINOIMMLAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_JOINOIMMLAC_OFFSET))(this);
		}

		::System::Void JNCMNJHEOOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_JNCMNJHEOOA_OFFSET))(this);
		}

		::System::Void IEIEIPFBHGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_IEIEIPFBHGM_OFFSET))(this);
		}

		::System::Void EOIHEIKFCLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_EOIHEIKFCLF_OFFSET))(this);
		}

		::System::Void NOEENPADJKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_NOEENPADJKB_OFFSET))(this);
		}

		::System::Void FPEEEBNBEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_FPEEEBNBEAD_OFFSET))(this);
		}

		::System::Void IACMGIOALHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_IACMGIOALHH_OFFSET))(this);
		}

		::System::Boolean get_IsPvpNetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GET_ISPVPNETWORKDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsPvpNetworkDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_SET_ISPVPNETWORKDATAREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPvp1v1NetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GET_ISPVP1V1NETWORKDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsPvp1v1NetworkDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_SET_ISPVP1V1NETWORKDATAREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPvpRoyaleNetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_GET_ISPVPROYALENETWORKDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsPvpRoyaleNetworkDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_SET_ISPVPROYALENETWORKDATAREADY_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeGame* BANGDNOLHCG()
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDNCNIPOKM_BANGDNOLHCG_OFFSET))(this);
		}

	};
