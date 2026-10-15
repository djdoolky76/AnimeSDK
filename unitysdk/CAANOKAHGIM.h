#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
class CAANOKAHGIM;
class EGDAOGCDJBB;
class JBACCAGFHON;
class LNLAOECCCDM;
class PMHBHMJIPID;
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace RPG::Client { class CakeRaceGameFightResultData; }
namespace RPG::Client { class CakeRaceGameGuessData; }
namespace RPG::Client { class CakeRaceGameSettlementData; }
namespace RPG::Client { class CakeRaceGameVoteData; }
namespace RPG::Client { class CakeRaceSendChatEventData; }
namespace RPG::Client::CakeRace { class CakeRaceCatRankGameData; }
namespace RPG::Client::CakeRace { class CakeRaceFieldSectionGameData; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceSupportIndicatorMonoView; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAANOKAHGIM_AHDHDABHAID_OFFSET UNITYSDK_OFFSET(0xC1BBB30)
#define CAANOKAHGIM_BELKPNEBKIK_OFFSET UNITYSDK_OFFSET(0xC1BAEE0)
#define CAANOKAHGIM_BHFOPLHMMFL_OFFSET UNITYSDK_OFFSET(0xC1BB620)
#define CAANOKAHGIM_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xC1BADC0)
#define CAANOKAHGIM_BMKFDHBBOMN_OFFSET UNITYSDK_OFFSET(0xC1BAB10)
#define CAANOKAHGIM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC1BACC0)
#define CAANOKAHGIM_CHFKHILFMDK_OFFSET UNITYSDK_OFFSET(0xC1BB7A0)
#define CAANOKAHGIM_CJCHJIHIMDH_OFFSET UNITYSDK_OFFSET(0xC1BAE00)
#define CAANOKAHGIM_CKEFAKOEBHF_OFFSET UNITYSDK_OFFSET(0xC1BAC60)
#define CAANOKAHGIM_CTOR_OFFSET UNITYSDK_OFFSET(0xC1BAD70)
#define CAANOKAHGIM_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xC1BAD80)
#define CAANOKAHGIM_DKIFKEPKHEI_OFFSET UNITYSDK_OFFSET(0xC1BB1C0)
#define CAANOKAHGIM_EBCMAEJKHEK_OFFSET UNITYSDK_OFFSET(0xC1BBA20)
#define CAANOKAHGIM_EDKLAIDOHOB_OFFSET UNITYSDK_OFFSET(0xC1BB100)
#define CAANOKAHGIM_EKLNGBFAAMP_OFFSET UNITYSDK_OFFSET(0xC1BABD0)
#define CAANOKAHGIM_FANCIJEODCG_OFFSET UNITYSDK_OFFSET(0xC1BB970)
#define CAANOKAHGIM_FOAELNOEIAK_OFFSET UNITYSDK_OFFSET(0xC1BB2F0)
#define CAANOKAHGIM_GIELKKNJFHK_OFFSET UNITYSDK_OFFSET(0xC1BB680)
#define CAANOKAHGIM_GMNIAEJFLOJ_OFFSET UNITYSDK_OFFSET(0xC1BB220)
#define CAANOKAHGIM_HGKANPHAOLC_OFFSET UNITYSDK_OFFSET(0xC1BB800)
#define CAANOKAHGIM_HKLNIKMMJOB_OFFSET UNITYSDK_OFFSET(0xC1BB8D0)
#define CAANOKAHGIM_HLBHAGNLBDP_OFFSET UNITYSDK_OFFSET(0xC1BB040)
#define CAANOKAHGIM_HMOABAHLIJN_OFFSET UNITYSDK_OFFSET(0xC1BBAA0)
#define CAANOKAHGIM_IHKHBIKDGBI_OFFSET UNITYSDK_OFFSET(0xC1BAA00)
#define CAANOKAHGIM_IIOIBAAMBHL_OFFSET UNITYSDK_OFFSET(0xC1BAFD0)
#define CAANOKAHGIM_IOJDNPODHEN_OFFSET UNITYSDK_OFFSET(0xC1BB160)
#define CAANOKAHGIM_JANJGPIPENK_OFFSET UNITYSDK_OFFSET(0xC1BB280)
#define CAANOKAHGIM_KCPBEIGGEJA_OFFSET UNITYSDK_OFFSET(0xC1BAA90)
#define CAANOKAHGIM_LFLNKBLPLPE_OFFSET UNITYSDK_OFFSET(0xC1BAAB0)
#define CAANOKAHGIM_MDPDKEBEDIE_OFFSET UNITYSDK_OFFSET(0xC1BB860)
#define CAANOKAHGIM_MIOFCMIPLBI_OFFSET UNITYSDK_OFFSET(0xC1BAE80)
#define CAANOKAHGIM_MMIMMGGHBNO_OFFSET UNITYSDK_OFFSET(0xC1BAB70)
#define CAANOKAHGIM_NDONHLCPJDB_OFFSET UNITYSDK_OFFSET(0xC1BB0A0)
#define CAANOKAHGIM_OFDGKMGADGG_OFFSET UNITYSDK_OFFSET(0xC1BAF70)
#define CAANOKAHGIM_OIKGKPMFCAJ_OFFSET UNITYSDK_OFFSET(0xC1BB4E0)
#define CAANOKAHGIM_OMBFLGKDPDN_OFFSET UNITYSDK_OFFSET(0xC1BB440)
#define CAANOKAHGIM_PAOEHPHBMIC_OFFSET UNITYSDK_OFFSET(0xC1BB730)
#define CAANOKAHGIM_PEBLLIDINBM_OFFSET UNITYSDK_OFFSET(0xC1BB560)

inline static constexpr unsigned int CAANOKAHGIM_TypeDefinitionIndex = 60308;

	class CAANOKAHGIM : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CAANOKAHGIM_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 IHKHBIKDGBI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_IHKHBIKDGBI_OFFSET))(this);
		}

		::PMHBHMJIPID* KCPBEIGGEJA()
		{
			return ((::PMHBHMJIPID*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_KCPBEIGGEJA_OFFSET))(this);
		}

		::System::Single LFLNKBLPLPE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_LFLNKBLPLPE_OFFSET))(this);
		}

		::System::Boolean BMKFDHBBOMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_BMKFDHBBOMN_OFFSET))(this);
		}

		::System::Int64 MMIMMGGHBNO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_MMIMMGGHBNO_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType EKLNGBFAAMP()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_EKLNGBFAAMP_OFFSET))(this);
		}

		::System::UInt32 CKEFAKOEBHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_CKEFAKOEBHF_OFFSET))(this);
		}

		static ::CAANOKAHGIM* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::CAANOKAHGIM*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CAANOKAHGIM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void CJCHJIHIMDH(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + CAANOKAHGIM_CJCHJIHIMDH_OFFSET))(this, a1, a2);
		}

		::EGDAOGCDJBB* MIOFCMIPLBI()
		{
			return ((::EGDAOGCDJBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_MIOFCMIPLBI_OFFSET))(this);
		}

		::System::Void BELKPNEBKIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAANOKAHGIM_BELKPNEBKIK_OFFSET))(this, a1);
		}

		::LNLAOECCCDM* OFDGKMGADGG()
		{
			return ((::LNLAOECCCDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_OFDGKMGADGG_OFFSET))(this);
		}

		::System::Void IIOIBAAMBHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAANOKAHGIM_IIOIBAAMBHL_OFFSET))(this, a1);
		}

		::System::Void HLBHAGNLBDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_HLBHAGNLBDP_OFFSET))(this);
		}

		::System::Void NDONHLCPJDB(::RPG::Client::CakeRace::CakeRaceGameplayContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceGameplayContext*))((::PBYTE)hIl2Cpp + CAANOKAHGIM_NDONHLCPJDB_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRace::CakeRaceCatRankGameData* EDKLAIDOHOB()
		{
			return ((::RPG::Client::CakeRace::CakeRaceCatRankGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_EDKLAIDOHOB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* IOJDNPODHEN()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_IOJDNPODHEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* DKIFKEPKHEI()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_DKIFKEPKHEI_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceFieldSectionGameData* GMNIAEJFLOJ()
		{
			return ((::RPG::Client::CakeRace::CakeRaceFieldSectionGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_GMNIAEJFLOJ_OFFSET))(this);
		}

		::System::Void JANJGPIPENK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAANOKAHGIM_JANJGPIPENK_OFFSET))(this, a1);
		}

		::System::Void FOAELNOEIAK(::RPG::Client::CakeRaceSendChatEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceSendChatEventData*))((::PBYTE)hIl2Cpp + CAANOKAHGIM_FOAELNOEIAK_OFFSET))(this, a1);
		}

		::System::Void OMBFLGKDPDN(::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView*))((::PBYTE)hIl2Cpp + CAANOKAHGIM_OMBFLGKDPDN_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceGameGuessData* OIKGKPMFCAJ()
		{
			return ((::RPG::Client::CakeRaceGameGuessData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_OIKGKPMFCAJ_OFFSET))(this);
		}

		::System::Void PEBLLIDINBM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CAANOKAHGIM_PEBLLIDINBM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CakeRaceGameVoteData* BHFOPLHMMFL()
		{
			return ((::RPG::Client::CakeRaceGameVoteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_BHFOPLHMMFL_OFFSET))(this);
		}

		::System::Void GIELKKNJFHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAANOKAHGIM_GIELKKNJFHK_OFFSET))(this, a1);
		}

		::System::Void PAOEHPHBMIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_PAOEHPHBMIC_OFFSET))(this);
		}

		::RPG::Client::CakeRaceEffectDataItem* CHFKHILFMDK()
		{
			return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_CHFKHILFMDK_OFFSET))(this);
		}

		::System::UInt32 HGKANPHAOLC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_HGKANPHAOLC_OFFSET))(this);
		}

		::System::Boolean MDPDKEBEDIE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAANOKAHGIM_MDPDKEBEDIE_OFFSET))(this, a1);
		}

		::System::Void HKLNIKMMJOB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CAANOKAHGIM_HKLNIKMMJOB_OFFSET))(this, a1, a2);
		}

		::System::Single FANCIJEODCG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_FANCIJEODCG_OFFSET))(this);
		}

		::RPG::Client::CakeRaceGameFightResultData* EBCMAEJKHEK()
		{
			return ((::RPG::Client::CakeRaceGameFightResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_EBCMAEJKHEK_OFFSET))(this);
		}

		::RPG::Client::CakeRaceGameSettlementData* HMOABAHLIJN()
		{
			return ((::RPG::Client::CakeRaceGameSettlementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANOKAHGIM_HMOABAHLIJN_OFFSET))(this);
		}

		::System::Single AHDHDABHAID(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAANOKAHGIM_AHDHDABHAID_OFFSET))(this, a1);
		}

	};
