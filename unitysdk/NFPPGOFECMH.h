#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/BossPhase.h"
#include "unitysdk/RPG/Client/LittleGame/BossTransitionReason.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/RPG/Client/LittleGame/MovieLevelState.h"
#include "unitysdk/RPG/Client/LittleGame/PlayerHitReason.h"
class APJJLMCOLFM;
class APOCIBEFCEJ;
class BJHEOCMKDPE;
class FCHFBJKLIPF;
class HHGHOEPAFCD;
class IBOOEKGCOPM;
class JMNHIINAMON;
class KOEDHICGHJJ;
class NGPJANBCPDG;
class NNBLDMGCENH;
class OOBKHOJLDPN;
class OOMEABJAGJE;
namespace RPG::Client::LittleGame { class MovieGameModeComponent; }
namespace RPG::Client::LittleGame { class MovieGameStatisticComponent; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFPPGOFECMH_AAIOPLGFFGD_OFFSET UNITYSDK_OFFSET(0x1C959220)
#define NFPPGOFECMH_ABALCFEIEKE_OFFSET UNITYSDK_OFFSET(0x1C957460)
#define NFPPGOFECMH_ANLBFLOJALO_OFFSET UNITYSDK_OFFSET(0x1C959B10)
#define NFPPGOFECMH_APHNJBMHPMI_OFFSET UNITYSDK_OFFSET(0x1C957C40)
#define NFPPGOFECMH_BDFLCIOHIKK_OFFSET UNITYSDK_OFFSET(0x1C956DE0)
#define NFPPGOFECMH_BHIFDPGDEKJ_OFFSET UNITYSDK_OFFSET(0x1C956D00)
#define NFPPGOFECMH_BHLBDPHFKHF_OFFSET UNITYSDK_OFFSET(0x1C9588A0)
#define NFPPGOFECMH_BNIOALIOHJB_OFFSET UNITYSDK_OFFSET(0x1C958010)
#define NFPPGOFECMH_CCKOGGKOIGG_OFFSET UNITYSDK_OFFSET(0x1C956A40)
#define NFPPGOFECMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C95A310)
#define NFPPGOFECMH_CDDAIAPHKGA_OFFSET UNITYSDK_OFFSET(0x1C957B00)
#define NFPPGOFECMH_CDEEBKOEFJC_OFFSET UNITYSDK_OFFSET(0x1C957240)
#define NFPPGOFECMH_CIABPBLPMAM_1_OFFSET UNITYSDK_OFFSET(0x1C959770)
#define NFPPGOFECMH_CIABPBLPMAM_OFFSET UNITYSDK_OFFSET(0x1C959490)
#define NFPPGOFECMH_CMONBLENKDD_1_OFFSET UNITYSDK_OFFSET(0x1C9594E0)
#define NFPPGOFECMH_CMONBLENKDD_OFFSET UNITYSDK_OFFSET(0x1C959310)
#define NFPPGOFECMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95A290)
#define NFPPGOFECMH_DANEMJAMPLA_1_OFFSET UNITYSDK_OFFSET(0x1C959110)
#define NFPPGOFECMH_DANEMJAMPLA_OFFSET UNITYSDK_OFFSET(0x1C958E30)
#define NFPPGOFECMH_DCHDMLIEJHB_OFFSET UNITYSDK_OFFSET(0x1C9593D0)
#define NFPPGOFECMH_DDGEKNMAGLL_OFFSET UNITYSDK_OFFSET(0x1C959B70)
#define NFPPGOFECMH_DDOGHKCMKKH_OFFSET UNITYSDK_OFFSET(0x1C959080)
#define NFPPGOFECMH_DGALPGLKOJM_OFFSET UNITYSDK_OFFSET(0x1C959DD0)
#define NFPPGOFECMH_DLHFNJJMEBH_OFFSET UNITYSDK_OFFSET(0x1C95A230)
#define NFPPGOFECMH_DLPBKKPFLHI_OFFSET UNITYSDK_OFFSET(0x1C9568C0)
#define NFPPGOFECMH_DOFBPFCFDON_OFFSET UNITYSDK_OFFSET(0x1C959880)
#define NFPPGOFECMH_DPPIKKHKKEO_OFFSET UNITYSDK_OFFSET(0x1C957350)
#define NFPPGOFECMH_ECFKKLGAPNN_OFFSET UNITYSDK_OFFSET(0x1C9580E0)
#define NFPPGOFECMH_ECJLGGNJNBC_OFFSET UNITYSDK_OFFSET(0x1C957130)
#define NFPPGOFECMH_EIPPLKEDAML_OFFSET UNITYSDK_OFFSET(0x1C95A1A0)
#define NFPPGOFECMH_ENEKHALJMOM_OFFSET UNITYSDK_OFFSET(0x1C957880)
#define NFPPGOFECMH_FHLAKEONLGJ_1_OFFSET UNITYSDK_OFFSET(0x1C958E80)
#define NFPPGOFECMH_FHLAKEONLGJ_OFFSET UNITYSDK_OFFSET(0x1C958CD0)
#define NFPPGOFECMH_FKDFEDAJMPP_OFFSET UNITYSDK_OFFSET(0x1C956E40)
#define NFPPGOFECMH_FOGFDIPBHNN_OFFSET UNITYSDK_OFFSET(0x1C95A030)
#define NFPPGOFECMH_GBHBLNJBIDD_OFFSET UNITYSDK_OFFSET(0x1C959970)
#define NFPPGOFECMH_GIJEGCCFHAD_OFFSET UNITYSDK_OFFSET(0x1C9578E0)
#define NFPPGOFECMH_GKDGGLAFMGF_OFFSET UNITYSDK_OFFSET(0x1C957E00)
#define NFPPGOFECMH_HAFDMOBALMG_OFFSET UNITYSDK_OFFSET(0x1C958950)
#define NFPPGOFECMH_HJJNLFEHJJC_OFFSET UNITYSDK_OFFSET(0x1C958680)
#define NFPPGOFECMH_HPKIDPFGIIM_OFFSET UNITYSDK_OFFSET(0x1C9577F0)
#define NFPPGOFECMH_HPODOCGCOCP_OFFSET UNITYSDK_OFFSET(0x1C9592B0)
#define NFPPGOFECMH_IEFGDHANALE_OFFSET UNITYSDK_OFFSET(0x1C959F40)
#define NFPPGOFECMH_IFBJGJNNHKG_OFFSET UNITYSDK_OFFSET(0x1C959D70)
#define NFPPGOFECMH_IILPDGGBHKG_OFFSET UNITYSDK_OFFSET(0x1C9574B0)
#define NFPPGOFECMH_INLOBJIFLNF_OFFSET UNITYSDK_OFFSET(0x1C959A20)
#define NFPPGOFECMH_IOAIKJDGAMH_OFFSET UNITYSDK_OFFSET(0x1C95A090)
#define NFPPGOFECMH_JFKLGGEFIFN_OFFSET UNITYSDK_OFFSET(0x1C959020)
#define NFPPGOFECMH_KANNGDMPJAO_OFFSET UNITYSDK_OFFSET(0x1C9575C0)
#define NFPPGOFECMH_KCAJMOLOPGJ_1_OFFSET UNITYSDK_OFFSET(0x1C958450)
#define NFPPGOFECMH_KCAJMOLOPGJ_OFFSET UNITYSDK_OFFSET(0x1C956540)
#define NFPPGOFECMH_KFMEJCCIJIJ_OFFSET UNITYSDK_OFFSET(0x1C957E50)
#define NFPPGOFECMH_KGEOBJGBFCA_OFFSET UNITYSDK_OFFSET(0x1C959910)
#define NFPPGOFECMH_KGNLOJIHHAD_OFFSET UNITYSDK_OFFSET(0x1C958BE0)
#define NFPPGOFECMH_KHIAHDOBKLD_OFFSET UNITYSDK_OFFSET(0x1C957B50)
#define NFPPGOFECMH_KICILIJIBHF_OFFSET UNITYSDK_OFFSET(0x1C959680)
#define NFPPGOFECMH_KKBIGCEKNIA_OFFSET UNITYSDK_OFFSET(0x1C958130)
#define NFPPGOFECMH_KNAAOLBEODN_OFFSET UNITYSDK_OFFSET(0x1C9577A0)
#define NFPPGOFECMH_KPDAFEFKDMM_OFFSET UNITYSDK_OFFSET(0x1C956F90)
#define NFPPGOFECMH_KPEHANMHEGI_OFFSET UNITYSDK_OFFSET(0x1C959C20)
#define NFPPGOFECMH_LCMDALJKFBJ_OFFSET UNITYSDK_OFFSET(0x1C959A80)
#define NFPPGOFECMH_LEMFHEHFEEO_OFFSET UNITYSDK_OFFSET(0x1C957BE0)
#define NFPPGOFECMH_LHNMENGEMHA_OFFSET UNITYSDK_OFFSET(0x1C9576B0)
#define NFPPGOFECMH_LLCANILJNPK_OFFSET UNITYSDK_OFFSET(0x1C956D50)
#define NFPPGOFECMH_LMJGKHKJPDN_OFFSET UNITYSDK_OFFSET(0x1C9570E0)
#define NFPPGOFECMH_MFHHBAHGDCC_OFFSET UNITYSDK_OFFSET(0x1C959FD0)
#define NFPPGOFECMH_MFPEAFEGCCM_OFFSET UNITYSDK_OFFSET(0x1C958AA0)
#define NFPPGOFECMH_MLPJCFFIJKL_OFFSET UNITYSDK_OFFSET(0x1C957F40)
#define NFPPGOFECMH_MOIFHLNCMJB_OFFSET UNITYSDK_OFFSET(0x1C958B90)
#define NFPPGOFECMH_MOMGOLNADGJ_OFFSET UNITYSDK_OFFSET(0x1C959C80)
#define NFPPGOFECMH_NBKGNOFOIMJ_OFFSET UNITYSDK_OFFSET(0x1C9569E0)
#define NFPPGOFECMH_NEIBPBKHGKE_OFFSET UNITYSDK_OFFSET(0x1C957D20)
#define NFPPGOFECMH_NFJCBDGOHCK_OFFSET UNITYSDK_OFFSET(0x1C959D10)
#define NFPPGOFECMH_NHMHAADKBBE_OFFSET UNITYSDK_OFFSET(0x1C958C70)
#define NFPPGOFECMH_NIEBDIPNPON_OFFSET UNITYSDK_OFFSET(0x1C9579F0)
#define NFPPGOFECMH_NMLCHLBDKID_OFFSET UNITYSDK_OFFSET(0x1C958D80)
#define NFPPGOFECMH_OBHNMGIEIHN_OFFSET UNITYSDK_OFFSET(0x1C9571E0)
#define NFPPGOFECMH_OBKFNIINLNF_OFFSET UNITYSDK_OFFSET(0x1C956950)
#define NFPPGOFECMH_ODIDOGCDEHF_OFFSET UNITYSDK_OFFSET(0x1C956BA0)
#define NFPPGOFECMH_OFPKICNOHGL_OFFSET UNITYSDK_OFFSET(0x1C957560)
#define NFPPGOFECMH_OGILKEBLICN_OFFSET UNITYSDK_OFFSET(0x1C9586D0)
#define NFPPGOFECMH_OHKICOJCKMA_OFFSET UNITYSDK_OFFSET(0x1C9581C0)
#define NFPPGOFECMH_OHNIEHHMPMN_OFFSET UNITYSDK_OFFSET(0x1C9589B0)
#define NFPPGOFECMH_OHPGBNMJHCN_OFFSET UNITYSDK_OFFSET(0x1C957EE0)
#define NFPPGOFECMH_OJLGHEOJIND_OFFSET UNITYSDK_OFFSET(0x1C9596E0)
#define NFPPGOFECMH_OKCKHCIFAEO_OFFSET UNITYSDK_OFFSET(0x1C95A140)
#define NFPPGOFECMH_OOELDHCCPEH_OFFSET UNITYSDK_OFFSET(0x1C958730)
#define NFPPGOFECMH_PLIILEPHEHJ_OFFSET UNITYSDK_OFFSET(0x1C958220)

	class NFPPGOFECMH : public ::Entitas::Entity
	{
	public:
		static ::JMNHIINAMON** StaticGet_HNAELMOPPDG()
		{
			return (::JMNHIINAMON**)UnitySDK::FromName("", "NFPPGOFECMH")->GetStaticField(0x57F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFPPGOFECMH_CCTOR_OFFSET))();
		}

		::System::Void KCAJMOLOPGJ(::System::Nullable* a1, ::System::Nullable* a2, ::System::Nullable* a3, ::System::Nullable* a4, ::System::Nullable* a5, ::System::Nullable* a6, ::System::Nullable* a7, ::System::Nullable* a8, ::System::Nullable* a9, ::System::Nullable* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KCAJMOLOPGJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::HHGHOEPAFCD* OBKFNIINLNF()
		{
			return ((::HHGHOEPAFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OBKFNIINLNF_OFFSET))(this);
		}

		::System::Boolean NBKGNOFOIMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_NBKGNOFOIMJ_OFFSET))(this);
		}

		::System::Void CCKOGGKOIGG(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CCKOGGKOIGG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ODIDOGCDEHF(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_ODIDOGCDEHF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BHIFDPGDEKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_BHIFDPGDEKJ_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameModeComponent* LLCANILJNPK()
		{
			return ((::RPG::Client::LittleGame::MovieGameModeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_LLCANILJNPK_OFFSET))(this);
		}

		::System::Boolean BDFLCIOHIKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_BDFLCIOHIKK_OFFSET))(this);
		}

		::System::Void FKDFEDAJMPP(::RPG::Client::LittleGame::MovieGameMode a1, ::System::Int32 a2, ::RPG::Client::LittleGame::MovieLevelState a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameMode, ::System::Int32, ::RPG::Client::LittleGame::MovieLevelState, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NFPPGOFECMH_FKDFEDAJMPP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void KPDAFEFKDMM(::RPG::Client::LittleGame::MovieGameMode a1, ::System::Int32 a2, ::RPG::Client::LittleGame::MovieLevelState a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieGameMode, ::System::Int32, ::RPG::Client::LittleGame::MovieLevelState, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KPDAFEFKDMM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void LMJGKHKJPDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_LMJGKHKJPDN_OFFSET))(this);
		}

		::NNBLDMGCENH* ECJLGGNJNBC()
		{
			return ((::NNBLDMGCENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_ECJLGGNJNBC_OFFSET))(this);
		}

		::System::Boolean OBHNMGIEIHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OBHNMGIEIHN_OFFSET))(this);
		}

		::System::Void CDEEBKOEFJC(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CDEEBKOEFJC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DPPIKKHKKEO(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DPPIKKHKKEO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ABALCFEIEKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_ABALCFEIEKE_OFFSET))(this);
		}

		::KOEDHICGHJJ* IILPDGGBHKG()
		{
			return ((::KOEDHICGHJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_IILPDGGBHKG_OFFSET))(this);
		}

		::System::Boolean OFPKICNOHGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OFPKICNOHGL_OFFSET))(this);
		}

		::System::Void KANNGDMPJAO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KANNGDMPJAO_OFFSET))(this, a1);
		}

		::System::Void LHNMENGEMHA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_LHNMENGEMHA_OFFSET))(this, a1);
		}

		::System::Void KNAAOLBEODN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KNAAOLBEODN_OFFSET))(this);
		}

		::IBOOEKGCOPM* HPKIDPFGIIM()
		{
			return ((::IBOOEKGCOPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_HPKIDPFGIIM_OFFSET))(this);
		}

		::System::Boolean ENEKHALJMOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_ENEKHALJMOM_OFFSET))(this);
		}

		::System::Void GIJEGCCFHAD(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_GIJEGCCFHAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NIEBDIPNPON(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_NIEBDIPNPON_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CDDAIAPHKGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CDDAIAPHKGA_OFFSET))(this);
		}

		::OOMEABJAGJE* KHIAHDOBKLD()
		{
			return ((::OOMEABJAGJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KHIAHDOBKLD_OFFSET))(this);
		}

		::System::Boolean LEMFHEHFEEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_LEMFHEHFEEO_OFFSET))(this);
		}

		::System::Void APHNJBMHPMI(::RPG::Client::LittleGame::BossPhase a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BossPhase, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NFPPGOFECMH_APHNJBMHPMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NEIBPBKHGKE(::RPG::Client::LittleGame::BossPhase a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BossPhase, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NFPPGOFECMH_NEIBPBKHGKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GKDGGLAFMGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_GKDGGLAFMGF_OFFSET))(this);
		}

		::APOCIBEFCEJ* KFMEJCCIJIJ()
		{
			return ((::APOCIBEFCEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KFMEJCCIJIJ_OFFSET))(this);
		}

		::System::Boolean OHPGBNMJHCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OHPGBNMJHCN_OFFSET))(this);
		}

		::System::Void MLPJCFFIJKL(::RPG::Client::LittleGame::BossTransitionReason a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BossTransitionReason, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_MLPJCFFIJKL_OFFSET))(this, a1, a2);
		}

		::System::Void BNIOALIOHJB(::RPG::Client::LittleGame::BossTransitionReason a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::BossTransitionReason, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_BNIOALIOHJB_OFFSET))(this, a1, a2);
		}

		::System::Void ECFKKLGAPNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_ECFKKLGAPNN_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameStatisticComponent* KKBIGCEKNIA()
		{
			return ((::RPG::Client::LittleGame::MovieGameStatisticComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KKBIGCEKNIA_OFFSET))(this);
		}

		::System::Boolean OHKICOJCKMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OHKICOJCKMA_OFFSET))(this);
		}

		::System::Void PLIILEPHEHJ(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlayerHitReason>* a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlayerHitReason>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NFPPGOFECMH_PLIILEPHEHJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void KCAJMOLOPGJ_1(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlayerHitReason>* a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlayerHitReason>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KCAJMOLOPGJ_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void HJJNLFEHJJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_HJJNLFEHJJC_OFFSET))(this);
		}

		::System::Boolean OGILKEBLICN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OGILKEBLICN_OFFSET))(this);
		}

		::System::Void OOELDHCCPEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OOELDHCCPEH_OFFSET))(this, a1);
		}

		::NGPJANBCPDG* BHLBDPHFKHF()
		{
			return ((::NGPJANBCPDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_BHLBDPHFKHF_OFFSET))(this);
		}

		::System::Boolean HAFDMOBALMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_HAFDMOBALMG_OFFSET))(this);
		}

		::System::Void OHNIEHHMPMN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OHNIEHHMPMN_OFFSET))(this, a1);
		}

		::System::Void MFPEAFEGCCM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFPPGOFECMH_MFPEAFEGCCM_OFFSET))(this, a1);
		}

		::System::Void MOIFHLNCMJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_MOIFHLNCMJB_OFFSET))(this);
		}

		::BJHEOCMKDPE* KGNLOJIHHAD()
		{
			return ((::BJHEOCMKDPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KGNLOJIHHAD_OFFSET))(this);
		}

		::System::Boolean NHMHAADKBBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_NHMHAADKBBE_OFFSET))(this);
		}

		::System::Void FHLAKEONLGJ(::System::Collections::Generic::List_1<::FCHFBJKLIPF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FCHFBJKLIPF*>*))((::PBYTE)hIl2Cpp + NFPPGOFECMH_FHLAKEONLGJ_OFFSET))(this, a1);
		}

		::System::Void NMLCHLBDKID(::System::Collections::Generic::List_1<::FCHFBJKLIPF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FCHFBJKLIPF*>*))((::PBYTE)hIl2Cpp + NFPPGOFECMH_NMLCHLBDKID_OFFSET))(this, a1);
		}

		::System::Void DANEMJAMPLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DANEMJAMPLA_OFFSET))(this);
		}

		::System::Void FHLAKEONLGJ_1(::FCHFBJKLIPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCHFBJKLIPF*))((::PBYTE)hIl2Cpp + NFPPGOFECMH_FHLAKEONLGJ_1_OFFSET))(this, a1);
		}

		::System::Void DANEMJAMPLA_1(::FCHFBJKLIPF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::FCHFBJKLIPF*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DANEMJAMPLA_1_OFFSET))(this, a1, a2);
		}

		::APJJLMCOLFM* AAIOPLGFFGD()
		{
			return ((::APJJLMCOLFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_AAIOPLGFFGD_OFFSET))(this);
		}

		::System::Boolean HPODOCGCOCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_HPODOCGCOCP_OFFSET))(this);
		}

		::System::Void CMONBLENKDD(::System::Collections::Generic::List_1<::OOBKHOJLDPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OOBKHOJLDPN*>*))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CMONBLENKDD_OFFSET))(this, a1);
		}

		::System::Void DCHDMLIEJHB(::System::Collections::Generic::List_1<::OOBKHOJLDPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OOBKHOJLDPN*>*))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DCHDMLIEJHB_OFFSET))(this, a1);
		}

		::System::Void CIABPBLPMAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CIABPBLPMAM_OFFSET))(this);
		}

		::System::Void CMONBLENKDD_1(::OOBKHOJLDPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBKHOJLDPN*))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CMONBLENKDD_1_OFFSET))(this, a1);
		}

		::System::Void CIABPBLPMAM_1(::OOBKHOJLDPN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OOBKHOJLDPN*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CIABPBLPMAM_1_OFFSET))(this, a1, a2);
		}

		::APOCIBEFCEJ* DOFBPFCFDON()
		{
			return ((::APOCIBEFCEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DOFBPFCFDON_OFFSET))(this);
		}

		::System::Boolean KGEOBJGBFCA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KGEOBJGBFCA_OFFSET))(this);
		}

		::KOEDHICGHJJ* GBHBLNJBIDD()
		{
			return ((::KOEDHICGHJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_GBHBLNJBIDD_OFFSET))(this);
		}

		::System::Boolean INLOBJIFLNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_INLOBJIFLNF_OFFSET))(this);
		}

		::BJHEOCMKDPE* DDOGHKCMKKH()
		{
			return ((::BJHEOCMKDPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DDOGHKCMKKH_OFFSET))(this);
		}

		::System::Boolean JFKLGGEFIFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_JFKLGGEFIFN_OFFSET))(this);
		}

		::APJJLMCOLFM* OJLGHEOJIND()
		{
			return ((::APJJLMCOLFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OJLGHEOJIND_OFFSET))(this);
		}

		::System::Boolean KICILIJIBHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KICILIJIBHF_OFFSET))(this);
		}

		::HHGHOEPAFCD* LCMDALJKFBJ()
		{
			return ((::HHGHOEPAFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_LCMDALJKFBJ_OFFSET))(this);
		}

		::System::Boolean ANLBFLOJALO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_ANLBFLOJALO_OFFSET))(this);
		}

		::NNBLDMGCENH* DDGEKNMAGLL()
		{
			return ((::NNBLDMGCENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DDGEKNMAGLL_OFFSET))(this);
		}

		::System::Boolean KPEHANMHEGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KPEHANMHEGI_OFFSET))(this);
		}

		::OOMEABJAGJE* MOMGOLNADGJ()
		{
			return ((::OOMEABJAGJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_MOMGOLNADGJ_OFFSET))(this);
		}

		::System::Boolean NFJCBDGOHCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_NFJCBDGOHCK_OFFSET))(this);
		}

		::System::Boolean IFBJGJNNHKG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_IFBJGJNNHKG_OFFSET))(this);
		}

		::System::Void DGALPGLKOJM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DGALPGLKOJM_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::MovieGameModeComponent* IEFGDHANALE()
		{
			return ((::RPG::Client::LittleGame::MovieGameModeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_IEFGDHANALE_OFFSET))(this);
		}

		::System::Boolean MFHHBAHGDCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_MFHHBAHGDCC_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameStatisticComponent* DLPBKKPFLHI()
		{
			return ((::RPG::Client::LittleGame::MovieGameStatisticComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DLPBKKPFLHI_OFFSET))(this);
		}

		::System::Boolean FOGFDIPBHNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_FOGFDIPBHNN_OFFSET))(this);
		}

		::NGPJANBCPDG* IOAIKJDGAMH()
		{
			return ((::NGPJANBCPDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_IOAIKJDGAMH_OFFSET))(this);
		}

		::System::Boolean OKCKHCIFAEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_OKCKHCIFAEO_OFFSET))(this);
		}

		::IBOOEKGCOPM* EIPPLKEDAML()
		{
			return ((::IBOOEKGCOPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_EIPPLKEDAML_OFFSET))(this);
		}

		::System::Boolean DLHFNJJMEBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_DLHFNJJMEBH_OFFSET))(this);
		}

	};
