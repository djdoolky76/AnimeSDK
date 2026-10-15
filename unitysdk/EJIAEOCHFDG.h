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
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJIAEOCHFDG_ADD_MISSIONCHANGEAGENDANOTIFIED_OFFSET UNITYSDK_OFFSET(0x154D31D0)
#define EJIAEOCHFDG_AHBODANBDFK_OFFSET UNITYSDK_OFFSET(0x154D3290)
#define EJIAEOCHFDG_BDFFENEJMOP_OFFSET UNITYSDK_OFFSET(0x154D1A50)
#define EJIAEOCHFDG_CIMOIHIODCO_OFFSET UNITYSDK_OFFSET(0x154D2AF0)
#define EJIAEOCHFDG_CTOR_OFFSET UNITYSDK_OFFSET(0x154D0540)
#define EJIAEOCHFDG_EHFPEDMIKCM_OFFSET UNITYSDK_OFFSET(0x154D2330)
#define EJIAEOCHFDG_ENELLPEBGBH_OFFSET UNITYSDK_OFFSET(0x154D0C60)
#define EJIAEOCHFDG_FFLNINMODOC_OFFSET UNITYSDK_OFFSET(0x154D2440)
#define EJIAEOCHFDG_FGOHHAMAIIE_OFFSET UNITYSDK_OFFSET(0x154D0790)
#define EJIAEOCHFDG_FNMNJLJLNHF_OFFSET UNITYSDK_OFFSET(0x154D33D0)
#define EJIAEOCHFDG_GEANLNBHJEF_OFFSET UNITYSDK_OFFSET(0x154D24F0)
#define EJIAEOCHFDG_GLIOGNHLGPG_OFFSET UNITYSDK_OFFSET(0x154D1360)
#define EJIAEOCHFDG_GLJFGLJFLEC_OFFSET UNITYSDK_OFFSET(0x154D1E40)
#define EJIAEOCHFDG_HEFNCCIJPFE_OFFSET UNITYSDK_OFFSET(0x154D3380)
#define EJIAEOCHFDG_IAIOGNLCEID_OFFSET UNITYSDK_OFFSET(0x154D3000)
#define EJIAEOCHFDG_IDOFADKKDJO_OFFSET UNITYSDK_OFFSET(0x154D0F00)
#define EJIAEOCHFDG_IECLPAJONHP_OFFSET UNITYSDK_OFFSET(0x154D1590)
#define EJIAEOCHFDG_JODKCNOEEIK_OFFSET UNITYSDK_OFFSET(0x154D1AE0)
#define EJIAEOCHFDG_KIEEIMKLJLE_OFFSET UNITYSDK_OFFSET(0x154D2090)
#define EJIAEOCHFDG_MFONJHKADEF_OFFSET UNITYSDK_OFFSET(0x154D0A20)
#define EJIAEOCHFDG_NHKCJMAIEOJ_OFFSET UNITYSDK_OFFSET(0x154D17E0)
#define EJIAEOCHFDG_NIHANNPLKJF_OFFSET UNITYSDK_OFFSET(0x154D1B70)
#define EJIAEOCHFDG_NIOBHBCHKKF_OFFSET UNITYSDK_OFFSET(0x154D1130)
#define EJIAEOCHFDG_NPFCAEIAFOM_OFFSET UNITYSDK_OFFSET(0x154D05B0)
#define EJIAEOCHFDG_REMOVE_MISSIONCHANGEAGENDANOTIFIED_OFFSET UNITYSDK_OFFSET(0x154D3230)
#define EJIAEOCHFDG__CHALLENGEENDMATCHASYNC_B__14_0_OFFSET UNITYSDK_OFFSET(0x154D3890)
#define EJIAEOCHFDG__CHALLENGESTARTMATCHASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0x154D3830)
#define EJIAEOCHFDG__CHALLENGEUPDATECARASYNC_B__12_0_OFFSET UNITYSDK_OFFSET(0x154D37D0)
#define EJIAEOCHFDG__ENDMATCHASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x154D35A0)
#define EJIAEOCHFDG__GETDATAASYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x154D3470)
#define EJIAEOCHFDG__REPLACEPARTASYNC_B__9_0_OFFSET UNITYSDK_OFFSET(0x154D3770)
#define EJIAEOCHFDG__SELECTDEVELOPACTIONASYNC_B__7_0_OFFSET UNITYSDK_OFFSET(0x154D36B0)
#define EJIAEOCHFDG__SELECTDEVELOPPARTASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x154D3650)
#define EJIAEOCHFDG__SETDRIVERASYNC_B__5_0_OFFSET UNITYSDK_OFFSET(0x154D35F0)
#define EJIAEOCHFDG__SETLIVERYASYNC_B__8_0_OFFSET UNITYSDK_OFFSET(0x154D3710)
#define EJIAEOCHFDG__STARTCYCLEASYNC_B__2_0_OFFSET UNITYSDK_OFFSET(0x154D34E0)
#define EJIAEOCHFDG__STARTMATCHASYNC_B__3_0_OFFSET UNITYSDK_OFFSET(0x154D3550)

inline static constexpr unsigned int EJIAEOCHFDG_TypeDefinitionIndex = 81740;

	class EJIAEOCHFDG : public ::BHPMNMMGLHI
	{
	public:
		::System::Action_2<::KHKFODPFGEA*, ::System::Collections::Generic::List_1<::System::UInt32>*>* MissionChangeAgendaNotified; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::JNNPOLGAAHB*>* NPFCAEIAFOM()
		{
			return ((::RPG::Client::Promises::IPromise_1<::JNNPOLGAAHB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_NPFCAEIAFOM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::PANDNBODLAP*>* FGOHHAMAIIE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::PANDNBODLAP*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_FGOHHAMAIIE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::FMABAKJCFKJ*>* MFONJHKADEF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::FMABAKJCFKJ*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_MFONJHKADEF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::EAMCJJHBKMK*>* ENELLPEBGBH(::System::UInt32 a1, ::System::UInt32 a2, ::HPICFNLLMCO a3, ::System::UInt32 a4, ::System::UInt32 a5, ::HCAJDCFFEAE* a6)
		{
			return ((::RPG::Client::Promises::IPromise_1<::EAMCJJHBKMK*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::HPICFNLLMCO, ::System::UInt32, ::System::UInt32, ::HCAJDCFFEAE*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_ENELLPEBGBH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise_1<::NGOFKJDNLPB*>* IDOFADKKDJO(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::NGOFKJDNLPB*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_IDOFADKKDJO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::GIDPDEJAAED*>* NIOBHBCHKKF(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::GIDPDEJAAED*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_NIOBHBCHKKF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::LHHHDBGHDCF*>* GLIOGNHLGPG(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::LHHHDBGHDCF*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_GLIOGNHLGPG_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::DIIGIPHOJAC*>* IECLPAJONHP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::DIIGIPHOJAC*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_IECLPAJONHP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::DAAOIDJDHLO*>* NHKCJMAIEOJ(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::DAAOIDJDHLO*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_NHKCJMAIEOJ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::LGGLMOFICJK*>* BDFFENEJMOP(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::LGGLMOFICJK*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_BDFFENEJMOP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::LGGLMOFICJK*>* JODKCNOEEIK(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::LGGLMOFICJK*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_JODKCNOEEIK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::LPKBLKAHEDB*>* NIHANNPLKJF(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::LPKBLKAHEDB*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_NIHANNPLKJF_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::CPJPHILONME*>* GLJFGLJFLEC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::CPJPHILONME*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_GLJFGLJFLEC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::DCNCHPKGHHN*>* KIEEIMKLJLE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::HPICFNLLMCO a4, ::System::UInt32 a5, ::System::UInt32 a6, ::HCAJDCFFEAE* a7)
		{
			return ((::RPG::Client::Promises::IPromise_1<::DCNCHPKGHHN*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::HPICFNLLMCO, ::System::UInt32, ::System::UInt32, ::HCAJDCFFEAE*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_KIEEIMKLJLE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

		::System::Void add_MissionChangeAgendaNotified(::System::Action_2<::KHKFODPFGEA*, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::KHKFODPFGEA*, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_ADD_MISSIONCHANGEAGENDANOTIFIED_OFFSET))(this, a1);
		}

		::System::Void remove_MissionChangeAgendaNotified(::System::Action_2<::KHKFODPFGEA*, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::KHKFODPFGEA*, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + EJIAEOCHFDG_REMOVE_MISSIONCHANGEAGENDANOTIFIED_OFFSET))(this, a1);
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
