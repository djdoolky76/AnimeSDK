#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
class FDLCNGPGEFP;
class FGJAKGPJCKB;
class JBACCAGFHON;
class LNLAOECCCDM;
class MIMCAGPCALM;
class PCBNCBNOAAE;
namespace RPG::Client { class CakeRaceBattleItemSyncData; }
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace RPG::Client { class CakeRaceGameFightResultData; }
namespace RPG::Client { class CakeRaceGameGuessData; }
namespace RPG::Client { class CakeRaceGameSettlementData; }
namespace RPG::Client { class CakeRaceGameVoteData; }
namespace RPG::Client { class CakeRaceReceiveChatEventData; }
namespace RPG::Client::CakeRace { class CakeRaceFieldSectionGameData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MIMCAGPCALM_ADD_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0xB956690)
#define MIMCAGPCALM_ADD_ONBETRSP_OFFSET UNITYSDK_OFFSET(0xB956250)
#define MIMCAGPCALM_ADD_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0xB956750)
#define MIMCAGPCALM_ADD_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0xB956850)
#define MIMCAGPCALM_ADD_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB956150)
#define MIMCAGPCALM_ADD_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0xB956590)
#define MIMCAGPCALM_ADD_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0xB9563D0)
#define MIMCAGPCALM_ADD_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0xB956490)
#define MIMCAGPCALM_ADD_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0xB956310)
#define MIMCAGPCALM_BHFOPLHMMFL_OFFSET UNITYSDK_OFFSET(0xB957B40)
#define MIMCAGPCALM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB956A30)
#define MIMCAGPCALM_CBDMNMJLHJI_OFFSET UNITYSDK_OFFSET(0xB9572A0)
#define MIMCAGPCALM_CHFKHILFMDK_OFFSET UNITYSDK_OFFSET(0xB957C00)
#define MIMCAGPCALM_CTOR_OFFSET UNITYSDK_OFFSET(0xB956AB0)
#define MIMCAGPCALM_DAGIFMFGLOM_OFFSET UNITYSDK_OFFSET(0xB957E40)
#define MIMCAGPCALM_DBDAEMPABMJ_OFFSET UNITYSDK_OFFSET(0xB9573F0)
#define MIMCAGPCALM_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB956AC0)
#define MIMCAGPCALM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB956FA0)
#define MIMCAGPCALM_DKLFEFDLELM_OFFSET UNITYSDK_OFFSET(0xB957810)
#define MIMCAGPCALM_DLFBIMGPMHM_OFFSET UNITYSDK_OFFSET(0xB9569D0)
#define MIMCAGPCALM_DOFEJALFGDA_OFFSET UNITYSDK_OFFSET(0xB957A20)
#define MIMCAGPCALM_EBCMAEJKHEK_OFFSET UNITYSDK_OFFSET(0xB958400)
#define MIMCAGPCALM_EHDFDKCIHIA_OFFSET UNITYSDK_OFFSET(0xB957010)
#define MIMCAGPCALM_EJFAJJDAIOP_OFFSET UNITYSDK_OFFSET(0xB957490)
#define MIMCAGPCALM_EKLNGBFAAMP_OFFSET UNITYSDK_OFFSET(0xB956980)
#define MIMCAGPCALM_GIMJBAEBPNL_OFFSET UNITYSDK_OFFSET(0xB957250)
#define MIMCAGPCALM_GMNIAEJFLOJ_OFFSET UNITYSDK_OFFSET(0xB957190)
#define MIMCAGPCALM_HGKANPHAOLC_OFFSET UNITYSDK_OFFSET(0xB957CA0)
#define MIMCAGPCALM_HMOABAHLIJN_OFFSET UNITYSDK_OFFSET(0xB958450)
#define MIMCAGPCALM_HNHDBJKKPAI_OFFSET UNITYSDK_OFFSET(0xB958080)
#define MIMCAGPCALM_IFABJBGMNOF_OFFSET UNITYSDK_OFFSET(0xB957D20)
#define MIMCAGPCALM_IHKHBIKDGBI_OFFSET UNITYSDK_OFFSET(0xB956920)
#define MIMCAGPCALM_IJMHHDCIEOO_OFFSET UNITYSDK_OFFSET(0xB958280)
#define MIMCAGPCALM_JBOBGAEHFHI_OFFSET UNITYSDK_OFFSET(0xB956910)
#define MIMCAGPCALM_LLBGALMEBJP_OFFSET UNITYSDK_OFFSET(0xB957910)
#define MIMCAGPCALM_MOEALBLNNIL_OFFSET UNITYSDK_OFFSET(0xB957140)
#define MIMCAGPCALM_MPKDHJLADPI_OFFSET UNITYSDK_OFFSET(0xB958340)
#define MIMCAGPCALM_NBGPMPIDIMM_OFFSET UNITYSDK_OFFSET(0xB957F60)
#define MIMCAGPCALM_OIKGKPMFCAJ_OFFSET UNITYSDK_OFFSET(0xB9579D0)
#define MIMCAGPCALM_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET UNITYSDK_OFFSET(0xB9566F0)
#define MIMCAGPCALM_REMOVE_ONBETRSP_OFFSET UNITYSDK_OFFSET(0xB9562B0)
#define MIMCAGPCALM_REMOVE_ONCHATRECEIVED_OFFSET UNITYSDK_OFFSET(0xB9567D0)
#define MIMCAGPCALM_REMOVE_ONDYNAMICCATBORN_OFFSET UNITYSDK_OFFSET(0xB9568B0)
#define MIMCAGPCALM_REMOVE_ONLEVELSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB9561D0)
#define MIMCAGPCALM_REMOVE_ONSYNCBATTLEITEM_OFFSET UNITYSDK_OFFSET(0xB956610)
#define MIMCAGPCALM_REMOVE_ONVOTECONFIRMRSP_OFFSET UNITYSDK_OFFSET(0xB956430)
#define MIMCAGPCALM_REMOVE_ONVOTERESULT_OFFSET UNITYSDK_OFFSET(0xB956510)
#define MIMCAGPCALM_REMOVE_ONVOTERSP_OFFSET UNITYSDK_OFFSET(0xB956370)

inline static constexpr unsigned int MIMCAGPCALM_TypeDefinitionIndex = 78111;

	class MIMCAGPCALM : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* OnSyncBattleItem; // 0x10
		::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* OnVoteResult; // 0x18
		::LNLAOECCCDM* IDKCCHJHNDG; // 0x20
		::FGJAKGPJCKB* MABAGAEOIPH; // 0x28
		::System::Action_1<::System::UInt32>* OnDynamicCatBorn; // 0x30
		::System::Action_1<::System::Boolean>* OnVoteConfirmRsp; // 0x38
		::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* OnLevelStateChanged; // 0x40
		::System::Action_1<::System::Boolean>* OnBetRsp; // 0x48
		::System::Action* OnBattleItemUseFailed; // 0x50
		::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* OnChatReceived; // 0x58
		::System::Action_1<::System::Boolean>* OnVoteRsp; // 0x60
		::JBACCAGFHON* PDENFEFCAGN; // 0x68
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_CTOR_OFFSET))(this, a1);
		}

		::System::Void add_OnLevelStateChanged(::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONLEVELSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLevelStateChanged(::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONLEVELSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnBetRsp(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONBETRSP_OFFSET))(this, a1);
		}

		::System::Void remove_OnBetRsp(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONBETRSP_OFFSET))(this, a1);
		}

		::System::Void add_OnVoteRsp(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONVOTERSP_OFFSET))(this, a1);
		}

		::System::Void remove_OnVoteRsp(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONVOTERSP_OFFSET))(this, a1);
		}

		::System::Void add_OnVoteConfirmRsp(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONVOTECONFIRMRSP_OFFSET))(this, a1);
		}

		::System::Void remove_OnVoteConfirmRsp(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONVOTECONFIRMRSP_OFFSET))(this, a1);
		}

		::System::Void add_OnVoteResult(::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONVOTERESULT_OFFSET))(this, a1);
		}

		::System::Void remove_OnVoteResult(::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceGameVoteData*>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONVOTERESULT_OFFSET))(this, a1);
		}

		::System::Void add_OnSyncBattleItem(::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONSYNCBATTLEITEM_OFFSET))(this, a1);
		}

		::System::Void remove_OnSyncBattleItem(::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceBattleItemSyncData*>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONSYNCBATTLEITEM_OFFSET))(this, a1);
		}

		::System::Void add_OnBattleItemUseFailed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONBATTLEITEMUSEFAILED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBattleItemUseFailed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONBATTLEITEMUSEFAILED_OFFSET))(this, a1);
		}

		::System::Void add_OnChatReceived(::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONCHATRECEIVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChatReceived(::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::CakeRaceReceiveChatEventData*>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONCHATRECEIVED_OFFSET))(this, a1);
		}

		::System::Void add_OnDynamicCatBorn(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_ADD_ONDYNAMICCATBORN_OFFSET))(this, a1);
		}

		::System::Void remove_OnDynamicCatBorn(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_REMOVE_ONDYNAMICCATBORN_OFFSET))(this, a1);
		}

		::LNLAOECCCDM* JBOBGAEHFHI()
		{
			return ((::LNLAOECCCDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_JBOBGAEHFHI_OFFSET))(this);
		}

		::System::Int32 IHKHBIKDGBI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_IHKHBIKDGBI_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType EKLNGBFAAMP()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_EKLNGBFAAMP_OFFSET))(this);
		}

		::System::Boolean DLFBIMGPMHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_DLFBIMGPMHM_OFFSET))(this);
		}

		static ::MIMCAGPCALM* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::MIMCAGPCALM*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_DISPOSE_OFFSET))(this);
		}

		::System::Void EHDFDKCIHIA(::PCBNCBNOAAE* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PCBNCBNOAAE*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIMCAGPCALM_EHDFDKCIHIA_OFFSET))(this, a1, a2);
		}

		::System::Void MOEALBLNNIL(::FGJAKGPJCKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGJAKGPJCKB*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_MOEALBLNNIL_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRace::CakeRaceFieldSectionGameData* GMNIAEJFLOJ()
		{
			return ((::RPG::Client::CakeRace::CakeRaceFieldSectionGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_GMNIAEJFLOJ_OFFSET))(this);
		}

		::System::UInt32 GIMJBAEBPNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_GIMJBAEBPNL_OFFSET))(this);
		}

		::System::Void CBDMNMJLHJI(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_CBDMNMJLHJI_OFFSET))(this, a1);
		}

		::System::Void DBDAEMPABMJ(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_DBDAEMPABMJ_OFFSET))(this, a1);
		}

		::System::Void EJFAJJDAIOP(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_EJFAJJDAIOP_OFFSET))(this, a1);
		}

		::System::Void DKLFEFDLELM(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_DKLFEFDLELM_OFFSET))(this, a1);
		}

		::System::Void LLBGALMEBJP(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_LLBGALMEBJP_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceGameGuessData* OIKGKPMFCAJ()
		{
			return ((::RPG::Client::CakeRaceGameGuessData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_OIKGKPMFCAJ_OFFSET))(this);
		}

		::System::Void DOFEJALFGDA(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_DOFEJALFGDA_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceGameVoteData* BHFOPLHMMFL()
		{
			return ((::RPG::Client::CakeRaceGameVoteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_BHFOPLHMMFL_OFFSET))(this);
		}

		::RPG::Client::CakeRaceEffectDataItem* CHFKHILFMDK()
		{
			return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_CHFKHILFMDK_OFFSET))(this);
		}

		::System::UInt32 HGKANPHAOLC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_HGKANPHAOLC_OFFSET))(this);
		}

		::System::Void IFABJBGMNOF(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_IFABJBGMNOF_OFFSET))(this, a1);
		}

		::System::Void DAGIFMFGLOM(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_DAGIFMFGLOM_OFFSET))(this, a1);
		}

		::System::Void NBGPMPIDIMM(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_NBGPMPIDIMM_OFFSET))(this, a1);
		}

		::System::Single HNHDBJKKPAI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_HNHDBJKKPAI_OFFSET))(this);
		}

		::System::Void IJMHHDCIEOO(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_IJMHHDCIEOO_OFFSET))(this, a1);
		}

		::System::Void MPKDHJLADPI(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MIMCAGPCALM_MPKDHJLADPI_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceGameFightResultData* EBCMAEJKHEK()
		{
			return ((::RPG::Client::CakeRaceGameFightResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_EBCMAEJKHEK_OFFSET))(this);
		}

		::RPG::Client::CakeRaceGameSettlementData* HMOABAHLIJN()
		{
			return ((::RPG::Client::CakeRaceGameSettlementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMCAGPCALM_HMOABAHLIJN_OFFSET))(this);
		}

	};
