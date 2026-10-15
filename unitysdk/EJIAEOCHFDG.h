#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/HPICFNLLMCO.h"
class CPJPHILONME;
class DAAOIDJDHLO;
class DCNCHPKGHHN;
class DIIGIPHOJAC;
class EAMCJJHBKMK;
class EFMHKGDLGJN;
class FMABAKJCFKJ;
class GIDPDEJAAED;
class GIIEKGHDHJP;
class GIIHHKDLOBA;
class GLFNFMMIABM;
class HCAJDCFFEAE;
class IPKIFGDCGBN;
class JEFCEGFBOAF;
class JNNPOLGAAHB;
class KHKFODPFGEA;
class LGGLMOFICJK;
class LHHHDBGHDCF;
class LPKBLKAHEDB;
class MHFNMBHNPHA;
class NGOFKJDNLPB;
class OADGBFHDCDE;
class PANDNBODLAP;
namespace Google::Protobuf { class IMessage; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJIAEOCHFDG_ADD_MISSIONCHANGEAGENDANOTIFIED_OFFSET UNITYSDK_OFFSET(0x154DEFF0)
#define EJIAEOCHFDG_AHBODANBDFK_OFFSET UNITYSDK_OFFSET(0x154DF0B0)
#define EJIAEOCHFDG_BDFFENEJMOP_OFFSET UNITYSDK_OFFSET(0x154DD870)
#define EJIAEOCHFDG_CIMOIHIODCO_OFFSET UNITYSDK_OFFSET(0x154DE910)
#define EJIAEOCHFDG_CTOR_OFFSET UNITYSDK_OFFSET(0x154DC360)
#define EJIAEOCHFDG_EHFPEDMIKCM_OFFSET UNITYSDK_OFFSET(0x154DE150)
#define EJIAEOCHFDG_ENELLPEBGBH_OFFSET UNITYSDK_OFFSET(0x154DCA80)
#define EJIAEOCHFDG_FFLNINMODOC_OFFSET UNITYSDK_OFFSET(0x154DE260)
#define EJIAEOCHFDG_FGOHHAMAIIE_OFFSET UNITYSDK_OFFSET(0x154DC5B0)
#define EJIAEOCHFDG_FNMNJLJLNHF_OFFSET UNITYSDK_OFFSET(0x154DF1F0)
#define EJIAEOCHFDG_GEANLNBHJEF_OFFSET UNITYSDK_OFFSET(0x154DE310)
#define EJIAEOCHFDG_GLIOGNHLGPG_OFFSET UNITYSDK_OFFSET(0x154DD180)
#define EJIAEOCHFDG_GLJFGLJFLEC_OFFSET UNITYSDK_OFFSET(0x154DDC60)
#define EJIAEOCHFDG_HEFNCCIJPFE_OFFSET UNITYSDK_OFFSET(0x154DF1A0)
#define EJIAEOCHFDG_IAIOGNLCEID_OFFSET UNITYSDK_OFFSET(0x154DEE20)
#define EJIAEOCHFDG_IDOFADKKDJO_OFFSET UNITYSDK_OFFSET(0x154DCD20)
#define EJIAEOCHFDG_IECLPAJONHP_OFFSET UNITYSDK_OFFSET(0x154DD3B0)
#define EJIAEOCHFDG_JODKCNOEEIK_OFFSET UNITYSDK_OFFSET(0x154DD900)
#define EJIAEOCHFDG_KIEEIMKLJLE_OFFSET UNITYSDK_OFFSET(0x154DDEB0)
#define EJIAEOCHFDG_MFONJHKADEF_OFFSET UNITYSDK_OFFSET(0x154DC840)
#define EJIAEOCHFDG_NHKCJMAIEOJ_OFFSET UNITYSDK_OFFSET(0x154DD600)
#define EJIAEOCHFDG_NIHANNPLKJF_OFFSET UNITYSDK_OFFSET(0x154DD990)
#define EJIAEOCHFDG_NIOBHBCHKKF_OFFSET UNITYSDK_OFFSET(0x154DCF50)
#define EJIAEOCHFDG_NPFCAEIAFOM_OFFSET UNITYSDK_OFFSET(0x154DC3D0)
#define EJIAEOCHFDG_REMOVE_MISSIONCHANGEAGENDANOTIFIED_OFFSET UNITYSDK_OFFSET(0x154DF050)
#define EJIAEOCHFDG__CHALLENGEENDMATCHASYNC_B__14_0_OFFSET UNITYSDK_OFFSET(0x154DF6B0)
#define EJIAEOCHFDG__CHALLENGESTARTMATCHASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0x154DF650)
#define EJIAEOCHFDG__CHALLENGEUPDATECARASYNC_B__12_0_OFFSET UNITYSDK_OFFSET(0x154DF5F0)
#define EJIAEOCHFDG__ENDMATCHASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x154DF3C0)
#define EJIAEOCHFDG__GETDATAASYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x154DF290)
#define EJIAEOCHFDG__REPLACEPARTASYNC_B__9_0_OFFSET UNITYSDK_OFFSET(0x154DF590)
#define EJIAEOCHFDG__SELECTDEVELOPACTIONASYNC_B__7_0_OFFSET UNITYSDK_OFFSET(0x154DF4D0)
#define EJIAEOCHFDG__SELECTDEVELOPPARTASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x154DF470)
#define EJIAEOCHFDG__SETDRIVERASYNC_B__5_0_OFFSET UNITYSDK_OFFSET(0x154DF410)
#define EJIAEOCHFDG__SETLIVERYASYNC_B__8_0_OFFSET UNITYSDK_OFFSET(0x154DF530)
#define EJIAEOCHFDG__STARTCYCLEASYNC_B__2_0_OFFSET UNITYSDK_OFFSET(0x154DF300)
#define EJIAEOCHFDG__STARTMATCHASYNC_B__3_0_OFFSET UNITYSDK_OFFSET(0x154DF370)

	class EJIAEOCHFDG : public ::BHPMNMMGLHI
	{
	public:
		::System::Action* MissionChangeAgendaNotified; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NPFCAEIAFOM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_NPFCAEIAFOM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FGOHHAMAIIE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_FGOHHAMAIIE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* MFONJHKADEF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_MFONJHKADEF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* ENELLPEBGBH(::System::UInt32 a1, ::System::UInt32 a2, ::HPICFNLLMCO a3, ::System::UInt32 a4, ::System::UInt32 a5, ::HCAJDCFFEAE* a6)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::HPICFNLLMCO, ::System::UInt32, ::System::UInt32, ::HCAJDCFFEAE*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_ENELLPEBGBH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise* IDOFADKKDJO(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_IDOFADKKDJO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NIOBHBCHKKF(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_NIOBHBCHKKF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GLIOGNHLGPG(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_GLIOGNHLGPG_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* IECLPAJONHP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_IECLPAJONHP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* NHKCJMAIEOJ(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_NHKCJMAIEOJ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BDFFENEJMOP(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_BDFFENEJMOP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* JODKCNOEEIK(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_JODKCNOEEIK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NIHANNPLKJF(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_NIHANNPLKJF_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* GLJFGLJFLEC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_GLJFGLJFLEC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* KIEEIMKLJLE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::HPICFNLLMCO a4, ::System::UInt32 a5, ::System::UInt32 a6, ::HCAJDCFFEAE* a7)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::HPICFNLLMCO, ::System::UInt32, ::System::UInt32, ::HCAJDCFFEAE*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_KIEEIMKLJLE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::JNNPOLGAAHB* EHFPEDMIKCM(::MHFNMBHNPHA* a1)
		{
			return ((::JNNPOLGAAHB*(*)(::PVOID, ::MHFNMBHNPHA*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_EHFPEDMIKCM_OFFSET))(this, a1);
		}

		::IPKIFGDCGBN* CIMOIHIODCO(::GIIHHKDLOBA* a1)
		{
			return ((::IPKIFGDCGBN*(*)(::PVOID, ::GIIHHKDLOBA*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_CIMOIHIODCO_OFFSET))(this, a1);
		}

		::LGGLMOFICJK* FFLNINMODOC(::GIIEKGHDHJP* a1)
		{
			return ((::LGGLMOFICJK*(*)(::PVOID, ::GIIEKGHDHJP*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_FFLNINMODOC_OFFSET))(this, a1);
		}

		::PANDNBODLAP* GEANLNBHJEF(::OADGBFHDCDE* a1)
		{
			return ((::PANDNBODLAP*(*)(::PVOID, ::OADGBFHDCDE*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_GEANLNBHJEF_OFFSET))(this, a1);
		}

		static ::KHKFODPFGEA* IAIOGNLCEID(::JEFCEGFBOAF* a1)
		{
			return ((::KHKFODPFGEA*(*)(::JEFCEGFBOAF*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_IAIOGNLCEID_OFFSET))(a1);
		}

		::System::Void add_MissionChangeAgendaNotified(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_ADD_MISSIONCHANGEAGENDANOTIFIED_OFFSET))(this, a1);
		}

		::System::Void remove_MissionChangeAgendaNotified(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_REMOVE_MISSIONCHANGEAGENDANOTIFIED_OFFSET))(this, a1);
		}

		::System::Void AHBODANBDFK(::System::UInt16 a1, ::EFMHKGDLGJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::EFMHKGDLGJN*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_AHBODANBDFK_OFFSET))(this, a1, a2);
		}

		::System::Void HEFNCCIJPFE(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_HEFNCCIJPFE_OFFSET))(this, a1);
		}

		::System::Void FNMNJLJLNHF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_FNMNJLJLNHF_OFFSET))(this, a1);
		}

		::JNNPOLGAAHB* _GetDataAsync_b__1_0(::MHFNMBHNPHA* a1)
		{
			return ((::JNNPOLGAAHB*(*)(::PVOID, ::MHFNMBHNPHA*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__GETDATAASYNC_B__1_0_OFFSET))(this, a1);
		}

		::PANDNBODLAP* _StartCycleAsync_b__2_0(::GLFNFMMIABM* a1)
		{
			return ((::PANDNBODLAP*(*)(::PVOID, ::GLFNFMMIABM*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__STARTCYCLEASYNC_B__2_0_OFFSET))(this, a1);
		}

		::FMABAKJCFKJ* _StartMatchAsync_b__3_0(::FMABAKJCFKJ* a1)
		{
			return ((::FMABAKJCFKJ*(*)(::PVOID, ::FMABAKJCFKJ*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__STARTMATCHASYNC_B__3_0_OFFSET))(this, a1);
		}

		::EAMCJJHBKMK* _EndMatchAsync_b__4_0(::EAMCJJHBKMK* a1)
		{
			return ((::EAMCJJHBKMK*(*)(::PVOID, ::EAMCJJHBKMK*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__ENDMATCHASYNC_B__4_0_OFFSET))(this, a1);
		}

		::NGOFKJDNLPB* _SetDriverAsync_b__5_0(::NGOFKJDNLPB* a1)
		{
			return ((::NGOFKJDNLPB*(*)(::PVOID, ::NGOFKJDNLPB*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__SETDRIVERASYNC_B__5_0_OFFSET))(this, a1);
		}

		::GIDPDEJAAED* _SelectDevelopPartAsync_b__6_0(::GIDPDEJAAED* a1)
		{
			return ((::GIDPDEJAAED*(*)(::PVOID, ::GIDPDEJAAED*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__SELECTDEVELOPPARTASYNC_B__6_0_OFFSET))(this, a1);
		}

		::LHHHDBGHDCF* _SelectDevelopActionAsync_b__7_0(::LHHHDBGHDCF* a1)
		{
			return ((::LHHHDBGHDCF*(*)(::PVOID, ::LHHHDBGHDCF*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__SELECTDEVELOPACTIONASYNC_B__7_0_OFFSET))(this, a1);
		}

		::DIIGIPHOJAC* _SetLiveryAsync_b__8_0(::DIIGIPHOJAC* a1)
		{
			return ((::DIIGIPHOJAC*(*)(::PVOID, ::DIIGIPHOJAC*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__SETLIVERYASYNC_B__8_0_OFFSET))(this, a1);
		}

		::DAAOIDJDHLO* _ReplacePartAsync_b__9_0(::DAAOIDJDHLO* a1)
		{
			return ((::DAAOIDJDHLO*(*)(::PVOID, ::DAAOIDJDHLO*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__REPLACEPARTASYNC_B__9_0_OFFSET))(this, a1);
		}

		::LPKBLKAHEDB* _ChallengeUpdateCarAsync_b__12_0(::LPKBLKAHEDB* a1)
		{
			return ((::LPKBLKAHEDB*(*)(::PVOID, ::LPKBLKAHEDB*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__CHALLENGEUPDATECARASYNC_B__12_0_OFFSET))(this, a1);
		}

		::CPJPHILONME* _ChallengeStartMatchAsync_b__13_0(::CPJPHILONME* a1)
		{
			return ((::CPJPHILONME*(*)(::PVOID, ::CPJPHILONME*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__CHALLENGESTARTMATCHASYNC_B__13_0_OFFSET))(this, a1);
		}

		::DCNCHPKGHHN* _ChallengeEndMatchAsync_b__14_0(::DCNCHPKGHHN* a1)
		{
			return ((::DCNCHPKGHHN*(*)(::PVOID, ::DCNCHPKGHHN*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG__CHALLENGEENDMATCHASYNC_B__14_0_OFFSET))(this, a1);
		}

	};
