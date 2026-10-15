#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/RPG/Client/TimeRewindCheckSetStateResult.h"
#include "unitysdk/RPG/Client/TimeRewindExtraMode.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
class ALKANMJECDD;
class GOHOKMDFJHL;
class HCFJIKNHIFB;
class ODNPHLHNHMC;
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::Client { class TimeRewindNodeIndexInfo; }
namespace RPG::Client { class TimeRewindPathRuntime; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SingleTimeRewindEntityAnimEventBaseConfig; }
namespace RPG::GameCore { class TimeRewindAudioConfig; }
namespace RPG::GameCore { class TimeRewindCameraShakeConfig; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNGHOKMIDGD_ADIODFBKPFK_OFFSET UNITYSDK_OFFSET(0xBDCE840)
#define BNGHOKMIDGD_ADMEHMIGICC_OFFSET UNITYSDK_OFFSET(0xBDD3A20)
#define BNGHOKMIDGD_AHGAFBOPBJN_OFFSET UNITYSDK_OFFSET(0xBDD4DA0)
#define BNGHOKMIDGD_ANGAKBJHLOH_OFFSET UNITYSDK_OFFSET(0xBDCCA50)
#define BNGHOKMIDGD_APALGMIEAEL_OFFSET UNITYSDK_OFFSET(0xBDD1EE0)
#define BNGHOKMIDGD_BGBIHGCMKJF_OFFSET UNITYSDK_OFFSET(0xBDD4E20)
#define BNGHOKMIDGD_BIKLCPOKMCA_OFFSET UNITYSDK_OFFSET(0xBDD43B0)
#define BNGHOKMIDGD_BJBOEPJIGOK_OFFSET UNITYSDK_OFFSET(0xBDCDC50)
#define BNGHOKMIDGD_BJGCNDIKFAF_OFFSET UNITYSDK_OFFSET(0xBDD48E0)
#define BNGHOKMIDGD_BLCOEEFHPLL_OFFSET UNITYSDK_OFFSET(0xBDCFBB0)
#define BNGHOKMIDGD_BMKGIIKDMMC_OFFSET UNITYSDK_OFFSET(0xBDD4970)
#define BNGHOKMIDGD_CAPDGHLMCDJ_OFFSET UNITYSDK_OFFSET(0xBDCE8A0)
#define BNGHOKMIDGD_CBIOFCHFCPL_OFFSET UNITYSDK_OFFSET(0xBDCD5D0)
#define BNGHOKMIDGD_CEFJKLHFDDO_OFFSET UNITYSDK_OFFSET(0xBDD2970)
#define BNGHOKMIDGD_CMPDGGOEMIO_OFFSET UNITYSDK_OFFSET(0xBDD0A30)
#define BNGHOKMIDGD_CPABNNNDJAH_OFFSET UNITYSDK_OFFSET(0xBDCCE40)
#define BNGHOKMIDGD_CPOINDFEEIO_OFFSET UNITYSDK_OFFSET(0xBDD4040)
#define BNGHOKMIDGD_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD4E70)
#define BNGHOKMIDGD_DAMOMEGLCJC_OFFSET UNITYSDK_OFFSET(0xBDD0DF0)
#define BNGHOKMIDGD_DFOFGONIDNM_OFFSET UNITYSDK_OFFSET(0xBDCFC10)
#define BNGHOKMIDGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDD4820)
#define BNGHOKMIDGD_DNPPAGIKBKO_OFFSET UNITYSDK_OFFSET(0xBDCEAD0)
#define BNGHOKMIDGD_EAJKELFHMHE_OFFSET UNITYSDK_OFFSET(0xBDCC950)
#define BNGHOKMIDGD_EBMIHIIKNPF_OFFSET UNITYSDK_OFFSET(0xBDD2C10)
#define BNGHOKMIDGD_EJAJCMOEPGI_OFFSET UNITYSDK_OFFSET(0xBDD0D10)
#define BNGHOKMIDGD_EPCDJJFFDAB_OFFSET UNITYSDK_OFFSET(0xBDCE160)
#define BNGHOKMIDGD_FHGBIPFNHKE_OFFSET UNITYSDK_OFFSET(0xBDCF270)
#define BNGHOKMIDGD_FHNLJADKJIL_OFFSET UNITYSDK_OFFSET(0xBDCEEF0)
#define BNGHOKMIDGD_FIPEGBCAJEB_OFFSET UNITYSDK_OFFSET(0xBDCEE70)
#define BNGHOKMIDGD_FMLBPAJGHNF_OFFSET UNITYSDK_OFFSET(0xBDD3620)
#define BNGHOKMIDGD_FOEEELNOECB_OFFSET UNITYSDK_OFFSET(0xBDD0C30)
#define BNGHOKMIDGD_GACEMGILFEE_OFFSET UNITYSDK_OFFSET(0xBDD3730)
#define BNGHOKMIDGD_GACPCMLKAMF_OFFSET UNITYSDK_OFFSET(0xBDD1BA0)
#define BNGHOKMIDGD_GCJEOBHHBEE_OFFSET UNITYSDK_OFFSET(0xBDCDCF0)
#define BNGHOKMIDGD_GEMKCEBDEGN_OFFSET UNITYSDK_OFFSET(0xBDCF030)
#define BNGHOKMIDGD_GET_ENABLELOOPREWIND_OFFSET UNITYSDK_OFFSET(0xBDD4E30)
#define BNGHOKMIDGD_GET_ISINCONTROL_OFFSET UNITYSDK_OFFSET(0xBDD4D60)
#define BNGHOKMIDGD_GET_ISINMOTION_OFFSET UNITYSDK_OFFSET(0xBDD4D40)
#define BNGHOKMIDGD_GET_LOOPREWINDSNAPTARGETRATIO_OFFSET UNITYSDK_OFFSET(0xBDD4E50)
#define BNGHOKMIDGD_GET_REWINDEXTRAMODE_OFFSET UNITYSDK_OFFSET(0xBDD0DD0)
#define BNGHOKMIDGD_GIIBNBNFHJN_OFFSET UNITYSDK_OFFSET(0xBDD4130)
#define BNGHOKMIDGD_GJNEJBMKAIH_OFFSET UNITYSDK_OFFSET(0xBDD0D80)
#define BNGHOKMIDGD_GLJFKBJAHNK_OFFSET UNITYSDK_OFFSET(0xBDD26C0)
#define BNGHOKMIDGD_GNEGGEFDKHO_OFFSET UNITYSDK_OFFSET(0xBDCD290)
#define BNGHOKMIDGD_GPHOGBJELJK_OFFSET UNITYSDK_OFFSET(0xBDCC5F0)
#define BNGHOKMIDGD_HDDNGFCOLBL_OFFSET UNITYSDK_OFFSET(0xBDD27A0)
#define BNGHOKMIDGD_HNEOLPBHCGC_1_OFFSET UNITYSDK_OFFSET(0xBDCE650)
#define BNGHOKMIDGD_HNEOLPBHCGC_OFFSET UNITYSDK_OFFSET(0xBDCE520)
#define BNGHOKMIDGD_HOJDMBGOFKI_OFFSET UNITYSDK_OFFSET(0xBDD49D0)
#define BNGHOKMIDGD_IAAOBDCIKIM_OFFSET UNITYSDK_OFFSET(0xBDD4D80)
#define BNGHOKMIDGD_IAELDEDKBEH_OFFSET UNITYSDK_OFFSET(0xBDCD140)
#define BNGHOKMIDGD_IGFLMLHOCPG_OFFSET UNITYSDK_OFFSET(0xBDD3180)
#define BNGHOKMIDGD_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0xBDCDD90)
#define BNGHOKMIDGD_IKMHNLFJAAG_OFFSET UNITYSDK_OFFSET(0xBDCE980)
#define BNGHOKMIDGD_IOMHKOOACID_OFFSET UNITYSDK_OFFSET(0xBDD0AF0)
#define BNGHOKMIDGD_IPIEFLKKHLB_OFFSET UNITYSDK_OFFSET(0xBDD1FC0)
#define BNGHOKMIDGD_JCDOKIGJFEM_OFFSET UNITYSDK_OFFSET(0xBDD1E60)
#define BNGHOKMIDGD_JDEFPOMNAIF_OFFSET UNITYSDK_OFFSET(0xBDD3C30)
#define BNGHOKMIDGD_JEIHIDFMOMB_OFFSET UNITYSDK_OFFSET(0xBDD4260)
#define BNGHOKMIDGD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBDCD3B0)
#define BNGHOKMIDGD_JLNPJCDIBAE_OFFSET UNITYSDK_OFFSET(0xBDD1390)
#define BNGHOKMIDGD_JNDJEGACMAE_OFFSET UNITYSDK_OFFSET(0xBDD2010)
#define BNGHOKMIDGD_KBINOKACFNF_OFFSET UNITYSDK_OFFSET(0xBDCCBA0)
#define BNGHOKMIDGD_KCNHNOKFEAP_OFFSET UNITYSDK_OFFSET(0xBDD38C0)
#define BNGHOKMIDGD_KIGIOJDMGBL_OFFSET UNITYSDK_OFFSET(0xBDCCD50)
#define BNGHOKMIDGD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBDCC320)
#define BNGHOKMIDGD_LBOEBMFPCPA_OFFSET UNITYSDK_OFFSET(0xBDD4CA0)
#define BNGHOKMIDGD_LDFOCPFMLPM_OFFSET UNITYSDK_OFFSET(0xBDCC850)
#define BNGHOKMIDGD_LEBKPIMEOKA_OFFSET UNITYSDK_OFFSET(0xBDCCA00)
#define BNGHOKMIDGD_LLCEJJIJDGK_OFFSET UNITYSDK_OFFSET(0xBDD1BF0)
#define BNGHOKMIDGD_LOLAAONKJFG_OFFSET UNITYSDK_OFFSET(0xBDD4D90)
#define BNGHOKMIDGD_MHLFFAILHIB_OFFSET UNITYSDK_OFFSET(0xBDD2FC0)
#define BNGHOKMIDGD_MKOLICIOOEF_OFFSET UNITYSDK_OFFSET(0xBDCCDB0)
#define BNGHOKMIDGD_MLBLDFJAJEH_OFFSET UNITYSDK_OFFSET(0xBDCD0C0)
#define BNGHOKMIDGD_MLFCEOGENEK_OFFSET UNITYSDK_OFFSET(0xBDCE390)
#define BNGHOKMIDGD_MNOMACLLCMK_OFFSET UNITYSDK_OFFSET(0xBDCEB70)
#define BNGHOKMIDGD_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0xBDD47C0)
#define BNGHOKMIDGD_NCCGICIAAHA_OFFSET UNITYSDK_OFFSET(0xBDCE750)
#define BNGHOKMIDGD_NCIENGFEKNA_OFFSET UNITYSDK_OFFSET(0xBDD24D0)
#define BNGHOKMIDGD_NCOJGLFGCJC_OFFSET UNITYSDK_OFFSET(0xBDCFC60)
#define BNGHOKMIDGD_NJGCELJHDMH_OFFSET UNITYSDK_OFFSET(0xBDD2060)
#define BNGHOKMIDGD_NLPKMNONHHK_OFFSET UNITYSDK_OFFSET(0xBDCC5A0)
#define BNGHOKMIDGD_OGJCGHEHJAH_OFFSET UNITYSDK_OFFSET(0xBDD2580)
#define BNGHOKMIDGD_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xBDD4750)
#define BNGHOKMIDGD_OKAKAHLELBD_OFFSET UNITYSDK_OFFSET(0xBDD1140)
#define BNGHOKMIDGD_ONMPECDFAIA_OFFSET UNITYSDK_OFFSET(0xBDD0E90)
#define BNGHOKMIDGD_PBAMBMCOKPK_OFFSET UNITYSDK_OFFSET(0xBDD34B0)
#define BNGHOKMIDGD_PBDIMCNJCAJ_OFFSET UNITYSDK_OFFSET(0xBDCDC00)
#define BNGHOKMIDGD_PCMMLOMBNPF_OFFSET UNITYSDK_OFFSET(0xBDD0BA0)
#define BNGHOKMIDGD_PDPMPDHPBCB_OFFSET UNITYSDK_OFFSET(0xBDD4CF0)
#define BNGHOKMIDGD_SET_ENABLELOOPREWIND_OFFSET UNITYSDK_OFFSET(0xBDD4E40)
#define BNGHOKMIDGD_SET_ISINCONTROL_OFFSET UNITYSDK_OFFSET(0xBDD4D70)
#define BNGHOKMIDGD_SET_ISINMOTION_OFFSET UNITYSDK_OFFSET(0xBDD4D50)
#define BNGHOKMIDGD_SET_LOOPREWINDSNAPTARGETRATIO_OFFSET UNITYSDK_OFFSET(0xBDD4E60)
#define BNGHOKMIDGD_SET_REWINDEXTRAMODE_OFFSET UNITYSDK_OFFSET(0xBDD0DE0)

inline static constexpr unsigned int BNGHOKMIDGD_TypeDefinitionIndex = 60792;

	class BNGHOKMIDGD : public ::System::Object
	{
	public:
		::GOHOKMDFJHL* HLNHNOFHCKK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>* DPBJHGEBCEA; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* EPICJFNGBIN; // 0x20
		::Il2CppArray<::ALKANMJECDD*>* BLBMFJNNBCN; // 0x28
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x30
		::RPG::Client::EntityTimelineControlTrackInfo* EABKOHGCHFP; // 0x38
		::System::Collections::Generic::List_1<::ALKANMJECDD*>* MJHIMCFFIHD; // 0x40
		::KJFIKOKBCCA CDKIDBFHNPL; // 0x48
		::ODNPHLHNHMC* GPLKDKGHCMC; // 0xD8
		::HCFJIKNHIFB* HECJOHAAFAF; // 0xE0
		::System::Collections::Generic::List_1<::System::Int32>* GOPNFNABILE; // 0xE8
		::System::Collections::Generic::List_1<::System::Single>* OJLAMFONPIL; // 0xF0
		::System::Collections::Generic::List_1<::System::Object*>* OICCHEPDECO; // 0xF8
		::System::Single HBDAAFBFNBB; // 0x100
		::System::Int32 NNEHDADNGHP; // 0x104
		::System::Boolean HLIEGBLGCFL; // 0x108
		::System::Boolean _EnableLoopRewind_k__BackingField; // 0x109
		::System::Byte _padding0[0x2];
		::System::Single OJAKIFLJJGI; // 0x10C
		::System::Int32 OCFFDIENHPF; // 0x110
		::System::Int32 IAABCLCMLAK; // 0x114
		::System::Single EAMNEAPOAJE; // 0x118
		::System::Single ONCKBJAAFNN; // 0x11C
		::RPG::GameCore::TimeRewindState MPGEHKEOCAK; // 0x120
		::System::Int32 OJHFDBPGDGL; // 0x124
		::System::Single APEJIEHKAAL; // 0x128
		::System::Single NPINECOCALC; // 0x12C
		::System::Boolean MCAPIAKDMAA; // 0x130
		::System::Boolean _LoopRewindSnapTargetRatio_k__BackingField; // 0x131
		::System::Boolean JNGODFEFAGJ; // 0x132
		::System::Boolean _IsInControl_k__BackingField; // 0x133
		::System::Single LDBGKLNCGNP; // 0x134
		::System::Single HBDJCFFDGDD; // 0x138
		::System::Int32 MMDKGDJDJJF; // 0x13C
		::System::Single FAMJLDHBBBM; // 0x140
		::RPG::Client::TimeRewindExtraMode _RewindExtraMode_k__BackingField; // 0x144
		::System::Boolean MIGBNOFIOMI; // 0x148
		::System::Boolean LCJHCMCMNGG; // 0x149
		::System::Boolean OCBIJPLKEEO; // 0x14A
		::System::Boolean _IsInMotion_k__BackingField; // 0x14B
		::System::Single HNNAGFAJOKL; // 0x14C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::Client::EntityTimelineControlTrackInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::EntityTimelineControlTrackInfo*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void NLPKMNONHHK(::ODNPHLHNHMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODNPHLHNHMC*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_NLPKMNONHHK_OFFSET))(this, a1);
		}

		::System::Void GPHOGBJELJK(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::EntityTimelineControlNode*>*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GPHOGBJELJK_OFFSET))(this, a1);
		}

		::RPG::Client::EntityTimelineControlNode* LDFOCPFMLPM(::System::Int32 a1)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_LDFOCPFMLPM_OFFSET))(this, a1);
		}

		::RPG::Client::EntityTimelineControlNode* EAJKELFHMHE(::System::Int32 a1)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_EAJKELFHMHE_OFFSET))(this, a1);
		}

		::System::Void LEBKPIMEOKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_LEBKPIMEOKA_OFFSET))(this);
		}

		::System::Void KBINOKACFNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_KBINOKACFNF_OFFSET))(this);
		}

		::System::Void CPABNNNDJAH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_CPABNNNDJAH_OFFSET))(this, a1);
		}

		::System::Boolean IAELDEDKBEH(::System::Single a1, ::KJFIKOKBCCA a2, ::RPG::GameCore::TimeRewindState a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::KJFIKOKBCCA, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_IAELDEDKBEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void CBIOFCHFCPL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_CBIOFCHFCPL_OFFSET))(this, a1);
		}

		::System::Void MLFCEOGENEK(::RPG::GameCore::TimeRewindState a1, ::System::Single a2, ::System::Func_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState, ::System::Single, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_MLFCEOGENEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HNEOLPBHCGC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_HNEOLPBHCGC_OFFSET))(this, a1);
		}

		::System::Boolean HNEOLPBHCGC_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_HNEOLPBHCGC_1_OFFSET))(this, a1);
		}

		::System::Boolean NCCGICIAAHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_NCCGICIAAHA_OFFSET))(this);
		}

		::RPG::Client::EntityTimelineControlNode* CAPDGHLMCDJ()
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_CAPDGHLMCDJ_OFFSET))(this);
		}

		::System::Boolean IKMHNLFJAAG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_IKMHNLFJAAG_OFFSET))(this, a1);
		}

		::System::Boolean MNOMACLLCMK(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_MNOMACLLCMK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TimeRewindCheckSetStateResult GEMKCEBDEGN(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::TimeRewindCheckSetStateResult(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GEMKCEBDEGN_OFFSET))(this, a1, a2);
		}

		::System::Boolean FHGBIPFNHKE(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_FHGBIPFNHKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CMPDGGOEMIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_CMPDGGOEMIO_OFFSET))(this, a1);
		}

		::RPG::Client::EntityTimelineControlNode* PCMMLOMBNPF()
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_PCMMLOMBNPF_OFFSET))(this);
		}

		::RPG::Client::EntityTimelineControlNode* FOEEELNOECB()
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_FOEEELNOECB_OFFSET))(this);
		}

		::System::Void EJAJCMOEPGI(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_EJAJCMOEPGI_OFFSET))(this, a1, a2);
		}

		::System::Void GJNEJBMKAIH(::RPG::Client::TimeRewindExtraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindExtraMode))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GJNEJBMKAIH_OFFSET))(this, a1);
		}

		::RPG::Client::TimeRewindExtraMode get_RewindExtraMode()
		{
			return ((::RPG::Client::TimeRewindExtraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GET_REWINDEXTRAMODE_OFFSET))(this);
		}

		::System::Void set_RewindExtraMode(::RPG::Client::TimeRewindExtraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindExtraMode))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_SET_REWINDEXTRAMODE_OFFSET))(this, a1);
		}

		::System::Void EPCDJJFFDAB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_EPCDJJFFDAB_OFFSET))(this, a1, a2);
		}

		::System::Void OKAKAHLELBD(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_OKAKAHLELBD_OFFSET))(this, a1, a2);
		}

		::System::Void ONMPECDFAIA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_ONMPECDFAIA_OFFSET))(this, a1, a2);
		}

		::System::Boolean JLNPJCDIBAE(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_JLNPJCDIBAE_OFFSET))(this, a1, a2);
		}

		::System::Int32 GACPCMLKAMF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GACPCMLKAMF_OFFSET))(this);
		}

		::System::Single LLCEJJIJDGK(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_LLCEJJIJDGK_OFFSET))(this, a1);
		}

		::System::Single JCDOKIGJFEM(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_JCDOKIGJFEM_OFFSET))(this, a1);
		}

		::System::Boolean APALGMIEAEL(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_APALGMIEAEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Single DFOFGONIDNM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_DFOFGONIDNM_OFFSET))(this);
		}

		::System::Single IPIEFLKKHLB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_IPIEFLKKHLB_OFFSET))(this);
		}

		::System::Single DAMOMEGLCJC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_DAMOMEGLCJC_OFFSET))(this);
		}

		::System::Void IOMHKOOACID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_IOMHKOOACID_OFFSET))(this, a1);
		}

		::System::Void JNDJEGACMAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_JNDJEGACMAE_OFFSET))(this);
		}

		::System::Single NJGCELJHDMH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_NJGCELJHDMH_OFFSET))(this);
		}

		::RPG::Client::EntityTimelineControlNode* KIGIOJDMGBL(::System::Int32 a1)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_KIGIOJDMGBL_OFFSET))(this, a1);
		}

		::RPG::Client::EntityTimelineControlNode* NCIENGFEKNA(::System::Int32 a1)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_NCIENGFEKNA_OFFSET))(this, a1);
		}

		::RPG::Client::EntityTimelineControlNode* FHNLJADKJIL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_FHNLJADKJIL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TimeRewindNodeIndexInfo* ADIODFBKPFK(::System::Int32 a1)
		{
			return ((::RPG::Client::TimeRewindNodeIndexInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_ADIODFBKPFK_OFFSET))(this, a1);
		}

		::RPG::Client::TimeRewindNodeIndexInfo* DNPPAGIKBKO(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::TimeRewindNodeIndexInfo*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_DNPPAGIKBKO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TimeRewindPathRuntime* FIPEGBCAJEB(::System::Int32 a1)
		{
			return ((::RPG::Client::TimeRewindPathRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_FIPEGBCAJEB_OFFSET))(this, a1);
		}

		::System::Int32 NCOJGLFGCJC(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_NCOJGLFGCJC_OFFSET))(this, a1, a2);
		}

		::System::Void HDDNGFCOLBL(::RPG::Client::EntityTimelineControlNode* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityTimelineControlNode*, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_HDDNGFCOLBL_OFFSET))(this, a1, a2);
		}

		::System::Void CEFJKLHFDDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_CEFJKLHFDDO_OFFSET))(this);
		}

		::System::Void MHLFFAILHIB(::RPG::Client::EntityTimelineControlNode* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityTimelineControlNode*, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_MHLFFAILHIB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KCNHNOKFEAP(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_KCNHNOKFEAP_OFFSET))(this, a1, a2);
		}

		::System::Void FMLBPAJGHNF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_FMLBPAJGHNF_OFFSET))(this, a1);
		}

		::System::Void IGFLMLHOCPG(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>* a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::EntityTimelineControlNode* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>*, ::System::Single, ::System::Single, ::RPG::Client::EntityTimelineControlNode*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_IGFLMLHOCPG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ADMEHMIGICC(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_ADMEHMIGICC_OFFSET))(this, a1);
		}

		::System::Void PBAMBMCOKPK(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindAudioConfig*>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindAudioConfig*>*, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_PBAMBMCOKPK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GACEMGILFEE(::System::Single a1, ::Il2CppArray<::RPG::GameCore::TimeRewindCameraShakeConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::TimeRewindCameraShakeConfig*>*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GACEMGILFEE_OFFSET))(this, a1, a2);
		}

		::System::Void JDEFPOMNAIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_JDEFPOMNAIF_OFFSET))(this);
		}

		::System::Void ANGAKBJHLOH(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_ANGAKBJHLOH_OFFSET))(this, a1, a2);
		}

		::System::Void MKOLICIOOEF(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_MKOLICIOOEF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CPOINDFEEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_CPOINDFEEIO_OFFSET))(this);
		}

		::System::Void GIIBNBNFHJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GIIBNBNFHJN_OFFSET))(this);
		}

		::System::Void JEIHIDFMOMB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_JEIHIDFMOMB_OFFSET))(this, a1);
		}

		::System::Void BLCOEEFHPLL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_BLCOEEFHPLL_OFFSET))(this, a1, a2);
		}

		::System::Void BJBOEPJIGOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_BJBOEPJIGOK_OFFSET))(this);
		}

		::System::Void GCJEOBHHBEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GCJEOBHHBEE_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_MONODNDCLJI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_DISPOSE_OFFSET))(this);
		}

		::System::Void GLJFKBJAHNK(::ALKANMJECDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALKANMJECDD*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GLJFKBJAHNK_OFFSET))(this, a1);
		}

		::System::Void BJGCNDIKFAF(::System::Single a1, ::Il2CppArray<::ALKANMJECDD*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::ALKANMJECDD*>*))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_BJGCNDIKFAF_OFFSET))(this, a1, a2);
		}

		::System::Void BMKGIIKDMMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_BMKGIIKDMMC_OFFSET))(this);
		}

		::System::Void EBMIHIIKNPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_EBMIHIIKNPF_OFFSET))(this);
		}

		::System::Single PBDIMCNJCAJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_PBDIMCNJCAJ_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_IHKPOLCCPPL_OFFSET))(this, a1);
		}

		::System::Single MLBLDFJAJEH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_MLBLDFJAJEH_OFFSET))(this);
		}

		::System::Void HOJDMBGOFKI(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_HOJDMBGOFKI_OFFSET))(this, a1);
		}

		::System::Void OGJCGHEHJAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_OGJCGHEHJAH_OFFSET))(this);
		}

		::System::Void LBOEBMFPCPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_LBOEBMFPCPA_OFFSET))(this, a1);
		}

		::System::Void PDPMPDHPBCB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_PDPMPDHPBCB_OFFSET))(this, a1);
		}

		::System::Void BIKLCPOKMCA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_BIKLCPOKMCA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GET_ISINMOTION_OFFSET))(this);
		}

		::System::Void set_IsInMotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_SET_ISINMOTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GET_ISINCONTROL_OFFSET))(this);
		}

		::System::Void set_IsInControl(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_SET_ISINCONTROL_OFFSET))(this, a1);
		}

		::System::Boolean IAAOBDCIKIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_IAAOBDCIKIM_OFFSET))(this);
		}

		::System::Boolean LOLAAONKJFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_LOLAAONKJFG_OFFSET))(this);
		}

		::System::Single AHGAFBOPBJN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_AHGAFBOPBJN_OFFSET))(this);
		}

		::RPG::GameCore::TimeRewindState BGBIHGCMKJF()
		{
			return ((::RPG::GameCore::TimeRewindState(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_BGBIHGCMKJF_OFFSET))(this);
		}

		::System::Single GNEGGEFDKHO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GNEGGEFDKHO_OFFSET))(this);
		}

		::System::Boolean get_EnableLoopRewind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GET_ENABLELOOPREWIND_OFFSET))(this);
		}

		::System::Void set_EnableLoopRewind(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_SET_ENABLELOOPREWIND_OFFSET))(this, a1);
		}

		::System::Boolean get_LoopRewindSnapTargetRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_GET_LOOPREWINDSNAPTARGETRATIO_OFFSET))(this);
		}

		::System::Void set_LoopRewindSnapTargetRatio(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNGHOKMIDGD_SET_LOOPREWINDSNAPTARGETRATIO_OFFSET))(this, a1);
		}

	};
