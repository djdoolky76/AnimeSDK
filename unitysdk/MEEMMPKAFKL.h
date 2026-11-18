#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/FuncSwitchType.h"
#include "unitysdk/System/Object.h"

class ALAFHBOENMO;
class JIIAKBANOLL;
namespace MoleMole { class ConfigAvatarDateTeleport; }
namespace MoleMole { class TeamGroupDataItem; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Config { class ConfigAvatarGround; }
namespace MoleMole::Config { class ConfigHollowLevelEnd; }
namespace MoleMole::Config { class ConfigMisc; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigTrainingRoom; }
namespace MoleMole::Config { class ConfigUISettings; }
namespace MoleMole::Config { class LevelAddOnConfig; }
namespace MoleMole::Level { class LevelConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEEMMPKAFKL_AAOJFEHICND_OFFSET UNITYSDK_OFFSET(0x11F39620)
#define MEEMMPKAFKL_AKFELOPBMIH_OFFSET UNITYSDK_OFFSET(0x11F40170)
#define MEEMMPKAFKL_ALOPODEJPOJ_OFFSET UNITYSDK_OFFSET(0x11F42EF0)
#define MEEMMPKAFKL_AMFMOLBGFLF_OFFSET UNITYSDK_OFFSET(0x11F3FD80)
#define MEEMMPKAFKL_AMMCOJGLMLL_OFFSET UNITYSDK_OFFSET(0x11F3A5E0)
#define MEEMMPKAFKL_AOCKBGNDIFL_OFFSET UNITYSDK_OFFSET(0x11F3CFE0)
#define MEEMMPKAFKL_AOOHJMLDNFH_OFFSET UNITYSDK_OFFSET(0x11F3BF00)
#define MEEMMPKAFKL_APMDKJCPLFP_OFFSET UNITYSDK_OFFSET(0x11F39A10)
#define MEEMMPKAFKL_BAMDFPGEJFA_OFFSET UNITYSDK_OFFSET(0x11F3FF80)
#define MEEMMPKAFKL_BIGOJFNNAGC_OFFSET UNITYSDK_OFFSET(0x11F448F0)
#define MEEMMPKAFKL_BIOCEBONLAI_OFFSET UNITYSDK_OFFSET(0x11F3EC60)
#define MEEMMPKAFKL_CCIFDHGDBMA_OFFSET UNITYSDK_OFFSET(0x11F39820)
#define MEEMMPKAFKL_CDPDILKJFMP_OFFSET UNITYSDK_OFFSET(0x11F3ADD0)
#define MEEMMPKAFKL_CENDFCNFBKC_OFFSET UNITYSDK_OFFSET(0x11F3DC70)
#define MEEMMPKAFKL_CEPDHOBHLCG_OFFSET UNITYSDK_OFFSET(0x11F41B30)
#define MEEMMPKAFKL_CHCBFNKMCCC_OFFSET UNITYSDK_OFFSET(0x11F37BE0)
#define MEEMMPKAFKL_CHPOKGAHJAK_OFFSET UNITYSDK_OFFSET(0x11F38670)
#define MEEMMPKAFKL_CLHDLMHLAKH_OFFSET UNITYSDK_OFFSET(0x11F3BB10)
#define MEEMMPKAFKL_COKGLHCGLIM_OFFSET UNITYSDK_OFFSET(0x11F42D10)
#define MEEMMPKAFKL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x11F41210)
#define MEEMMPKAFKL_DAKPGHFGKMI_OFFSET UNITYSDK_OFFSET(0x11F3E0C0)
#define MEEMMPKAFKL_DCJAGDIOJLL_OFFSET UNITYSDK_OFFSET(0x11F3ABD0)
#define MEEMMPKAFKL_DDOLOAIPDJK_OFFSET UNITYSDK_OFFSET(0x11F3B930)
#define MEEMMPKAFKL_DEAKECKIDDC_OFFSET UNITYSDK_OFFSET(0x11F41650)
#define MEEMMPKAFKL_DEOEBILBNJD_OFFSET UNITYSDK_OFFSET(0x11F41260)
#define MEEMMPKAFKL_DEPAIAFCDCJ_OFFSET UNITYSDK_OFFSET(0x11F3BD10)
#define MEEMMPKAFKL_DFOPEALBIED_OFFSET UNITYSDK_OFFSET(0x11F40990)
#define MEEMMPKAFKL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x11F41030)
#define MEEMMPKAFKL_DHEGLBEAKNH_OFFSET UNITYSDK_OFFSET(0x11F42330)
#define MEEMMPKAFKL_DIBHIAGHEMH_OFFSET UNITYSDK_OFFSET(0x11F3D600)
#define MEEMMPKAFKL_DLOLDKCEPIC_OFFSET UNITYSDK_OFFSET(0x11F3CDE0)
#define MEEMMPKAFKL_DOMKKPNGGPP_OFFSET UNITYSDK_OFFSET(0x11F38470)
#define MEEMMPKAFKL_EBHHELKMCLM_OFFSET UNITYSDK_OFFSET(0x11F3DA80)
#define MEEMMPKAFKL_EGPPJMDNIPF_OFFSET UNITYSDK_OFFSET(0x11F44100)
#define MEEMMPKAFKL_EKONDIMENEI_OFFSET UNITYSDK_OFFSET(0x11F435F0)
#define MEEMMPKAFKL_ELCGFCKFDHG_OFFSET UNITYSDK_OFFSET(0x11F37DD0)
#define MEEMMPKAFKL_ENEMHNFMBAE_OFFSET UNITYSDK_OFFSET(0x11F38970)
#define MEEMMPKAFKL_EOBHKPEBODK_OFFSET UNITYSDK_OFFSET(0x11F3B530)
#define MEEMMPKAFKL_FBADAFNLMAO_OFFSET UNITYSDK_OFFSET(0x11F3E2C0)
#define MEEMMPKAFKL_FCIAOKBDCAE_OFFSET UNITYSDK_OFFSET(0x11F389B0)
#define MEEMMPKAFKL_FDFFKPIMPFM_OFFSET UNITYSDK_OFFSET(0x11F3F980)
#define MEEMMPKAFKL_FHDNKPNIJKB_OFFSET UNITYSDK_OFFSET(0x11F43EA0)
#define MEEMMPKAFKL_FHGONGCLHPH_OFFSET UNITYSDK_OFFSET(0x11F41F30)
#define MEEMMPKAFKL_FIJHLEBEAIC_OFFSET UNITYSDK_OFFSET(0x11F3F540)
#define MEEMMPKAFKL_FLOPNIEDAGC_OFFSET UNITYSDK_OFFSET(0x11F42920)
#define MEEMMPKAFKL_GCAFJBGAJIE_OFFSET UNITYSDK_OFFSET(0x11F439F0)
#define MEEMMPKAFKL_GGNOIFLCNML_OFFSET UNITYSDK_OFFSET(0x11F41460)
#define MEEMMPKAFKL_GJAEJPMEBAP_OFFSET UNITYSDK_OFFSET(0x11F3F150)
#define MEEMMPKAFKL_GJBBIGLMNKM_OFFSET UNITYSDK_OFFSET(0x11F3C920)
#define MEEMMPKAFKL_GKJOJLFBAHD_OFFSET UNITYSDK_OFFSET(0x11F44AF0)
#define MEEMMPKAFKL_GMAMAOHMGKP_OFFSET UNITYSDK_OFFSET(0x11F386B0)
#define MEEMMPKAFKL_HBAEFCCOHMM_OFFSET UNITYSDK_OFFSET(0x11F442F0)
#define MEEMMPKAFKL_HFKPDDMHNJP_OFFSET UNITYSDK_OFFSET(0x11F38270)
#define MEEMMPKAFKL_HGDIGMLPKCO_OFFSET UNITYSDK_OFFSET(0x11F41D30)
#define MEEMMPKAFKL_HJOBJGCNMIO_OFFSET UNITYSDK_OFFSET(0x11F44CE0)
#define MEEMMPKAFKL_HKINJIJFKLO_OFFSET UNITYSDK_OFFSET(0x11F3E4C0)
#define MEEMMPKAFKL_HMKEBHIACKC_OFFSET UNITYSDK_OFFSET(0x11F3C610)
#define MEEMMPKAFKL_HNPMMFMANBI_OFFSET UNITYSDK_OFFSET(0x11F437F0)
#define MEEMMPKAFKL_HODILHMJOMF_OFFSET UNITYSDK_OFFSET(0x11F3F790)
#define MEEMMPKAFKL_HOHEHBFKHBK_OFFSET UNITYSDK_OFFSET(0x11F38DB0)
#define MEEMMPKAFKL_IBDLFOPKNFA_OFFSET UNITYSDK_OFFSET(0x11F40B80)
#define MEEMMPKAFKL_IBJCHNEDJBM_OFFSET UNITYSDK_OFFSET(0x11F401F0)
#define MEEMMPKAFKL_IFMMAAGDPBL_OFFSET UNITYSDK_OFFSET(0x11F3C210)
#define MEEMMPKAFKL_IJNCINBJCFM_OFFSET UNITYSDK_OFFSET(0x11F38920)
#define MEEMMPKAFKL_IKFBIABEDID_OFFSET UNITYSDK_OFFSET(0x11F391E0)
#define MEEMMPKAFKL_ILGKKPHPKAF_OFFSET UNITYSDK_OFFSET(0x11F3B210)
#define MEEMMPKAFKL_JDDLOMGKDOL_OFFSET UNITYSDK_OFFSET(0x11F3F730)
#define MEEMMPKAFKL_JEKELDEAKOF_OFFSET UNITYSDK_OFFSET(0x11F3D410)
#define MEEMMPKAFKL_JIBGOPLMELM_OFFSET UNITYSDK_OFFSET(0x11F3D210)
#define MEEMMPKAFKL_JLHACLJNJOI_OFFSET UNITYSDK_OFFSET(0x11F3A7E0)
#define MEEMMPKAFKL_JNLNOBCAHHH_OFFSET UNITYSDK_OFFSET(0x11F42B20)
#define MEEMMPKAFKL_KKIBKNCODID_OFFSET UNITYSDK_OFFSET(0x11F39DF0)
#define MEEMMPKAFKL_KLLKKNDMDAI_OFFSET UNITYSDK_OFFSET(0x11F3AE10)
#define MEEMMPKAFKL_KMBCJJPMHGE_OFFSET UNITYSDK_OFFSET(0x11F44090)
#define MEEMMPKAFKL_KMIAFOLMMOF_OFFSET UNITYSDK_OFFSET(0x11F38FE0)
#define MEEMMPKAFKL_KNECJKAPEDF_OFFSET UNITYSDK_OFFSET(0x11F38BB0)
#define MEEMMPKAFKL_KPCJEGKKNLK_OFFSET UNITYSDK_OFFSET(0x11F3DE70)
#define MEEMMPKAFKL_LBKMHCAPEKL_OFFSET UNITYSDK_OFFSET(0x11F3A1F0)
#define MEEMMPKAFKL_LCAKBLLDDBD_OFFSET UNITYSDK_OFFSET(0x11F40C30)
#define MEEMMPKAFKL_LEBFDOMBACN_OFFSET UNITYSDK_OFFSET(0x11F3EE60)
#define MEEMMPKAFKL_LFNJDMBJBAE_OFFSET UNITYSDK_OFFSET(0x11F38760)
#define MEEMMPKAFKL_LLDKCBKMOPD_OFFSET UNITYSDK_OFFSET(0x11F43200)
#define MEEMMPKAFKL_MFBCNEJMOGD_OFFSET UNITYSDK_OFFSET(0x11F3C410)
#define MEEMMPKAFKL_MIGIONPIIPM_OFFSET UNITYSDK_OFFSET(0x11F42520)
#define MEEMMPKAFKL_MIIKAFDJEGE_OFFSET UNITYSDK_OFFSET(0x11F3F350)
#define MEEMMPKAFKL_MMGMKBGCING_OFFSET UNITYSDK_OFFSET(0x11F406F0)
#define MEEMMPKAFKL_MOCHGIFEDGN_OFFSET UNITYSDK_OFFSET(0x11F444F0)
#define MEEMMPKAFKL_MOCOMMDIDBO_OFFSET UNITYSDK_OFFSET(0x11F3B010)
#define MEEMMPKAFKL_MOEBMGOENHA_OFFSET UNITYSDK_OFFSET(0x11F42130)
#define MEEMMPKAFKL_NBKNGOPNHAH_OFFSET UNITYSDK_OFFSET(0x11F39420)
#define MEEMMPKAFKL_NFALFEOABJH_OFFSET UNITYSDK_OFFSET(0x11F446F0)
#define MEEMMPKAFKL_NFCMPOEMCBL_OFFSET UNITYSDK_OFFSET(0x11F3E6B0)
#define MEEMMPKAFKL_NHJPMIBJFEF_OFFSET UNITYSDK_OFFSET(0x11F3A9D0)
#define MEEMMPKAFKL_NIEFIEDMMIM_OFFSET UNITYSDK_OFFSET(0x11F433F0)
#define MEEMMPKAFKL_NIJGBMIHLCM_OFFSET UNITYSDK_OFFSET(0x11F39FF0)
#define MEEMMPKAFKL_NJAPCKCJBED_OFFSET UNITYSDK_OFFSET(0x11F42720)
#define MEEMMPKAFKL_NMPANNFEELN_OFFSET UNITYSDK_OFFSET(0x11F378F0)
#define MEEMMPKAFKL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x11F3DA20)
#define MEEMMPKAFKL_ODFBINHABFI_OFFSET UNITYSDK_OFFSET(0x11F40790)
#define MEEMMPKAFKL_OGHIEGMEKDK_OFFSET UNITYSDK_OFFSET(0x11F393E0)
#define MEEMMPKAFKL_OKHHGOJEADA_OFFSET UNITYSDK_OFFSET(0x11F39C10)
#define MEEMMPKAFKL_OMMMDCMPICN_OFFSET UNITYSDK_OFFSET(0x11F3FB80)
#define MEEMMPKAFKL_OMOOFCAAOHC_OFFSET UNITYSDK_OFFSET(0x11F3E8B0)
#define MEEMMPKAFKL_ONNJDHHKDDO_OFFSET UNITYSDK_OFFSET(0x11F40E30)
#define MEEMMPKAFKL_PAAECAKINMO_OFFSET UNITYSDK_OFFSET(0x11F3B750)
#define MEEMMPKAFKL_PAJAPFEDIKB_OFFSET UNITYSDK_OFFSET(0x11F3B310)
#define MEEMMPKAFKL_PFGBBKDCMHI_OFFSET UNITYSDK_OFFSET(0x11F41940)
#define MEEMMPKAFKL_PFHGABIBOKM_OFFSET UNITYSDK_OFFSET(0x11F3CFD0)
#define MEEMMPKAFKL_PGABFLFPPEC_OFFSET UNITYSDK_OFFSET(0x11F3A3F0)
#define MEEMMPKAFKL_PHDDBJKMCIB_OFFSET UNITYSDK_OFFSET(0x11F3DEC0)
#define MEEMMPKAFKL_PIEKIPJDPCK_OFFSET UNITYSDK_OFFSET(0x11F38090)
#define MEEMMPKAFKL_PKFCOHFCPAL_OFFSET UNITYSDK_OFFSET(0x11F40BF0)
#define MEEMMPKAFKL_PKIGAKHHAFO_OFFSET UNITYSDK_OFFSET(0x11F3CBE0)
#define MEEMMPKAFKL_PNGOLAGINFI_OFFSET UNITYSDK_OFFSET(0x11F403F0)

inline static constexpr unsigned int MEEMMPKAFKL_TypeDefinitionIndex = 63982;

class MEEMMPKAFKL : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelAddOnConfig** StaticGet_FBIMKDJDGOD()
	{
		return (::MoleMole::Config::LevelAddOnConfig**)Il2CppClass::FromTypeDefinitionIndex(MEEMMPKAFKL_TypeDefinitionIndex)->GetStaticField(0x3E780);
	}
	static ::MoleMole::ConfigAvatarDateTeleport** StaticGet_CDGGALJGEMB()
	{
		return (::MoleMole::ConfigAvatarDateTeleport**)Il2CppClass::FromTypeDefinitionIndex(MEEMMPKAFKL_TypeDefinitionIndex)->GetStaticField(0x3E788);
	}
	static ::MoleMole::Config::ConfigMisc** StaticGet_EMHBMDOAHIJ()
	{
		return (::MoleMole::Config::ConfigMisc**)Il2CppClass::FromTypeDefinitionIndex(MEEMMPKAFKL_TypeDefinitionIndex)->GetStaticField(0x3E790);
	}
	static ::MoleMole::Config::ConfigTrainingRoom** StaticGet_GMCEOMADMFN()
	{
		return (::MoleMole::Config::ConfigTrainingRoom**)Il2CppClass::FromTypeDefinitionIndex(MEEMMPKAFKL_TypeDefinitionIndex)->GetStaticField(0x3E798);
	}
	static ::MoleMole::Level::LevelConfig** StaticGet_DNPGNMKGHFB()
	{
		return (::MoleMole::Level::LevelConfig**)Il2CppClass::FromTypeDefinitionIndex(MEEMMPKAFKL_TypeDefinitionIndex)->GetStaticField(0x3E7A0);
	}
	// static const ::System::Int32 FHIKFPFOKLP = 0x7DB; // 0x0
	// static const ::System::Int32 DKGMHMAFAOE = 0x7E5; // 0x0
	// static const ::System::Int32 ANAPIBADFDE = 0x835; // 0x0
	// static const ::System::Int32 AGGGBHMAOJF = 0x83F; // 0x0
	// static const ::System::Int32 OMOKGFNIKNH = 0x5F88131; // 0x0
	// static const ::System::Int32 KAEJDDGIHJO = 0x5F8813B; // 0x0
	// static const ::System::Int32 BDIJLHHGMBE = 0x7EA; // 0x0
	// static const ::System::Int32 MKNHLKLIAHL = 0x7E9; // 0x0
	// static const ::System::String* AEFOLOBPJDC; // 0x0

	static ::System::Boolean NMPANNFEELN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NMPANNFEELN_OFFSET))();
	}

	static ::MoleMole::Config::ConfigPosRot* CHCBFNKMCCC()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_CHCBFNKMCCC_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* ELCGFCKFDHG(::MoleMole::Config::BuddyTeamType LAHNKKDHCCB, ::System::Boolean JBMMHOJGDJO)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*(*)(::MoleMole::Config::BuddyTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_ELCGFCKFDHG_OFFSET))(LAHNKKDHCCB, JBMMHOJGDJO);
	}

	static ::System::Single HFKPDDMHNJP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HFKPDDMHNJP_OFFSET))();
	}

	static ::System::Single DOMKKPNGGPP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DOMKKPNGGPP_OFFSET))();
	}

	static ::System::String* CHPOKGAHJAK()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_CHPOKGAHJAK_OFFSET))();
	}

	static ::System::Boolean GMAMAOHMGKP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_GMAMAOHMGKP_OFFSET))();
	}

	static ::System::Single FCIAOKBDCAE()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FCIAOKBDCAE_OFFSET))();
	}

	static ::System::Single KNECJKAPEDF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_KNECJKAPEDF_OFFSET))();
	}

	static ::System::Void HOHEHBFKHBK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HOHEHBFKHBK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Single KMIAFOLMMOF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_KMIAFOLMMOF_OFFSET))();
	}

	static ::System::Single IKFBIABEDID()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_IKFBIABEDID_OFFSET))();
	}

	static ::System::Boolean OGHIEGMEKDK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_OGHIEGMEKDK_OFFSET))();
	}

	static ::System::Single NBKNGOPNHAH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NBKNGOPNHAH_OFFSET))();
	}

	static ::System::Single AAOJFEHICND()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_AAOJFEHICND_OFFSET))();
	}

	static ::System::String* CCIFDHGDBMA()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_CCIFDHGDBMA_OFFSET))();
	}

	static ::System::Single APMDKJCPLFP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_APMDKJCPLFP_OFFSET))();
	}

	static ::MoleMole::ConfigAvatarDateTeleport* OKHHGOJEADA()
	{
		return ((::MoleMole::ConfigAvatarDateTeleport*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_OKHHGOJEADA_OFFSET))();
	}

	static ::System::Single KKIBKNCODID()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_KKIBKNCODID_OFFSET))();
	}

	static ::System::Single NIJGBMIHLCM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NIJGBMIHLCM_OFFSET))();
	}

	static ::System::Single LBKMHCAPEKL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_LBKMHCAPEKL_OFFSET))();
	}

	static ::System::String* PGABFLFPPEC()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PGABFLFPPEC_OFFSET))();
	}

	static ::System::Single AMMCOJGLMLL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_AMMCOJGLMLL_OFFSET))();
	}

	static ::MoleMole::Config::ConfigMisc* PIEKIPJDPCK()
	{
		return ((::MoleMole::Config::ConfigMisc*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PIEKIPJDPCK_OFFSET))();
	}

	static ::System::String* JLHACLJNJOI()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_JLHACLJNJOI_OFFSET))();
	}

	static ::System::Single NHJPMIBJFEF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NHJPMIBJFEF_OFFSET))();
	}

	static ::System::Single DCJAGDIOJLL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DCJAGDIOJLL_OFFSET))();
	}

	static ::System::Boolean CDPDILKJFMP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_CDPDILKJFMP_OFFSET))();
	}

	static ::System::Single KLLKKNDMDAI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_KLLKKNDMDAI_OFFSET))();
	}

	static ::System::Single MOCOMMDIDBO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_MOCOMMDIDBO_OFFSET))();
	}

	static ::System::Void ILGKKPHPKAF(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_ILGKKPHPKAF_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void PAJAPFEDIKB(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PAJAPFEDIKB_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean ENEMHNFMBAE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_ENEMHNFMBAE_OFFSET))();
	}

	static ::MoleMole::Config::LevelAddOnConfig* DDOLOAIPDJK()
	{
		return ((::MoleMole::Config::LevelAddOnConfig*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DDOLOAIPDJK_OFFSET))();
	}

	static ::System::Single CLHDLMHLAKH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_CLHDLMHLAKH_OFFSET))();
	}

	static ::MoleMole::UIAvatarAnimatorParamsSetting* DEPAIAFCDCJ()
	{
		return ((::MoleMole::UIAvatarAnimatorParamsSetting*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DEPAIAFCDCJ_OFFSET))();
	}

	static ::System::Single AOOHJMLDNFH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_AOOHJMLDNFH_OFFSET))();
	}

	static ::System::Single IFMMAAGDPBL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_IFMMAAGDPBL_OFFSET))();
	}

	static ::System::Single MFBCNEJMOGD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_MFBCNEJMOGD_OFFSET))();
	}

	static ::System::Single HMKEBHIACKC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HMKEBHIACKC_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* GJBBIGLMNKM(::MoleMole::Config::BuddyTeamType LAHNKKDHCCB, ::System::Boolean JBMMHOJGDJO)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*(*)(::MoleMole::Config::BuddyTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_GJBBIGLMNKM_OFFSET))(LAHNKKDHCCB, JBMMHOJGDJO);
	}

	static ::System::Single PKIGAKHHAFO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PKIGAKHHAFO_OFFSET))();
	}

	static ::MoleMole::Battle::AnimatorParamControl* DLOLDKCEPIC()
	{
		return ((::MoleMole::Battle::AnimatorParamControl*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DLOLDKCEPIC_OFFSET))();
	}

	static ::System::Boolean PFHGABIBOKM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PFHGABIBOKM_OFFSET))();
	}

	static ::System::Void AOCKBGNDIFL(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_AOCKBGNDIFL_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Single JIBGOPLMELM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_JIBGOPLMELM_OFFSET))();
	}

	static ::MoleMole::Battle::AnimatorParamControl* JEKELDEAKOF()
	{
		return ((::MoleMole::Battle::AnimatorParamControl*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_JEKELDEAKOF_OFFSET))();
	}

	static ::MoleMole::Config::ConfigTrainingRoom* DIBHIAGHEMH()
	{
		return ((::MoleMole::Config::ConfigTrainingRoom*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DIBHIAGHEMH_OFFSET))();
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* EBHHELKMCLM()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_EBHHELKMCLM_OFFSET))();
	}

	static ::System::Single CENDFCNFBKC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_CENDFCNFBKC_OFFSET))();
	}

	static ::System::Boolean KPCJEGKKNLK(::System::Int32 PKMFBJMJCOO)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_KPCJEGKKNLK_OFFSET))(PKMFBJMJCOO);
	}

	static ::System::Single PHDDBJKMCIB()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PHDDBJKMCIB_OFFSET))();
	}

	static ::System::Single DAKPGHFGKMI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DAKPGHFGKMI_OFFSET))();
	}

	static ::System::Single FBADAFNLMAO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FBADAFNLMAO_OFFSET))();
	}

	static ::System::Single HKINJIJFKLO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HKINJIJFKLO_OFFSET))();
	}

	static ::System::Single NFCMPOEMCBL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NFCMPOEMCBL_OFFSET))();
	}

	static ::JIIAKBANOLL* OMOOFCAAOHC(::System::Int32 JKKLOCBIDKJ)
	{
		return ((::JIIAKBANOLL*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_OMOOFCAAOHC_OFFSET))(JKKLOCBIDKJ);
	}

	static ::System::Single BIOCEBONLAI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_BIOCEBONLAI_OFFSET))();
	}

	static ::System::Int32 LEBFDOMBACN()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_LEBFDOMBACN_OFFSET))();
	}

	static ::System::Single GJAEJPMEBAP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_GJAEJPMEBAP_OFFSET))();
	}

	static ::System::String* MIIKAFDJEGE()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_MIIKAFDJEGE_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowLevelEnd* FIJHLEBEAIC()
	{
		return ((::MoleMole::Config::ConfigHollowLevelEnd*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FIJHLEBEAIC_OFFSET))();
	}

	static ::System::Int32 JDDLOMGKDOL(::System::Int32 PKMFBJMJCOO)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_JDDLOMGKDOL_OFFSET))(PKMFBJMJCOO);
	}

	static ::System::String* HODILHMJOMF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HODILHMJOMF_OFFSET))();
	}

	static ::System::Single FDFFKPIMPFM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FDFFKPIMPFM_OFFSET))();
	}

	static ::System::Void EOBHKPEBODK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_EOBHKPEBODK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Single OMMMDCMPICN()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_OMMMDCMPICN_OFFSET))();
	}

	static ::System::Single AMFMOLBGFLF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_AMFMOLBGFLF_OFFSET))();
	}

	static ::MoleMole::Battle::AnimatorParamControl* BAMDFPGEJFA()
	{
		return ((::MoleMole::Battle::AnimatorParamControl*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_BAMDFPGEJFA_OFFSET))();
	}

	static ::System::Int32 AKFELOPBMIH()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_AKFELOPBMIH_OFFSET))();
	}

	static ::System::Single IBJCHNEDJBM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_IBJCHNEDJBM_OFFSET))();
	}

	static ::System::Single PNGOLAGINFI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PNGOLAGINFI_OFFSET))();
	}

	static ::System::Boolean MMGMKBGCING(::System::UInt32 LEHABHCOMGH)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_MMGMKBGCING_OFFSET))(LEHABHCOMGH);
	}

	static ::System::Single ODFBINHABFI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_ODFBINHABFI_OFFSET))();
	}

	static ::MoleMole::Battle::AnimatorParamControl* DFOPEALBIED()
	{
		return ((::MoleMole::Battle::AnimatorParamControl*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DFOPEALBIED_OFFSET))();
	}

	static ::System::Int32 LFNJDMBJBAE()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_LFNJDMBJBAE_OFFSET))();
	}

	static ::System::Boolean IJNCINBJCFM(::System::Int32 PKMFBJMJCOO)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_IJNCINBJCFM_OFFSET))(PKMFBJMJCOO);
	}

	static ::System::String* IBDLFOPKNFA(::ALAFHBOENMO* DFMKILICPFB)
	{
		return ((::System::String*(*)(::ALAFHBOENMO*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_IBDLFOPKNFA_OFFSET))(DFMKILICPFB);
	}

	static ::System::String* PKFCOHFCPAL()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PKFCOHFCPAL_OFFSET))();
	}

	static ::System::Single LCAKBLLDDBD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_LCAKBLLDDBD_OFFSET))();
	}

	static ::System::Single ONNJDHHKDDO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_ONNJDHHKDDO_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Single DEOEBILBNJD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DEOEBILBNJD_OFFSET))();
	}

	static ::System::String* GGNOIFLCNML()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_GGNOIFLCNML_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DEAKECKIDDC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DEAKECKIDDC_OFFSET))();
	}

	static ::MoleMole::Config::ConfigUISettings* PFGBBKDCMHI()
	{
		return ((::MoleMole::Config::ConfigUISettings*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PFGBBKDCMHI_OFFSET))();
	}

	static ::System::Single CEPDHOBHLCG()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_CEPDHOBHLCG_OFFSET))();
	}

	static ::System::Single HGDIGMLPKCO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HGDIGMLPKCO_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Single FHGONGCLHPH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FHGONGCLHPH_OFFSET))();
	}

	static ::System::Single MOEBMGOENHA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_MOEBMGOENHA_OFFSET))();
	}

	static ::System::String* DHEGLBEAKNH()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_DHEGLBEAKNH_OFFSET))();
	}

	static ::System::Single MIGIONPIIPM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_MIGIONPIIPM_OFFSET))();
	}

	static ::System::Single NJAPCKCJBED()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NJAPCKCJBED_OFFSET))();
	}

	static ::System::Single FLOPNIEDAGC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FLOPNIEDAGC_OFFSET))();
	}

	static ::System::String* JNLNOBCAHHH()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_JNLNOBCAHHH_OFFSET))();
	}

	static ::MoleMole::Level::LevelConfig* COKGLHCGLIM()
	{
		return ((::MoleMole::Level::LevelConfig*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_COKGLHCGLIM_OFFSET))();
	}

	static ::System::Single ALOPODEJPOJ()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_ALOPODEJPOJ_OFFSET))();
	}

	static ::System::Int32 LLDKCBKMOPD()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_LLDKCBKMOPD_OFFSET))();
	}

	static ::System::Single NIEFIEDMMIM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NIEFIEDMMIM_OFFSET))();
	}

	static ::System::Single EKONDIMENEI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_EKONDIMENEI_OFFSET))();
	}

	static ::System::Single HNPMMFMANBI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HNPMMFMANBI_OFFSET))();
	}

	static ::System::Int32 PAAECAKINMO()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_PAAECAKINMO_OFFSET))();
	}

	static ::System::Boolean GCAFJBGAJIE(::MoleMole::FuncSwitchType OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::MoleMole::FuncSwitchType))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_GCAFJBGAJIE_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::String* FHDNKPNIJKB()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FHDNKPNIJKB_OFFSET))();
	}

	static ::System::Boolean KMBCJJPMHGE(::System::UInt32 BBOLKIABJHA)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_KMBCJJPMHGE_OFFSET))(BBOLKIABJHA);
	}

	static ::MoleMole::Config::ConfigAvatarGround* EGPPJMDNIPF()
	{
		return ((::MoleMole::Config::ConfigAvatarGround*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_EGPPJMDNIPF_OFFSET))();
	}

	static ::System::Single HBAEFCCOHMM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HBAEFCCOHMM_OFFSET))();
	}

	static ::System::Single MOCHGIFEDGN()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_MOCHGIFEDGN_OFFSET))();
	}

	static ::System::Single NFALFEOABJH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_NFALFEOABJH_OFFSET))();
	}

	static ::System::Single BIGOJFNNAGC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_BIGOJFNNAGC_OFFSET))();
	}

	static ::System::String* GKJOJLFBAHD()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_GKJOJLFBAHD_OFFSET))();
	}

	static ::MoleMole::TeamGroupDataItem* HJOBJGCNMIO()
	{
		return ((::MoleMole::TeamGroupDataItem*(*)())((::PBYTE)hIl2Cpp + MEEMMPKAFKL_HJOBJGCNMIO_OFFSET))();
	}
};
