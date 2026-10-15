#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakGameContext; }
namespace RPG::Client { class ChallengePeakGameFlow; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakSettlement; }
namespace RPG::Client { class ChallengePeakTeam; }
namespace RPG::Client { class ChallengePeakTeamApplier; }
namespace RPG::Client { class ChallengePeakTeamContext; }
namespace RPG::Client { class ChallengeSettleConfirmation; }
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOHFBGJHCMB_AGBJEDMAFDM_OFFSET UNITYSDK_OFFSET(0xBF77940)
#define OOHFBGJHCMB_BMJNKINOIMN_OFFSET UNITYSDK_OFFSET(0xBF795B0)
#define OOHFBGJHCMB_BNBNACFIDEB_OFFSET UNITYSDK_OFFSET(0xBF78C20)
#define OOHFBGJHCMB_CBFDLCFLAFB_OFFSET UNITYSDK_OFFSET(0xBF7A9F0)
#define OOHFBGJHCMB_CDAAHANNHAE_OFFSET UNITYSDK_OFFSET(0xBF784E0)
#define OOHFBGJHCMB_CDNBPEEMCAM_OFFSET UNITYSDK_OFFSET(0xBF76E30)
#define OOHFBGJHCMB_CGDNDKPDBCH_OFFSET UNITYSDK_OFFSET(0xBF7A3E0)
#define OOHFBGJHCMB_CIMNEOAKBJH_OFFSET UNITYSDK_OFFSET(0xBF78DC0)
#define OOHFBGJHCMB_CLJJMHHDIFC_OFFSET UNITYSDK_OFFSET(0xBF7A520)
#define OOHFBGJHCMB_CNBJAJKHAHM_OFFSET UNITYSDK_OFFSET(0xBF78E30)
#define OOHFBGJHCMB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF76720)
#define OOHFBGJHCMB_DEAKMKHJNBE_OFFSET UNITYSDK_OFFSET(0xBF7AC50)
#define OOHFBGJHCMB_DHAFNCEMJEK_OFFSET UNITYSDK_OFFSET(0xBF79D80)
#define OOHFBGJHCMB_EIGMHMGCCNE_OFFSET UNITYSDK_OFFSET(0xBF780B0)
#define OOHFBGJHCMB_EKFDAAGLDIB_OFFSET UNITYSDK_OFFSET(0xBF79B60)
#define OOHFBGJHCMB_ELFCCHDBLKG_OFFSET UNITYSDK_OFFSET(0xBF76580)
#define OOHFBGJHCMB_ELPFCGCNAGN_OFFSET UNITYSDK_OFFSET(0xBF7A880)
#define OOHFBGJHCMB_EMMGLOJMDGP_OFFSET UNITYSDK_OFFSET(0xBF7B760)
#define OOHFBGJHCMB_EOMKDMHOBMM_OFFSET UNITYSDK_OFFSET(0xBF79310)
#define OOHFBGJHCMB_FBIHBNJNFJO_OFFSET UNITYSDK_OFFSET(0xBF78A00)
#define OOHFBGJHCMB_FBLNBHKEGLM_OFFSET UNITYSDK_OFFSET(0xBF7C480)
#define OOHFBGJHCMB_FLHGMEDDLEP_OFFSET UNITYSDK_OFFSET(0xBF76BE0)
#define OOHFBGJHCMB_FPFEKFINLMF_OFFSET UNITYSDK_OFFSET(0xBF7A010)
#define OOHFBGJHCMB_GET_HASSHOWNQUICKPASSHINT_OFFSET UNITYSDK_OFFSET(0xBF76700)
#define OOHFBGJHCMB_GFLGKCANGAD_OFFSET UNITYSDK_OFFSET(0xBF7AB80)
#define OOHFBGJHCMB_GGLADJMHNGF_OFFSET UNITYSDK_OFFSET(0xBF79190)
#define OOHFBGJHCMB_GHIGGDFFMGF_OFFSET UNITYSDK_OFFSET(0xBF7A760)
#define OOHFBGJHCMB_GHLBBCALGKD_OFFSET UNITYSDK_OFFSET(0xBF77BC0)
#define OOHFBGJHCMB_GMGBOPNNONL_OFFSET UNITYSDK_OFFSET(0xBF79440)
#define OOHFBGJHCMB_HDHCMGNHFGA_OFFSET UNITYSDK_OFFSET(0xBF774B0)
#define OOHFBGJHCMB_HHBHBKFOIOM_OFFSET UNITYSDK_OFFSET(0xBF79A50)
#define OOHFBGJHCMB_HKJLMCDLPPB_OFFSET UNITYSDK_OFFSET(0xBF79A10)
#define OOHFBGJHCMB_HNMFDFHDNEG_OFFSET UNITYSDK_OFFSET(0xBF78F80)
#define OOHFBGJHCMB_IDKNGOPJPEO_OFFSET UNITYSDK_OFFSET(0xBF7C570)
#define OOHFBGJHCMB_IHAKOJNINDB_OFFSET UNITYSDK_OFFSET(0xBF76970)
#define OOHFBGJHCMB_IHPOPDPILLK_OFFSET UNITYSDK_OFFSET(0xBF771F0)
#define OOHFBGJHCMB_IIADNIJNIKN_OFFSET UNITYSDK_OFFSET(0xBF767E0)
#define OOHFBGJHCMB_JGEDJKNJPAB_OFFSET UNITYSDK_OFFSET(0xBF7B9A0)
#define OOHFBGJHCMB_JGIBLGENIGN_OFFSET UNITYSDK_OFFSET(0xBF7BEA0)
#define OOHFBGJHCMB_JGJOEJMABFA_OFFSET UNITYSDK_OFFSET(0xBF76620)
#define OOHFBGJHCMB_JNECCMJKBPJ_OFFSET UNITYSDK_OFFSET(0xBF765D0)
#define OOHFBGJHCMB_JOAPFFMALMI_OFFSET UNITYSDK_OFFSET(0xBF77EF0)
#define OOHFBGJHCMB_KFLDCELKFDF_OFFSET UNITYSDK_OFFSET(0xBF79360)
#define OOHFBGJHCMB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBF76730)
#define OOHFBGJHCMB_KKBJCJIHCJG_OFFSET UNITYSDK_OFFSET(0xBF7B330)
#define OOHFBGJHCMB_KKJOMFMEMGM_OFFSET UNITYSDK_OFFSET(0xBF78320)
#define OOHFBGJHCMB_LELGCOPDAMD_OFFSET UNITYSDK_OFFSET(0xBF7B1C0)
#define OOHFBGJHCMB_LENGEHIBKAK_OFFSET UNITYSDK_OFFSET(0xBF76B90)
#define OOHFBGJHCMB_LKDKKELFOPP_OFFSET UNITYSDK_OFFSET(0xBF793F0)
#define OOHFBGJHCMB_MHPEGFBFKNA_OFFSET UNITYSDK_OFFSET(0xBF7C6D0)
#define OOHFBGJHCMB_MHPGMHMEBPF_OFFSET UNITYSDK_OFFSET(0xBF794D0)
#define OOHFBGJHCMB_MLEMNGAEMLE_OFFSET UNITYSDK_OFFSET(0xBF79630)
#define OOHFBGJHCMB_MMBJJPBHCEO_OFFSET UNITYSDK_OFFSET(0xBF7A230)
#define OOHFBGJHCMB_MNJEGBLMLDL_OFFSET UNITYSDK_OFFSET(0xBF778E0)
#define OOHFBGJHCMB_NCENKGMGODD_OFFSET UNITYSDK_OFFSET(0xBF7A470)
#define OOHFBGJHCMB_NEBDHLFNEIH_OFFSET UNITYSDK_OFFSET(0xBF7BB10)
#define OOHFBGJHCMB_NIJPHLMBHMC_OFFSET UNITYSDK_OFFSET(0xBF7B530)
#define OOHFBGJHCMB_NOLIPDMGPOP_OFFSET UNITYSDK_OFFSET(0xBF7BD70)
#define OOHFBGJHCMB_OCFPKIGNCAO_OFFSET UNITYSDK_OFFSET(0xBF79870)
#define OOHFBGJHCMB_OHAGNIBNNFL_OFFSET UNITYSDK_OFFSET(0xBF78060)
#define OOHFBGJHCMB_OJCMHEDJCNF_OFFSET UNITYSDK_OFFSET(0xBF76670)
#define OOHFBGJHCMB_ONAABBPKCDJ_OFFSET UNITYSDK_OFFSET(0xBF7A8D0)
#define OOHFBGJHCMB_ONIJBJHBFCI_OFFSET UNITYSDK_OFFSET(0xBF7B170)
#define OOHFBGJHCMB_PGGGNLHHMCG_OFFSET UNITYSDK_OFFSET(0xBF79980)
#define OOHFBGJHCMB_PNHJABFDJOG_OFFSET UNITYSDK_OFFSET(0xBF79520)
#define OOHFBGJHCMB_SET_HASSHOWNQUICKPASSHINT_OFFSET UNITYSDK_OFFSET(0xBF76710)
#define OOHFBGJHCMB__INITNORMALLINEUPS_B__22_0_OFFSET UNITYSDK_OFFSET(0xBF7C740)
#define OOHFBGJHCMB__REVOKENORMALLINEUPS_B__32_0_OFFSET UNITYSDK_OFFSET(0xBF7C820)
#define OOHFBGJHCMB__SAVENORMALLINEUPS_B__31_0_OFFSET UNITYSDK_OFFSET(0xBF7C7D0)
#define OOHFBGJHCMB___HANDLESHOWENTRANCE_B__41_0_OFFSET UNITYSDK_OFFSET(0xBF7C850)

inline static constexpr unsigned int OOHFBGJHCMB_TypeDefinitionIndex = 63162;

	class OOHFBGJHCMB : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeakGameFlow* BEGDKHKENMF; // 0x10
		::System::Boolean _HasShownQuickPassHint_k__BackingField; // 0x18
		::System::Boolean PBINHAACLCB; // 0x19
		::System::Void _ctor(::RPG::Client::ChallengePeakGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGameFlow*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakGroup* ELFCCHDBLKG()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_ELFCCHDBLKG_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakTeamContext* JNECCMJKBPJ()
		{
			return ((::RPG::Client::ChallengePeakTeamContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_JNECCMJKBPJ_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGameContext* JGJOEJMABFA()
		{
			return ((::RPG::Client::ChallengePeakGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_JGJOEJMABFA_OFFSET))(this);
		}

		::System::Boolean OJCMHEDJCNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_OJCMHEDJCNF_OFFSET))(this);
		}

		::System::Boolean get_HasShownQuickPassHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_GET_HASSHOWNQUICKPASSHINT_OFFSET))(this);
		}

		::System::Void set_HasShownQuickPassHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_SET_HASSHOWNQUICKPASSHINT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* KIGBILLGNOH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void LENGEHIBKAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_LENGEHIBKAK_OFFSET))(this);
		}

		::System::Void FLHGMEDDLEP(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_FLHGMEDDLEP_OFFSET))(this, a1);
		}

		::System::Void HDHCMGNHFGA(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_HDHCMGNHFGA_OFFSET))(this, a1);
		}

		::System::Void MNJEGBLMLDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_MNJEGBLMLDL_OFFSET))(this);
		}

		::System::Void JOAPFFMALMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_JOAPFFMALMI_OFFSET))(this);
		}

		::System::Void OHAGNIBNNFL(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_OHAGNIBNNFL_OFFSET))(this, a1);
		}

		::System::Void KKJOMFMEMGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_KKJOMFMEMGM_OFFSET))(this);
		}

		::System::Void FBIHBNJNFJO(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_FBIHBNJNFJO_OFFSET))(this, a1);
		}

		::System::Void CIMNEOAKBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_CIMNEOAKBJH_OFFSET))(this);
		}

		::System::Void GGLADJMHNGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_GGLADJMHNGF_OFFSET))(this);
		}

		::System::Void EOMKDMHOBMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_EOMKDMHOBMM_OFFSET))(this);
		}

		::System::Void LKDKKELFOPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_LKDKKELFOPP_OFFSET))(this);
		}

		::System::Void MHPGMHMEBPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_MHPGMHMEBPF_OFFSET))(this);
		}

		::System::Void BMJNKINOIMN(::RPG::Client::ChallengePeakSettlement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakSettlement*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_BMJNKINOIMN_OFFSET))(this, a1);
		}

		::System::Void PGGGNLHHMCG(::RPG::Client::ChallengePeakSettlement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakSettlement*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_PGGGNLHHMCG_OFFSET))(this, a1);
		}

		::System::Void EKFDAAGLDIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_EKFDAAGLDIB_OFFSET))(this);
		}

		::System::Void FPFEKFINLMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_FPFEKFINLMF_OFFSET))(this);
		}

		::System::Void CGDNDKPDBCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_CGDNDKPDBCH_OFFSET))(this);
		}

		::System::Void NCENKGMGODD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_NCENKGMGODD_OFFSET))(this);
		}

		::System::Void CLJJMHHDIFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_CLJJMHHDIFC_OFFSET))(this);
		}

		::System::Void GHIGGDFFMGF(::RPG::Client::ChallengePeakTeamApplier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakTeamApplier*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_GHIGGDFFMGF_OFFSET))(this, a1);
		}

		::System::Void ELPFCGCNAGN(::RPG::Client::ChallengeSettleConfirmation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeSettleConfirmation*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_ELPFCGCNAGN_OFFSET))(this, a1);
		}

		::System::Void CBFDLCFLAFB(::RPG::Client::ChallengeSettleConfirmation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeSettleConfirmation*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_CBFDLCFLAFB_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIGameFlowContext* GFLGKCANGAD()
		{
			return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_GFLGKCANGAD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IIADNIJNIKN()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_IIADNIJNIKN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IHAKOJNINDB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_IHAKOJNINDB_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DEAKMKHJNBE(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_DEAKMKHJNBE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* LELGCOPDAMD()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_LELGCOPDAMD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IHPOPDPILLK(::RPG::Client::ChallengePeak* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_IHPOPDPILLK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GHLBBCALGKD()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_GHLBBCALGKD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* KKBJCJIHCJG()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_KKBJCJIHCJG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* NEBDHLFNEIH()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_NEBDHLFNEIH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* JGEDJKNJPAB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_JGEDJKNJPAB_OFFSET))(this);
		}

		::System::Boolean AGBJEDMAFDM(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_AGBJEDMAFDM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NOLIPDMGPOP(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_NOLIPDMGPOP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* CDNBPEEMCAM(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_CDNBPEEMCAM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* EIGMHMGCCNE(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_EIGMHMGCCNE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* JGIBLGENIGN(::System::Collections::Generic::List_1<::RPG::Client::ChallengePeak*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeak*>*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_JGIBLGENIGN_OFFSET))(this, a1);
		}

		::System::Void KFLDCELKFDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_KFLDCELKFDF_OFFSET))(this);
		}

		::System::Void GMGBOPNNONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_GMGBOPNNONL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ONAABBPKCDJ(::RPG::Client::ChallengeSettleConfirmation* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChallengeSettleConfirmation*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_ONAABBPKCDJ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PNHJABFDJOG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_PNHJABFDJOG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OCFPKIGNCAO(::RPG::Client::ChallengePeakSettlement* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChallengePeakSettlement*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_OCFPKIGNCAO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* HHBHBKFOIOM(::RPG::Client::ChallengePeakSettlement* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChallengePeakSettlement*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_HHBHBKFOIOM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* DHAFNCEMJEK()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_DHAFNCEMJEK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* MMBJJPBHCEO()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_MMBJJPBHCEO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FBLNBHKEGLM(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_FBLNBHKEGLM_OFFSET))(this, a1);
		}

		::System::Boolean NIJPHLMBHMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_NIJPHLMBHMC_OFFSET))(this);
		}

		::System::Void EMMGLOJMDGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_EMMGLOJMDGP_OFFSET))(this);
		}

		::System::Boolean ONIJBJHBFCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_ONIJBJHBFCI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* BNBNACFIDEB(::RPG::Client::ChallengePeak* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_BNBNACFIDEB_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* CDAAHANNHAE()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_CDAAHANNHAE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IDKNGOPJPEO(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_IDKNGOPJPEO_OFFSET))(this, a1);
		}

		::System::Boolean CNBJAJKHAHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_CNBJAJKHAHM_OFFSET))(this);
		}

		::System::Void MHPEGFBFKNA(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_MHPEGFBFKNA_OFFSET))(this, a1);
		}

		::System::Void HNMFDFHDNEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_HNMFDFHDNEG_OFFSET))(this);
		}

		::System::Void HKJLMCDLPPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_HKJLMCDLPPB_OFFSET))(this);
		}

		::System::Void MLEMNGAEMLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_MLEMNGAEMLE_OFFSET))(this);
		}

		::System::Void _InitNormalLineups_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB__INITNORMALLINEUPS_B__22_0_OFFSET))(this);
		}

		::System::Void _SaveNormalLineups_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB__SAVENORMALLINEUPS_B__31_0_OFFSET))(this);
		}

		::System::Void _RevokeNormalLineups_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB__REVOKENORMALLINEUPS_B__32_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* __HandleShowEntrance_b__41_0(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___HANDLESHOWENTRANCE_B__41_0_OFFSET))(this, a1);
		}

	};
