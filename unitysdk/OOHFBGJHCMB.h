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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOHFBGJHCMB_AGBJEDMAFDM_OFFSET UNITYSDK_OFFSET(0xBF7F020)
#define OOHFBGJHCMB_BMJNKINOIMN_OFFSET UNITYSDK_OFFSET(0xBF80C90)
#define OOHFBGJHCMB_BNBNACFIDEB_OFFSET UNITYSDK_OFFSET(0xBF80300)
#define OOHFBGJHCMB_CBFDLCFLAFB_OFFSET UNITYSDK_OFFSET(0xBF820D0)
#define OOHFBGJHCMB_CDAAHANNHAE_OFFSET UNITYSDK_OFFSET(0xBF7FBC0)
#define OOHFBGJHCMB_CDNBPEEMCAM_OFFSET UNITYSDK_OFFSET(0xBF7E510)
#define OOHFBGJHCMB_CGDNDKPDBCH_OFFSET UNITYSDK_OFFSET(0xBF81AC0)
#define OOHFBGJHCMB_CIMNEOAKBJH_OFFSET UNITYSDK_OFFSET(0xBF804A0)
#define OOHFBGJHCMB_CLJJMHHDIFC_OFFSET UNITYSDK_OFFSET(0xBF81C00)
#define OOHFBGJHCMB_CNBJAJKHAHM_OFFSET UNITYSDK_OFFSET(0xBF80510)
#define OOHFBGJHCMB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF7DE00)
#define OOHFBGJHCMB_DEAKMKHJNBE_OFFSET UNITYSDK_OFFSET(0xBF82330)
#define OOHFBGJHCMB_DHAFNCEMJEK_OFFSET UNITYSDK_OFFSET(0xBF81460)
#define OOHFBGJHCMB_EIGMHMGCCNE_OFFSET UNITYSDK_OFFSET(0xBF7F790)
#define OOHFBGJHCMB_EKFDAAGLDIB_OFFSET UNITYSDK_OFFSET(0xBF81240)
#define OOHFBGJHCMB_ELFCCHDBLKG_OFFSET UNITYSDK_OFFSET(0xBF7DC60)
#define OOHFBGJHCMB_ELPFCGCNAGN_OFFSET UNITYSDK_OFFSET(0xBF81F60)
#define OOHFBGJHCMB_EMMGLOJMDGP_OFFSET UNITYSDK_OFFSET(0xBF82E40)
#define OOHFBGJHCMB_EOMKDMHOBMM_OFFSET UNITYSDK_OFFSET(0xBF809F0)
#define OOHFBGJHCMB_FBIHBNJNFJO_OFFSET UNITYSDK_OFFSET(0xBF800E0)
#define OOHFBGJHCMB_FBLNBHKEGLM_OFFSET UNITYSDK_OFFSET(0xBF83B60)
#define OOHFBGJHCMB_FLHGMEDDLEP_OFFSET UNITYSDK_OFFSET(0xBF7E2C0)
#define OOHFBGJHCMB_FPFEKFINLMF_OFFSET UNITYSDK_OFFSET(0xBF816F0)
#define OOHFBGJHCMB_GET_HASSHOWNQUICKPASSHINT_OFFSET UNITYSDK_OFFSET(0xBF7DDE0)
#define OOHFBGJHCMB_GFLGKCANGAD_OFFSET UNITYSDK_OFFSET(0xBF82260)
#define OOHFBGJHCMB_GGLADJMHNGF_OFFSET UNITYSDK_OFFSET(0xBF80870)
#define OOHFBGJHCMB_GHIGGDFFMGF_OFFSET UNITYSDK_OFFSET(0xBF81E40)
#define OOHFBGJHCMB_GHLBBCALGKD_OFFSET UNITYSDK_OFFSET(0xBF7F2A0)
#define OOHFBGJHCMB_GMGBOPNNONL_OFFSET UNITYSDK_OFFSET(0xBF80B20)
#define OOHFBGJHCMB_HDHCMGNHFGA_OFFSET UNITYSDK_OFFSET(0xBF7EB90)
#define OOHFBGJHCMB_HHBHBKFOIOM_OFFSET UNITYSDK_OFFSET(0xBF81130)
#define OOHFBGJHCMB_HKJLMCDLPPB_OFFSET UNITYSDK_OFFSET(0xBF810F0)
#define OOHFBGJHCMB_HNMFDFHDNEG_OFFSET UNITYSDK_OFFSET(0xBF80660)
#define OOHFBGJHCMB_IDKNGOPJPEO_OFFSET UNITYSDK_OFFSET(0xBF83C50)
#define OOHFBGJHCMB_IHAKOJNINDB_OFFSET UNITYSDK_OFFSET(0xBF7E050)
#define OOHFBGJHCMB_IHPOPDPILLK_OFFSET UNITYSDK_OFFSET(0xBF7E8D0)
#define OOHFBGJHCMB_IIADNIJNIKN_OFFSET UNITYSDK_OFFSET(0xBF7DEC0)
#define OOHFBGJHCMB_JGEDJKNJPAB_OFFSET UNITYSDK_OFFSET(0xBF83080)
#define OOHFBGJHCMB_JGIBLGENIGN_OFFSET UNITYSDK_OFFSET(0xBF83580)
#define OOHFBGJHCMB_JGJOEJMABFA_OFFSET UNITYSDK_OFFSET(0xBF7DD00)
#define OOHFBGJHCMB_JNECCMJKBPJ_OFFSET UNITYSDK_OFFSET(0xBF7DCB0)
#define OOHFBGJHCMB_JOAPFFMALMI_OFFSET UNITYSDK_OFFSET(0xBF7F5D0)
#define OOHFBGJHCMB_KFLDCELKFDF_OFFSET UNITYSDK_OFFSET(0xBF80A40)
#define OOHFBGJHCMB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBF7DE10)
#define OOHFBGJHCMB_KKBJCJIHCJG_OFFSET UNITYSDK_OFFSET(0xBF82A10)
#define OOHFBGJHCMB_KKJOMFMEMGM_OFFSET UNITYSDK_OFFSET(0xBF7FA00)
#define OOHFBGJHCMB_LELGCOPDAMD_OFFSET UNITYSDK_OFFSET(0xBF828A0)
#define OOHFBGJHCMB_LENGEHIBKAK_OFFSET UNITYSDK_OFFSET(0xBF7E270)
#define OOHFBGJHCMB_LKDKKELFOPP_OFFSET UNITYSDK_OFFSET(0xBF80AD0)
#define OOHFBGJHCMB_MHPEGFBFKNA_OFFSET UNITYSDK_OFFSET(0xBF83DB0)
#define OOHFBGJHCMB_MHPGMHMEBPF_OFFSET UNITYSDK_OFFSET(0xBF80BB0)
#define OOHFBGJHCMB_MLEMNGAEMLE_OFFSET UNITYSDK_OFFSET(0xBF80D10)
#define OOHFBGJHCMB_MMBJJPBHCEO_OFFSET UNITYSDK_OFFSET(0xBF81910)
#define OOHFBGJHCMB_MNJEGBLMLDL_OFFSET UNITYSDK_OFFSET(0xBF7EFC0)
#define OOHFBGJHCMB_NCENKGMGODD_OFFSET UNITYSDK_OFFSET(0xBF81B50)
#define OOHFBGJHCMB_NEBDHLFNEIH_OFFSET UNITYSDK_OFFSET(0xBF831F0)
#define OOHFBGJHCMB_NIJPHLMBHMC_OFFSET UNITYSDK_OFFSET(0xBF82C10)
#define OOHFBGJHCMB_NOLIPDMGPOP_OFFSET UNITYSDK_OFFSET(0xBF83450)
#define OOHFBGJHCMB_OCFPKIGNCAO_OFFSET UNITYSDK_OFFSET(0xBF80F50)
#define OOHFBGJHCMB_OHAGNIBNNFL_OFFSET UNITYSDK_OFFSET(0xBF7F740)
#define OOHFBGJHCMB_OJCMHEDJCNF_OFFSET UNITYSDK_OFFSET(0xBF7DD50)
#define OOHFBGJHCMB_ONAABBPKCDJ_OFFSET UNITYSDK_OFFSET(0xBF81FB0)
#define OOHFBGJHCMB_ONIJBJHBFCI_OFFSET UNITYSDK_OFFSET(0xBF82850)
#define OOHFBGJHCMB_PGGGNLHHMCG_OFFSET UNITYSDK_OFFSET(0xBF81060)
#define OOHFBGJHCMB_PNHJABFDJOG_OFFSET UNITYSDK_OFFSET(0xBF80C00)
#define OOHFBGJHCMB_SET_HASSHOWNQUICKPASSHINT_OFFSET UNITYSDK_OFFSET(0xBF7DDF0)
#define OOHFBGJHCMB__INITNORMALLINEUPS_B__22_0_OFFSET UNITYSDK_OFFSET(0xBF83E20)
#define OOHFBGJHCMB__REVOKENORMALLINEUPS_B__32_0_OFFSET UNITYSDK_OFFSET(0xBF83F00)
#define OOHFBGJHCMB__SAVENORMALLINEUPS_B__31_0_OFFSET UNITYSDK_OFFSET(0xBF83EB0)
#define OOHFBGJHCMB___HANDLESHOWENTRANCE_B__41_0_OFFSET UNITYSDK_OFFSET(0xBF83F30)

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

		::RPG::Client::Promises::IPromise* KKBJCJIHCJG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_KKBJCJIHCJG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NEBDHLFNEIH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_NEBDHLFNEIH_OFFSET))(this);
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

		::RPG::Client::Promises::IPromise* JGIBLGENIGN(::System::Collections::Generic::List_1<::RPG::Client::ChallengePeak*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChallengePeak*>*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_JGIBLGENIGN_OFFSET))(this, a1);
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

		::RPG::Client::Promises::IPromise* DHAFNCEMJEK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_DHAFNCEMJEK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MMBJJPBHCEO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_MMBJJPBHCEO_OFFSET))(this);
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

		::RPG::Client::Promises::IPromise* BNBNACFIDEB(::RPG::Client::ChallengePeak* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB_BNBNACFIDEB_OFFSET))(this, a1);
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

		::RPG::Client::Promises::IPromise* __HandleShowEntrance_b__41_0(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___HANDLESHOWENTRANCE_B__41_0_OFFSET))(this, a1);
		}

	};
