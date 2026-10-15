#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/System/Object.h"
class BIPIFKDGEFO;
class FAPMPKICHBB;
class LBPCONKMBIK;
namespace RPG::Client { class ExpeditionBattleFlowTeamViewModel; }
namespace RPG::Client { class ExpeditionBattleFlowViewModel; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleMapFunViewModel; }
namespace RPG::Client { class ExpeditionBattleMapItemViewModel; }
namespace RPG::Client { class ExpeditionBattleMapOverviewViewModel; }
namespace RPG::Client { class ExpeditionBattleRankViewModel; }
namespace RPG::Client { class ExpeditionBattleRecommendLineupViewModel; }
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ExpeditionBattleRouteRecordViewModel; }
namespace RPG::Client { class ExpeditionBattleSettleViewModel; }
namespace RPG::Client { class ExpeditionBattleStageDetailViewModel; }
namespace RPG::Client { class ExpeditionBattleStarInfoDetailViewModel; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace RPG::Client { class ExpeditionBattleTeamEditViewModel; }
namespace System { class String; }

#define FONPCMBPHFN_AOOADKJMGJL_OFFSET UNITYSDK_OFFSET(0x158FE1B0)
#define FONPCMBPHFN_CIPABBHMNFO_OFFSET UNITYSDK_OFFSET(0x158FF050)
#define FONPCMBPHFN_CJJMJIKDDII_OFFSET UNITYSDK_OFFSET(0x158FE850)
#define FONPCMBPHFN_CTOR_OFFSET UNITYSDK_OFFSET(0x158FE140)
#define FONPCMBPHFN_DFKDCJKEKEI_OFFSET UNITYSDK_OFFSET(0x158FF220)
#define FONPCMBPHFN_ECLGOLFAJPN_OFFSET UNITYSDK_OFFSET(0x158FEF50)
#define FONPCMBPHFN_EEHNIEINIFG_OFFSET UNITYSDK_OFFSET(0x158FEE10)
#define FONPCMBPHFN_FMPDBLELIEJ_OFFSET UNITYSDK_OFFSET(0x158FEB40)
#define FONPCMBPHFN_GCENNICEENA_OFFSET UNITYSDK_OFFSET(0x158FED30)
#define FONPCMBPHFN_HLIEKPIBCIP_OFFSET UNITYSDK_OFFSET(0x158FF0A0)
#define FONPCMBPHFN_JDGMMBDBBHI_OFFSET UNITYSDK_OFFSET(0x158FE150)
#define FONPCMBPHFN_KDBDJCLPDGC_OFFSET UNITYSDK_OFFSET(0x158FF180)
#define FONPCMBPHFN_LLGOLBLAGEL_OFFSET UNITYSDK_OFFSET(0x158FEC90)
#define FONPCMBPHFN_MPOKDCDEFBE_OFFSET UNITYSDK_OFFSET(0x158FE980)
#define FONPCMBPHFN_NPAPMDMPAFA_OFFSET UNITYSDK_OFFSET(0x158FEFE0)

inline static constexpr unsigned int FONPCMBPHFN_TypeDefinitionIndex = 63959;

	class FONPCMBPHFN : public ::System::Object
	{
	public:
		::BIPIFKDGEFO* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::BIPIFKDGEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIPIFKDGEFO*))((::PBYTE)hIl2Cpp + FONPCMBPHFN_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleMapOverviewViewModel* JDGMMBDBBHI()
		{
			return ((::RPG::Client::ExpeditionBattleMapOverviewViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FONPCMBPHFN_JDGMMBDBBHI_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleStageDetailViewModel* AOOADKJMGJL(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleStageDetailViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FONPCMBPHFN_AOOADKJMGJL_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleTeamEditViewModel* CJJMJIKDDII(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleTeamEditViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FONPCMBPHFN_CJJMJIKDDII_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleSettleViewModel* MPOKDCDEFBE()
		{
			return ((::RPG::Client::ExpeditionBattleSettleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FONPCMBPHFN_MPOKDCDEFBE_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleSettleViewModel* FMPDBLELIEJ(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleSettleViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FONPCMBPHFN_FMPDBLELIEJ_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleFlowViewModel* LLGOLBLAGEL(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleFlowViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FONPCMBPHFN_LLGOLBLAGEL_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleFlowTeamViewModel* GCENNICEENA(::System::Int32 a1, ::RPG::Client::ExpeditionBattleTeam* a2, ::RPG::Client::ExpeditionBattleRoute* a3, ::System::String* a4)
		{
			return ((::RPG::Client::ExpeditionBattleFlowTeamViewModel*(*)(::PVOID, ::System::Int32, ::RPG::Client::ExpeditionBattleTeam*, ::RPG::Client::ExpeditionBattleRoute*, ::System::String*))((::PBYTE)hIl2Cpp + FONPCMBPHFN_GCENNICEENA_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::ExpeditionBattleRouteRecordViewModel* EEHNIEINIFG(::LBPCONKMBIK* a1, ::LBPCONKMBIK* a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::Client::ExpeditionBattleRoute* a5, ::System::String* a6)
		{
			return ((::RPG::Client::ExpeditionBattleRouteRecordViewModel*(*)(::PVOID, ::LBPCONKMBIK*, ::LBPCONKMBIK*, ::System::Boolean, ::System::Int32, ::RPG::Client::ExpeditionBattleRoute*, ::System::String*))((::PBYTE)hIl2Cpp + FONPCMBPHFN_EEHNIEINIFG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::ExpeditionBattleMapFunViewModel* ECLGOLFAJPN(::FAPMPKICHBB* a1)
		{
			return ((::RPG::Client::ExpeditionBattleMapFunViewModel*(*)(::PVOID, ::FAPMPKICHBB*))((::PBYTE)hIl2Cpp + FONPCMBPHFN_ECLGOLFAJPN_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleRecommendLineupViewModel* NPAPMDMPAFA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleRecommendLineupViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FONPCMBPHFN_NPAPMDMPAFA_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleRankViewModel* CIPABBHMNFO(::RPG::Client::ExpeditionBattleRank a1)
		{
			return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID, ::RPG::Client::ExpeditionBattleRank))((::PBYTE)hIl2Cpp + FONPCMBPHFN_CIPABBHMNFO_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleRankViewModel* HLIEKPIBCIP(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FONPCMBPHFN_HLIEKPIBCIP_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleStarInfoDetailViewModel* KDBDJCLPDGC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ExpeditionBattleStarInfoDetailViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FONPCMBPHFN_KDBDJCLPDGC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ExpeditionBattleMapItemViewModel* DFKDCJKEKEI(::RPG::Client::ExpeditionBattleMap* a1)
		{
			return ((::RPG::Client::ExpeditionBattleMapItemViewModel*(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*))((::PBYTE)hIl2Cpp + FONPCMBPHFN_DFKDCJKEKEI_OFFSET))(this, a1);
		}

	};
