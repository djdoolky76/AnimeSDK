#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCFIBLDEIAJ.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_ZKReward.h"
#include "unitysdk/MoleMole/EMaterialModifierPerformanceLevel.h"
#include "unitysdk/MoleMole/FrameRateInterpolateType.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"
#include "unitysdk/MoleMole/InLevelNPCCrowdLevel.h"
#include "unitysdk/MoleMole/PCFrameGenType.h"
#include "unitysdk/MoleMole/PCSuperResolutionType.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"

class BBACBMHNGBL;
class FENHCDFCGII;
class HDHOOKPPGNB;
class KAFMJLPNNAG;
namespace MoleMole { class DeviceSettingConfig; }
namespace MoleMole { class DeviceSettingProfile; }
namespace MoleMole { class GeneralGraphicQualityProfileContext; }
namespace MoleMole { class GraphicSettingProfileBase; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DevicePerformanceConfig; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class FOAGEAPACDN_1;

#define PEFGLPMDCAF_ABJHOOPDJMO_OFFSET UNITYSDK_OFFSET(0x11964610)
#define PEFGLPMDCAF_ACAGIHKKKED_OFFSET UNITYSDK_OFFSET(0x11963C30)
#define PEFGLPMDCAF_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x11963F30)
#define PEFGLPMDCAF_ADIINHNBKDE_OFFSET UNITYSDK_OFFSET(0x11965D00)
#define PEFGLPMDCAF_ADOFNLKFKNJ_OFFSET UNITYSDK_OFFSET(0x1196A890)
#define PEFGLPMDCAF_AFGBIAAHOCD_OFFSET UNITYSDK_OFFSET(0x119675D0)
#define PEFGLPMDCAF_AFOJGHEEFNI_OFFSET UNITYSDK_OFFSET(0x11966120)
#define PEFGLPMDCAF_AIEANOFOKCI_OFFSET UNITYSDK_OFFSET(0x1196A540)
#define PEFGLPMDCAF_APJFIJGMBEK_OFFSET UNITYSDK_OFFSET(0x119645C0)
#define PEFGLPMDCAF_APKKKCGHHEN_OFFSET UNITYSDK_OFFSET(0x11969F30)
#define PEFGLPMDCAF_BAAFAIKJLDG_OFFSET UNITYSDK_OFFSET(0x11968CF0)
#define PEFGLPMDCAF_BAEKDFEBPMK_OFFSET UNITYSDK_OFFSET(0x1196A4D0)
#define PEFGLPMDCAF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11966A40)
#define PEFGLPMDCAF_BIJLMAJCGOC_OFFSET UNITYSDK_OFFSET(0x11969660)
#define PEFGLPMDCAF_BJJOJCEKAPF_OFFSET UNITYSDK_OFFSET(0x11967CC0)
#define PEFGLPMDCAF_BMOMIJFONHA_OFFSET UNITYSDK_OFFSET(0x119677F0)
#define PEFGLPMDCAF_CCNDNLJKBBA_OFFSET UNITYSDK_OFFSET(0x11964020)
#define PEFGLPMDCAF_CECHGNMMNGD_OFFSET UNITYSDK_OFFSET(0x11964920)
#define PEFGLPMDCAF_CJHCCABEFFH_OFFSET UNITYSDK_OFFSET(0x11969540)
#define PEFGLPMDCAF_CJOMHCMNDNB_OFFSET UNITYSDK_OFFSET(0x11967470)
#define PEFGLPMDCAF_CLLJPNONMML_OFFSET UNITYSDK_OFFSET(0x11969F50)
#define PEFGLPMDCAF_DEGPJMBCFII_OFFSET UNITYSDK_OFFSET(0x11967790)
#define PEFGLPMDCAF_DEIKOLGBEOK_OFFSET UNITYSDK_OFFSET(0x11968F70)
#define PEFGLPMDCAF_DHKOPBPGGCM_OFFSET UNITYSDK_OFFSET(0x11964010)
#define PEFGLPMDCAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11963E70)
#define PEFGLPMDCAF_DLADLJMEBEL_OFFSET UNITYSDK_OFFSET(0x11967100)
#define PEFGLPMDCAF_EDAAHIAMAIM_OFFSET UNITYSDK_OFFSET(0x11964520)
#define PEFGLPMDCAF_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x11963F70)
#define PEFGLPMDCAF_EDEGPJOOIGE_OFFSET UNITYSDK_OFFSET(0x11967C50)
#define PEFGLPMDCAF_EELACPOGMEG_OFFSET UNITYSDK_OFFSET(0x11964280)
#define PEFGLPMDCAF_EJBKHLGBDOA_OFFSET UNITYSDK_OFFSET(0x119665C0)
#define PEFGLPMDCAF_EJPDEINMGBO_OFFSET UNITYSDK_OFFSET(0x11967350)
#define PEFGLPMDCAF_ELHHBPPJLFN_OFFSET UNITYSDK_OFFSET(0x11966070)
#define PEFGLPMDCAF_FHAMAMFJGNN_OFFSET UNITYSDK_OFFSET(0x11964430)
#define PEFGLPMDCAF_FIFHAJPKFBL_OFFSET UNITYSDK_OFFSET(0x119669C0)
#define PEFGLPMDCAF_FNMJBNMNNBP_OFFSET UNITYSDK_OFFSET(0x1196AA00)
#define PEFGLPMDCAF_GCDDDGJEKBE_OFFSET UNITYSDK_OFFSET(0x119642F0)
#define PEFGLPMDCAF_GFHAMCDELGG_OFFSET UNITYSDK_OFFSET(0x11969FC0)
#define PEFGLPMDCAF_GIFOCHNHGDI_OFFSET UNITYSDK_OFFSET(0x11967300)
#define PEFGLPMDCAF_GMDMJEOPGFD_OFFSET UNITYSDK_OFFSET(0x11969720)
#define PEFGLPMDCAF_GPBGDJGGIDP_OFFSET UNITYSDK_OFFSET(0x1196A950)
#define PEFGLPMDCAF_GPMBOACJEAP_OFFSET UNITYSDK_OFFSET(0x119695B0)
#define PEFGLPMDCAF_HEGDPNHEPKM_OFFSET UNITYSDK_OFFSET(0x11964930)
#define PEFGLPMDCAF_HHOGBNADAGK_OFFSET UNITYSDK_OFFSET(0x11968830)
#define PEFGLPMDCAF_HIJPLPOEHID_OFFSET UNITYSDK_OFFSET(0x11968FD0)
#define PEFGLPMDCAF_HPKJHEDGGPN_OFFSET UNITYSDK_OFFSET(0x11969F40)
#define PEFGLPMDCAF_ICEJPFNDCGC_OFFSET UNITYSDK_OFFSET(0x11966480)
#define PEFGLPMDCAF_IGILKHEPDKE_OFFSET UNITYSDK_OFFSET(0x11967D10)
#define PEFGLPMDCAF_ILNPBOEIPNE_OFFSET UNITYSDK_OFFSET(0x1196ABF0)
#define PEFGLPMDCAF_JFBPNCHLHGB_OFFSET UNITYSDK_OFFSET(0x119658E0)
#define PEFGLPMDCAF_KEPEJMJFFBC_OFFSET UNITYSDK_OFFSET(0x1196B050)
#define PEFGLPMDCAF_KIEGJFKAEOI_OFFSET UNITYSDK_OFFSET(0x11969220)
#define PEFGLPMDCAF_LDFOHGJIEEJ_OFFSET UNITYSDK_OFFSET(0x119673A0)
#define PEFGLPMDCAF_MCECIPPEJMP_OFFSET UNITYSDK_OFFSET(0x11964130)
#define PEFGLPMDCAF_MCLOFFOBOGJ_OFFSET UNITYSDK_OFFSET(0x11964EB0)
#define PEFGLPMDCAF_MDIELFIEKDK_OFFSET UNITYSDK_OFFSET(0x11967170)
#define PEFGLPMDCAF_MFMFALHLBNA_OFFSET UNITYSDK_OFFSET(0x119641C0)
#define PEFGLPMDCAF_MHJCNDGACIN_OFFSET UNITYSDK_OFFSET(0x11964070)
#define PEFGLPMDCAF_MLFJPJPIDDK_OFFSET UNITYSDK_OFFSET(0x1196A450)
#define PEFGLPMDCAF_MLLKMNLKFFO_OFFSET UNITYSDK_OFFSET(0x11968EC0)
#define PEFGLPMDCAF_MMACMIAABHA_OFFSET UNITYSDK_OFFSET(0x11969EB0)
#define PEFGLPMDCAF_MMJAGBHKHEH_OFFSET UNITYSDK_OFFSET(0x1196AA10)
#define PEFGLPMDCAF_NEFDJJHLCNJ_OFFSET UNITYSDK_OFFSET(0x119687D0)
#define PEFGLPMDCAF_NEJECNHDADG_OFFSET UNITYSDK_OFFSET(0x11965940)
#define PEFGLPMDCAF_NFBALJHHBJC_OFFSET UNITYSDK_OFFSET(0x119643B0)
#define PEFGLPMDCAF_NHGJKGGPIDP_OFFSET UNITYSDK_OFFSET(0x1196A8A0)
#define PEFGLPMDCAF_NJJKFMJPJIE_OFFSET UNITYSDK_OFFSET(0x11968E70)
#define PEFGLPMDCAF_OCNOOKMJBBD_OFFSET UNITYSDK_OFFSET(0x119657D0)
#define PEFGLPMDCAF_OFNACDLAJKK_OFFSET UNITYSDK_OFFSET(0x11969980)
#define PEFGLPMDCAF_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11963840)
#define PEFGLPMDCAF_ONGMIHFPGGE_OFFSET UNITYSDK_OFFSET(0x11966B00)
#define PEFGLPMDCAF_OPAKONMHDDE_OFFSET UNITYSDK_OFFSET(0x11966000)
#define PEFGLPMDCAF_PBDKCKDEBOK_OFFSET UNITYSDK_OFFSET(0x119695C0)
#define PEFGLPMDCAF_PBHIEKJJFAM_OFFSET UNITYSDK_OFFSET(0x11967510)
#define PEFGLPMDCAF_PICELPJFLAJ_OFFSET UNITYSDK_OFFSET(0x11963A60)
#define PEFGLPMDCAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11963FF0)
#define PEFGLPMDCAF__CTOR_OFFSET UNITYSDK_OFFSET(0x11963FB0)

inline static constexpr unsigned int PEFGLPMDCAF_TypeDefinitionIndex = 78376;

class PEFGLPMDCAF
{
public:
	static ::System::Boolean* StaticGet_DBJGKNNOIDB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PEFGLPMDCAF_TypeDefinitionIndex)->GetStaticField(0xDB60);
	}
	static ::System::Boolean* StaticGet_FNHNIPHFBMD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PEFGLPMDCAF_TypeDefinitionIndex)->GetStaticField(0xDB61);
	}
	static ::System::Boolean* StaticGet_FKFPMEKGJKK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PEFGLPMDCAF_TypeDefinitionIndex)->GetStaticField(0xDB62);
	}
	static ::System::Boolean* StaticGet_AFLDOMHGIFO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PEFGLPMDCAF_TypeDefinitionIndex)->GetStaticField(0xDB63);
	}
	static ::System::Boolean* StaticGet_FNALBCDNDDN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PEFGLPMDCAF_TypeDefinitionIndex)->GetStaticField(0xDB64);
	}
	static ::System::Boolean* StaticGet_PGIPMFDIJDF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PEFGLPMDCAF_TypeDefinitionIndex)->GetStaticField(0xDB65);
	}
	::FOAGEAPACDN_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* NNBLDFFFDBJ; // 0x10
	::FOAGEAPACDN_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>* AFGCFLKMILC; // 0x18
	::FOAGEAPACDN_1<::System::Int32>* HBBIGIMPPPG; // 0x20
	::FOAGEAPACDN_1<::UnityEngine::NAPRenderPipeline0::ENapGIQuality>* OILILHDGJGD; // 0x28
	::FOAGEAPACDN_1<::System::Boolean>* FPMEOGCDHBB; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::BBACBMHNGBL*>* HBGKMNLNEAA; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>* NCJIJFHAIBC; // 0x40
	::HDHOOKPPGNB* CHCAMGEOCHH; // 0x48
	::FENHCDFCGII* ECJAICGINEH; // 0x50
	::MoleMole::Config::ConfigViewObjectMisc_EntityCreate KBNHNJCAFIL; // 0x58
	::System::Collections::Generic::List_1<::KAFMJLPNNAG*>* LAIEANMLFNH; // 0x78
	::MoleMole::DeviceSettingProfile* FNNMHFFKOOC; // 0x80
	::System::Single OIBABENENNF; // 0x88
	::MoleMole::InLevelNPCCrowdLevel EFOGNIFOJDA; // 0x8C
	::MoleMole::Config::ConfigViewObjectMisc_ZKReward ECOCHKAPMNL; // 0x90
	::System::Single BFFLPAOGKMD; // 0x9C
	::System::Boolean EBFHAKOBDHJ; // 0xA0
	::System::Boolean AAFHKCDCJGG; // 0xA1
	::System::Boolean OCFNBBGGFKL; // 0xA2
	::System::Byte _padding0[0x1];
	::System::Single NOPBPBOHMGD; // 0xA4
	::System::Boolean NELNOLNGKJG; // 0xA8
	::System::Boolean GGAHLGLGKAO; // 0xA9
	::System::Boolean IOGGCALOGPL; // 0xAA
	::System::Boolean _JMBLJOLBJFF_k__BackingField; // 0xAB
	::MoleMole::PCFrameGenType JFNAGCCFMJO; // 0xAC
	::System::Int32 LOFJBAPNDIG; // 0xB0
	::System::Byte _padding1[0x4];
	::System::Int64 _GPBFODOENHB_k__BackingField; // 0xB8
	::MoleMole::PerformanceSettingProfile_ENPCOmitLevel LKGIMIMJFEE; // 0xC0
	::FCFIBLDEIAJ PBCIHCGBDNB; // 0xC4
	::System::Single NPOJMBICDAK; // 0xC8
	::MoleMole::PCSuperResolutionType MCEJKKNPLMC; // 0xCC
	::MoleMole::EMaterialModifierPerformanceLevel PCJIBGIKNLA; // 0xD0
	::MoleMole::FrameRateInterpolateType FLLGHHHOCPP; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEFGLPMDCAF__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_DISPOSE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_EDEFLFIKNFK_OFFSET))(this);
	}

	::HDHOOKPPGNB* DHKOPBPGGCM()
	{
		return ((::HDHOOKPPGNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_DHKOPBPGGCM_OFFSET))(this);
	}

	::System::Boolean CCNDNLJKBBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_CCNDNLJKBBA_OFFSET))(this);
	}

	::System::Void MCECIPPEJMP(::System::String* AELLPLBJELA, ::System::Int32 FPJHAFHNHHI, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MCECIPPEJMP_OFFSET))(this, AELLPLBJELA, FPJHAFHNHHI, DKOFFFNEFJC);
	}

	::System::Void EELACPOGMEG(::UnityEngine::NAPRenderPipeline0::AntialiasingMode CHNDNFOIGAK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_EELACPOGMEG_OFFSET))(this, CHNDNFOIGAK);
	}

	::System::Void NFBALJHHBJC(::MoleMole::GraphicSettingProfileType JAOOMPBBMMJ, ::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_NFBALJHHBJC_OFFSET))(this, JAOOMPBBMMJ, MCOHLHMKLIP, FLMNJOFKIKI);
	}

	::System::Void EDAAHIAMAIM(::System::String* AELLPLBJELA, ::System::Boolean OFMNAICAALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_EDAAHIAMAIM_OFFSET))(this, AELLPLBJELA, OFMNAICAALJ);
	}

	::System::Int32 APJFIJGMBEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_APJFIJGMBEK_OFFSET))(this);
	}

	::System::Single ABJHOOPDJMO(::System::Boolean GGKLIDPIEBB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ABJHOOPDJMO_OFFSET))(this, GGKLIDPIEBB);
	}

	::System::Int64 CECHGNMMNGD()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_CECHGNMMNGD_OFFSET))(this);
	}

	::System::Boolean HEGDPNHEPKM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_HEGDPNHEPKM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean MCLOFFOBOGJ(::System::String* IDOPOGOMOBE, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*& PBLAIBLPPOO, ::System::Boolean OICHCJDHJOF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*&, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MCLOFFOBOGJ_OFFSET))(this, IDOPOGOMOBE, KECKGDFIALJ, PBLAIBLPPOO, OICHCJDHJOF);
	}

	::System::Void ADIINHNBKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ADIINHNBKDE_OFFSET))(this);
	}

	::FOAGEAPACDN_1<::System::Boolean>* MHJCNDGACIN()
	{
		return ((::FOAGEAPACDN_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MHJCNDGACIN_OFFSET))(this);
	}

	::System::Void AFOJGHEEFNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_AFOJGHEEFNI_OFFSET))(this);
	}

	::System::Boolean EJBKHLGBDOA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_EJBKHLGBDOA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void FIFHAJPKFBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_FIFHAJPKFBL_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_BBOMJDBNHIC_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MDIELFIEKDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MDIELFIEKDK_OFFSET))(this);
	}

	::System::Void LDFOHGJIEEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_LDFOHGJIEEJ_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* NEJECNHDADG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean IHPEDOEAPJB)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_NEJECNHDADG_OFFSET))(this, KECKGDFIALJ, IHPEDOEAPJB);
	}

	::System::Void CJOMHCMNDNB(::System::Single NEKCONAGMNJ, ::System::Single NNKGIHPLKKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_CJOMHCMNDNB_OFFSET))(this, NEKCONAGMNJ, NNKGIHPLKKC);
	}

	::System::Void AFGBIAAHOCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_AFGBIAAHOCD_OFFSET))(this);
	}

	::System::Boolean BMOMIJFONHA(::System::String* IDOPOGOMOBE, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_BMOMIJFONHA_OFFSET))(this, IDOPOGOMOBE, KECKGDFIALJ);
	}

	::System::Void EDEGPJOOIGE(::System::Boolean FEKCKFIFGLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_EDEGPJOOIGE_OFFSET))(this, FEKCKFIFGLL);
	}

	::System::Void BJJOJCEKAPF(::Foundation::NapPlatform OKLOMHODNPN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_BJJOJCEKAPF_OFFSET))(this, OKLOMHODNPN);
	}

	::MoleMole::DeviceSettingProfile* IGILKHEPDKE(::MoleMole::DeviceSettingConfig* DLGGHCCLEJD)
	{
		return ((::MoleMole::DeviceSettingProfile*(*)(::PVOID, ::MoleMole::DeviceSettingConfig*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_IGILKHEPDKE_OFFSET))(this, DLGGHCCLEJD);
	}

	::System::Boolean ICEJPFNDCGC(::MoleMole::GraphicSettingProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ICEJPFNDCGC_OFFSET))(this, JFDDLNDKIKM);
	}

	::UnityEngine::NAPRenderPipeline0::AntialiasingMode NEFDJJHLCNJ()
	{
		return ((::UnityEngine::NAPRenderPipeline0::AntialiasingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_NEFDJJHLCNJ_OFFSET))(this);
	}

	::System::Void HHOGBNADAGK(::MoleMole::Config::DevicePerformanceConfig* NGJBIHBDAMJ, ::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DevicePerformanceConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_HHOGBNADAGK_OFFSET))(this, NGJBIHBDAMJ, ICALOEBJCBL);
	}

	::System::Void BAAFAIKJLDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_BAAFAIKJLDG_OFFSET))(this);
	}

	::FCFIBLDEIAJ NJJKFMJPJIE()
	{
		return ((::FCFIBLDEIAJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_NJJKFMJPJIE_OFFSET))(this);
	}

	::System::Void ELHHBPPJLFN(::System::String* AELLPLBJELA, ::System::Single NEKCONAGMNJ, ::System::Single NNKGIHPLKKC, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ELHHBPPJLFN_OFFSET))(this, AELLPLBJELA, NEKCONAGMNJ, NNKGIHPLKKC, DKOFFFNEFJC);
	}

	::System::Single GIFOCHNHGDI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_GIFOCHNHGDI_OFFSET))(this);
	}

	::System::String* MLLKMNLKFFO(::MoleMole::GraphicSettingProfileType JAOOMPBBMMJ)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::GraphicSettingProfileType))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MLLKMNLKFFO_OFFSET))(this, JAOOMPBBMMJ);
	}

	::System::Void ONGMIHFPGGE(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ONGMIHFPGGE_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Boolean KIEGJFKAEOI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_KIEGJFKAEOI_OFFSET))(this, KECKGDFIALJ);
	}

	::BBACBMHNGBL* FHAMAMFJGNN(::MoleMole::GraphicSettingProfileType JAOOMPBBMMJ)
	{
		return ((::BBACBMHNGBL*(*)(::PVOID, ::MoleMole::GraphicSettingProfileType))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_FHAMAMFJGNN_OFFSET))(this, JAOOMPBBMMJ);
	}

	::FOAGEAPACDN_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>* GCDDDGJEKBE()
	{
		return ((::FOAGEAPACDN_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_GCDDDGJEKBE_OFFSET))(this);
	}

	::System::Void DLADLJMEBEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_DLADLJMEBEL_OFFSET))(this);
	}

	::System::Void CJHCCABEFFH(::System::String* AELLPLBJELA, ::System::Boolean OFMNAICAALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_CJHCCABEFFH_OFFSET))(this, AELLPLBJELA, OFMNAICAALJ);
	}

	::System::Collections::Generic::List_1<::KAFMJLPNNAG*>* GPMBOACJEAP()
	{
		return ((::System::Collections::Generic::List_1<::KAFMJLPNNAG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_GPMBOACJEAP_OFFSET))(this);
	}

	::System::Void PBDKCKDEBOK(::System::String* AELLPLBJELA, ::System::Boolean OFMNAICAALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_PBDKCKDEBOK_OFFSET))(this, AELLPLBJELA, OFMNAICAALJ);
	}

	::System::Single EJPDEINMGBO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_EJPDEINMGBO_OFFSET))(this);
	}

	::System::Boolean GMDMJEOPGFD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_GMDMJEOPGFD_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OFNACDLAJKK(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_OFNACDLAJKK_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Boolean HIJPLPOEHID(::System::String* OEODAFDJHDL, ::MoleMole::GraphicSettingProfileType JAOOMPBBMMJ, ::System::String*& FDHOCPBNDEL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::GraphicSettingProfileType, ::System::String*&))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_HIJPLPOEHID_OFFSET))(this, OEODAFDJHDL, JAOOMPBBMMJ, FDHOCPBNDEL);
	}

	::System::Void MMACMIAABHA(::System::String* MCOHLHMKLIP, ::System::Boolean NKAHBDINMEO, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MMACMIAABHA_OFFSET))(this, MCOHLHMKLIP, NKAHBDINMEO, FLMNJOFKIKI);
	}

	::System::Void APKKKCGHHEN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_APKKKCGHHEN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OCNOOKMJBBD(::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* PBLAIBLPPOO, ::System::Byte MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::System::Byte))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_OCNOOKMJBBD_OFFSET))(this, PBLAIBLPPOO, MOBNMDEDJIP);
	}

	::FENHCDFCGII* HPKJHEDGGPN()
	{
		return ((::FENHCDFCGII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_HPKJHEDGGPN_OFFSET))(this);
	}

	::System::Void CLLJPNONMML(::System::Int32 FPJHAFHNHHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_CLLJPNONMML_OFFSET))(this, FPJHAFHNHHI);
	}

	::System::Boolean GFHAMCDELGG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_GFHAMCDELGG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void MLFJPJPIDDK(::UnityEngine::NAPRenderPipeline0::ENapGIQuality NJPOBNBFGCH, ::System::Boolean OFMNAICAALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MLFJPJPIDDK_OFFSET))(this, NJPOBNBFGCH, OFMNAICAALJ);
	}

	::FOAGEAPACDN_1<::System::Int32>* MFMFALHLBNA()
	{
		return ((::FOAGEAPACDN_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MFMFALHLBNA_OFFSET))(this);
	}

	::System::Void BAEKDFEBPMK(::System::String* AELLPLBJELA, ::System::Boolean OFMNAICAALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_BAEKDFEBPMK_OFFSET))(this, AELLPLBJELA, OFMNAICAALJ);
	}

	::System::Boolean AIEANOFOKCI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean OICHCJDHJOF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_AIEANOFOKCI_OFFSET))(this, KECKGDFIALJ, OICHCJDHJOF);
	}

	::System::Void ADOFNLKFKNJ(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ADOFNLKFKNJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NHGJKGGPIDP(::System::String* AELLPLBJELA, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality NJPOBNBFGCH, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality, ::System::Int32))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_NHGJKGGPIDP_OFFSET))(this, AELLPLBJELA, NJPOBNBFGCH, DKOFFFNEFJC);
	}

	::System::Boolean JFBPNCHLHGB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_JFBPNCHLHGB_OFFSET))(this);
	}

	::FOAGEAPACDN_1<::UnityEngine::NAPRenderPipeline0::ENapGIQuality>* BIJLMAJCGOC()
	{
		return ((::FOAGEAPACDN_1<::UnityEngine::NAPRenderPipeline0::ENapGIQuality>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_BIJLMAJCGOC_OFFSET))(this);
	}

	::System::Void GPBGDJGGIDP(::System::String* AELLPLBJELA, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode CHNDNFOIGAK, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode, ::System::Int32))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_GPBGDJGGIDP_OFFSET))(this, AELLPLBJELA, CHNDNFOIGAK, DKOFFFNEFJC);
	}

	::System::Void PICELPJFLAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_PICELPJFLAJ_OFFSET))(this);
	}

	::System::Boolean FNMJBNMNNBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_FNMJBNMNNBP_OFFSET))(this);
	}

	::UnityEngine::NAPRenderPipeline0::ENapGIQuality DEGPJMBCFII()
	{
		return ((::UnityEngine::NAPRenderPipeline0::ENapGIQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_DEGPJMBCFII_OFFSET))(this);
	}

	::System::Void OPAKONMHDDE(::System::String* AELLPLBJELA, ::System::Boolean OFMNAICAALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_OPAKONMHDDE_OFFSET))(this, AELLPLBJELA, OFMNAICAALJ);
	}

	::FOAGEAPACDN_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* PBHIEKJJFAM()
	{
		return ((::FOAGEAPACDN_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_PBHIEKJJFAM_OFFSET))(this);
	}

	::System::Void MMJAGBHKHEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_MMJAGBHKHEH_OFFSET))(this);
	}

	::System::Void ACAGIHKKKED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ACAGIHKKKED_OFFSET))(this);
	}

	::System::Boolean ILNPBOEIPNE(::System::String* BEKEECCALCO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_ILNPBOEIPNE_OFFSET))(this, BEKEECCALCO, KECKGDFIALJ);
	}

	::System::String* DEIKOLGBEOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_DEIKOLGBEOK_OFFSET))(this);
	}

	::System::Void KEPEJMJFFBC(::System::String* AELLPLBJELA, ::System::Boolean FEKCKFIFGLL, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + PEFGLPMDCAF_KEPEJMJFFBC_OFFSET))(this, AELLPLBJELA, FEKCKFIFGLL, DKOFFFNEFJC);
	}
};
