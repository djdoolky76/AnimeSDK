#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraGameStage.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraLockReason.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraWorkState.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
#include "unitysdk/HBBDELABEAM.h"
#include "unitysdk/OEEKHELGHKF.h"
class AKHOONOADHM;
class BNGCBENBDPA;
class EHIEFPKGLAN;
class FNBEJHMDNOG;
class FOLHKNBFONK;
class GLHELOMEIJB;
class GNMNPMMCJDK;
class HGOPEPJHPPP;
class HHNBJKCEKAH;
class IKCBDMLDENO;
class IOOIIIJEAAK;
class JOJLJDHIGPK;
class KKAAIJLPOGB;
class LHLNLPDCCJJ;
class LHOFLNPEAFD;
class MAEHLFNLFPG;
class MLBEFCJKMGG;
class NGPDCHNFHKK;
class NMBCLGEHKKG;
class NMHBFNBMFIH;
class OKJBIPGNAAG;
namespace RPG::GameCore { class ChimeraAbility; }
namespace RPG::GameCore { class ChimeraAbilityPassive; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define KDKHADGLIPJ_AAFFJOLPJLP_OFFSET UNITYSDK_OFFSET(0x1CBB40B0)
#define KDKHADGLIPJ_ADDGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1CBB3F00)
#define KDKHADGLIPJ_ADDGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1CBB3C40)
#define KDKHADGLIPJ_ADDGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1CBB41A0)
#define KDKHADGLIPJ_ADDGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB4440)
#define KDKHADGLIPJ_ADDGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB4720)
#define KDKHADGLIPJ_AGMMFFBOHMH_OFFSET UNITYSDK_OFFSET(0x1CBB2F40)
#define KDKHADGLIPJ_AJHCBDHCHMB_OFFSET UNITYSDK_OFFSET(0x1CBB20A0)
#define KDKHADGLIPJ_AKCGLBCMOBC_OFFSET UNITYSDK_OFFSET(0x1CBB1EC0)
#define KDKHADGLIPJ_AKMBLKNMGHK_OFFSET UNITYSDK_OFFSET(0x1CBB4E60)
#define KDKHADGLIPJ_ANHAIGKIDPB_OFFSET UNITYSDK_OFFSET(0x1CBB4E00)
#define KDKHADGLIPJ_APAJDMBGNEF_OFFSET UNITYSDK_OFFSET(0x1CBB1760)
#define KDKHADGLIPJ_BDBKJFDLDGO_OFFSET UNITYSDK_OFFSET(0x1CBB24D0)
#define KDKHADGLIPJ_BIKKGDDMNNF_OFFSET UNITYSDK_OFFSET(0x1CBB4630)
#define KDKHADGLIPJ_BINFPOHJNAP_OFFSET UNITYSDK_OFFSET(0x1CBB28E0)
#define KDKHADGLIPJ_BMDGOBBDEMM_OFFSET UNITYSDK_OFFSET(0x1CBB3B50)
#define KDKHADGLIPJ_BPHIHCPNKMA_OFFSET UNITYSDK_OFFSET(0x1CBB3240)
#define KDKHADGLIPJ_CAHJGFMEJFL_OFFSET UNITYSDK_OFFSET(0x1CBB5240)
#define KDKHADGLIPJ_CBKCMLOGJNA_OFFSET UNITYSDK_OFFSET(0x1CBB2CF0)
#define KDKHADGLIPJ_CEAGDMDJHOA_OFFSET UNITYSDK_OFFSET(0x1CBB4D50)
#define KDKHADGLIPJ_CEDDIEKPNNK_OFFSET UNITYSDK_OFFSET(0x1CBB1A80)
#define KDKHADGLIPJ_CFDPEMLJLIH_OFFSET UNITYSDK_OFFSET(0x1CBB4F10)
#define KDKHADGLIPJ_CHMHGJPKGNF_OFFSET UNITYSDK_OFFSET(0x1CBB4CF0)
#define KDKHADGLIPJ_CIAHOGPPHNP_OFFSET UNITYSDK_OFFSET(0x1CBB35E0)
#define KDKHADGLIPJ_CIGKCBCBLOE_OFFSET UNITYSDK_OFFSET(0x1CBB5790)
#define KDKHADGLIPJ_CMNGFLGIHMM_OFFSET UNITYSDK_OFFSET(0x1CBB3040)
#define KDKHADGLIPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB5DA0)
#define KDKHADGLIPJ_DCBBEEIPPLO_OFFSET UNITYSDK_OFFSET(0x1CBB49A0)
#define KDKHADGLIPJ_DDACPMPKPNL_OFFSET UNITYSDK_OFFSET(0x1CBB55D0)
#define KDKHADGLIPJ_DDEBFLMLFEA_OFFSET UNITYSDK_OFFSET(0x1CBB2340)
#define KDKHADGLIPJ_DFFHCDEJLCN_OFFSET UNITYSDK_OFFSET(0x1CBB4B00)
#define KDKHADGLIPJ_DGALANGBLDP_OFFSET UNITYSDK_OFFSET(0x1CBB3BE0)
#define KDKHADGLIPJ_DJGPOKPADFN_OFFSET UNITYSDK_OFFSET(0x1CBB3920)
#define KDKHADGLIPJ_EBDECBFLFGH_OFFSET UNITYSDK_OFFSET(0x1CBB46C0)
#define KDKHADGLIPJ_EDCNMDHECCK_OFFSET UNITYSDK_OFFSET(0x1CBB21A0)
#define KDKHADGLIPJ_EOIDNJAHOOJ_OFFSET UNITYSDK_OFFSET(0x1CBB29C0)
#define KDKHADGLIPJ_FCIIBPHHEEC_OFFSET UNITYSDK_OFFSET(0x1CBB4BF0)
#define KDKHADGLIPJ_FGKICLOBPHI_OFFSET UNITYSDK_OFFSET(0x1CBB1650)
#define KDKHADGLIPJ_FJAHKBGLOKC_OFFSET UNITYSDK_OFFSET(0x1CBB2AA0)
#define KDKHADGLIPJ_FJAPIEINOHI_OFFSET UNITYSDK_OFFSET(0x1CBB4A10)
#define KDKHADGLIPJ_FKMIKLDMBAC_OFFSET UNITYSDK_OFFSET(0x1CBB2EE0)
#define KDKHADGLIPJ_FNGLJJNIJGO_OFFSET UNITYSDK_OFFSET(0x1CBB5570)
#define KDKHADGLIPJ_FOCACODBOEA_OFFSET UNITYSDK_OFFSET(0x1CBB3140)
#define KDKHADGLIPJ_GAHEBJKMCJH_OFFSET UNITYSDK_OFFSET(0x1CBB1A20)
#define KDKHADGLIPJ_GET_GENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1CBB58E0)
#define KDKHADGLIPJ_GET_GENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1CBB57F0)
#define KDKHADGLIPJ_GET_GENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1CBB59D0)
#define KDKHADGLIPJ_GET_GENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB5AC0)
#define KDKHADGLIPJ_GET_GENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB5CB0)
#define KDKHADGLIPJ_GET_HASGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1CBB5970)
#define KDKHADGLIPJ_GET_HASGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1CBB5880)
#define KDKHADGLIPJ_GET_HASGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1CBB5A60)
#define KDKHADGLIPJ_GET_HASGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB5B50)
#define KDKHADGLIPJ_GET_HASGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB5D40)
#define KDKHADGLIPJ_GIKNCJMJLFE_OFFSET UNITYSDK_OFFSET(0x1CBB2E30)
#define KDKHADGLIPJ_GKLLPBABCMM_OFFSET UNITYSDK_OFFSET(0x1CBB2580)
#define KDKHADGLIPJ_GMPJDINODAF_OFFSET UNITYSDK_OFFSET(0x1CBB1700)
#define KDKHADGLIPJ_GOMDFPFADHL_OFFSET UNITYSDK_OFFSET(0x1CBB1D60)
#define KDKHADGLIPJ_GPDDGLCFBLL_OFFSET UNITYSDK_OFFSET(0x1CBB1970)
#define KDKHADGLIPJ_HAJNDHAMJBP_OFFSET UNITYSDK_OFFSET(0x1CBB2880)
#define KDKHADGLIPJ_HEHCHBAANLO_OFFSET UNITYSDK_OFFSET(0x1CBB3A10)
#define KDKHADGLIPJ_HFNMBOIDGOA_OFFSET UNITYSDK_OFFSET(0x1CBB2C00)
#define KDKHADGLIPJ_HJJHPIPPLJP_OFFSET UNITYSDK_OFFSET(0x1CBB5460)
#define KDKHADGLIPJ_HLJCMHAEMFL_OFFSET UNITYSDK_OFFSET(0x1CBB36D0)
#define KDKHADGLIPJ_HLMPMJGIDLO_OFFSET UNITYSDK_OFFSET(0x1CBB2200)
#define KDKHADGLIPJ_HPELPCMKJFB_OFFSET UNITYSDK_OFFSET(0x1CBB3B00)
#define KDKHADGLIPJ_IANDCADFFCA_OFFSET UNITYSDK_OFFSET(0x1CBB5BB0)
#define KDKHADGLIPJ_IBHHKOBHDMP_OFFSET UNITYSDK_OFFSET(0x1CBB2AF0)
#define KDKHADGLIPJ_IDHINDAMKKH_OFFSET UNITYSDK_OFFSET(0x1CBB2DE0)
#define KDKHADGLIPJ_INLPPOKBADH_OFFSET UNITYSDK_OFFSET(0x1CBB3190)
#define KDKHADGLIPJ_IPGIADLECHP_OFFSET UNITYSDK_OFFSET(0x1CBB3EA0)
#define KDKHADGLIPJ_IPIIBHDKAPK_OFFSET UNITYSDK_OFFSET(0x1CBB2780)
#define KDKHADGLIPJ_JEEBFOHJFIB_OFFSET UNITYSDK_OFFSET(0x1CBB5190)
#define KDKHADGLIPJ_JFKAPAALOBI_OFFSET UNITYSDK_OFFSET(0x1CBB34D0)
#define KDKHADGLIPJ_JFNOONCGPKF_OFFSET UNITYSDK_OFFSET(0x1CBB5080)
#define KDKHADGLIPJ_JIBEFDCPENI_OFFSET UNITYSDK_OFFSET(0x1CBB26B0)
#define KDKHADGLIPJ_JKEPKPJDCFD_OFFSET UNITYSDK_OFFSET(0x1CBB54C0)
#define KDKHADGLIPJ_JOKAEMNIPNH_OFFSET UNITYSDK_OFFSET(0x1CBB5130)
#define KDKHADGLIPJ_KCCCOKAEMCF_OFFSET UNITYSDK_OFFSET(0x1CBB25E0)
#define KDKHADGLIPJ_KIMHMAEFFEP_OFFSET UNITYSDK_OFFSET(0x1CBB3580)
#define KDKHADGLIPJ_KJONJAMCDBB_OFFSET UNITYSDK_OFFSET(0x1CBB1920)
#define KDKHADGLIPJ_LAFOKNGDNLG_OFFSET UNITYSDK_OFFSET(0x1CBB3390)
#define KDKHADGLIPJ_LELCGGLNMGL_OFFSET UNITYSDK_OFFSET(0x1CBB2BA0)
#define KDKHADGLIPJ_LFJLMBOANFE_OFFSET UNITYSDK_OFFSET(0x1CBB5680)
#define KDKHADGLIPJ_LJHOHBCNKPJ_OFFSET UNITYSDK_OFFSET(0x1CBB32A0)
#define KDKHADGLIPJ_LKMLDFOMFJH_OFFSET UNITYSDK_OFFSET(0x1CBB5C40)
#define KDKHADGLIPJ_MBFLBEDHIKC_OFFSET UNITYSDK_OFFSET(0x1CBB3480)
#define KDKHADGLIPJ_MEHHAIGFKCO_OFFSET UNITYSDK_OFFSET(0x1CBB1840)
#define KDKHADGLIPJ_MHOAHMFHDDJ_OFFSET UNITYSDK_OFFSET(0x1CBB53B0)
#define KDKHADGLIPJ_MOJBMONJFIC_OFFSET UNITYSDK_OFFSET(0x1CBB37C0)
#define KDKHADGLIPJ_MPHPINHFFCC_OFFSET UNITYSDK_OFFSET(0x1CBB38C0)
#define KDKHADGLIPJ_NAHAOHDGAFI_OFFSET UNITYSDK_OFFSET(0x1CBB4C40)
#define KDKHADGLIPJ_NBCAIMJCEHE_OFFSET UNITYSDK_OFFSET(0x1CBB1BF0)
#define KDKHADGLIPJ_NDILIPJLJGO_OFFSET UNITYSDK_OFFSET(0x1CBB3810)
#define KDKHADGLIPJ_NEHFKCBKCJH_OFFSET UNITYSDK_OFFSET(0x1CBB27D0)
#define KDKHADGLIPJ_NHIFBDOLJND_OFFSET UNITYSDK_OFFSET(0x1CBB20F0)
#define KDKHADGLIPJ_NIOJMANDKML_OFFSET UNITYSDK_OFFSET(0x1CBB3E10)
#define KDKHADGLIPJ_NJAEFIADNPI_OFFSET UNITYSDK_OFFSET(0x1CBB5020)
#define KDKHADGLIPJ_NJGAPGEIMHF_OFFSET UNITYSDK_OFFSET(0x1CBB1E60)
#define KDKHADGLIPJ_NKFHGJNDCJJ_OFFSET UNITYSDK_OFFSET(0x1CBB1FB0)
#define KDKHADGLIPJ_OAGAGOFHHAN_OFFSET UNITYSDK_OFFSET(0x1CBB52A0)
#define KDKHADGLIPJ_OEOBNHBAPKP_OFFSET UNITYSDK_OFFSET(0x1CBB2480)
#define KDKHADGLIPJ_OINDPPOAHKE_OFFSET UNITYSDK_OFFSET(0x1CBB4350)
#define KDKHADGLIPJ_OLCBCHDCOFB_OFFSET UNITYSDK_OFFSET(0x1CBB4910)
#define KDKHADGLIPJ_OODOGCAOHPM_OFFSET UNITYSDK_OFFSET(0x1CBB4F70)
#define KDKHADGLIPJ_OOHGEOIAAIK_OFFSET UNITYSDK_OFFSET(0x1CBB1DB0)
#define KDKHADGLIPJ_PBAFGHEOGPM_OFFSET UNITYSDK_OFFSET(0x1CBB4140)
#define KDKHADGLIPJ_PBDHNDOGENF_OFFSET UNITYSDK_OFFSET(0x1CBB56E0)
#define KDKHADGLIPJ_PFOHNBMAEHC_OFFSET UNITYSDK_OFFSET(0x1CBB5350)
#define KDKHADGLIPJ_PJJMAGLOLJC_OFFSET UNITYSDK_OFFSET(0x1CBB43E0)
#define KDKHADGLIPJ_REMOVEGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1CBB4060)
#define KDKHADGLIPJ_REMOVEGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1CBB3DC0)
#define KDKHADGLIPJ_REMOVEGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1CBB4300)
#define KDKHADGLIPJ_REMOVEGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB45E0)
#define KDKHADGLIPJ_REMOVEGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB48C0)
#define KDKHADGLIPJ_REPLACEGENERICVIEWASSETLOADING_OFFSET UNITYSDK_OFFSET(0x1CBB3FB0)
#define KDKHADGLIPJ_REPLACEGENERICVIEWASSET_OFFSET UNITYSDK_OFFSET(0x1CBB3D00)
#define KDKHADGLIPJ_REPLACEGENERICVIEWBRIDGE_OFFSET UNITYSDK_OFFSET(0x1CBB4250)
#define KDKHADGLIPJ_REPLACEGENERICVIEWLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB4510)
#define KDKHADGLIPJ_REPLACEGENERICVIEWUNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CBB47F0)

	class KDKHADGLIPJ : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CTOR_OFFSET))(this);
		}

		::MAEHLFNLFPG* FGKICLOBPHI()
		{
			return ((::MAEHLFNLFPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_FGKICLOBPHI_OFFSET))(this);
		}

		::System::Boolean GMPJDINODAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GMPJDINODAF_OFFSET))(this);
		}

		::System::Void APAJDMBGNEF(::System::Collections::Generic::Queue_1<::EHIEFPKGLAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::EHIEFPKGLAN*>*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_APAJDMBGNEF_OFFSET))(this, a1);
		}

		::System::Void MEHHAIGFKCO(::System::Collections::Generic::Queue_1<::EHIEFPKGLAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::EHIEFPKGLAN*>*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_MEHHAIGFKCO_OFFSET))(this, a1);
		}

		::System::Void KJONJAMCDBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_KJONJAMCDBB_OFFSET))(this);
		}

		::GLHELOMEIJB* GPDDGLCFBLL()
		{
			return ((::GLHELOMEIJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GPDDGLCFBLL_OFFSET))(this);
		}

		::System::Boolean GAHEBJKMCJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GAHEBJKMCJH_OFFSET))(this);
		}

		::System::Void CEDDIEKPNNK(::RPG::Client::LittleGame::ChimeraGameStage a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::RPG::GameCore::ChimeraTurnBasedStage a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraGameStage, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::ChimeraTurnBasedStage, ::System::UInt32))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CEDDIEKPNNK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void NBCAIMJCEHE(::RPG::Client::LittleGame::ChimeraGameStage a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::RPG::GameCore::ChimeraTurnBasedStage a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraGameStage, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::ChimeraTurnBasedStage, ::System::UInt32))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NBCAIMJCEHE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GOMDFPFADHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GOMDFPFADHL_OFFSET))(this);
		}

		::JOJLJDHIGPK* OOHGEOIAAIK()
		{
			return ((::JOJLJDHIGPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_OOHGEOIAAIK_OFFSET))(this);
		}

		::System::Boolean NJGAPGEIMHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NJGAPGEIMHF_OFFSET))(this);
		}

		::System::Void AKCGLBCMOBC(::RPG::Client::LittleGame::ChimeraLockReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraLockReason, ::System::Boolean))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_AKCGLBCMOBC_OFFSET))(this, a1, a2);
		}

		::System::Void NKFHGJNDCJJ(::RPG::Client::LittleGame::ChimeraLockReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraLockReason, ::System::Boolean))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NKFHGJNDCJJ_OFFSET))(this, a1, a2);
		}

		::System::Void AJHCBDHCHMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_AJHCBDHCHMB_OFFSET))(this);
		}

		::IOOIIIJEAAK* NHIFBDOLJND()
		{
			return ((::IOOIIIJEAAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NHIFBDOLJND_OFFSET))(this);
		}

		::System::Boolean EDCNMDHECCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_EDCNMDHECCK_OFFSET))(this);
		}

		::System::Void HLMPMJGIDLO(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChimeraWorkState a3, ::System::Int32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::LittleGame::ChimeraWorkState, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_HLMPMJGIDLO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DDEBFLMLFEA(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChimeraWorkState a3, ::System::Int32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::LittleGame::ChimeraWorkState, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_DDEBFLMLFEA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OEOBNHBAPKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_OEOBNHBAPKP_OFFSET))(this);
		}

		::KKAAIJLPOGB* BDBKJFDLDGO()
		{
			return ((::KKAAIJLPOGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_BDBKJFDLDGO_OFFSET))(this);
		}

		::System::Boolean GKLLPBABCMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GKLLPBABCMM_OFFSET))(this);
		}

		::System::Void KCCCOKAEMCF(::Il2CppArray<::RPG::GameCore::ChimeraAbility*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChimeraAbility*>*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_KCCCOKAEMCF_OFFSET))(this, a1);
		}

		::System::Void JIBEFDCPENI(::Il2CppArray<::RPG::GameCore::ChimeraAbility*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChimeraAbility*>*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_JIBEFDCPENI_OFFSET))(this, a1);
		}

		::System::Void IPIIBHDKAPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_IPIIBHDKAPK_OFFSET))(this);
		}

		::GNMNPMMCJDK* NEHFKCBKCJH()
		{
			return ((::GNMNPMMCJDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NEHFKCBKCJH_OFFSET))(this);
		}

		::System::Boolean HAJNDHAMJBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_HAJNDHAMJBP_OFFSET))(this);
		}

		::System::Void BINFPOHJNAP(::Il2CppArray<::RPG::GameCore::ChimeraAbilityPassive*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChimeraAbilityPassive*>*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_BINFPOHJNAP_OFFSET))(this, a1);
		}

		::System::Void EOIDNJAHOOJ(::Il2CppArray<::RPG::GameCore::ChimeraAbilityPassive*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChimeraAbilityPassive*>*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_EOIDNJAHOOJ_OFFSET))(this, a1);
		}

		::System::Void FJAHKBGLOKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_FJAHKBGLOKC_OFFSET))(this);
		}

		::AKHOONOADHM* IBHHKOBHDMP()
		{
			return ((::AKHOONOADHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_IBHHKOBHDMP_OFFSET))(this);
		}

		::System::Boolean LELCGGLNMGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_LELCGGLNMGL_OFFSET))(this);
		}

		::System::Void HFNMBOIDGOA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_HFNMBOIDGOA_OFFSET))(this, a1, a2);
		}

		::System::Void CBKCMLOGJNA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CBKCMLOGJNA_OFFSET))(this, a1, a2);
		}

		::System::Void IDHINDAMKKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_IDHINDAMKKH_OFFSET))(this);
		}

		::NMHBFNBMFIH* GIKNCJMJLFE()
		{
			return ((::NMHBFNBMFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GIKNCJMJLFE_OFFSET))(this);
		}

		::System::Boolean FKMIKLDMBAC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_FKMIKLDMBAC_OFFSET))(this);
		}

		::System::Void AGMMFFBOHMH(::System::Boolean a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_AGMMFFBOHMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CMNGFLGIHMM(::System::Boolean a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CMNGFLGIHMM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FOCACODBOEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_FOCACODBOEA_OFFSET))(this);
		}

		::IKCBDMLDENO* INLPPOKBADH()
		{
			return ((::IKCBDMLDENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_INLPPOKBADH_OFFSET))(this);
		}

		::System::Boolean BPHIHCPNKMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_BPHIHCPNKMA_OFFSET))(this);
		}

		::System::Void LJHOHBCNKPJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_LJHOHBCNKPJ_OFFSET))(this, a1, a2);
		}

		::System::Void LAFOKNGDNLG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_LAFOKNGDNLG_OFFSET))(this, a1, a2);
		}

		::System::Void MBFLBEDHIKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_MBFLBEDHIKC_OFFSET))(this);
		}

		::FNBEJHMDNOG* JFKAPAALOBI()
		{
			return ((::FNBEJHMDNOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_JFKAPAALOBI_OFFSET))(this);
		}

		::System::Boolean KIMHMAEFFEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_KIMHMAEFFEP_OFFSET))(this);
		}

		::System::Void CIAHOGPPHNP(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CIAHOGPPHNP_OFFSET))(this, a1, a2);
		}

		::System::Void HLJCMHAEMFL(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_HLJCMHAEMFL_OFFSET))(this, a1, a2);
		}

		::System::Void MOJBMONJFIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_MOJBMONJFIC_OFFSET))(this);
		}

		::HHNBJKCEKAH* NDILIPJLJGO()
		{
			return ((::HHNBJKCEKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NDILIPJLJGO_OFFSET))(this);
		}

		::System::Boolean MPHPINHFFCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_MPHPINHFFCC_OFFSET))(this);
		}

		::System::Void DJGPOKPADFN(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_DJGPOKPADFN_OFFSET))(this, a1, a2);
		}

		::System::Void HEHCHBAANLO(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_HEHCHBAANLO_OFFSET))(this, a1, a2);
		}

		::System::Void HPELPCMKJFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_HPELPCMKJFB_OFFSET))(this);
		}

		::NMBCLGEHKKG* BMDGOBBDEMM()
		{
			return ((::NMBCLGEHKKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_BMDGOBBDEMM_OFFSET))(this);
		}

		::System::Boolean DGALANGBLDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_DGALANGBLDP_OFFSET))(this);
		}

		::System::Void AddGenericViewAsset(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_ADDGENERICVIEWASSET_OFFSET))(this, a1, a2);
		}

		::System::Void ReplaceGenericViewAsset(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REPLACEGENERICVIEWASSET_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveGenericViewAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REMOVEGENERICVIEWASSET_OFFSET))(this);
		}

		::LHLNLPDCCJJ* NIOJMANDKML()
		{
			return ((::LHLNLPDCCJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NIOJMANDKML_OFFSET))(this);
		}

		::System::Boolean IPGIADLECHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_IPGIADLECHP_OFFSET))(this);
		}

		::System::Void AddGenericViewAssetLoading(::OKJBIPGNAAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKJBIPGNAAG*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_ADDGENERICVIEWASSETLOADING_OFFSET))(this, a1);
		}

		::System::Void ReplaceGenericViewAssetLoading(::OKJBIPGNAAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKJBIPGNAAG*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REPLACEGENERICVIEWASSETLOADING_OFFSET))(this, a1);
		}

		::System::Void RemoveGenericViewAssetLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REMOVEGENERICVIEWASSETLOADING_OFFSET))(this);
		}

		::HGOPEPJHPPP* AAFFJOLPJLP()
		{
			return ((::HGOPEPJHPPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_AAFFJOLPJLP_OFFSET))(this);
		}

		::System::Boolean PBAFGHEOGPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_PBAFGHEOGPM_OFFSET))(this);
		}

		::System::Void AddGenericViewBridge(::FOLHKNBFONK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOLHKNBFONK*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_ADDGENERICVIEWBRIDGE_OFFSET))(this, a1);
		}

		::System::Void ReplaceGenericViewBridge(::FOLHKNBFONK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOLHKNBFONK*))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REPLACEGENERICVIEWBRIDGE_OFFSET))(this, a1);
		}

		::System::Void RemoveGenericViewBridge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REMOVEGENERICVIEWBRIDGE_OFFSET))(this);
		}

		::LHOFLNPEAFD* OINDPPOAHKE()
		{
			return ((::LHOFLNPEAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_OINDPPOAHKE_OFFSET))(this);
		}

		::System::Boolean PJJMAGLOLJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_PJJMAGLOLJC_OFFSET))(this);
		}

		::System::Void AddGenericViewLoadCallback(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_ADDGENERICVIEWLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ReplaceGenericViewLoadCallback(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REPLACEGENERICVIEWLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveGenericViewLoadCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REMOVEGENERICVIEWLOADCALLBACK_OFFSET))(this);
		}

		::MLBEFCJKMGG* BIKKGDDMNNF()
		{
			return ((::MLBEFCJKMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_BIKKGDDMNNF_OFFSET))(this);
		}

		::System::Boolean EBDECBFLFGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_EBDECBFLFGH_OFFSET))(this);
		}

		::System::Void AddGenericViewUnloadCallback(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_ADDGENERICVIEWUNLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ReplaceGenericViewUnloadCallback(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REPLACEGENERICVIEWUNLOADCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveGenericViewUnloadCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_REMOVEGENERICVIEWUNLOADCALLBACK_OFFSET))(this);
		}

		::NGPDCHNFHKK* OLCBCHDCOFB()
		{
			return ((::NGPDCHNFHKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_OLCBCHDCOFB_OFFSET))(this);
		}

		::System::Boolean DCBBEEIPPLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_DCBBEEIPPLO_OFFSET))(this);
		}

		::System::Void FJAPIEINOHI(::BNGCBENBDPA* a1, ::HBBDELABEAM a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNGCBENBDPA*, ::HBBDELABEAM))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_FJAPIEINOHI_OFFSET))(this, a1, a2);
		}

		::System::Void DFFHCDEJLCN(::BNGCBENBDPA* a1, ::HBBDELABEAM a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNGCBENBDPA*, ::HBBDELABEAM))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_DFFHCDEJLCN_OFFSET))(this, a1, a2);
		}

		::System::Void FCIIBPHHEEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_FCIIBPHHEEC_OFFSET))(this);
		}

		::NMHBFNBMFIH* NAHAOHDGAFI()
		{
			return ((::NMHBFNBMFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NAHAOHDGAFI_OFFSET))(this);
		}

		::System::Boolean CHMHGJPKGNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CHMHGJPKGNF_OFFSET))(this);
		}

		::KKAAIJLPOGB* CEAGDMDJHOA()
		{
			return ((::KKAAIJLPOGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CEAGDMDJHOA_OFFSET))(this);
		}

		::System::Boolean ANHAIGKIDPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_ANHAIGKIDPB_OFFSET))(this);
		}

		::MAEHLFNLFPG* AKMBLKNMGHK()
		{
			return ((::MAEHLFNLFPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_AKMBLKNMGHK_OFFSET))(this);
		}

		::System::Boolean CFDPEMLJLIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CFDPEMLJLIH_OFFSET))(this);
		}

		::AKHOONOADHM* OODOGCAOHPM()
		{
			return ((::AKHOONOADHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_OODOGCAOHPM_OFFSET))(this);
		}

		::System::Boolean NJAEFIADNPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_NJAEFIADNPI_OFFSET))(this);
		}

		::GLHELOMEIJB* JFNOONCGPKF()
		{
			return ((::GLHELOMEIJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_JFNOONCGPKF_OFFSET))(this);
		}

		::System::Boolean JOKAEMNIPNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_JOKAEMNIPNH_OFFSET))(this);
		}

		::IKCBDMLDENO* JEEBFOHJFIB()
		{
			return ((::IKCBDMLDENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_JEEBFOHJFIB_OFFSET))(this);
		}

		::System::Boolean CAHJGFMEJFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CAHJGFMEJFL_OFFSET))(this);
		}

		::JOJLJDHIGPK* OAGAGOFHHAN()
		{
			return ((::JOJLJDHIGPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_OAGAGOFHHAN_OFFSET))(this);
		}

		::System::Boolean PFOHNBMAEHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_PFOHNBMAEHC_OFFSET))(this);
		}

		::GNMNPMMCJDK* MHOAHMFHDDJ()
		{
			return ((::GNMNPMMCJDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_MHOAHMFHDDJ_OFFSET))(this);
		}

		::System::Boolean HJJHPIPPLJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_HJJHPIPPLJP_OFFSET))(this);
		}

		::FNBEJHMDNOG* JKEPKPJDCFD()
		{
			return ((::FNBEJHMDNOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_JKEPKPJDCFD_OFFSET))(this);
		}

		::System::Boolean FNGLJJNIJGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_FNGLJJNIJGO_OFFSET))(this);
		}

		::HHNBJKCEKAH* DDACPMPKPNL()
		{
			return ((::HHNBJKCEKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_DDACPMPKPNL_OFFSET))(this);
		}

		::System::Boolean LFJLMBOANFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_LFJLMBOANFE_OFFSET))(this);
		}

		::IOOIIIJEAAK* PBDHNDOGENF()
		{
			return ((::IOOIIIJEAAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_PBDHNDOGENF_OFFSET))(this);
		}

		::System::Boolean CIGKCBCBLOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_CIGKCBCBLOE_OFFSET))(this);
		}

		::NMBCLGEHKKG* get_genericViewAsset()
		{
			return ((::NMBCLGEHKKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_GENERICVIEWASSET_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_HASGENERICVIEWASSET_OFFSET))(this);
		}

		::LHLNLPDCCJJ* get_genericViewAssetLoading()
		{
			return ((::LHLNLPDCCJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_GENERICVIEWASSETLOADING_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewAssetLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_HASGENERICVIEWASSETLOADING_OFFSET))(this);
		}

		::HGOPEPJHPPP* get_genericViewBridge()
		{
			return ((::HGOPEPJHPPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_GENERICVIEWBRIDGE_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewBridge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_HASGENERICVIEWBRIDGE_OFFSET))(this);
		}

		::LHOFLNPEAFD* get_genericViewLoadCallback()
		{
			return ((::LHOFLNPEAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_GENERICVIEWLOADCALLBACK_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewLoadCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_HASGENERICVIEWLOADCALLBACK_OFFSET))(this);
		}

		::NGPDCHNFHKK* IANDCADFFCA()
		{
			return ((::NGPDCHNFHKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_IANDCADFFCA_OFFSET))(this);
		}

		::System::Boolean LKMLDFOMFJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_LKMLDFOMFJH_OFFSET))(this);
		}

		::MLBEFCJKMGG* get_genericViewUnloadCallback()
		{
			return ((::MLBEFCJKMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_GENERICVIEWUNLOADCALLBACK_OFFSET))(this);
		}

		::System::Boolean get_hasGenericViewUnloadCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKHADGLIPJ_GET_HASGENERICVIEWUNLOADCALLBACK_OFFSET))(this);
		}

	};
