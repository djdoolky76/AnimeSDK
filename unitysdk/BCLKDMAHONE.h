#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipmentState.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirGameState.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirProjectileType.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AICDOPIPLCO;
class CCGEEGJKPHC;
class CFFANKLMLLN;
class CGGFJMLHDBC;
class DAMFACEJGPJ;
class DDILGBNCFNM;
class DDPLLJEOLHD;
class FFKEJMFGGND;
class GLLIPCNMDBO;
class HJMFDDMHOJC;
class HKEJIALCLDK;
class IFGIACHKJOA;
class ILFILLOHKIL;
class JAMLKCDHMJE;
class JIIEDMEICMJ;
class KHGFBJNGOIB;
class KMMPEKICPIH;
class LCKPKGGFPAM;
class LNHNHNPJKGD;
class MAJHDKCFHBM;
class MFGPOKOCFCJ;
class MMEADKNKPNO;
class MOEIAKJOONB;
class NJEOOPKIFFF;
class OKHEEAPDDFJ;
class OMBIMJDIHLE;
class PLFMKIDHJEB;
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define BCLKDMAHONE_AAKPMJMJHLE_OFFSET UNITYSDK_OFFSET(0x1C8884A0)
#define BCLKDMAHONE_ACMILBGNOLA_OFFSET UNITYSDK_OFFSET(0x1C886200)
#define BCLKDMAHONE_ADDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C885460)
#define BCLKDMAHONE_ADOJIAIEPPH_OFFSET UNITYSDK_OFFSET(0x1C886E80)
#define BCLKDMAHONE_AFGBJKNNKNP_OFFSET UNITYSDK_OFFSET(0x1C884500)
#define BCLKDMAHONE_AGCDPDMLBIL_OFFSET UNITYSDK_OFFSET(0x1C887380)
#define BCLKDMAHONE_AHCMKHGAGHA_OFFSET UNITYSDK_OFFSET(0x1C8851A0)
#define BCLKDMAHONE_AHKHEIKCBGE_OFFSET UNITYSDK_OFFSET(0x1C8895A0)
#define BCLKDMAHONE_AKCDBOHACKG_OFFSET UNITYSDK_OFFSET(0x1C8841C0)
#define BCLKDMAHONE_ANOEOHAANNG_OFFSET UNITYSDK_OFFSET(0x1C885140)
#define BCLKDMAHONE_APGMBBOGDGJ_OFFSET UNITYSDK_OFFSET(0x1C883D80)
#define BCLKDMAHONE_BBJKAMHDPFH_OFFSET UNITYSDK_OFFSET(0x1C887540)
#define BCLKDMAHONE_BFHJCIHINNF_OFFSET UNITYSDK_OFFSET(0x1C888920)
#define BCLKDMAHONE_BHOFDDFIGHI_OFFSET UNITYSDK_OFFSET(0x1C884A50)
#define BCLKDMAHONE_BMAOFDIHOCH_OFFSET UNITYSDK_OFFSET(0x1C889650)
#define BCLKDMAHONE_CAAGLLDAEAP_OFFSET UNITYSDK_OFFSET(0x1C888A30)
#define BCLKDMAHONE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C889730)
#define BCLKDMAHONE_CELKBHLECEM_OFFSET UNITYSDK_OFFSET(0x1C8846C0)
#define BCLKDMAHONE_CHDPICOOLNP_OFFSET UNITYSDK_OFFSET(0x1C889030)
#define BCLKDMAHONE_CKHICLBMFEA_OFFSET UNITYSDK_OFFSET(0x1C887080)
#define BCLKDMAHONE_CODOEOJOGMA_OFFSET UNITYSDK_OFFSET(0x1C884060)
#define BCLKDMAHONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8896B0)
#define BCLKDMAHONE_DAEPDONJHEO_OFFSET UNITYSDK_OFFSET(0x1C888B40)
#define BCLKDMAHONE_DFBIJLEFPAO_OFFSET UNITYSDK_OFFSET(0x1C885A60)
#define BCLKDMAHONE_DGEBFEOIONC_OFFSET UNITYSDK_OFFSET(0x1C887B90)
#define BCLKDMAHONE_DICDJJOJKGF_OFFSET UNITYSDK_OFFSET(0x1C885350)
#define BCLKDMAHONE_DJOECCHCJEM_OFFSET UNITYSDK_OFFSET(0x1C883F20)
#define BCLKDMAHONE_DKJPNBKNAOG_OFFSET UNITYSDK_OFFSET(0x1C889380)
#define BCLKDMAHONE_DMDIIDKBPHI_OFFSET UNITYSDK_OFFSET(0x1C884B60)
#define BCLKDMAHONE_DMEGOLADBGD_OFFSET UNITYSDK_OFFSET(0x1C888D00)
#define BCLKDMAHONE_DPJLKBJACIL_OFFSET UNITYSDK_OFFSET(0x1C886370)
#define BCLKDMAHONE_EIDLEHBFFIA_OFFSET UNITYSDK_OFFSET(0x1C8844A0)
#define BCLKDMAHONE_EJJNHCKPAAG_OFFSET UNITYSDK_OFFSET(0x1C8882E0)
#define BCLKDMAHONE_EJMEHBEMLGL_OFFSET UNITYSDK_OFFSET(0x1C888030)
#define BCLKDMAHONE_EKEFPDFCNOM_OFFSET UNITYSDK_OFFSET(0x1C884710)
#define BCLKDMAHONE_ELKLBKMNBEF_OFFSET UNITYSDK_OFFSET(0x1C888500)
#define BCLKDMAHONE_EONCODMBAOF_OFFSET UNITYSDK_OFFSET(0x1C885970)
#define BCLKDMAHONE_FAJJBGIKMMO_OFFSET UNITYSDK_OFFSET(0x1C8845E0)
#define BCLKDMAHONE_FBNKFHKNGHG_OFFSET UNITYSDK_OFFSET(0x1C885EE0)
#define BCLKDMAHONE_FDBKOEMPNMC_OFFSET UNITYSDK_OFFSET(0x1C888E10)
#define BCLKDMAHONE_FEDAMHGLHCG_OFFSET UNITYSDK_OFFSET(0x1C889100)
#define BCLKDMAHONE_FEKAECGDHJD_OFFSET UNITYSDK_OFFSET(0x1C8860F0)
#define BCLKDMAHONE_FFEEBJNNIHN_OFFSET UNITYSDK_OFFSET(0x1C888390)
#define BCLKDMAHONE_FGHJJDKKKFJ_OFFSET UNITYSDK_OFFSET(0x1C887270)
#define BCLKDMAHONE_FHIIPKGMHMD_OFFSET UNITYSDK_OFFSET(0x1C8887B0)
#define BCLKDMAHONE_FHKGKMNJBKC_OFFSET UNITYSDK_OFFSET(0x1C8881D0)
#define BCLKDMAHONE_FKFJLFMMOHE_OFFSET UNITYSDK_OFFSET(0x1C887600)
#define BCLKDMAHONE_FNPHOFMGONG_OFFSET UNITYSDK_OFFSET(0x1C888C50)
#define BCLKDMAHONE_FPAMEEBEOIN_OFFSET UNITYSDK_OFFSET(0x1C886DD0)
#define BCLKDMAHONE_GAFENHHEBPG_OFFSET UNITYSDK_OFFSET(0x1C885770)
#define BCLKDMAHONE_GBOALBBCECN_OFFSET UNITYSDK_OFFSET(0x1C883CD0)
#define BCLKDMAHONE_GET_HASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C889540)
#define BCLKDMAHONE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C889490)
#define BCLKDMAHONE_GHCECOICKNM_OFFSET UNITYSDK_OFFSET(0x1C889270)
#define BCLKDMAHONE_GJBOBEEBNLC_OFFSET UNITYSDK_OFFSET(0x1C885BC0)
#define BCLKDMAHONE_GLMLGBABPJH_OFFSET UNITYSDK_OFFSET(0x1C885CA0)
#define BCLKDMAHONE_GPIELJCJLLK_OFFSET UNITYSDK_OFFSET(0x1C888E70)
#define BCLKDMAHONE_HBCHKFDLPFF_OFFSET UNITYSDK_OFFSET(0x1C888F20)
#define BCLKDMAHONE_HBEFAEOOJGL_OFFSET UNITYSDK_OFFSET(0x1C8860A0)
#define BCLKDMAHONE_HBHKCPPNFIJ_OFFSET UNITYSDK_OFFSET(0x1C8843A0)
#define BCLKDMAHONE_HDCGFJMFPDN_OFFSET UNITYSDK_OFFSET(0x1C8861A0)
#define BCLKDMAHONE_HDLLBMOBCHI_OFFSET UNITYSDK_OFFSET(0x1C883C80)
#define BCLKDMAHONE_HDMCPNKBJJL_OFFSET UNITYSDK_OFFSET(0x1C889430)
#define BCLKDMAHONE_HFHNKNGLIPM_OFFSET UNITYSDK_OFFSET(0x1C886B40)
#define BCLKDMAHONE_HFHOEPAIMKE_OFFSET UNITYSDK_OFFSET(0x1C8864E0)
#define BCLKDMAHONE_HFLDHJHJNCF_OFFSET UNITYSDK_OFFSET(0x1C8850B0)
#define BCLKDMAHONE_HINMOCKCGJN_OFFSET UNITYSDK_OFFSET(0x1C883B90)
#define BCLKDMAHONE_HIPCGLIIOIC_OFFSET UNITYSDK_OFFSET(0x1C887D30)
#define BCLKDMAHONE_HMCIFPIODLM_OFFSET UNITYSDK_OFFSET(0x1C8840B0)
#define BCLKDMAHONE_IDBDEJHFPKK_OFFSET UNITYSDK_OFFSET(0x1C884160)
#define BCLKDMAHONE_IHIIEOLHJJF_OFFSET UNITYSDK_OFFSET(0x1C887B40)
#define BCLKDMAHONE_IHMIGGGPFCH_OFFSET UNITYSDK_OFFSET(0x1C887820)
#define BCLKDMAHONE_IJLLDCFAGJM_OFFSET UNITYSDK_OFFSET(0x1C885D80)
#define BCLKDMAHONE_ILBJCBPACED_OFFSET UNITYSDK_OFFSET(0x1C8843F0)
#define BCLKDMAHONE_IMCAAJEHEAC_OFFSET UNITYSDK_OFFSET(0x1C884C50)
#define BCLKDMAHONE_INPFLCCJPEJ_OFFSET UNITYSDK_OFFSET(0x1C888280)
#define BCLKDMAHONE_IPCKOICHBHI_OFFSET UNITYSDK_OFFSET(0x1C884EA0)
#define BCLKDMAHONE_IPJODMHHDFH_OFFSET UNITYSDK_OFFSET(0x1C8883F0)
#define BCLKDMAHONE_JAHLIJHGDEO_OFFSET UNITYSDK_OFFSET(0x1C886D80)
#define BCLKDMAHONE_JCBLCKPFALE_OFFSET UNITYSDK_OFFSET(0x1C884F80)
#define BCLKDMAHONE_JCOCOACFMFP_OFFSET UNITYSDK_OFFSET(0x1C8889D0)
#define BCLKDMAHONE_JDCOFGPBDIJ_OFFSET UNITYSDK_OFFSET(0x1C886530)
#define BCLKDMAHONE_JDHOBIIFEFB_OFFSET UNITYSDK_OFFSET(0x1C888F80)
#define BCLKDMAHONE_JEDCIEJKKHP_OFFSET UNITYSDK_OFFSET(0x1C885300)
#define BCLKDMAHONE_JEOMMGAHJLE_OFFSET UNITYSDK_OFFSET(0x1C886C90)
#define BCLKDMAHONE_JGEEFEHOCFI_OFFSET UNITYSDK_OFFSET(0x1C885DD0)
#define BCLKDMAHONE_JGOJBAPKKKP_OFFSET UNITYSDK_OFFSET(0x1C888590)
#define BCLKDMAHONE_JHMOGIIDKDC_OFFSET UNITYSDK_OFFSET(0x1C886A90)
#define BCLKDMAHONE_JJBGKOFLGFC_OFFSET UNITYSDK_OFFSET(0x1C8886A0)
#define BCLKDMAHONE_JKBMDHCPGEH_OFFSET UNITYSDK_OFFSET(0x1C888D60)
#define BCLKDMAHONE_JLFMCNOMEJB_1_OFFSET UNITYSDK_OFFSET(0x1C887E30)
#define BCLKDMAHONE_JLFMCNOMEJB_OFFSET UNITYSDK_OFFSET(0x1C887C80)
#define BCLKDMAHONE_JLMPIIILDMJ_OFFSET UNITYSDK_OFFSET(0x1C8865E0)
#define BCLKDMAHONE_JOMHEJOKDCL_OFFSET UNITYSDK_OFFSET(0x1C885E80)
#define BCLKDMAHONE_JOPDIHNJEAB_OFFSET UNITYSDK_OFFSET(0x1C889090)
#define BCLKDMAHONE_JPHLGCDCFCE_OFFSET UNITYSDK_OFFSET(0x1C883990)
#define BCLKDMAHONE_KCEKKILMHEM_OFFSET UNITYSDK_OFFSET(0x1C887590)
#define BCLKDMAHONE_KFGLHMPIGBL_OFFSET UNITYSDK_OFFSET(0x1C885B60)
#define BCLKDMAHONE_KFKBPJDGJDK_OFFSET UNITYSDK_OFFSET(0x1C885400)
#define BCLKDMAHONE_KGBNJFCPFHG_OFFSET UNITYSDK_OFFSET(0x1C887FD0)
#define BCLKDMAHONE_KKKMNFOKPPI_OFFSET UNITYSDK_OFFSET(0x1C884A00)
#define BCLKDMAHONE_KMAOKEGLJDK_OFFSET UNITYSDK_OFFSET(0x1C884D90)
#define BCLKDMAHONE_KMIKOPGBLNI_OFFSET UNITYSDK_OFFSET(0x1C887770)
#define BCLKDMAHONE_LBNKPBJNMFH_OFFSET UNITYSDK_OFFSET(0x1C885880)
#define BCLKDMAHONE_LDAMGGBPPOB_OFFSET UNITYSDK_OFFSET(0x1C8842B0)
#define BCLKDMAHONE_LFPOKJJKBLM_OFFSET UNITYSDK_OFFSET(0x1C8879E0)
#define BCLKDMAHONE_LGJONNBNEEB_OFFSET UNITYSDK_OFFSET(0x1C8888C0)
#define BCLKDMAHONE_LGKEHFCNKLM_OFFSET UNITYSDK_OFFSET(0x1C887880)
#define BCLKDMAHONE_LLAIHNCBCIE_OFFSET UNITYSDK_OFFSET(0x1C888BF0)
#define BCLKDMAHONE_LMBEMJICNOH_OFFSET UNITYSDK_OFFSET(0x1C885820)
#define BCLKDMAHONE_LNJCENMLPDD_OFFSET UNITYSDK_OFFSET(0x1C883DE0)
#define BCLKDMAHONE_MAFIDIPJHNH_OFFSET UNITYSDK_OFFSET(0x1C888AE0)
#define BCLKDMAHONE_MBPDJNLACFF_OFFSET UNITYSDK_OFFSET(0x1C885FC0)
#define BCLKDMAHONE_MCCCGJBJBHJ_OFFSET UNITYSDK_OFFSET(0x1C886BA0)
#define BCLKDMAHONE_MDJJGOCLNME_OFFSET UNITYSDK_OFFSET(0x1C888700)
#define BCLKDMAHONE_MEHKGNCMKFA_OFFSET UNITYSDK_OFFSET(0x1C884E40)
#define BCLKDMAHONE_MIMJOINHIHI_OFFSET UNITYSDK_OFFSET(0x1C884820)
#define BCLKDMAHONE_NFBOAGMENOD_OFFSET UNITYSDK_OFFSET(0x1C884B00)
#define BCLKDMAHONE_NNFHOKOEDBE_OFFSET UNITYSDK_OFFSET(0x1C884D40)
#define BCLKDMAHONE_NODHMIPHNDP_OFFSET UNITYSDK_OFFSET(0x1C883A40)
#define BCLKDMAHONE_NPBKPLCPNKP_OFFSET UNITYSDK_OFFSET(0x1C888810)
#define BCLKDMAHONE_OAOOHNLLNOM_OFFSET UNITYSDK_OFFSET(0x1C886640)
#define BCLKDMAHONE_OIDFFGECFJF_OFFSET UNITYSDK_OFFSET(0x1C884910)
#define BCLKDMAHONE_OIHDKMDICIG_OFFSET UNITYSDK_OFFSET(0x1C885060)
#define BCLKDMAHONE_OKALOPOFOEC_OFFSET UNITYSDK_OFFSET(0x1C889320)
#define BCLKDMAHONE_OKFHALOOKPB_OFFSET UNITYSDK_OFFSET(0x1C887460)
#define BCLKDMAHONE_OKHIPODEGPI_OFFSET UNITYSDK_OFFSET(0x1C885AB0)
#define BCLKDMAHONE_PBCBHENDDKE_OFFSET UNITYSDK_OFFSET(0x1C887320)
#define BCLKDMAHONE_PBHEOHEFPLI_OFFSET UNITYSDK_OFFSET(0x1C886840)
#define BCLKDMAHONE_PDCBINGLMMN_OFFSET UNITYSDK_OFFSET(0x1C885250)
#define BCLKDMAHONE_PDEJMMGDGEH_OFFSET UNITYSDK_OFFSET(0x1C887C20)
#define BCLKDMAHONE_PHEMNJKGMDD_OFFSET UNITYSDK_OFFSET(0x1C8847C0)
#define BCLKDMAHONE_PHENEPCDOMA_OFFSET UNITYSDK_OFFSET(0x1C883AA0)
#define BCLKDMAHONE_PHJFADHLPCJ_1_OFFSET UNITYSDK_OFFSET(0x1C8880C0)
#define BCLKDMAHONE_PHJFADHLPCJ_OFFSET UNITYSDK_OFFSET(0x1C887DE0)
#define BCLKDMAHONE_PHJNCOMKFNN_OFFSET UNITYSDK_OFFSET(0x1C8885F0)
#define BCLKDMAHONE_PLLJJGLMPCC_OFFSET UNITYSDK_OFFSET(0x1C886EE0)
#define BCLKDMAHONE_PMCCGOHLCMF_OFFSET UNITYSDK_OFFSET(0x1C887220)
#define BCLKDMAHONE_PMJMGOMAHHO_OFFSET UNITYSDK_OFFSET(0x1C886A40)
#define BCLKDMAHONE_REMOVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C885720)
#define BCLKDMAHONE_REPLACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C8855C0)

inline static constexpr unsigned int BCLKDMAHONE_TypeDefinitionIndex = 42614;

	class BCLKDMAHONE : public ::Entitas::Entity
	{
	public:
		static ::NJEOOPKIFFF** StaticGet_FLFIDLAFHGE()
		{
			return (::NJEOOPKIFFF**)UnitySDK::FromName("", "BCLKDMAHONE")->GetStaticField(0x2C7E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCLKDMAHONE_CCTOR_OFFSET))();
		}

		::MAJHDKCFHBM* JPHLGCDCFCE()
		{
			return ((::MAJHDKCFHBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JPHLGCDCFCE_OFFSET))(this);
		}

		::System::Boolean NODHMIPHNDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_NODHMIPHNDP_OFFSET))(this);
		}

		::System::Void PHENEPCDOMA(::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PHENEPCDOMA_OFFSET))(this, a1, a2);
		}

		::System::Void HINMOCKCGJN(::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HINMOCKCGJN_OFFSET))(this, a1, a2);
		}

		::System::Void HDLLBMOBCHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HDLLBMOBCHI_OFFSET))(this);
		}

		::MFGPOKOCFCJ* GBOALBBCECN()
		{
			return ((::MFGPOKOCFCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_GBOALBBCECN_OFFSET))(this);
		}

		::System::Boolean APGMBBOGDGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_APGMBBOGDGJ_OFFSET))(this);
		}

		::System::Void LNJCENMLPDD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BCLKDMAHONE_LNJCENMLPDD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DJOECCHCJEM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DJOECCHCJEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CODOEOJOGMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_CODOEOJOGMA_OFFSET))(this);
		}

		::DAMFACEJGPJ* HMCIFPIODLM()
		{
			return ((::DAMFACEJGPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HMCIFPIODLM_OFFSET))(this);
		}

		::System::Boolean IDBDEJHFPKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_IDBDEJHFPKK_OFFSET))(this);
		}

		::System::Void AKCDBOHACKG(::RPG::Client::LittleGame::PixAir::PixAirGameState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirGameState, ::System::Boolean))((::PBYTE)hIl2Cpp + BCLKDMAHONE_AKCDBOHACKG_OFFSET))(this, a1, a2);
		}

		::System::Void LDAMGGBPPOB(::RPG::Client::LittleGame::PixAir::PixAirGameState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirGameState, ::System::Boolean))((::PBYTE)hIl2Cpp + BCLKDMAHONE_LDAMGGBPPOB_OFFSET))(this, a1, a2);
		}

		::System::Void HBHKCPPNFIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HBHKCPPNFIJ_OFFSET))(this);
		}

		::JAMLKCDHMJE* ILBJCBPACED()
		{
			return ((::JAMLKCDHMJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_ILBJCBPACED_OFFSET))(this);
		}

		::System::Boolean EIDLEHBFFIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_EIDLEHBFFIA_OFFSET))(this);
		}

		::System::Void AFGBJKNNKNP(::System::Collections::Generic::Queue_1<::HJMFDDMHOJC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::HJMFDDMHOJC*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_AFGBJKNNKNP_OFFSET))(this, a1);
		}

		::System::Void FAJJBGIKMMO(::System::Collections::Generic::Queue_1<::HJMFDDMHOJC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::HJMFDDMHOJC*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FAJJBGIKMMO_OFFSET))(this, a1);
		}

		::System::Void CELKBHLECEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_CELKBHLECEM_OFFSET))(this);
		}

		::PLFMKIDHJEB* EKEFPDFCNOM()
		{
			return ((::PLFMKIDHJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_EKEFPDFCNOM_OFFSET))(this);
		}

		::System::Boolean PHEMNJKGMDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PHEMNJKGMDD_OFFSET))(this);
		}

		::System::Void MIMJOINHIHI(::DDILGBNCFNM* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DDILGBNCFNM*, ::System::Int32))((::PBYTE)hIl2Cpp + BCLKDMAHONE_MIMJOINHIHI_OFFSET))(this, a1, a2);
		}

		::System::Void OIDFFGECFJF(::DDILGBNCFNM* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DDILGBNCFNM*, ::System::Int32))((::PBYTE)hIl2Cpp + BCLKDMAHONE_OIDFFGECFJF_OFFSET))(this, a1, a2);
		}

		::System::Void KKKMNFOKPPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_KKKMNFOKPPI_OFFSET))(this);
		}

		::CFFANKLMLLN* BHOFDDFIGHI()
		{
			return ((::CFFANKLMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_BHOFDDFIGHI_OFFSET))(this);
		}

		::System::Boolean NFBOAGMENOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_NFBOAGMENOD_OFFSET))(this);
		}

		::System::Void DMDIIDKBPHI(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DMDIIDKBPHI_OFFSET))(this, a1, a2);
		}

		::System::Void IMCAAJEHEAC(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_IMCAAJEHEAC_OFFSET))(this, a1, a2);
		}

		::System::Void NNFHOKOEDBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_NNFHOKOEDBE_OFFSET))(this);
		}

		::KHGFBJNGOIB* KMAOKEGLJDK()
		{
			return ((::KHGFBJNGOIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_KMAOKEGLJDK_OFFSET))(this);
		}

		::System::Boolean MEHKGNCMKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_MEHKGNCMKFA_OFFSET))(this);
		}

		::System::Void IPCKOICHBHI(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::OMBIMJDIHLE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::OMBIMJDIHLE*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_IPCKOICHBHI_OFFSET))(this, a1);
		}

		::System::Void JCBLCKPFALE(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::OMBIMJDIHLE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::OMBIMJDIHLE*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JCBLCKPFALE_OFFSET))(this, a1);
		}

		::System::Void OIHDKMDICIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_OIHDKMDICIG_OFFSET))(this);
		}

		::MMEADKNKPNO* HFLDHJHJNCF()
		{
			return ((::MMEADKNKPNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HFLDHJHJNCF_OFFSET))(this);
		}

		::System::Boolean ANOEOHAANNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_ANOEOHAANNG_OFFSET))(this);
		}

		::System::Void AHCMKHGAGHA(::RPG::GameCore::LittleGameAttachPointConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameAttachPointConfig*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_AHCMKHGAGHA_OFFSET))(this, a1);
		}

		::System::Void PDCBINGLMMN(::RPG::GameCore::LittleGameAttachPointConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameAttachPointConfig*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PDCBINGLMMN_OFFSET))(this, a1);
		}

		::System::Void JEDCIEJKKHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JEDCIEJKKHP_OFFSET))(this);
		}

		::ILFILLOHKIL* DICDJJOJKGF()
		{
			return ((::ILFILLOHKIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DICDJJOJKGF_OFFSET))(this);
		}

		::System::Boolean KFKBPJDGJDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_KFKBPJDGJDK_OFFSET))(this);
		}

		::System::Void AddTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BCLKDMAHONE_ADDTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReplaceTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BCLKDMAHONE_REPLACETRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_REMOVETRANSFORM_OFFSET))(this);
		}

		::FFKEJMFGGND* GAFENHHEBPG()
		{
			return ((::FFKEJMFGGND*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_GAFENHHEBPG_OFFSET))(this);
		}

		::System::Boolean LMBEMJICNOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_LMBEMJICNOH_OFFSET))(this);
		}

		::System::Void LBNKPBJNMFH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BCLKDMAHONE_LBNKPBJNMFH_OFFSET))(this, a1, a2);
		}

		::System::Void EONCODMBAOF(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BCLKDMAHONE_EONCODMBAOF_OFFSET))(this, a1, a2);
		}

		::System::Void DFBIJLEFPAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DFBIJLEFPAO_OFFSET))(this);
		}

		::AICDOPIPLCO* OKHIPODEGPI()
		{
			return ((::AICDOPIPLCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_OKHIPODEGPI_OFFSET))(this);
		}

		::System::Boolean KFGLHMPIGBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_KFGLHMPIGBL_OFFSET))(this);
		}

		::System::Void GJBOBEEBNLC(::LNHNHNPJKGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHNHNPJKGD*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_GJBOBEEBNLC_OFFSET))(this, a1);
		}

		::System::Void GLMLGBABPJH(::LNHNHNPJKGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHNHNPJKGD*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_GLMLGBABPJH_OFFSET))(this, a1);
		}

		::System::Void IJLLDCFAGJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_IJLLDCFAGJM_OFFSET))(this);
		}

		::KMMPEKICPIH* JGEEFEHOCFI()
		{
			return ((::KMMPEKICPIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JGEEFEHOCFI_OFFSET))(this);
		}

		::System::Boolean JOMHEJOKDCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JOMHEJOKDCL_OFFSET))(this);
		}

		::System::Void FBNKFHKNGHG(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::GLLIPCNMDBO*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::GLLIPCNMDBO*>*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FBNKFHKNGHG_OFFSET))(this, a1);
		}

		::System::Void MBPDJNLACFF(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::GLLIPCNMDBO*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::GLLIPCNMDBO*>*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_MBPDJNLACFF_OFFSET))(this, a1);
		}

		::System::Void HBEFAEOOJGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HBEFAEOOJGL_OFFSET))(this);
		}

		::CCGEEGJKPHC* FEKAECGDHJD()
		{
			return ((::CCGEEGJKPHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FEKAECGDHJD_OFFSET))(this);
		}

		::System::Boolean HDCGFJMFPDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HDCGFJMFPDN_OFFSET))(this);
		}

		::System::Void ACMILBGNOLA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BCLKDMAHONE_ACMILBGNOLA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DPJLKBJACIL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DPJLKBJACIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HFHOEPAIMKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HFHOEPAIMKE_OFFSET))(this);
		}

		::CGGFJMLHDBC* JDCOFGPBDIJ()
		{
			return ((::CGGFJMLHDBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JDCOFGPBDIJ_OFFSET))(this);
		}

		::System::Boolean JLMPIIILDMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JLMPIIILDMJ_OFFSET))(this);
		}

		::System::Void OAOOHNLLNOM(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::PixAir::PixAirEquipmentState a3, ::System::Int32 a4, ::System::Int32 a5, ::RPG::GameCore::PixAirEnchantmentType a6, ::System::Int32 a7, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* a8, ::RPG::GameCore::PixAirSlotType a9, ::System::Boolean a10, ::System::Boolean a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::LittleGame::PixAir::PixAirEquipmentState, ::System::Int32, ::System::Int32, ::RPG::GameCore::PixAirEnchantmentType, ::System::Int32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>*, ::RPG::GameCore::PixAirSlotType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BCLKDMAHONE_OAOOHNLLNOM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void PBHEOHEFPLI(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::PixAir::PixAirEquipmentState a3, ::System::Int32 a4, ::System::Int32 a5, ::RPG::GameCore::PixAirEnchantmentType a6, ::System::Int32 a7, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* a8, ::RPG::GameCore::PixAirSlotType a9, ::System::Boolean a10, ::System::Boolean a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::LittleGame::PixAir::PixAirEquipmentState, ::System::Int32, ::System::Int32, ::RPG::GameCore::PixAirEnchantmentType, ::System::Int32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>*, ::RPG::GameCore::PixAirSlotType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PBHEOHEFPLI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void PMJMGOMAHHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PMJMGOMAHHO_OFFSET))(this);
		}

		::IFGIACHKJOA* JHMOGIIDKDC()
		{
			return ((::IFGIACHKJOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JHMOGIIDKDC_OFFSET))(this);
		}

		::System::Boolean HFHNKNGLIPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HFHNKNGLIPM_OFFSET))(this);
		}

		::System::Void MCCCGJBJBHJ(::System::Int32 a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + BCLKDMAHONE_MCCCGJBJBHJ_OFFSET))(this, a1, a2);
		}

		::System::Void JEOMMGAHJLE(::System::Int32 a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JEOMMGAHJLE_OFFSET))(this, a1, a2);
		}

		::System::Void JAHLIJHGDEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JAHLIJHGDEO_OFFSET))(this);
		}

		::JIIEDMEICMJ* FPAMEEBEOIN()
		{
			return ((::JIIEDMEICMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FPAMEEBEOIN_OFFSET))(this);
		}

		::System::Boolean ADOJIAIEPPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_ADOJIAIEPPH_OFFSET))(this);
		}

		::System::Void PLLJJGLMPCC(::RPG::Client::LittleGame::PixAir::PixAirProjectileType a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::System::Action* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirProjectileType, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PLLJJGLMPCC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void CKHICLBMFEA(::RPG::Client::LittleGame::PixAir::PixAirProjectileType a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::System::Action* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirProjectileType, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_CKHICLBMFEA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void PMCCGOHLCMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PMCCGOHLCMF_OFFSET))(this);
		}

		::LCKPKGGFPAM* FGHJJDKKKFJ()
		{
			return ((::LCKPKGGFPAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FGHJJDKKKFJ_OFFSET))(this);
		}

		::System::Boolean PBCBHENDDKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PBCBHENDDKE_OFFSET))(this);
		}

		::System::Void AGCDPDMLBIL(::Il2CppArray<::DDPLLJEOLHD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DDPLLJEOLHD*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_AGCDPDMLBIL_OFFSET))(this, a1);
		}

		::System::Void OKFHALOOKPB(::Il2CppArray<::DDPLLJEOLHD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DDPLLJEOLHD*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_OKFHALOOKPB_OFFSET))(this, a1);
		}

		::System::Void BBJKAMHDPFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_BBJKAMHDPFH_OFFSET))(this);
		}

		::System::Boolean KCEKKILMHEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_KCEKKILMHEM_OFFSET))(this);
		}

		::System::Void FKFJLFMMOHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FKFJLFMMOHE_OFFSET))(this, a1);
		}

		::OKHEEAPDDFJ* KMIKOPGBLNI()
		{
			return ((::OKHEEAPDDFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_KMIKOPGBLNI_OFFSET))(this);
		}

		::System::Boolean IHMIGGGPFCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_IHMIGGGPFCH_OFFSET))(this);
		}

		::System::Void LGKEHFCNKLM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BCLKDMAHONE_LGKEHFCNKLM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LFPOKJJKBLM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BCLKDMAHONE_LFPOKJJKBLM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IHIIEOLHJJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_IHIIEOLHJJF_OFFSET))(this);
		}

		::HKEJIALCLDK* DGEBFEOIONC()
		{
			return ((::HKEJIALCLDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DGEBFEOIONC_OFFSET))(this);
		}

		::System::Boolean PDEJMMGDGEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PDEJMMGDGEH_OFFSET))(this);
		}

		::System::Void JLFMCNOMEJB(::System::Collections::Generic::List_1<::MOEIAKJOONB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MOEIAKJOONB*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JLFMCNOMEJB_OFFSET))(this, a1);
		}

		::System::Void HIPCGLIIOIC(::System::Collections::Generic::List_1<::MOEIAKJOONB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MOEIAKJOONB*>*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HIPCGLIIOIC_OFFSET))(this, a1);
		}

		::System::Void PHJFADHLPCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PHJFADHLPCJ_OFFSET))(this);
		}

		::System::Void JLFMCNOMEJB_1(::MOEIAKJOONB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOEIAKJOONB*))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JLFMCNOMEJB_1_OFFSET))(this, a1);
		}

		::System::Void PHJFADHLPCJ_1(::MOEIAKJOONB* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MOEIAKJOONB*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PHJFADHLPCJ_1_OFFSET))(this, a1, a2);
		}

		::PLFMKIDHJEB* FHKGKMNJBKC()
		{
			return ((::PLFMKIDHJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FHKGKMNJBKC_OFFSET))(this);
		}

		::System::Boolean INPFLCCJPEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_INPFLCCJPEJ_OFFSET))(this);
		}

		::KHGFBJNGOIB* EJJNHCKPAAG()
		{
			return ((::KHGFBJNGOIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_EJJNHCKPAAG_OFFSET))(this);
		}

		::System::Boolean FFEEBJNNIHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FFEEBJNNIHN_OFFSET))(this);
		}

		::CFFANKLMLLN* IPJODMHHDFH()
		{
			return ((::CFFANKLMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_IPJODMHHDFH_OFFSET))(this);
		}

		::System::Boolean AAKPMJMJHLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_AAKPMJMJHLE_OFFSET))(this);
		}

		::MMEADKNKPNO* ELKLBKMNBEF()
		{
			return ((::MMEADKNKPNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_ELKLBKMNBEF_OFFSET))(this);
		}

		::System::Boolean JGOJBAPKKKP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JGOJBAPKKKP_OFFSET))(this);
		}

		::KMMPEKICPIH* PHJNCOMKFNN()
		{
			return ((::KMMPEKICPIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_PHJNCOMKFNN_OFFSET))(this);
		}

		::System::Boolean JJBGKOFLGFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JJBGKOFLGFC_OFFSET))(this);
		}

		::MAJHDKCFHBM* MDJJGOCLNME()
		{
			return ((::MAJHDKCFHBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_MDJJGOCLNME_OFFSET))(this);
		}

		::System::Boolean FHIIPKGMHMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FHIIPKGMHMD_OFFSET))(this);
		}

		::CCGEEGJKPHC* NPBKPLCPNKP()
		{
			return ((::CCGEEGJKPHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_NPBKPLCPNKP_OFFSET))(this);
		}

		::System::Boolean LGJONNBNEEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_LGJONNBNEEB_OFFSET))(this);
		}

		::MFGPOKOCFCJ* BFHJCIHINNF()
		{
			return ((::MFGPOKOCFCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_BFHJCIHINNF_OFFSET))(this);
		}

		::System::Boolean JCOCOACFMFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JCOCOACFMFP_OFFSET))(this);
		}

		::CGGFJMLHDBC* CAAGLLDAEAP()
		{
			return ((::CGGFJMLHDBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_CAAGLLDAEAP_OFFSET))(this);
		}

		::System::Boolean MAFIDIPJHNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_MAFIDIPJHNH_OFFSET))(this);
		}

		::DAMFACEJGPJ* DAEPDONJHEO()
		{
			return ((::DAMFACEJGPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DAEPDONJHEO_OFFSET))(this);
		}

		::System::Boolean LLAIHNCBCIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_LLAIHNCBCIE_OFFSET))(this);
		}

		::JAMLKCDHMJE* FNPHOFMGONG()
		{
			return ((::JAMLKCDHMJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FNPHOFMGONG_OFFSET))(this);
		}

		::System::Boolean DMEGOLADBGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DMEGOLADBGD_OFFSET))(this);
		}

		::IFGIACHKJOA* JKBMDHCPGEH()
		{
			return ((::IFGIACHKJOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JKBMDHCPGEH_OFFSET))(this);
		}

		::System::Boolean FDBKOEMPNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FDBKOEMPNMC_OFFSET))(this);
		}

		::JIIEDMEICMJ* GPIELJCJLLK()
		{
			return ((::JIIEDMEICMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_GPIELJCJLLK_OFFSET))(this);
		}

		::System::Boolean HBCHKFDLPFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HBCHKFDLPFF_OFFSET))(this);
		}

		::LCKPKGGFPAM* JDHOBIIFEFB()
		{
			return ((::LCKPKGGFPAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JDHOBIIFEFB_OFFSET))(this);
		}

		::System::Boolean CHDPICOOLNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_CHDPICOOLNP_OFFSET))(this);
		}

		::System::Boolean JOPDIHNJEAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_JOPDIHNJEAB_OFFSET))(this);
		}

		::System::Void FEDAMHGLHCG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCLKDMAHONE_FEDAMHGLHCG_OFFSET))(this, a1);
		}

		::OKHEEAPDDFJ* GHCECOICKNM()
		{
			return ((::OKHEEAPDDFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_GHCECOICKNM_OFFSET))(this);
		}

		::System::Boolean OKALOPOFOEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_OKALOPOFOEC_OFFSET))(this);
		}

		::HKEJIALCLDK* EJMEHBEMLGL()
		{
			return ((::HKEJIALCLDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_EJMEHBEMLGL_OFFSET))(this);
		}

		::System::Boolean KGBNJFCPFHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_KGBNJFCPFHG_OFFSET))(this);
		}

		::FFKEJMFGGND* DKJPNBKNAOG()
		{
			return ((::FFKEJMFGGND*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_DKJPNBKNAOG_OFFSET))(this);
		}

		::System::Boolean HDMCPNKBJJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_HDMCPNKBJJL_OFFSET))(this);
		}

		::ILFILLOHKIL* get_transform()
		{
			return ((::ILFILLOHKIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_hasTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_GET_HASTRANSFORM_OFFSET))(this);
		}

		::AICDOPIPLCO* AHKHEIKCBGE()
		{
			return ((::AICDOPIPLCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_AHKHEIKCBGE_OFFSET))(this);
		}

		::System::Boolean BMAOFDIHOCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLKDMAHONE_BMAOFDIHOCH_OFFSET))(this);
		}

	};
