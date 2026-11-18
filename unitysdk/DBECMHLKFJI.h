#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/FuncSwitchType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class BGLNKGFIAON;
class EAMIKGLMBHP;
class JCCLDBLABJL;
class JIIAKBANOLL;
class LNOCBGKGKLC;
class NOLIOLDBAEA;
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
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBECMHLKFJI_AAOJFEHICND_OFFSET UNITYSDK_OFFSET(0x1498D540)
#define DBECMHLKFJI_ALOPODEJPOJ_OFFSET UNITYSDK_OFFSET(0x1498D090)
#define DBECMHLKFJI_AMFMOLBGFLF_OFFSET UNITYSDK_OFFSET(0x1498B260)
#define DBECMHLKFJI_AMMCOJGLMLL_OFFSET UNITYSDK_OFFSET(0x14988DC0)
#define DBECMHLKFJI_AOOHJMLDNFH_OFFSET UNITYSDK_OFFSET(0x1498DC70)
#define DBECMHLKFJI_APMDKJCPLFP_OFFSET UNITYSDK_OFFSET(0x1498DEA0)
#define DBECMHLKFJI_BAMDFPGEJFA_OFFSET UNITYSDK_OFFSET(0x1498D400)
#define DBECMHLKFJI_BIGOJFNNAGC_OFFSET UNITYSDK_OFFSET(0x1498BDB0)
#define DBECMHLKFJI_BIOCEBONLAI_OFFSET UNITYSDK_OFFSET(0x149870B0)
#define DBECMHLKFJI_CCIFDHGDBMA_OFFSET UNITYSDK_OFFSET(0x1498CC10)
#define DBECMHLKFJI_CENDFCNFBKC_OFFSET UNITYSDK_OFFSET(0x1498BFE0)
#define DBECMHLKFJI_CEPDHOBHLCG_OFFSET UNITYSDK_OFFSET(0x1498A8C0)
#define DBECMHLKFJI_CHCBFNKMCCC_OFFSET UNITYSDK_OFFSET(0x14987D90)
#define DBECMHLKFJI_CLHDLMHLAKH_OFFSET UNITYSDK_OFFSET(0x14989A90)
#define DBECMHLKFJI_COKGLHCGLIM_OFFSET UNITYSDK_OFFSET(0x149885B0)
#define DBECMHLKFJI_DAKPGHFGKMI_OFFSET UNITYSDK_OFFSET(0x14986E80)
#define DBECMHLKFJI_DBBNKNPPMMG_OFFSET UNITYSDK_OFFSET(0x1498C840)
#define DBECMHLKFJI_DCJAGDIOJLL_OFFSET UNITYSDK_OFFSET(0x149871F0)
#define DBECMHLKFJI_DDOLOAIPDJK_OFFSET UNITYSDK_OFFSET(0x14988F00)
#define DBECMHLKFJI_DEAKECKIDDC_OFFSET UNITYSDK_OFFSET(0x1498CE80)
#define DBECMHLKFJI_DEOEBILBNJD_OFFSET UNITYSDK_OFFSET(0x1498AFE0)
#define DBECMHLKFJI_DEPAIAFCDCJ_OFFSET UNITYSDK_OFFSET(0x1498E4E0)
#define DBECMHLKFJI_DFOPEALBIED_OFFSET UNITYSDK_OFFSET(0x14989600)
#define DBECMHLKFJI_DHEGLBEAKNH_OFFSET UNITYSDK_OFFSET(0x1498A690)
#define DBECMHLKFJI_DIBHIAGHEMH_OFFSET UNITYSDK_OFFSET(0x1498A0B0)
#define DBECMHLKFJI_DLOLDKCEPIC_OFFSET UNITYSDK_OFFSET(0x1498D8B0)
#define DBECMHLKFJI_DOMKKPNGGPP_OFFSET UNITYSDK_OFFSET(0x1498BB30)
#define DBECMHLKFJI_EBHHELKMCLM_OFFSET UNITYSDK_OFFSET(0x1498ADB0)
#define DBECMHLKFJI_EGPPJMDNIPF_OFFSET UNITYSDK_OFFSET(0x1498C120)
#define DBECMHLKFJI_EKONDIMENEI_OFFSET UNITYSDK_OFFSET(0x14987330)
#define DBECMHLKFJI_ELCGFCKFDHG_OFFSET UNITYSDK_OFFSET(0x1498E770)
#define DBECMHLKFJI_FBADAFNLMAO_OFFSET UNITYSDK_OFFSET(0x1498C5C0)
#define DBECMHLKFJI_FCIAOKBDCAE_OFFSET UNITYSDK_OFFSET(0x14989110)
#define DBECMHLKFJI_FDFFKPIMPFM_OFFSET UNITYSDK_OFFSET(0x1498D770)
#define DBECMHLKFJI_FHDNKPNIJKB_OFFSET UNITYSDK_OFFSET(0x1498C260)
#define DBECMHLKFJI_FHGONGCLHPH_OFFSET UNITYSDK_OFFSET(0x1498B3A0)
#define DBECMHLKFJI_FIJHLEBEAIC_OFFSET UNITYSDK_OFFSET(0x14987A40)
#define DBECMHLKFJI_FLOPNIEDAGC_OFFSET UNITYSDK_OFFSET(0x14989740)
#define DBECMHLKFJI_GCAFJBGAJIE_OFFSET UNITYSDK_OFFSET(0x1498B8A0)
#define DBECMHLKFJI_GGNOIFLCNML_OFFSET UNITYSDK_OFFSET(0x1498BEF0)
#define DBECMHLKFJI_GJAEJPMEBAP_OFFSET UNITYSDK_OFFSET(0x14989880)
#define DBECMHLKFJI_GJBBIGLMNKM_OFFSET UNITYSDK_OFFSET(0x14988900)
#define DBECMHLKFJI_GKJOJLFBAHD_OFFSET UNITYSDK_OFFSET(0x149894C0)
#define DBECMHLKFJI_HBAEFCCOHMM_OFFSET UNITYSDK_OFFSET(0x1498E3A0)
#define DBECMHLKFJI_HFKPDDMHNJP_OFFSET UNITYSDK_OFFSET(0x1498C700)
#define DBECMHLKFJI_HGDIGMLPKCO_OFFSET UNITYSDK_OFFSET(0x1498D9F0)
#define DBECMHLKFJI_HJOBJGCNMIO_OFFSET UNITYSDK_OFFSET(0x14989250)
#define DBECMHLKFJI_HKINJIJFKLO_OFFSET UNITYSDK_OFFSET(0x1498CD50)
#define DBECMHLKFJI_HMDHBKDBFOG_OFFSET UNITYSDK_OFFSET(0x1498A2D0)
#define DBECMHLKFJI_HMKEBHIACKC_OFFSET UNITYSDK_OFFSET(0x14988380)
#define DBECMHLKFJI_HNPMMFMANBI_OFFSET UNITYSDK_OFFSET(0x1498D2C0)
#define DBECMHLKFJI_HODILHMJOMF_OFFSET UNITYSDK_OFFSET(0x1498A2E0)
#define DBECMHLKFJI_IBJCHNEDJBM_OFFSET UNITYSDK_OFFSET(0x1498C990)
#define DBECMHLKFJI_IFMMAAGDPBL_OFFSET UNITYSDK_OFFSET(0x1498C850)
#define DBECMHLKFJI_IKFBIABEDID_OFFSET UNITYSDK_OFFSET(0x1498B760)
#define DBECMHLKFJI_JEKELDEAKOF_OFFSET UNITYSDK_OFFSET(0x14986D40)
#define DBECMHLKFJI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x149899C0)
#define DBECMHLKFJI_JIBGOPLMELM_OFFSET UNITYSDK_OFFSET(0x149887C0)
#define DBECMHLKFJI_JLHACLJNJOI_OFFSET UNITYSDK_OFFSET(0x14989380)
#define DBECMHLKFJI_JNLNOBCAHHH_OFFSET UNITYSDK_OFFSET(0x1498D630)
#define DBECMHLKFJI_KKIBKNCODID_OFFSET UNITYSDK_OFFSET(0x1498AEA0)
#define DBECMHLKFJI_KLLKKNDMDAI_OFFSET UNITYSDK_OFFSET(0x1498E260)
#define DBECMHLKFJI_KMBCJJPMHGE_OFFSET UNITYSDK_OFFSET(0x1498AB50)
#define DBECMHLKFJI_KMIAFOLMMOF_OFFSET UNITYSDK_OFFSET(0x1498DB30)
#define DBECMHLKFJI_KNECJKAPEDF_OFFSET UNITYSDK_OFFSET(0x149877D0)
#define DBECMHLKFJI_LBKMHCAPEKL_OFFSET UNITYSDK_OFFSET(0x1498E120)
#define DBECMHLKFJI_LCAKBLLDDBD_OFFSET UNITYSDK_OFFSET(0x14987B80)
#define DBECMHLKFJI_LEBFDOMBACN_OFFSET UNITYSDK_OFFSET(0x149875B0)
#define DBECMHLKFJI_LLDKCBKMOPD_OFFSET UNITYSDK_OFFSET(0x14988010)
#define DBECMHLKFJI_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1498E620)
#define DBECMHLKFJI_MDEABKIBOGO_OFFSET UNITYSDK_OFFSET(0x14988230)
#define DBECMHLKFJI_MFBCNEJMOGD_OFFSET UNITYSDK_OFFSET(0x14986F70)
#define DBECMHLKFJI_MIGIONPIIPM_OFFSET UNITYSDK_OFFSET(0x14988140)
#define DBECMHLKFJI_MIIKAFDJEGE_OFFSET UNITYSDK_OFFSET(0x14987910)
#define DBECMHLKFJI_MOCHGIFEDGN_OFFSET UNITYSDK_OFFSET(0x14988240)
#define DBECMHLKFJI_MOCOMMDIDBO_OFFSET UNITYSDK_OFFSET(0x14988680)
#define DBECMHLKFJI_MOEBMGOENHA_OFFSET UNITYSDK_OFFSET(0x1498EB60)
#define DBECMHLKFJI_NBKNGOPNHAH_OFFSET UNITYSDK_OFFSET(0x1498AA10)
#define DBECMHLKFJI_NFALFEOABJH_OFFSET UNITYSDK_OFFSET(0x1498CAD0)
#define DBECMHLKFJI_NFCMPOEMCBL_OFFSET UNITYSDK_OFFSET(0x1498BC70)
#define DBECMHLKFJI_NHJPMIBJFEF_OFFSET UNITYSDK_OFFSET(0x1498A420)
#define DBECMHLKFJI_NIEFIEDMMIM_OFFSET UNITYSDK_OFFSET(0x1498DFE0)
#define DBECMHLKFJI_NIJGBMIHLCM_OFFSET UNITYSDK_OFFSET(0x1498E630)
#define DBECMHLKFJI_NJAPCKCJBED_OFFSET UNITYSDK_OFFSET(0x1498B120)
#define DBECMHLKFJI_NMPANNFEELN_OFFSET UNITYSDK_OFFSET(0x14989E90)
#define DBECMHLKFJI_OCHNODOOEBH_OFFSET UNITYSDK_OFFSET(0x1498AA00)
#define DBECMHLKFJI_ODFBINHABFI_OFFSET UNITYSDK_OFFSET(0x1498A780)
#define DBECMHLKFJI_OKHHGOJEADA_OFFSET UNITYSDK_OFFSET(0x14987CC0)
#define DBECMHLKFJI_OMMMDCMPICN_OFFSET UNITYSDK_OFFSET(0x14987ED0)
#define DBECMHLKFJI_OMOOFCAAOHC_OFFSET UNITYSDK_OFFSET(0x14989BD0)
#define DBECMHLKFJI_ONNJDHHKDDO_OFFSET UNITYSDK_OFFSET(0x14988FD0)
#define DBECMHLKFJI_PFGBBKDCMHI_OFFSET UNITYSDK_OFFSET(0x1498B4E0)
#define DBECMHLKFJI_PGABFLFPPEC_OFFSET UNITYSDK_OFFSET(0x1498A560)
#define DBECMHLKFJI_PHDDBJKMCIB_OFFSET UNITYSDK_OFFSET(0x1498B620)
#define DBECMHLKFJI_PIEKIPJDPCK_OFFSET UNITYSDK_OFFSET(0x14988CF0)
#define DBECMHLKFJI_PKIGAKHHAFO_OFFSET UNITYSDK_OFFSET(0x14987470)
#define DBECMHLKFJI_PNGOLAGINFI_OFFSET UNITYSDK_OFFSET(0x1498C3A0)
#define DBECMHLKFJI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14986AC0)
#define DBECMHLKFJI__CTOR_OFFSET UNITYSDK_OFFSET(0x14986990)

inline static constexpr unsigned int DBECMHLKFJI_TypeDefinitionIndex = 59057;

class DBECMHLKFJI
{
public:
	::EAMIKGLMBHP* _CPMAOIBBFPE_k__BackingField; // 0x28
	::LNOCBGKGKLC* _DLHPMDJJCJN_k__BackingField; // 0x30
	::NOLIOLDBAEA* _EMMMELJFPGK_k__BackingField; // 0x38
	::BGLNKGFIAON* _NOEPLDLMONO_k__BackingField; // 0x40
	::JCCLDBLABJL* _CFHFAKPNCPO_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DBECMHLKFJI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::MoleMole::Battle::AnimatorParamControl* JEKELDEAKOF()
	{
		return ((::MoleMole::Battle::AnimatorParamControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_JEKELDEAKOF_OFFSET))(this);
	}

	::System::Single DAKPGHFGKMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DAKPGHFGKMI_OFFSET))(this);
	}

	::System::Single MFBCNEJMOGD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_MFBCNEJMOGD_OFFSET))(this);
	}

	::System::Single BIOCEBONLAI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_BIOCEBONLAI_OFFSET))(this);
	}

	::System::Single DCJAGDIOJLL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DCJAGDIOJLL_OFFSET))(this);
	}

	::System::Single EKONDIMENEI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_EKONDIMENEI_OFFSET))(this);
	}

	::System::Single PKIGAKHHAFO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_PKIGAKHHAFO_OFFSET))(this);
	}

	::System::Int32 LEBFDOMBACN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_LEBFDOMBACN_OFFSET))(this);
	}

	::System::Single KNECJKAPEDF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_KNECJKAPEDF_OFFSET))(this);
	}

	::System::String* MIIKAFDJEGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_MIIKAFDJEGE_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowLevelEnd* FIJHLEBEAIC()
	{
		return ((::MoleMole::Config::ConfigHollowLevelEnd*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_FIJHLEBEAIC_OFFSET))(this);
	}

	::System::Single LCAKBLLDDBD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_LCAKBLLDDBD_OFFSET))(this);
	}

	::MoleMole::ConfigAvatarDateTeleport* OKHHGOJEADA()
	{
		return ((::MoleMole::ConfigAvatarDateTeleport*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_OKHHGOJEADA_OFFSET))(this);
	}

	::MoleMole::Config::ConfigPosRot* CHCBFNKMCCC()
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_CHCBFNKMCCC_OFFSET))(this);
	}

	::System::Single OMMMDCMPICN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_OMMMDCMPICN_OFFSET))(this);
	}

	::System::Int32 LLDKCBKMOPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_LLDKCBKMOPD_OFFSET))(this);
	}

	::System::Single MIGIONPIIPM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_MIGIONPIIPM_OFFSET))(this);
	}

	::JCCLDBLABJL* MDEABKIBOGO()
	{
		return ((::JCCLDBLABJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_MDEABKIBOGO_OFFSET))(this);
	}

	::System::Single MOCHGIFEDGN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_MOCHGIFEDGN_OFFSET))(this);
	}

	::System::Single HMKEBHIACKC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HMKEBHIACKC_OFFSET))(this);
	}

	::MoleMole::Level::LevelConfig* COKGLHCGLIM()
	{
		return ((::MoleMole::Level::LevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_COKGLHCGLIM_OFFSET))(this);
	}

	::System::Single MOCOMMDIDBO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_MOCOMMDIDBO_OFFSET))(this);
	}

	::System::Single JIBGOPLMELM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_JIBGOPLMELM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* GJBBIGLMNKM(::MoleMole::Config::BuddyTeamType LAHNKKDHCCB, ::System::Boolean JBMMHOJGDJO)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*(*)(::PVOID, ::MoleMole::Config::BuddyTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + DBECMHLKFJI_GJBBIGLMNKM_OFFSET))(this, LAHNKKDHCCB, JBMMHOJGDJO);
	}

	::System::Single AMMCOJGLMLL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_AMMCOJGLMLL_OFFSET))(this);
	}

	::MoleMole::Config::LevelAddOnConfig* DDOLOAIPDJK()
	{
		return ((::MoleMole::Config::LevelAddOnConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DDOLOAIPDJK_OFFSET))(this);
	}

	::System::Single ONNJDHHKDDO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_ONNJDHHKDDO_OFFSET))(this);
	}

	::System::Single FCIAOKBDCAE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_FCIAOKBDCAE_OFFSET))(this);
	}

	::MoleMole::TeamGroupDataItem* HJOBJGCNMIO()
	{
		return ((::MoleMole::TeamGroupDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HJOBJGCNMIO_OFFSET))(this);
	}

	::System::String* JLHACLJNJOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_JLHACLJNJOI_OFFSET))(this);
	}

	::System::String* GKJOJLFBAHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_GKJOJLFBAHD_OFFSET))(this);
	}

	::MoleMole::Config::ConfigMisc* PIEKIPJDPCK()
	{
		return ((::MoleMole::Config::ConfigMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_PIEKIPJDPCK_OFFSET))(this);
	}

	::MoleMole::Battle::AnimatorParamControl* DFOPEALBIED()
	{
		return ((::MoleMole::Battle::AnimatorParamControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DFOPEALBIED_OFFSET))(this);
	}

	::System::Single FLOPNIEDAGC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_FLOPNIEDAGC_OFFSET))(this);
	}

	::System::Single GJAEJPMEBAP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_GJAEJPMEBAP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DBECMHLKFJI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single CLHDLMHLAKH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_CLHDLMHLAKH_OFFSET))(this);
	}

	::JIIAKBANOLL* OMOOFCAAOHC(::System::Int32 JKKLOCBIDKJ)
	{
		return ((::JIIAKBANOLL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBECMHLKFJI_OMOOFCAAOHC_OFFSET))(this, JKKLOCBIDKJ);
	}

	::System::Boolean NMPANNFEELN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_NMPANNFEELN_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTrainingRoom* DIBHIAGHEMH()
	{
		return ((::MoleMole::Config::ConfigTrainingRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DIBHIAGHEMH_OFFSET))(this);
	}

	::LNOCBGKGKLC* HMDHBKDBFOG()
	{
		return ((::LNOCBGKGKLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HMDHBKDBFOG_OFFSET))(this);
	}

	::System::String* HODILHMJOMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HODILHMJOMF_OFFSET))(this);
	}

	::System::Single NHJPMIBJFEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_NHJPMIBJFEF_OFFSET))(this);
	}

	::System::String* PGABFLFPPEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_PGABFLFPPEC_OFFSET))(this);
	}

	::System::String* DHEGLBEAKNH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DHEGLBEAKNH_OFFSET))(this);
	}

	::System::Single ODFBINHABFI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_ODFBINHABFI_OFFSET))(this);
	}

	::System::Single CEPDHOBHLCG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_CEPDHOBHLCG_OFFSET))(this);
	}

	::NOLIOLDBAEA* OCHNODOOEBH()
	{
		return ((::NOLIOLDBAEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_OCHNODOOEBH_OFFSET))(this);
	}

	::System::Single NBKNGOPNHAH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_NBKNGOPNHAH_OFFSET))(this);
	}

	::System::Boolean KMBCJJPMHGE(::System::UInt32 BBOLKIABJHA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBECMHLKFJI_KMBCJJPMHGE_OFFSET))(this, BBOLKIABJHA);
	}

	::System::Single KKIBKNCODID()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_KKIBKNCODID_OFFSET))(this);
	}

	::System::Single DEOEBILBNJD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DEOEBILBNJD_OFFSET))(this);
	}

	::System::Single NJAPCKCJBED()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_NJAPCKCJBED_OFFSET))(this);
	}

	::System::Single AMFMOLBGFLF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_AMFMOLBGFLF_OFFSET))(this);
	}

	::System::Single FHGONGCLHPH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_FHGONGCLHPH_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUISettings* PFGBBKDCMHI()
	{
		return ((::MoleMole::Config::ConfigUISettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_PFGBBKDCMHI_OFFSET))(this);
	}

	::System::Single PHDDBJKMCIB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_PHDDBJKMCIB_OFFSET))(this);
	}

	::System::Single IKFBIABEDID()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_IKFBIABEDID_OFFSET))(this);
	}

	::System::Boolean GCAFJBGAJIE(::MoleMole::FuncSwitchType OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FuncSwitchType))((::PBYTE)hIl2Cpp + DBECMHLKFJI_GCAFJBGAJIE_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Single DOMKKPNGGPP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DOMKKPNGGPP_OFFSET))(this);
	}

	::System::Single NFCMPOEMCBL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_NFCMPOEMCBL_OFFSET))(this);
	}

	::System::Single BIGOJFNNAGC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_BIGOJFNNAGC_OFFSET))(this);
	}

	::System::String* GGNOIFLCNML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_GGNOIFLCNML_OFFSET))(this);
	}

	::System::Single CENDFCNFBKC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_CENDFCNFBKC_OFFSET))(this);
	}

	::MoleMole::Config::ConfigAvatarGround* EGPPJMDNIPF()
	{
		return ((::MoleMole::Config::ConfigAvatarGround*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_EGPPJMDNIPF_OFFSET))(this);
	}

	::System::String* FHDNKPNIJKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_FHDNKPNIJKB_OFFSET))(this);
	}

	::System::Single PNGOLAGINFI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_PNGOLAGINFI_OFFSET))(this);
	}

	::System::Single FBADAFNLMAO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_FBADAFNLMAO_OFFSET))(this);
	}

	::System::Single HFKPDDMHNJP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HFKPDDMHNJP_OFFSET))(this);
	}

	::BGLNKGFIAON* DBBNKNPPMMG()
	{
		return ((::BGLNKGFIAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DBBNKNPPMMG_OFFSET))(this);
	}

	::System::Single IFMMAAGDPBL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_IFMMAAGDPBL_OFFSET))(this);
	}

	::System::Single IBJCHNEDJBM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_IBJCHNEDJBM_OFFSET))(this);
	}

	::System::Single NFALFEOABJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_NFALFEOABJH_OFFSET))(this);
	}

	::System::String* CCIFDHGDBMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_CCIFDHGDBMA_OFFSET))(this);
	}

	::System::Single HKINJIJFKLO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HKINJIJFKLO_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DEAKECKIDDC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DEAKECKIDDC_OFFSET))(this);
	}

	::System::Single ALOPODEJPOJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_ALOPODEJPOJ_OFFSET))(this);
	}

	::System::Single HNPMMFMANBI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HNPMMFMANBI_OFFSET))(this);
	}

	::MoleMole::Battle::AnimatorParamControl* BAMDFPGEJFA()
	{
		return ((::MoleMole::Battle::AnimatorParamControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_BAMDFPGEJFA_OFFSET))(this);
	}

	::System::Single AAOJFEHICND()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_AAOJFEHICND_OFFSET))(this);
	}

	::System::String* JNLNOBCAHHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_JNLNOBCAHHH_OFFSET))(this);
	}

	::System::Single FDFFKPIMPFM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_FDFFKPIMPFM_OFFSET))(this);
	}

	::MoleMole::Battle::AnimatorParamControl* DLOLDKCEPIC()
	{
		return ((::MoleMole::Battle::AnimatorParamControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DLOLDKCEPIC_OFFSET))(this);
	}

	::System::Single HGDIGMLPKCO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HGDIGMLPKCO_OFFSET))(this);
	}

	::System::Single KMIAFOLMMOF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_KMIAFOLMMOF_OFFSET))(this);
	}

	::System::Single AOOHJMLDNFH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_AOOHJMLDNFH_OFFSET))(this);
	}

	::System::Single APMDKJCPLFP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_APMDKJCPLFP_OFFSET))(this);
	}

	::System::Single NIEFIEDMMIM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_NIEFIEDMMIM_OFFSET))(this);
	}

	::System::Single LBKMHCAPEKL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_LBKMHCAPEKL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* EBHHELKMCLM()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_EBHHELKMCLM_OFFSET))(this);
	}

	::System::Single KLLKKNDMDAI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_KLLKKNDMDAI_OFFSET))(this);
	}

	::System::Single HBAEFCCOHMM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_HBAEFCCOHMM_OFFSET))(this);
	}

	::MoleMole::UIAvatarAnimatorParamsSetting* DEPAIAFCDCJ()
	{
		return ((::MoleMole::UIAvatarAnimatorParamsSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_DEPAIAFCDCJ_OFFSET))(this);
	}

	::EAMIKGLMBHP* LPFMNKEFPMM()
	{
		return ((::EAMIKGLMBHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Single NIJGBMIHLCM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_NIJGBMIHLCM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* ELCGFCKFDHG(::MoleMole::Config::BuddyTeamType LAHNKKDHCCB, ::System::Boolean JBMMHOJGDJO)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*(*)(::PVOID, ::MoleMole::Config::BuddyTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + DBECMHLKFJI_ELCGFCKFDHG_OFFSET))(this, LAHNKKDHCCB, JBMMHOJGDJO);
	}

	::System::Single MOEBMGOENHA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECMHLKFJI_MOEBMGOENHA_OFFSET))(this);
	}
};
