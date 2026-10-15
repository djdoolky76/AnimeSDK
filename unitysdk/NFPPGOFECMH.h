#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/BossPhase.h"
#include "unitysdk/RPG/Client/LittleGame/BossTransitionReason.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/RPG/Client/LittleGame/MovieLevelState.h"
#include "unitysdk/RPG/Client/LittleGame/PlayerHitReason.h"
#include "unitysdk/System/Nullable_1.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFPPGOFECMH_AAIOPLGFFGD_OFFSET UNITYSDK_OFFSET(0x1C92AFE0)
#define NFPPGOFECMH_ABALCFEIEKE_OFFSET UNITYSDK_OFFSET(0x1C929220)
#define NFPPGOFECMH_ANLBFLOJALO_OFFSET UNITYSDK_OFFSET(0x1C92B8D0)
#define NFPPGOFECMH_APHNJBMHPMI_OFFSET UNITYSDK_OFFSET(0x1C929A00)
#define NFPPGOFECMH_BDFLCIOHIKK_OFFSET UNITYSDK_OFFSET(0x1C928BA0)
#define NFPPGOFECMH_BHIFDPGDEKJ_OFFSET UNITYSDK_OFFSET(0x1C928AC0)
#define NFPPGOFECMH_BHLBDPHFKHF_OFFSET UNITYSDK_OFFSET(0x1C92A660)
#define NFPPGOFECMH_BNIOALIOHJB_OFFSET UNITYSDK_OFFSET(0x1C929DD0)
#define NFPPGOFECMH_CCKOGGKOIGG_OFFSET UNITYSDK_OFFSET(0x1C928800)
#define NFPPGOFECMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C92C0D0)
#define NFPPGOFECMH_CDDAIAPHKGA_OFFSET UNITYSDK_OFFSET(0x1C9298C0)
#define NFPPGOFECMH_CDEEBKOEFJC_OFFSET UNITYSDK_OFFSET(0x1C929000)
#define NFPPGOFECMH_CIABPBLPMAM_1_OFFSET UNITYSDK_OFFSET(0x1C92B530)
#define NFPPGOFECMH_CIABPBLPMAM_OFFSET UNITYSDK_OFFSET(0x1C92B250)
#define NFPPGOFECMH_CMONBLENKDD_1_OFFSET UNITYSDK_OFFSET(0x1C92B2A0)
#define NFPPGOFECMH_CMONBLENKDD_OFFSET UNITYSDK_OFFSET(0x1C92B0D0)
#define NFPPGOFECMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92C050)
#define NFPPGOFECMH_DANEMJAMPLA_1_OFFSET UNITYSDK_OFFSET(0x1C92AED0)
#define NFPPGOFECMH_DANEMJAMPLA_OFFSET UNITYSDK_OFFSET(0x1C92ABF0)
#define NFPPGOFECMH_DCHDMLIEJHB_OFFSET UNITYSDK_OFFSET(0x1C92B190)
#define NFPPGOFECMH_DDGEKNMAGLL_OFFSET UNITYSDK_OFFSET(0x1C92B930)
#define NFPPGOFECMH_DDOGHKCMKKH_OFFSET UNITYSDK_OFFSET(0x1C92AE40)
#define NFPPGOFECMH_DGALPGLKOJM_OFFSET UNITYSDK_OFFSET(0x1C92BB90)
#define NFPPGOFECMH_DLHFNJJMEBH_OFFSET UNITYSDK_OFFSET(0x1C92BFF0)
#define NFPPGOFECMH_DLPBKKPFLHI_OFFSET UNITYSDK_OFFSET(0x1C928680)
#define NFPPGOFECMH_DOFBPFCFDON_OFFSET UNITYSDK_OFFSET(0x1C92B640)
#define NFPPGOFECMH_DPPIKKHKKEO_OFFSET UNITYSDK_OFFSET(0x1C929110)
#define NFPPGOFECMH_ECFKKLGAPNN_OFFSET UNITYSDK_OFFSET(0x1C929EA0)
#define NFPPGOFECMH_ECJLGGNJNBC_OFFSET UNITYSDK_OFFSET(0x1C928EF0)
#define NFPPGOFECMH_EIPPLKEDAML_OFFSET UNITYSDK_OFFSET(0x1C92BF60)
#define NFPPGOFECMH_ENEKHALJMOM_OFFSET UNITYSDK_OFFSET(0x1C929640)
#define NFPPGOFECMH_FHLAKEONLGJ_1_OFFSET UNITYSDK_OFFSET(0x1C92AC40)
#define NFPPGOFECMH_FHLAKEONLGJ_OFFSET UNITYSDK_OFFSET(0x1C92AA90)
#define NFPPGOFECMH_FKDFEDAJMPP_OFFSET UNITYSDK_OFFSET(0x1C928C00)
#define NFPPGOFECMH_FOGFDIPBHNN_OFFSET UNITYSDK_OFFSET(0x1C92BDF0)
#define NFPPGOFECMH_GBHBLNJBIDD_OFFSET UNITYSDK_OFFSET(0x1C92B730)
#define NFPPGOFECMH_GIJEGCCFHAD_OFFSET UNITYSDK_OFFSET(0x1C9296A0)
#define NFPPGOFECMH_GKDGGLAFMGF_OFFSET UNITYSDK_OFFSET(0x1C929BC0)
#define NFPPGOFECMH_HAFDMOBALMG_OFFSET UNITYSDK_OFFSET(0x1C92A710)
#define NFPPGOFECMH_HJJNLFEHJJC_OFFSET UNITYSDK_OFFSET(0x1C92A440)
#define NFPPGOFECMH_HPKIDPFGIIM_OFFSET UNITYSDK_OFFSET(0x1C9295B0)
#define NFPPGOFECMH_HPODOCGCOCP_OFFSET UNITYSDK_OFFSET(0x1C92B070)
#define NFPPGOFECMH_IEFGDHANALE_OFFSET UNITYSDK_OFFSET(0x1C92BD00)
#define NFPPGOFECMH_IFBJGJNNHKG_OFFSET UNITYSDK_OFFSET(0x1C92BB30)
#define NFPPGOFECMH_IILPDGGBHKG_OFFSET UNITYSDK_OFFSET(0x1C929270)
#define NFPPGOFECMH_INLOBJIFLNF_OFFSET UNITYSDK_OFFSET(0x1C92B7E0)
#define NFPPGOFECMH_IOAIKJDGAMH_OFFSET UNITYSDK_OFFSET(0x1C92BE50)
#define NFPPGOFECMH_JFKLGGEFIFN_OFFSET UNITYSDK_OFFSET(0x1C92ADE0)
#define NFPPGOFECMH_KANNGDMPJAO_OFFSET UNITYSDK_OFFSET(0x1C929380)
#define NFPPGOFECMH_KCAJMOLOPGJ_1_OFFSET UNITYSDK_OFFSET(0x1C92A210)
#define NFPPGOFECMH_KCAJMOLOPGJ_OFFSET UNITYSDK_OFFSET(0x1C928300)
#define NFPPGOFECMH_KFMEJCCIJIJ_OFFSET UNITYSDK_OFFSET(0x1C929C10)
#define NFPPGOFECMH_KGEOBJGBFCA_OFFSET UNITYSDK_OFFSET(0x1C92B6D0)
#define NFPPGOFECMH_KGNLOJIHHAD_OFFSET UNITYSDK_OFFSET(0x1C92A9A0)
#define NFPPGOFECMH_KHIAHDOBKLD_OFFSET UNITYSDK_OFFSET(0x1C929910)
#define NFPPGOFECMH_KICILIJIBHF_OFFSET UNITYSDK_OFFSET(0x1C92B440)
#define NFPPGOFECMH_KKBIGCEKNIA_OFFSET UNITYSDK_OFFSET(0x1C929EF0)
#define NFPPGOFECMH_KNAAOLBEODN_OFFSET UNITYSDK_OFFSET(0x1C929560)
#define NFPPGOFECMH_KPDAFEFKDMM_OFFSET UNITYSDK_OFFSET(0x1C928D50)
#define NFPPGOFECMH_KPEHANMHEGI_OFFSET UNITYSDK_OFFSET(0x1C92B9E0)
#define NFPPGOFECMH_LCMDALJKFBJ_OFFSET UNITYSDK_OFFSET(0x1C92B840)
#define NFPPGOFECMH_LEMFHEHFEEO_OFFSET UNITYSDK_OFFSET(0x1C9299A0)
#define NFPPGOFECMH_LHNMENGEMHA_OFFSET UNITYSDK_OFFSET(0x1C929470)
#define NFPPGOFECMH_LLCANILJNPK_OFFSET UNITYSDK_OFFSET(0x1C928B10)
#define NFPPGOFECMH_LMJGKHKJPDN_OFFSET UNITYSDK_OFFSET(0x1C928EA0)
#define NFPPGOFECMH_MFHHBAHGDCC_OFFSET UNITYSDK_OFFSET(0x1C92BD90)
#define NFPPGOFECMH_MFPEAFEGCCM_OFFSET UNITYSDK_OFFSET(0x1C92A860)
#define NFPPGOFECMH_MLPJCFFIJKL_OFFSET UNITYSDK_OFFSET(0x1C929D00)
#define NFPPGOFECMH_MOIFHLNCMJB_OFFSET UNITYSDK_OFFSET(0x1C92A950)
#define NFPPGOFECMH_MOMGOLNADGJ_OFFSET UNITYSDK_OFFSET(0x1C92BA40)
#define NFPPGOFECMH_NBKGNOFOIMJ_OFFSET UNITYSDK_OFFSET(0x1C9287A0)
#define NFPPGOFECMH_NEIBPBKHGKE_OFFSET UNITYSDK_OFFSET(0x1C929AE0)
#define NFPPGOFECMH_NFJCBDGOHCK_OFFSET UNITYSDK_OFFSET(0x1C92BAD0)
#define NFPPGOFECMH_NHMHAADKBBE_OFFSET UNITYSDK_OFFSET(0x1C92AA30)
#define NFPPGOFECMH_NIEBDIPNPON_OFFSET UNITYSDK_OFFSET(0x1C9297B0)
#define NFPPGOFECMH_NMLCHLBDKID_OFFSET UNITYSDK_OFFSET(0x1C92AB40)
#define NFPPGOFECMH_OBHNMGIEIHN_OFFSET UNITYSDK_OFFSET(0x1C928FA0)
#define NFPPGOFECMH_OBKFNIINLNF_OFFSET UNITYSDK_OFFSET(0x1C928710)
#define NFPPGOFECMH_ODIDOGCDEHF_OFFSET UNITYSDK_OFFSET(0x1C928960)
#define NFPPGOFECMH_OFPKICNOHGL_OFFSET UNITYSDK_OFFSET(0x1C929320)
#define NFPPGOFECMH_OGILKEBLICN_OFFSET UNITYSDK_OFFSET(0x1C92A490)
#define NFPPGOFECMH_OHKICOJCKMA_OFFSET UNITYSDK_OFFSET(0x1C929F80)
#define NFPPGOFECMH_OHNIEHHMPMN_OFFSET UNITYSDK_OFFSET(0x1C92A770)
#define NFPPGOFECMH_OHPGBNMJHCN_OFFSET UNITYSDK_OFFSET(0x1C929CA0)
#define NFPPGOFECMH_OJLGHEOJIND_OFFSET UNITYSDK_OFFSET(0x1C92B4A0)
#define NFPPGOFECMH_OKCKHCIFAEO_OFFSET UNITYSDK_OFFSET(0x1C92BF00)
#define NFPPGOFECMH_OOELDHCCPEH_OFFSET UNITYSDK_OFFSET(0x1C92A4F0)
#define NFPPGOFECMH_PLIILEPHEHJ_OFFSET UNITYSDK_OFFSET(0x1C929FE0)

inline static constexpr unsigned int NFPPGOFECMH_TypeDefinitionIndex = 42379;

	class NFPPGOFECMH : public ::Entitas::Entity
	{
	public:
		static ::JMNHIINAMON** StaticGet_HNAELMOPPDG()
		{
			return (::JMNHIINAMON**)UnitySDK::FromName("", "NFPPGOFECMH")->GetStaticField(0x53850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPGOFECMH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFPPGOFECMH_CCTOR_OFFSET))();
		}

		::System::Void KCAJMOLOPGJ(::System::Nullable_1<::System::Single> a1, ::System::Nullable_1<::System::Int32> a2, ::System::Nullable_1<::System::Int32> a3, ::System::Nullable_1<::System::Int32> a4, ::System::Nullable_1<::System::Single> a5, ::System::Nullable_1<::System::Int32> a6, ::System::Nullable_1<::System::Int32> a7, ::System::Nullable_1<::System::Int32> a8, ::System::Nullable_1<::System::Int32> a9, ::System::Nullable_1<::System::Int32> a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NFPPGOFECMH_KCAJMOLOPGJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
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
