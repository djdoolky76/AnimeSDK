#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/ValueTuple.h"
class KFELGAIGHAP;
class LEILONLGEGA;
namespace RPG::Client { class EmoPlayableGraphConfig; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class BattlePerformConfig; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace RPG::GameCore { class BattlePerformInit; }
namespace RPG::GameCore { class BattlePerformStageConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPGICHGAMPJ_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0xB5BBAA0)
#define KPGICHGAMPJ_BIKLJBLNOFA_OFFSET UNITYSDK_OFFSET(0xB5BAEC0)
#define KPGICHGAMPJ_BMAELEAJPFO_OFFSET UNITYSDK_OFFSET(0xB5B98D0)
#define KPGICHGAMPJ_BMMIICAKOKM_OFFSET UNITYSDK_OFFSET(0xB5B8780)
#define KPGICHGAMPJ_CAOKACKKPGC_OFFSET UNITYSDK_OFFSET(0xB5BB000)
#define KPGICHGAMPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5BBD10)
#define KPGICHGAMPJ_CEJGDPCOONC_OFFSET UNITYSDK_OFFSET(0xB5B87D0)
#define KPGICHGAMPJ_CENCDJEDEHK_OFFSET UNITYSDK_OFFSET(0xB5BAD80)
#define KPGICHGAMPJ_CGGBCEHJDAK_OFFSET UNITYSDK_OFFSET(0xB5B7FB0)
#define KPGICHGAMPJ_CLNLNKDPGFL_OFFSET UNITYSDK_OFFSET(0xB5BA3D0)
#define KPGICHGAMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BBCD0)
#define KPGICHGAMPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5B76D0)
#define KPGICHGAMPJ_DKKOHPGBIIN_OFFSET UNITYSDK_OFFSET(0xB5BAB20)
#define KPGICHGAMPJ_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0xB5BBA00)
#define KPGICHGAMPJ_EEAHGDCCCPB_OFFSET UNITYSDK_OFFSET(0xB5BA190)
#define KPGICHGAMPJ_EGFFEPIGLKJ_OFFSET UNITYSDK_OFFSET(0xB5B81D0)
#define KPGICHGAMPJ_EJADBMPCLKO_OFFSET UNITYSDK_OFFSET(0xB5BA730)
#define KPGICHGAMPJ_ELIOPCFBFIK_OFFSET UNITYSDK_OFFSET(0xB5BB290)
#define KPGICHGAMPJ_FCEEMALKLBO_OFFSET UNITYSDK_OFFSET(0xB5B9B00)
#define KPGICHGAMPJ_FKCCPOOBBOI_OFFSET UNITYSDK_OFFSET(0xB5BBC70)
#define KPGICHGAMPJ_GACLJCLHFKG_OFFSET UNITYSDK_OFFSET(0xB5B95F0)
#define KPGICHGAMPJ_GET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0xB5BBC50)
#define KPGICHGAMPJ_GGHIBJHMACA_OFFSET UNITYSDK_OFFSET(0xB5B7DB0)
#define KPGICHGAMPJ_HBBALKDLIIA_OFFSET UNITYSDK_OFFSET(0xB5B78B0)
#define KPGICHGAMPJ_HCBMNCPPDCK_OFFSET UNITYSDK_OFFSET(0xB5BAE00)
#define KPGICHGAMPJ_IBNKEJHNHFB_OFFSET UNITYSDK_OFFSET(0xB5BA200)
#define KPGICHGAMPJ_IGEJMCOHHBM_OFFSET UNITYSDK_OFFSET(0xB5B9F30)
#define KPGICHGAMPJ_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0xB5BB230)
#define KPGICHGAMPJ_INHJCNLGCMB_OFFSET UNITYSDK_OFFSET(0xB5BB940)
#define KPGICHGAMPJ_IPKMJFOPCLD_OFFSET UNITYSDK_OFFSET(0xB5BBA50)
#define KPGICHGAMPJ_JHHDLGHHLAH_OFFSET UNITYSDK_OFFSET(0xB5B9A50)
#define KPGICHGAMPJ_KEMLPODAFMF_OFFSET UNITYSDK_OFFSET(0xB5B7CE0)
#define KPGICHGAMPJ_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0xB5B85E0)
#define KPGICHGAMPJ_LCAFPLFLGLP_OFFSET UNITYSDK_OFFSET(0xB5BA350)
#define KPGICHGAMPJ_MAHBJAFIIII_OFFSET UNITYSDK_OFFSET(0xB5B7960)
#define KPGICHGAMPJ_MDPCLECCNBJ_OFFSET UNITYSDK_OFFSET(0xB5B8A10)
#define KPGICHGAMPJ_MENIOIADGCM_OFFSET UNITYSDK_OFFSET(0xB5B7A60)
#define KPGICHGAMPJ_MMCPIICMDIM_OFFSET UNITYSDK_OFFSET(0xB5BB1B0)
#define KPGICHGAMPJ_NHDDIMCINOK_OFFSET UNITYSDK_OFFSET(0xB5B9760)
#define KPGICHGAMPJ_OKGDKBKJHIO_OFFSET UNITYSDK_OFFSET(0xB5B7B60)
#define KPGICHGAMPJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB5B7720)
#define KPGICHGAMPJ_SET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0xB5BBC60)
#define KPGICHGAMPJ_TICK_OFFSET UNITYSDK_OFFSET(0xB5B7830)

inline static constexpr unsigned int KPGICHGAMPJ_TypeDefinitionIndex = 57350;

	class KPGICHGAMPJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::KFELGAIGHAP* PGFBHEAMIMI; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::BattlePerformStageConfig* KOODKHLBGJK; // 0x28
		::LEILONLGEGA* NONDAOPAHNK; // 0x30
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x38
		::RPG::GameCore::BattlePerformInit* GOENDEDEEHI; // 0x40
		::RPG::Client::Promises::Promise* ELNIFMBGBOE; // 0x48
		::RPG::Client::Promises::Promise* GIGJIFIMFLO; // 0x50
		::System::Exception* LMLAIDOEMCK; // 0x58
		::LEILONLGEGA* HCKOJFECMOH; // 0x60
		::RPG::Client::Promises::Promise* DGNCIKHEEKH; // 0x68
		::KFELGAIGHAP* GDHIGBONMGN; // 0x70
		::RPG::Client::EmoPlayableGraphConfig* BEDFGGHNOOF; // 0x78
		::System::String* NKCNGCHLNEI; // 0x80
		::System::Collections::Generic::List_1<::System::ValueTuple>* AOKFOAOOAFM; // 0x88
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* PKJIDNPPEIH; // 0x90
		::RPG::GameCore::LevelGraphComponent* LJCPCPJJEIB; // 0x98
		::RPG::GameCore::BattlePerformConfig* NFMCAMOLLLP; // 0xA0
		::System::Boolean _WorkFinish_k__BackingField; // 0xA8
		::System::Boolean JKIHPEJLIDP; // 0xA9
		::System::Byte _padding0[0x2];
		::System::Int32 NNOMNKPPIHG; // 0xAC
		static ::System::String** StaticGet_MHKDAEHEJKB()
		{
			return (::System::String**)UnitySDK::FromName("", "KPGICHGAMPJ")->GetStaticField(0x65830);
		}

		// static const ::System::String* PFGNCCCMBMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPGICHGAMPJ_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_TICK_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* CGGBCEHJDAK(::RPG::GameCore::BattlePerformInit* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::GameCore::BattlePerformInit*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_CGGBCEHJDAK_OFFSET))(this, a1, a2);
		}

		::System::Void KHFHNDEBGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_KHFHNDEBGDH_OFFSET))(this);
		}

		::System::Void MDPCLECCNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_MDPCLECCNBJ_OFFSET))(this);
		}

		::System::Void NHDDIMCINOK(::RPG::GameCore::BattlePerformCreateActor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_NHDDIMCINOK_OFFSET))(this, a1);
		}

		::System::Void GACLJCLHFKG(::RPG::GameCore::BattlePerformCaptureActor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_GACLJCLHFKG_OFFSET))(this, a1);
		}

		::System::Void FCEEMALKLBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_FCEEMALKLBO_OFFSET))(this);
		}

		::System::Int32 EEAHGDCCCPB(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::BattlePerformCaptureActor* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_EEAHGDCCCPB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* IBNKEJHNHFB(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_IBNKEJHNHFB_OFFSET))(this, a1, a2);
		}

		::System::Void DKKOHPGBIIN(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_DKKOHPGBIIN_OFFSET))(this, a1, a2);
		}

		::System::Void HCBMNCPPDCK(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_HCBMNCPPDCK_OFFSET))(this, a1, a2);
		}

		::System::Void BIKLJBLNOFA(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_BIKLJBLNOFA_OFFSET))(this, a1, a2);
		}

		::System::Void LCAFPLFLGLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_LCAFPLFLGLP_OFFSET))(this, a1);
		}

		::System::Void MMCPIICMDIM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_MMCPIICMDIM_OFFSET))(this, a1);
		}

		::System::Void CAOKACKKPGC(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_CAOKACKKPGC_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* BMAELEAJPFO(::RPG::GameCore::BattlePerformCreateActor* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_BMAELEAJPFO_OFFSET))(this, a1);
		}

		::System::Void IGEJMCOHHBM(::RPG::GameCore::BattlePerformCreateActor* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_IGEJMCOHHBM_OFFSET))(this, a1, a2);
		}

		::System::Void CENCDJEDEHK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_CENCDJEDEHK_OFFSET))(this, a1);
		}

		::System::Void CLNLNKDPGFL(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_CLNLNKDPGFL_OFFSET))(this, a1, a2);
		}

		::System::Boolean JHHDLGHHLAH(::RPG::GameCore::BattlePerformCaptureActor* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_JHHDLGHHLAH_OFFSET))(this, a1);
		}

		::System::Void EJADBMPCLKO(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_EJADBMPCLKO_OFFSET))(this, a1, a2);
		}

		::System::Void OKGDKBKJHIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_OKGDKBKJHIO_OFFSET))(this, a1);
		}

		::System::Void GGHIBJHMACA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_GGHIBJHMACA_OFFSET))(this);
		}

		::System::Void MAHBJAFIIII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_MAHBJAFIIII_OFFSET))(this);
		}

		::System::Void MENIOIADGCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_MENIOIADGCM_OFFSET))(this);
		}

		::System::Void HBBALKDLIIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_HBBALKDLIIA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* CEJGDPCOONC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_CEJGDPCOONC_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* EGFFEPIGLKJ()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_EGFFEPIGLKJ_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* ELIOPCFBFIK()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_ELIOPCFBFIK_OFFSET))(this);
		}

		::System::Void BMMIICAKOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_BMMIICAKOKM_OFFSET))(this);
		}

		::System::Void DMJKBKMKKCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_DMJKBKMKKCG_OFFSET))(this);
		}

		::System::Void IPKMJFOPCLD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_IPKMJFOPCLD_OFFSET))(this, a1);
		}

		::System::Void INHJCNLGCMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_INHJCNLGCMB_OFFSET))(this);
		}

		::System::Void KEMLPODAFMF(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_KEMLPODAFMF_OFFSET))(this, a1);
		}

		::System::Void IIIFCOHCFIP(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_IIIFCOHCFIP_OFFSET))(this, a1);
		}

		::System::Void ABCMNBHIAKM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_ABCMNBHIAKM_OFFSET))(this, a1);
		}

		::System::Boolean get_WorkFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_GET_WORKFINISH_OFFSET))(this);
		}

		::System::Void set_WorkFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_SET_WORKFINISH_OFFSET))(this, a1);
		}

		::System::String* FKCCPOOBBOI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGICHGAMPJ_FKCCPOOBBOI_OFFSET))(this);
		}

	};
