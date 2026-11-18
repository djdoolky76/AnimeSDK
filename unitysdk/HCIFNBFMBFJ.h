#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffect; }
namespace MoleMole::Config { class ConfigEntityAutoExposureEffect; }
namespace MoleMole::Config { class ConfigEntityAvatarColorCorrection; }
namespace MoleMole::Config { class ConfigEntityCausticsEffect; }
namespace MoleMole::Config { class ConfigEntityChannelMixerEffect; }
namespace MoleMole::Config { class ConfigEntityCharacterIgnisFatuusEffect; }
namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffect; }
namespace MoleMole::Config { class ConfigEntityColorAdjustment; }
namespace MoleMole::Config { class ConfigEntityColorCurvesEffect; }
namespace MoleMole::Config { class ConfigEntityColorLookupEffect; }
namespace MoleMole::Config { class ConfigEntityCullingEffect; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffect; }
namespace MoleMole::Config { class ConfigEntityDistortionEffect; }
namespace MoleMole::Config { class ConfigEntityFXColorCorrection; }
namespace MoleMole::Config { class ConfigEntityFXComicDotEffect; }
namespace MoleMole::Config { class ConfigEntityFXFogEffect; }
namespace MoleMole::Config { class ConfigEntityFilmGrain; }
namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace MoleMole::Config { class ConfigEntityGlitchEffect; }
namespace MoleMole::Config { class ConfigEntityLensDirtEffect; }
namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffect; }
namespace MoleMole::Config { class ConfigEntityLightingEffect; }
namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffect; }
namespace MoleMole::Config { class ConfigEntityMotionBlurEffect; }
namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffect; }
namespace MoleMole::Config { class ConfigEntityNapContactShadowEffect; }
namespace MoleMole::Config { class ConfigEntityOldCRTEffect; }
namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffect; }
namespace MoleMole::Config { class ConfigEntityPartialBlurEffect; }
namespace MoleMole::Config { class ConfigEntityRadialBlur; }
namespace MoleMole::Config { class ConfigEntityScreenEffect; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceAmbientOcclusionEffect; }
namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffect; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffect; }
namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffect; }
namespace MoleMole::Config { class ConfigEntitySplitToningEffect; }
namespace MoleMole::Config { class ConfigEntityTonemappingEffect; }
namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffect; }
namespace MoleMole::Config { class ConfigEntityVREffectsEffect; }
namespace MoleMole::Config { class ConfigEntityVignette; }
namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffect; }
namespace MoleMole::Config { class ConfigLensDistortion; }
namespace MoleMole::Config { class ConfigNapBloom; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCIFNBFMBFJ_AACKGBPIDNB_OFFSET UNITYSDK_OFFSET(0x100EDB80)
#define HCIFNBFMBFJ_AAEMLFFEECN_OFFSET UNITYSDK_OFFSET(0x100F2600)
#define HCIFNBFMBFJ_ABDLGFOBJOK_OFFSET UNITYSDK_OFFSET(0x100F4280)
#define HCIFNBFMBFJ_ABLNLBOOLHG_OFFSET UNITYSDK_OFFSET(0x100F7690)
#define HCIFNBFMBFJ_ABNEDKOCLFH_OFFSET UNITYSDK_OFFSET(0x18183ED0)
#define HCIFNBFMBFJ_ABOHIPFIPFD_OFFSET UNITYSDK_OFFSET(0x100F7110)
#define HCIFNBFMBFJ_ADOJPOILLDK_OFFSET UNITYSDK_OFFSET(0x1818C390)
#define HCIFNBFMBFJ_AEJBMCHKGEA_OFFSET UNITYSDK_OFFSET(0x100ECD40)
#define HCIFNBFMBFJ_AELNFLACNIP_OFFSET UNITYSDK_OFFSET(0x18186850)
#define HCIFNBFMBFJ_AFAODBGFICM_OFFSET UNITYSDK_OFFSET(0x18177380)
#define HCIFNBFMBFJ_AFBBJADODAI_OFFSET UNITYSDK_OFFSET(0x100F3B10)
#define HCIFNBFMBFJ_AFGLDNDBDGE_OFFSET UNITYSDK_OFFSET(0x100ED780)
#define HCIFNBFMBFJ_AFKOHHMMJJE_OFFSET UNITYSDK_OFFSET(0x181897D0)
#define HCIFNBFMBFJ_AGABBPKHNEA_OFFSET UNITYSDK_OFFSET(0x100ED2D0)
#define HCIFNBFMBFJ_AGHGBIJENKL_OFFSET UNITYSDK_OFFSET(0x18189000)
#define HCIFNBFMBFJ_AHFPEPGBHEH_OFFSET UNITYSDK_OFFSET(0x100F19D0)
#define HCIFNBFMBFJ_AIFIBFEKJAL_OFFSET UNITYSDK_OFFSET(0x1817FA70)
#define HCIFNBFMBFJ_AIIFDPKGFCH_OFFSET UNITYSDK_OFFSET(0x181864D0)
#define HCIFNBFMBFJ_AKGGNMLHMGN_OFFSET UNITYSDK_OFFSET(0x18189830)
#define HCIFNBFMBFJ_AMBLFEABNPM_OFFSET UNITYSDK_OFFSET(0x181887D0)
#define HCIFNBFMBFJ_ANEPCKLOJLK_OFFSET UNITYSDK_OFFSET(0x18187650)
#define HCIFNBFMBFJ_AOCLLPEKCAJ_OFFSET UNITYSDK_OFFSET(0x181873F0)
#define HCIFNBFMBFJ_AOFJEPMEJIK_OFFSET UNITYSDK_OFFSET(0x100F0ED0)
#define HCIFNBFMBFJ_AOOLPPEEPLM_OFFSET UNITYSDK_OFFSET(0x18184310)
#define HCIFNBFMBFJ_APBNBHNPAPN_OFFSET UNITYSDK_OFFSET(0x100F2CA0)
#define HCIFNBFMBFJ_APGCDBFPKHD_OFFSET UNITYSDK_OFFSET(0x1818AE20)
#define HCIFNBFMBFJ_APJCDADFBJM_OFFSET UNITYSDK_OFFSET(0x1817DEF0)
#define HCIFNBFMBFJ_APKJIMIJKMO_OFFSET UNITYSDK_OFFSET(0x100F6CC0)
#define HCIFNBFMBFJ_BAFDAJJNCDI_OFFSET UNITYSDK_OFFSET(0x1818A190)
#define HCIFNBFMBFJ_BANHPBLJEJH_OFFSET UNITYSDK_OFFSET(0x18186B00)
#define HCIFNBFMBFJ_BAOKILDKHBG_OFFSET UNITYSDK_OFFSET(0x100F2E90)
#define HCIFNBFMBFJ_BBPBIMFLCLP_OFFSET UNITYSDK_OFFSET(0x181862E0)
#define HCIFNBFMBFJ_BDGBOPDNDOO_OFFSET UNITYSDK_OFFSET(0x100F6490)
#define HCIFNBFMBFJ_BDJEIHNKPNL_OFFSET UNITYSDK_OFFSET(0x1818CC80)
#define HCIFNBFMBFJ_BDPDJGGCOBE_OFFSET UNITYSDK_OFFSET(0x18188510)
#define HCIFNBFMBFJ_BFHNGCCFBAI_OFFSET UNITYSDK_OFFSET(0x18183E70)
#define HCIFNBFMBFJ_BGGOOEIBGKA_OFFSET UNITYSDK_OFFSET(0x18184700)
#define HCIFNBFMBFJ_BLKKBCGEDFG_OFFSET UNITYSDK_OFFSET(0x1818A380)
#define HCIFNBFMBFJ_BNPOOLGNJPH_OFFSET UNITYSDK_OFFSET(0x18186590)
#define HCIFNBFMBFJ_BOJEOFPABFP_OFFSET UNITYSDK_OFFSET(0x1818B1A0)
#define HCIFNBFMBFJ_BOMAMLBNHKL_OFFSET UNITYSDK_OFFSET(0x100F7ED0)
#define HCIFNBFMBFJ_BPDNJBHFDEK_OFFSET UNITYSDK_OFFSET(0x18182BF0)
#define HCIFNBFMBFJ_CBGJIMFCGDI_OFFSET UNITYSDK_OFFSET(0x100EFE70)
#define HCIFNBFMBFJ_CCMEGLPICME_OFFSET UNITYSDK_OFFSET(0x1818B8A0)
#define HCIFNBFMBFJ_CCMGMIALADE_OFFSET UNITYSDK_OFFSET(0x1818CA30)
#define HCIFNBFMBFJ_CDACCFMHDGJ_OFFSET UNITYSDK_OFFSET(0x1818C3F0)
#define HCIFNBFMBFJ_CFEDKHMJMGO_OFFSET UNITYSDK_OFFSET(0x100EDBE0)
#define HCIFNBFMBFJ_CFHHEPGINEE_OFFSET UNITYSDK_OFFSET(0x18179610)
#define HCIFNBFMBFJ_CHCMNECGJPF_OFFSET UNITYSDK_OFFSET(0x100EE160)
#define HCIFNBFMBFJ_CHPDGFANMPE_OFFSET UNITYSDK_OFFSET(0x1817C370)
#define HCIFNBFMBFJ_CJJHNJBDMBD_OFFSET UNITYSDK_OFFSET(0x18184D60)
#define HCIFNBFMBFJ_CJPAMAFFODJ_OFFSET UNITYSDK_OFFSET(0x18185200)
#define HCIFNBFMBFJ_CKIFPMMEMBI_OFFSET UNITYSDK_OFFSET(0x18179090)
#define HCIFNBFMBFJ_CKPDHLCAFCO_OFFSET UNITYSDK_OFFSET(0x1818BEE0)
#define HCIFNBFMBFJ_CMKMHLHAMAF_OFFSET UNITYSDK_OFFSET(0x100F1450)
#define HCIFNBFMBFJ_CPDFCDONECK_1_OFFSET UNITYSDK_OFFSET(0x100F59A0)
#define HCIFNBFMBFJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x100ED130)
#define HCIFNBFMBFJ_CPMDFPCFILM_OFFSET UNITYSDK_OFFSET(0x18177C20)
#define HCIFNBFMBFJ_CPOPJDENBGD_OFFSET UNITYSDK_OFFSET(0x18185E90)
#define HCIFNBFMBFJ_DAJAPDLIDMD_OFFSET UNITYSDK_OFFSET(0x1817F4F0)
#define HCIFNBFMBFJ_DBFMHHJOKKM_OFFSET UNITYSDK_OFFSET(0x1818CA90)
#define HCIFNBFMBFJ_DBIDAOJKKAH_OFFSET UNITYSDK_OFFSET(0x1817E9F0)
#define HCIFNBFMBFJ_DCKDFBFLNCH_OFFSET UNITYSDK_OFFSET(0x100F2660)
#define HCIFNBFMBFJ_DDOJGCMGENA_OFFSET UNITYSDK_OFFSET(0x100F76F0)
#define HCIFNBFMBFJ_DEGIEBOEAFC_OFFSET UNITYSDK_OFFSET(0x18180570)
#define HCIFNBFMBFJ_DEGIFPFOLFB_OFFSET UNITYSDK_OFFSET(0x100F2340)
#define HCIFNBFMBFJ_DFCECBKMFHC_OFFSET UNITYSDK_OFFSET(0x18186D50)
#define HCIFNBFMBFJ_DFDBPOAIBEB_OFFSET UNITYSDK_OFFSET(0x100F3530)
#define HCIFNBFMBFJ_DFHLJPFOBFK_OFFSET UNITYSDK_OFFSET(0x1818D700)
#define HCIFNBFMBFJ_DFHNNEBFEBL_OFFSET UNITYSDK_OFFSET(0x100F2A50)
#define HCIFNBFMBFJ_DGFKGKOJGMM_OFFSET UNITYSDK_OFFSET(0x18181B70)
#define HCIFNBFMBFJ_DGICJEJIPPK_OFFSET UNITYSDK_OFFSET(0x1818DCD0)
#define HCIFNBFMBFJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x18187840)
#define HCIFNBFMBFJ_DGOEMAMJIFI_OFFSET UNITYSDK_OFFSET(0x18189AF0)
#define HCIFNBFMBFJ_DIECOJOCBEE_OFFSET UNITYSDK_OFFSET(0x1818BFA0)
#define HCIFNBFMBFJ_DIHHEJIHFJJ_OFFSET UNITYSDK_OFFSET(0x181786B0)
#define HCIFNBFMBFJ_DJCECJAOJMP_OFFSET UNITYSDK_OFFSET(0x181880C0)
#define HCIFNBFMBFJ_DJHFOGOKDII_OFFSET UNITYSDK_OFFSET(0x18187A20)
#define HCIFNBFMBFJ_DKLJOBMCEPE_OFFSET UNITYSDK_OFFSET(0x100F5940)
#define HCIFNBFMBFJ_DLKJKKHAAIA_OFFSET UNITYSDK_OFFSET(0x181884B0)
#define HCIFNBFMBFJ_DLNJHBICLPD_OFFSET UNITYSDK_OFFSET(0x100F8CC0)
#define HCIFNBFMBFJ_DNDPACOJOIM_OFFSET UNITYSDK_OFFSET(0x100F5AD0)
#define HCIFNBFMBFJ_DNELHEMPJGN_OFFSET UNITYSDK_OFFSET(0x1818D8F0)
#define HCIFNBFMBFJ_DNFBIOINMKF_OFFSET UNITYSDK_OFFSET(0x1818B200)
#define HCIFNBFMBFJ_DODDOHLLPGK_OFFSET UNITYSDK_OFFSET(0x1818C450)
#define HCIFNBFMBFJ_DPIJMHKJPHM_OFFSET UNITYSDK_OFFSET(0x100F8C60)
#define HCIFNBFMBFJ_DPJBEGEMBKE_OFFSET UNITYSDK_OFFSET(0x18178E30)
#define HCIFNBFMBFJ_EAOCPCCEEPI_OFFSET UNITYSDK_OFFSET(0x1818BC90)
#define HCIFNBFMBFJ_EBHHPBLDCLH_OFFSET UNITYSDK_OFFSET(0x18189FA0)
#define HCIFNBFMBFJ_ECKPKGFPKIN_OFFSET UNITYSDK_OFFSET(0x181868B0)
#define HCIFNBFMBFJ_ECOCIIOGEGP_OFFSET UNITYSDK_OFFSET(0x100F0E70)
#define HCIFNBFMBFJ_EEJIIFKKBBN_OFFSET UNITYSDK_OFFSET(0x18188570)
#define HCIFNBFMBFJ_EEPHELIEJLI_OFFSET UNITYSDK_OFFSET(0x100EF8F0)
#define HCIFNBFMBFJ_EHAPEIDLCLI_OFFSET UNITYSDK_OFFSET(0x100ED330)
#define HCIFNBFMBFJ_EHPHIBKAOKA_OFFSET UNITYSDK_OFFSET(0x18177E80)
#define HCIFNBFMBFJ_EILLKEGFBNB_OFFSET UNITYSDK_OFFSET(0x100EF4A0)
#define HCIFNBFMBFJ_EJJIMHKIOFM_OFFSET UNITYSDK_OFFSET(0x1818A580)
#define HCIFNBFMBFJ_EKGKEBIEEON_OFFSET UNITYSDK_OFFSET(0x18187EC0)
#define HCIFNBFMBFJ_EMGKLJMOBHB_OFFSET UNITYSDK_OFFSET(0x18188770)
#define HCIFNBFMBFJ_ENCEIDIHAND_OFFSET UNITYSDK_OFFSET(0x100F3D00)
#define HCIFNBFMBFJ_ENKDEKBNMBH_OFFSET UNITYSDK_OFFSET(0x100F6430)
#define HCIFNBFMBFJ_EOAFAFKINLD_OFFSET UNITYSDK_OFFSET(0x1817D3F0)
#define HCIFNBFMBFJ_EODHKAPHIGF_OFFSET UNITYSDK_OFFSET(0x100F0060)
#define HCIFNBFMBFJ_EOIKHBGDFMF_OFFSET UNITYSDK_OFFSET(0x18182670)
#define HCIFNBFMBFJ_FBALFHDOMLC_OFFSET UNITYSDK_OFFSET(0x100EEB30)
#define HCIFNBFMBFJ_FBPLEJNBBEE_OFFSET UNITYSDK_OFFSET(0x100EEFF0)
#define HCIFNBFMBFJ_FCACEPDFKAP_OFFSET UNITYSDK_OFFSET(0x1817B2F0)
#define HCIFNBFMBFJ_FCBKNGAAMAP_OFFSET UNITYSDK_OFFSET(0x100F2850)
#define HCIFNBFMBFJ_FEPDIKEFJHC_OFFSET UNITYSDK_OFFSET(0x18189D50)
#define HCIFNBFMBFJ_FFCCGDHPPEM_OFFSET UNITYSDK_OFFSET(0x100ED520)
#define HCIFNBFMBFJ_FGLKOAFFPLN_OFFSET UNITYSDK_OFFSET(0x18184960)
#define HCIFNBFMBFJ_FJDNKLMKGHG_OFFSET UNITYSDK_OFFSET(0x1817E470)
#define HCIFNBFMBFJ_FKFAJBCIFGH_OFFSET UNITYSDK_OFFSET(0x1818BA90)
#define HCIFNBFMBFJ_FKLJNIAEDAN_OFFSET UNITYSDK_OFFSET(0x1818D510)
#define HCIFNBFMBFJ_FLINMAOKHFN_OFFSET UNITYSDK_OFFSET(0x100F80C0)
#define HCIFNBFMBFJ_FMOLPGINMNJ_OFFSET UNITYSDK_OFFSET(0x100EED30)
#define HCIFNBFMBFJ_FPBFMEBGOCF_OFFSET UNITYSDK_OFFSET(0x1818B6A0)
#define HCIFNBFMBFJ_GAJOEGKFGBL_OFFSET UNITYSDK_OFFSET(0x18185850)
#define HCIFNBFMBFJ_GCBILLCOEGE_OFFSET UNITYSDK_OFFSET(0x100EF890)
#define HCIFNBFMBFJ_GEBMIFGKDAP_OFFSET UNITYSDK_OFFSET(0x18187AE0)
#define HCIFNBFMBFJ_GFFHAHGLHGB_OFFSET UNITYSDK_OFFSET(0x100F6F10)
#define HCIFNBFMBFJ_GFHAHBGHLIC_OFFSET UNITYSDK_OFFSET(0x181777D0)
#define HCIFNBFMBFJ_GGGEDCFCIIM_OFFSET UNITYSDK_OFFSET(0x18179FE0)
#define HCIFNBFMBFJ_GGHJMOPEAJC_OFFSET UNITYSDK_OFFSET(0x181779D0)
#define HCIFNBFMBFJ_GGLKGIHBLMP_OFFSET UNITYSDK_OFFSET(0x1818C1A0)
#define HCIFNBFMBFJ_GHPAKBFMCNA_OFFSET UNITYSDK_OFFSET(0x18186280)
#define HCIFNBFMBFJ_GIMJLOAGMHN_OFFSET UNITYSDK_OFFSET(0x18184FB0)
#define HCIFNBFMBFJ_GKBNHLDKHOH_OFFSET UNITYSDK_OFFSET(0x1817FFF0)
#define HCIFNBFMBFJ_GLFBCFGGIGA_OFFSET UNITYSDK_OFFSET(0x1818C840)
#define HCIFNBFMBFJ_GMGBLJGNNGN_OFFSET UNITYSDK_OFFSET(0x181895E0)
#define HCIFNBFMBFJ_GMIKNFGHENC_OFFSET UNITYSDK_OFFSET(0x100EF1E0)
#define HCIFNBFMBFJ_GNBIAGPOFDL_OFFSET UNITYSDK_OFFSET(0x18186CF0)
#define HCIFNBFMBFJ_GNFJPDBFMNI_OFFSET UNITYSDK_OFFSET(0x100F0C10)
#define HCIFNBFMBFJ_GOKNNDFJLAJ_OFFSET UNITYSDK_OFFSET(0x100F8BA0)
#define HCIFNBFMBFJ_HAALBEONINI_OFFSET UNITYSDK_OFFSET(0x181857F0)
#define HCIFNBFMBFJ_HADBEKCEANN_OFFSET UNITYSDK_OFFSET(0x18184120)
#define HCIFNBFMBFJ_HAPPPDDNBAL_OFFSET UNITYSDK_OFFSET(0x1818B260)
#define HCIFNBFMBFJ_HBHLGELMOND_OFFSET UNITYSDK_OFFSET(0x1817AA10)
#define HCIFNBFMBFJ_HCAHIKPIBFI_OFFSET UNITYSDK_OFFSET(0x18177580)
#define HCIFNBFMBFJ_HCFKAAGEEND_OFFSET UNITYSDK_OFFSET(0x1817A490)
#define HCIFNBFMBFJ_HELIJCNJALJ_OFFSET UNITYSDK_OFFSET(0x181775E0)
#define HCIFNBFMBFJ_HFCAJOHIPJI_OFFSET UNITYSDK_OFFSET(0x100F3AB0)
#define HCIFNBFMBFJ_HFPBMBLGMPE_OFFSET UNITYSDK_OFFSET(0x1817EF70)
#define HCIFNBFMBFJ_HGNENLPHJLC_OFFSET UNITYSDK_OFFSET(0x100F6AD0)
#define HCIFNBFMBFJ_HHBFOHBCKEO_OFFSET UNITYSDK_OFFSET(0x100F64F0)
#define HCIFNBFMBFJ_HHCKNHAEBCB_OFFSET UNITYSDK_OFFSET(0x18179810)
#define HCIFNBFMBFJ_HJLDDIGABCA_OFFSET UNITYSDK_OFFSET(0x100ED580)
#define HCIFNBFMBFJ_HKKIIEKAFEP_OFFSET UNITYSDK_OFFSET(0x18188BC0)
#define HCIFNBFMBFJ_HLBLDKFGBKJ_OFFSET UNITYSDK_OFFSET(0x18187A80)
#define HCIFNBFMBFJ_HOBGCLONDKH_OFFSET UNITYSDK_OFFSET(0x1818D320)
#define HCIFNBFMBFJ_IAIABFNAHDG_OFFSET UNITYSDK_OFFSET(0x100F4A50)
#define HCIFNBFMBFJ_IDOAEJPEJID_OFFSET UNITYSDK_OFFSET(0x100F78F0)
#define HCIFNBFMBFJ_IDOCEAIBKDJ_OFFSET UNITYSDK_OFFSET(0x100EE1C0)
#define HCIFNBFMBFJ_IEBCINLKDHK_OFFSET UNITYSDK_OFFSET(0x100F8830)
#define HCIFNBFMBFJ_IFKKAKIAONN_OFFSET UNITYSDK_OFFSET(0x100F9100)
#define HCIFNBFMBFJ_IGDDCGNNDIF_OFFSET UNITYSDK_OFFSET(0x100F49F0)
#define HCIFNBFMBFJ_IGGFLCJFJJA_OFFSET UNITYSDK_OFFSET(0x1817D970)
#define HCIFNBFMBFJ_IGIIPNGAMPN_OFFSET UNITYSDK_OFFSET(0x100F2540)
#define HCIFNBFMBFJ_IGOLALLNNCH_OFFSET UNITYSDK_OFFSET(0x18188DB0)
#define HCIFNBFMBFJ_IHCEEPBFPCM_OFFSET UNITYSDK_OFFSET(0x181780D0)
#define HCIFNBFMBFJ_IJHKPKBFGIO_OFFSET UNITYSDK_OFFSET(0x18185A40)
#define HCIFNBFMBFJ_IKBPCGHCCIM_OFFSET UNITYSDK_OFFSET(0x1818A9E0)
#define HCIFNBFMBFJ_INDFBGEICKD_OFFSET UNITYSDK_OFFSET(0x181871A0)
#define HCIFNBFMBFJ_INIFJGDLEJP_OFFSET UNITYSDK_OFFSET(0x18180AF0)
#define HCIFNBFMBFJ_INPEAENCEED_OFFSET UNITYSDK_OFFSET(0x100F25A0)
#define HCIFNBFMBFJ_IPKLDMLDIIM_OFFSET UNITYSDK_OFFSET(0x100F8A80)
#define HCIFNBFMBFJ_JAOCEBDNBFI_OFFSET UNITYSDK_OFFSET(0x100ECF30)
#define HCIFNBFMBFJ_JCCENOOHKLF_OFFSET UNITYSDK_OFFSET(0x18188FA0)
#define HCIFNBFMBFJ_JCLFBOGEFNB_OFFSET UNITYSDK_OFFSET(0x100F6EB0)
#define HCIFNBFMBFJ_JCMCCHNIILD_OFFSET UNITYSDK_OFFSET(0x100F1BC0)
#define HCIFNBFMBFJ_JDAGGEGCPJB_OFFSET UNITYSDK_OFFSET(0x181815F0)
#define HCIFNBFMBFJ_JDPDBKMJPNM_OFFSET UNITYSDK_OFFSET(0x181867F0)
#define HCIFNBFMBFJ_JHMCEFIPJLC_OFFSET UNITYSDK_OFFSET(0x100EF690)
#define HCIFNBFMBFJ_JIPKAHEKILD_OFFSET UNITYSDK_OFFSET(0x100EF2A0)
#define HCIFNBFMBFJ_JJGLCMMCFMC_OFFSET UNITYSDK_OFFSET(0x18189DB0)
#define HCIFNBFMBFJ_JJNHEKFNCDJ_OFFSET UNITYSDK_OFFSET(0x1818AE80)
#define HCIFNBFMBFJ_JKCOOOJJLBK_OFFSET UNITYSDK_OFFSET(0x1817A0A0)
#define HCIFNBFMBFJ_JKNOIOCFBIL_OFFSET UNITYSDK_OFFSET(0x18186530)
#define HCIFNBFMBFJ_JLKANEFCPFE_OFFSET UNITYSDK_OFFSET(0x18185600)
#define HCIFNBFMBFJ_JOBGDFCJBOO_OFFSET UNITYSDK_OFFSET(0x1817BDF0)
#define HCIFNBFMBFJ_JOMIHGLLIEK_OFFSET UNITYSDK_OFFSET(0x1818B450)
#define HCIFNBFMBFJ_JONHJHEEAGB_OFFSET UNITYSDK_OFFSET(0x181788B0)
#define HCIFNBFMBFJ_JPEOANONBPC_OFFSET UNITYSDK_OFFSET(0x1818D130)
#define HCIFNBFMBFJ_KAFPEJEINED_OFFSET UNITYSDK_OFFSET(0x1818A780)
#define HCIFNBFMBFJ_KDDACEJHBGG_OFFSET UNITYSDK_OFFSET(0x100F8C00)
#define HCIFNBFMBFJ_KEHAJDGIEKK_OFFSET UNITYSDK_OFFSET(0x18186080)
#define HCIFNBFMBFJ_KEOHLMGGIKM_OFFSET UNITYSDK_OFFSET(0x100F68E0)
#define HCIFNBFMBFJ_KKNKKBLJPEH_OFFSET UNITYSDK_OFFSET(0x1818AF40)
#define HCIFNBFMBFJ_KNBCHDEPDGM_OFFSET UNITYSDK_OFFSET(0x1818C640)
#define HCIFNBFMBFJ_KOHLIDDPGBG_OFFSET UNITYSDK_OFFSET(0x100F34D0)
#define HCIFNBFMBFJ_LABBMDIGKHN_OFFSET UNITYSDK_OFFSET(0x100F7E70)
#define HCIFNBFMBFJ_LANFGCEOCPG_OFFSET UNITYSDK_OFFSET(0x100F51C0)
#define HCIFNBFMBFJ_LBHBDKEAGBD_OFFSET UNITYSDK_OFFSET(0x18184DC0)
#define HCIFNBFMBFJ_LCPOGDCGIIL_OFFSET UNITYSDK_OFFSET(0x100F66E0)
#define HCIFNBFMBFJ_LELPLCJAMDO_OFFSET UNITYSDK_OFFSET(0x1818AC30)
#define HCIFNBFMBFJ_LIPIFBGICHJ_OFFSET UNITYSDK_OFFSET(0x100F8F10)
#define HCIFNBFMBFJ_LJLKNPGLLAM_OFFSET UNITYSDK_OFFSET(0x18177A30)
#define HCIFNBFMBFJ_LKLCFGOLIKA_OFFSET UNITYSDK_OFFSET(0x100F8B40)
#define HCIFNBFMBFJ_LMECEMAMGJD_OFFSET UNITYSDK_OFFSET(0x18179030)
#define HCIFNBFMBFJ_LMHKMDEJBDJ_OFFSET UNITYSDK_OFFSET(0x100F3470)
#define HCIFNBFMBFJ_LMPNBPAGPNC_OFFSET UNITYSDK_OFFSET(0x1818ABD0)
#define HCIFNBFMBFJ_MACMEBEGAHI_OFFSET UNITYSDK_OFFSET(0x18179BF0)
#define HCIFNBFMBFJ_MBHHHIAFNND_OFFSET UNITYSDK_OFFSET(0x100F4470)
#define HCIFNBFMBFJ_MBODAJJKGLJ_OFFSET UNITYSDK_OFFSET(0x100EEF90)
#define HCIFNBFMBFJ_MDHIMDCMHNM_OFFSET UNITYSDK_OFFSET(0x1817A290)
#define HCIFNBFMBFJ_MFEPNBCFGID_OFFSET UNITYSDK_OFFSET(0x18185E30)
#define HCIFNBFMBFJ_MFJNJJJDOOM_OFFSET UNITYSDK_OFFSET(0x100F0440)
#define HCIFNBFMBFJ_MGKOAACLNON_OFFSET UNITYSDK_OFFSET(0x100F4C40)
#define HCIFNBFMBFJ_MHCNEHFFDMM_OFFSET UNITYSDK_OFFSET(0x18189CF0)
#define HCIFNBFMBFJ_MJCGHHKEIAO_OFFSET UNITYSDK_OFFSET(0x18186910)
#define HCIFNBFMBFJ_MKOIDCPJEED_OFFSET UNITYSDK_OFFSET(0x18183F30)
#define HCIFNBFMBFJ_MMNOIAIDHNL_OFFSET UNITYSDK_OFFSET(0x181882C0)
#define HCIFNBFMBFJ_MNFKJGDOKJI_OFFSET UNITYSDK_OFFSET(0x181889D0)
#define HCIFNBFMBFJ_MONOAGJFAFO_OFFSET UNITYSDK_OFFSET(0x100F0C70)
#define HCIFNBFMBFJ_NAGAIGAIOBP_OFFSET UNITYSDK_OFFSET(0x18186F40)
#define HCIFNBFMBFJ_NDHMIIICJKM_OFFSET UNITYSDK_OFFSET(0x1818BE80)
#define HCIFNBFMBFJ_NEEECMOMMPL_OFFSET UNITYSDK_OFFSET(0x181865F0)
#define HCIFNBFMBFJ_NGFENIPFLAJ_OFFSET UNITYSDK_OFFSET(0x181851A0)
#define HCIFNBFMBFJ_NGLAHDDIPGD_OFFSET UNITYSDK_OFFSET(0x18184B60)
#define HCIFNBFMBFJ_NGOIAKOEHAH_OFFSET UNITYSDK_OFFSET(0x1818CED0)
#define HCIFNBFMBFJ_NGOKAKJPFCB_OFFSET UNITYSDK_OFFSET(0x18183C70)
#define HCIFNBFMBFJ_NIEMFNMEDFI_OFFSET UNITYSDK_OFFSET(0x1818BF40)
#define HCIFNBFMBFJ_NILAEMDCLMO_OFFSET UNITYSDK_OFFSET(0x18177320)
#define HCIFNBFMBFJ_NJFDFOKIELE_OFFSET UNITYSDK_OFFSET(0x100ED980)
#define HCIFNBFMBFJ_NJGCFPBBPKB_OFFSET UNITYSDK_OFFSET(0x181898F0)
#define HCIFNBFMBFJ_NJGNFPOIOJF_OFFSET UNITYSDK_OFFSET(0x1818DAE0)
#define HCIFNBFMBFJ_NJHEMOCNPID_OFFSET UNITYSDK_OFFSET(0x1818CCE0)
#define HCIFNBFMBFJ_NJHIEPBLHDH_OFFSET UNITYSDK_OFFSET(0x18184500)
#define HCIFNBFMBFJ_NJOEBHELIPP_OFFSET UNITYSDK_OFFSET(0x1817CE70)
#define HCIFNBFMBFJ_NKCIPGIFNKF_OFFSET UNITYSDK_OFFSET(0x1818AEE0)
#define HCIFNBFMBFJ_NKHEDEAGHGJ_OFFSET UNITYSDK_OFFSET(0x100F0630)
#define HCIFNBFMBFJ_NLEAGDMBPNP_OFFSET UNITYSDK_OFFSET(0x100EE930)
#define HCIFNBFMBFJ_NLIIMNFOAIA_OFFSET UNITYSDK_OFFSET(0x181875F0)
#define HCIFNBFMBFJ_NNNEAFBCCMB_OFFSET UNITYSDK_OFFSET(0x100F8640)
#define HCIFNBFMBFJ_NOBJACODOBN_OFFSET UNITYSDK_OFFSET(0x18189890)
#define HCIFNBFMBFJ_NONGPJBFLDF_OFFSET UNITYSDK_OFFSET(0x100F5740)
#define HCIFNBFMBFJ_NPDFCEIGKBI_OFFSET UNITYSDK_OFFSET(0x100F8AE0)
#define HCIFNBFMBFJ_OAKDDENGDGJ_OFFSET UNITYSDK_OFFSET(0x1818AFA0)
#define HCIFNBFMBFJ_OBFFAEAOMBM_OFFSET UNITYSDK_OFFSET(0x100F0250)
#define HCIFNBFMBFJ_ODFMOKCDCBK_OFFSET UNITYSDK_OFFSET(0x18187140)
#define HCIFNBFMBFJ_OGPMPPMLKCO_OFFSET UNITYSDK_OFFSET(0x1817B870)
#define HCIFNBFMBFJ_OHGAAJLMAKJ_OFFSET UNITYSDK_OFFSET(0x18177C80)
#define HCIFNBFMBFJ_OIEJBDCJPMG_OFFSET UNITYSDK_OFFSET(0x181891F0)
#define HCIFNBFMBFJ_OJHPJHIEHHJ_OFFSET UNITYSDK_OFFSET(0x18179A00)
#define HCIFNBFMBFJ_OKHNMMDPLJA_OFFSET UNITYSDK_OFFSET(0x18178650)
#define HCIFNBFMBFJ_OKKHKHKLKKO_OFFSET UNITYSDK_OFFSET(0x181820F0)
#define HCIFNBFMBFJ_OKLIMEOAFCP_OFFSET UNITYSDK_OFFSET(0x18179DF0)
#define HCIFNBFMBFJ_OMPIKKLJHPK_OFFSET UNITYSDK_OFFSET(0x100F0690)
#define HCIFNBFMBFJ_ONOOLAAEGNK_OFFSET UNITYSDK_OFFSET(0x181836F0)
#define HCIFNBFMBFJ_PAINAAEFDPH_OFFSET UNITYSDK_OFFSET(0x100F2140)
#define HCIFNBFMBFJ_PBLNFAGPKLG_OFFSET UNITYSDK_OFFSET(0x100EED90)
#define HCIFNBFMBFJ_PCCDICHFAKF_OFFSET UNITYSDK_OFFSET(0x18185400)
#define HCIFNBFMBFJ_PCKIOCPAOMJ_OFFSET UNITYSDK_OFFSET(0x1818A7E0)
#define HCIFNBFMBFJ_PDJKCINJMAJ_OFFSET UNITYSDK_OFFSET(0x100ED250)
#define HCIFNBFMBFJ_PEGLDGFLGFJ_OFFSET UNITYSDK_OFFSET(0x100EF240)
#define HCIFNBFMBFJ_PEHBPFDNMDK_OFFSET UNITYSDK_OFFSET(0x18185C40)
#define HCIFNBFMBFJ_PFNOOJGCIPJ_OFFSET UNITYSDK_OFFSET(0x100F2C40)
#define HCIFNBFMBFJ_PGBFHNIMCDJ_OFFSET UNITYSDK_OFFSET(0x100EE740)
#define HCIFNBFMBFJ_PGCJBOEKBDH_OFFSET UNITYSDK_OFFSET(0x1818B4B0)
#define HCIFNBFMBFJ_PGFCENJKLON_OFFSET UNITYSDK_OFFSET(0x100F2EF0)
#define HCIFNBFMBFJ_PIEPHBJAPOB_OFFSET UNITYSDK_OFFSET(0x18187390)
#define HCIFNBFMBFJ_PIIGJELFOOH_OFFSET UNITYSDK_OFFSET(0x181893E0)
#define HCIFNBFMBFJ_PJBBKOOLKEI_OFFSET UNITYSDK_OFFSET(0x18187CD0)
#define HCIFNBFMBFJ_PJIKHFANGPL_OFFSET UNITYSDK_OFFSET(0x100F8D20)
#define HCIFNBFMBFJ_PLBPJMJPJBN_OFFSET UNITYSDK_OFFSET(0x1818D0D0)
#define HCIFNBFMBFJ_PMAGALOCIKC_OFFSET UNITYSDK_OFFSET(0x1817A040)
#define HCIFNBFMBFJ_PMGOFLIDCFF_OFFSET UNITYSDK_OFFSET(0x18181070)
#define HCIFNBFMBFJ_PNMJEOAONEG_OFFSET UNITYSDK_OFFSET(0x18184900)
#define HCIFNBFMBFJ_PPGMAKKLFIF_OFFSET UNITYSDK_OFFSET(0x18183170)
#define HCIFNBFMBFJ_PPHOPOOKLIJ_OFFSET UNITYSDK_OFFSET(0x18178070)
#define HCIFNBFMBFJ_PPJEJNEMGMJ_OFFSET UNITYSDK_OFFSET(0x1817C8F0)
#define HCIFNBFMBFJ_PPMPLBNHGOH_OFFSET UNITYSDK_OFFSET(0x100F8A20)
#define HCIFNBFMBFJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x18175E00)

inline static constexpr unsigned int HCIFNBFMBFJ_TypeDefinitionIndex = 50137;

class HCIFNBFMBFJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>** StaticGet_FKHPAIOFBOI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31D70);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>** StaticGet_NNDDBKNIHIM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31D78);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>** StaticGet_NAGDBLCMIAM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31D80);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>** StaticGet_ACKHDEGCBEF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31D88);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>** StaticGet_JCOFONPGOED()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31D90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>** StaticGet_EILEJEIIFAJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31D98);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>** StaticGet_PEKCMLHFIHH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>** StaticGet_ALBNKDGNKCM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DA8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>** StaticGet_KOFLBAKBGHE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>** StaticGet_JMAEBMEMFAH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>** StaticGet_KABBAMELFDC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>** StaticGet_JHMNFLDGKCI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>** StaticGet_EHAOHMFFEBI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>** StaticGet_GGNMPLKBHFD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DD8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>** StaticGet_LJODDHIOOAI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>** StaticGet_PBAKNEKFIHB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DE8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>** StaticGet_NPIKPNINBLP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>** StaticGet_FOCIHLJDJOJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31DF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>** StaticGet_EONPKOEDFMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E00);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>** StaticGet_KKMLGLCLGKE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E08);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>** StaticGet_FIIKEJHFGMG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>** StaticGet_LPODMPBGOOP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E18);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>** StaticGet_IEEIOJCEGFI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E20);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>** StaticGet_EPEJHIBLNFB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E28);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>** StaticGet_LPEPAIMJIOH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E30);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>** StaticGet_KMJCBLIPEOG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E38);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>** StaticGet_BFKDFOLMIMK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E40);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>** StaticGet_AKODMCBEHPM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E48);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>** StaticGet_CLLFMAKODLI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E50);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>** StaticGet_IHAMCIAEFPE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E58);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>** StaticGet_AGBGANIMDDL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E60);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>** StaticGet_PDJAPMOGFMP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E68);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>** StaticGet_HEDMFLPPELA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E70);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>** StaticGet_EIHFJECGIAD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E78);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>** StaticGet_EABBGHEBBDG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E80);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>** StaticGet_DKLBNOKEHAK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E88);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>** StaticGet_PPMKCDOJEPG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>** StaticGet_KMLCFJFEKDL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31E98);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>** StaticGet_FNONLFNJBMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31EA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>** StaticGet_PIBNHEPEAHC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31EA8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>** StaticGet_ACJLCGPNCIK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31EB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>** StaticGet_IENILCJHAHL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31EB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>** StaticGet_CIBDKHAICDM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31EC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>** StaticGet_CAOODHJNMHA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31EC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>** StaticGet_OCOFHKBABJO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>**)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0x31ED0);
	}
	static ::UnityEngine::Rendering::Universal::DownSampleLevel* StaticGet_IJGCHIEBOMH()
	{
		return (::UnityEngine::Rendering::Universal::DownSampleLevel*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA900);
	}
	static ::System::Single* StaticGet_ELJLMOLIPLE()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA904);
	}
	static ::System::Single* StaticGet_FDNHBCKBGFC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA908);
	}
	static ::UnityEngine::Color* StaticGet_DNIKHGPEJLO()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA90C);
	}
	static ::System::Single* StaticGet_JJBEDJMEIKJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA91C);
	}
	static ::System::Single* StaticGet_OPHFODFKHHC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA920);
	}
	static ::UnityEngine::Color* StaticGet_OMHJLNMNLMK()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA924);
	}
	static ::System::Single* StaticGet_JCLCFFPJFHM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA934);
	}
	static ::System::Single* StaticGet_JJILPNFFONL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA938);
	}
	static ::System::Single* StaticGet_AAMHNONCMDL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA93C);
	}
	static ::System::Single* StaticGet_MHMFPELFBOP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA940);
	}
	static ::UnityEngine::Rendering::Universal::DepthOfFieldMode* StaticGet_PADPKMBJDHF()
	{
		return (::UnityEngine::Rendering::Universal::DepthOfFieldMode*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA944);
	}
	static ::System::Single* StaticGet_FHJEAEKGCOP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA948);
	}
	static ::System::Single* StaticGet_IIBELLHMDCE()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA94C);
	}
	static ::System::Single* StaticGet_AGBELJBEIBH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA950);
	}
	static ::System::Single* StaticGet_EEBMEAEFMLF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA954);
	}
	static ::UnityEngine::Color* StaticGet_PKLHMFHAMBE()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA958);
	}
	static ::System::Single* StaticGet_OIAICEONIKA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA968);
	}
	static ::System::Single* StaticGet_FMCOAPFIBEJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA96C);
	}
	static ::System::Single* StaticGet_BDCCOLFCAOD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA970);
	}
	static ::System::Single* StaticGet_POOBCPEJADO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA974);
	}
	static ::System::Single* StaticGet_NLOBDPLFAEI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA978);
	}
	static ::System::Single* StaticGet_DHPIKPILNLI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA97C);
	}
	static ::System::Single* StaticGet_CGFGAKPOJCK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA980);
	}
	static ::System::Single* StaticGet_HJPNGDANEGA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA984);
	}
	static ::UnityEngine::Vector2* StaticGet_DMKFMLAKJPK()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA988);
	}
	static ::UnityEngine::Color* StaticGet_MOFOEHDCKHA()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA990);
	}
	static ::System::Single* StaticGet_NEFFKKHKGOP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9A0);
	}
	static ::UnityEngine::Color* StaticGet_IIHMBFCBFPI()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9A4);
	}
	static ::System::Single* StaticGet_COHALKAEGJE()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9B4);
	}
	static ::System::Single* StaticGet_IHOOLJAGPOB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9B8);
	}
	static ::UnityEngine::Rendering::Universal::FilmGrainLookup* StaticGet_BGAAJEKBHGG()
	{
		return (::UnityEngine::Rendering::Universal::FilmGrainLookup*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9BC);
	}
	static ::System::Single* StaticGet_AKFBOJGOGAL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9C0);
	}
	static ::UnityEngine::Color* StaticGet_CAPBLLEMCHG()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9C4);
	}
	static ::UnityEngine::Color* StaticGet_OGCJNFNBGAH()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9D4);
	}
	static ::UnityEngine::Color* StaticGet_HDCMECFGHNJ()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9E4);
	}
	static ::System::Single* StaticGet_DLHLFCIBEMB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9F4);
	}
	static ::System::Single* StaticGet_CEKEHJAMBIO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9F8);
	}
	static ::System::Single* StaticGet_HONHIAOIILD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xA9FC);
	}
	static ::System::Int32* StaticGet_HKFOOAHOKCF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA00);
	}
	static ::System::Single* StaticGet_APCHPHBCJKO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA04);
	}
	static ::System::Single* StaticGet_NMKAPMJMNJF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA08);
	}
	static ::System::Single* StaticGet_PNPNFKJEKJC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA0C);
	}
	static ::System::Single* StaticGet_IHDGFCELBHL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA10);
	}
	static ::System::Single* StaticGet_GPJJKNFHLMF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA14);
	}
	static ::System::Single* StaticGet_BJAOCACFBNF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA18);
	}
	static ::System::Boolean* StaticGet_ECDJFIPALGF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA1C);
	}
	static ::System::Boolean* StaticGet_IDBKHLBDMJH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA1D);
	}
	static ::System::Boolean* StaticGet__JOOGFLDIJKL_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA1E);
	}
	static ::System::Boolean* StaticGet_NMGNBCFBGDC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA1F);
	}
	static ::System::Single* StaticGet_IJMBNKPAEPN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA20);
	}
	static ::System::Single* StaticGet_LLEFKHPGNPD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA24);
	}
	static ::System::Single* StaticGet_ONKBOMLELCB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA28);
	}
	static ::System::Single* StaticGet_CBLANLJOLDJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA2C);
	}
	static ::System::Single* StaticGet_NFNALGIFKIM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA30);
	}
	static ::System::Single* StaticGet_PEGILOOLPAB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA34);
	}
	static ::System::Single* StaticGet_BDJMBEKCLFD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA38);
	}
	static ::UnityEngine::Rendering::Universal::SampleDistanceMode* StaticGet_PJFFCFMIAPB()
	{
		return (::UnityEngine::Rendering::Universal::SampleDistanceMode*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA3C);
	}
	static ::System::Boolean* StaticGet_HBCIDEFFOEI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA40);
	}
	static ::System::Boolean* StaticGet_DAIFHCLBDDM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA41);
	}
	static ::System::Boolean* StaticGet_CEBGMDFOKIA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA42);
	}
	static ::System::Boolean* StaticGet_NPDLDBDGKMF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA43);
	}
	static ::System::Single* StaticGet_EOKKGIJHCOA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA44);
	}
	static ::System::Single* StaticGet_ONOHJHFMEJI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA48);
	}
	static ::System::Boolean* StaticGet_IPAOBPEEGDD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA4C);
	}
	static ::System::Boolean* StaticGet_HACMHMCNNAJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA4D);
	}
	static ::System::Boolean* StaticGet_MCLEHGPOHJK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA4E);
	}
	static ::System::Boolean* StaticGet_PBDLABLELLM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA4F);
	}
	static ::System::Single* StaticGet_MGGGJABKELF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA50);
	}
	static ::System::Single* StaticGet_CKPDLEPJFGG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA54);
	}
	static ::System::Single* StaticGet_NNHHPCKPGHF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA58);
	}
	static ::System::Single* StaticGet_BHBPFPIDABG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA5C);
	}
	static ::System::Single* StaticGet_KBCGEBJEGCC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA60);
	}
	static ::System::Single* StaticGet_BEONNCICFEN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA64);
	}
	static ::UnityEngine::Color* StaticGet_GFNECGLKNDL()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA68);
	}
	static ::System::Boolean* StaticGet__MCJNMJNFBIG_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA78);
	}
	static ::System::Boolean* StaticGet__CELMACDDLPI_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA79);
	}
	static ::System::Boolean* StaticGet_IONNCLLLKGG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA7A);
	}
	static ::UnityEngine::Vector2* StaticGet_AHLCMMDPGGH()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA7C);
	}
	static ::System::Single* StaticGet_FEKDMOFGGPC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA84);
	}
	static ::System::Single* StaticGet_POPPLKOJLIN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA88);
	}
	static ::System::Single* StaticGet_OAGDAGDOPJK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA8C);
	}
	static ::System::Single* StaticGet_JNPJLLIKBJK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA90);
	}
	static ::System::Single* StaticGet_NLHIDAJAOFA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA94);
	}
	static ::System::Single* StaticGet_JDDEFMLHKEJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA98);
	}
	static ::System::Single* StaticGet_PHBOLPDJOLC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAA9C);
	}
	static ::System::Single* StaticGet_PPBDNFOLNGD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAAA0);
	}
	static ::UnityEngine::Vector2* StaticGet_FDIIOOKBJOG()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(HCIFNBFMBFJ_TypeDefinitionIndex)->GetStaticField(0xAAA4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ__CCTOR_OFFSET))();
	}

	static ::System::Void NILAEMDCLMO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NILAEMDCLMO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>* AFAODBGFICM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AFAODBGFICM_OFFSET))();
	}

	static ::System::Void HCAHIKPIBFI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HCAHIKPIBFI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single HELIJCNJALJ()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HELIJCNJALJ_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>* GFHAHBGHLIC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GFHAHBGHLIC_OFFSET))();
	}

	static ::System::Void GGHJMOPEAJC(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GGHJMOPEAJC_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single LJLKNPGLLAM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LJLKNPGLLAM_OFFSET))();
	}

	static ::System::Void CPMDFPCFILM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CPMDFPCFILM_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::Color OHGAAJLMAKJ()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHGAAJLMAKJ_OFFSET))();
	}

	static ::System::Boolean EHPHIBKAOKA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EHPHIBKAOKA_OFFSET))();
	}

	static ::System::Void PPHOPOOKLIJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PPHOPOOKLIJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void IHCEEPBFPCM(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IHCEEPBFPCM_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void OKHNMMDPLJA(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OKHNMMDPLJA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>* DIHHEJIHFJJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DIHHEJIHFJJ_OFFSET))();
	}

	static ::System::Void JONHJHEEAGB(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JONHJHEEAGB_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::UnityEngine::Color DPJBEGEMBKE()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DPJBEGEMBKE_OFFSET))();
	}

	static ::System::Void LMECEMAMGJD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LMECEMAMGJD_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void CKIFPMMEMBI(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CKIFPMMEMBI_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>* CFHHEPGINEE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CFHHEPGINEE_OFFSET))();
	}

	static ::System::Single HHCKNHAEBCB()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HHCKNHAEBCB_OFFSET))();
	}

	static ::UnityEngine::Rendering::Universal::DownSampleLevel OJHPJHIEHHJ()
	{
		return ((::UnityEngine::Rendering::Universal::DownSampleLevel(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OJHPJHIEHHJ_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>* MACMEBEGAHI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MACMEBEGAHI_OFFSET))();
	}

	static ::System::Single OKLIMEOAFCP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OKLIMEOAFCP_OFFSET))();
	}

	static ::System::Void GGGEDCFCIIM(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GGGEDCFCIIM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void PMAGALOCIKC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PMAGALOCIKC_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single JKCOOOJJLBK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JKCOOOJJLBK_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>* MDHIMDCMHNM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MDHIMDCMHNM_OFFSET))();
	}

	static ::System::Void HCFKAAGEEND(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HCFKAAGEEND_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void HBHLGELMOND(::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HBHLGELMOND_OFFSET))(IHIMDLELPAG, EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::UnityEngine::Color NGOKAKJPFCB()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NGOKAKJPFCB_OFFSET))();
	}

	static ::System::Void JOBGDFCJBOO(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JOBGDFCJBOO_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void BFHNGCCFBAI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BFHNGCCFBAI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void ABNEDKOCLFH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ABNEDKOCLFH_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single MKOIDCPJEED()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MKOIDCPJEED_OFFSET))();
	}

	static ::System::Void IGGFLCJFJJA(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IGGFLCJFJJA_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single HADBEKCEANN()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HADBEKCEANN_OFFSET))();
	}

	static ::System::Void AIFIBFEKJAL(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AIFIBFEKJAL_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single AOOLPPEEPLM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AOOLPPEEPLM_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>* NJHIEPBLHDH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NJHIEPBLHDH_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>* BGGOOEIBGKA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BGGOOEIBGKA_OFFSET))();
	}

	static ::System::Void PNMJEOAONEG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PNMJEOAONEG_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>* FGLKOAFFPLN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FGLKOAFFPLN_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>* NGLAHDDIPGD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NGLAHDDIPGD_OFFSET))();
	}

	static ::System::Void CJJHNJBDMBD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CJJHNJBDMBD_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single LBHBDKEAGBD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LBHBDKEAGBD_OFFSET))();
	}

	static ::System::Boolean GIMJLOAGMHN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GIMJLOAGMHN_OFFSET))();
	}

	static ::System::Void NGFENIPFLAJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NGFENIPFLAJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>* CJPAMAFFODJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CJPAMAFFODJ_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>* PCCDICHFAKF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PCCDICHFAKF_OFFSET))();
	}

	static ::System::Boolean JLKANEFCPFE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JLKANEFCPFE_OFFSET))();
	}

	static ::System::Void HAALBEONINI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HAALBEONINI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single GAJOEGKFGBL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GAJOEGKFGBL_OFFSET))();
	}

	static ::UnityEngine::Color IJHKPKBFGIO()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IJHKPKBFGIO_OFFSET))();
	}

	static ::System::Void PPGMAKKLFIF(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PPGMAKKLFIF_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single PEHBPFDNMDK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PEHBPFDNMDK_OFFSET))();
	}

	static ::System::Void MFEPNBCFGID(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MFEPNBCFGID_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single CPOPJDENBGD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CPOPJDENBGD_OFFSET))();
	}

	static ::System::Void EOAFAFKINLD(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EOAFAFKINLD_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>* KEHAJDGIEKK()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KEHAJDGIEKK_OFFSET))();
	}

	static ::System::Void GHPAKBFMCNA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GHPAKBFMCNA_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::Rendering::Universal::SampleDistanceMode BBPBIMFLCLP()
	{
		return ((::UnityEngine::Rendering::Universal::SampleDistanceMode(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BBPBIMFLCLP_OFFSET))();
	}

	static ::System::Void AIIFDPKGFCH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AIIFDPKGFCH_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void JKNOIOCFBIL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JKNOIOCFBIL_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void BNPOOLGNJPH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BNPOOLGNJPH_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::Color NEEECMOMMPL()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NEEECMOMMPL_OFFSET))();
	}

	static ::System::Void JDPDBKMJPNM(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JDPDBKMJPNM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void AELNFLACNIP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AELNFLACNIP_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void FCACEPDFKAP(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FCACEPDFKAP_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void ECKPKGFPKIN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ECKPKGFPKIN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single MJCGHHKEIAO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MJCGHHKEIAO_OFFSET))();
	}

	static ::System::Single BANHPBLJEJH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BANHPBLJEJH_OFFSET))();
	}

	static ::System::Void EOIKHBGDFMF(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EOIKHBGDFMF_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void GNBIAGPOFDL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GNBIAGPOFDL_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single DFCECBKMFHC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DFCECBKMFHC_OFFSET))();
	}

	static ::System::Void CHPDGFANMPE(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CHPDGFANMPE_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::UnityEngine::Color NAGAIGAIOBP()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NAGAIGAIOBP_OFFSET))();
	}

	static ::System::Void ODFMOKCDCBK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ODFMOKCDCBK_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single INDFBGEICKD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_INDFBGEICKD_OFFSET))();
	}

	static ::System::Void PIEPHBJAPOB(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PIEPHBJAPOB_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>* AOCLLPEKCAJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AOCLLPEKCAJ_OFFSET))();
	}

	static ::System::Void NLIIMNFOAIA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NLIIMNFOAIA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single ANEPCKLOJLK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ANEPCKLOJLK_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void DJHFOGOKDII(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DJHFOGOKDII_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void HLBLDKFGBKJ(::UnityEngine::Rendering::Universal::DownSampleLevel EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::Universal::DownSampleLevel))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HLBLDKFGBKJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single GEBMIFGKDAP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GEBMIFGKDAP_OFFSET))();
	}

	static ::System::Void PPJEJNEMGMJ(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PPJEJNEMGMJ_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single PJBBKOOLKEI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PJBBKOOLKEI_OFFSET))();
	}

	static ::UnityEngine::Color EKGKEBIEEON()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EKGKEBIEEON_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>* DJCECJAOJMP()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DJCECJAOJMP_OFFSET))();
	}

	static ::System::Single MMNOIAIDHNL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MMNOIAIDHNL_OFFSET))();
	}

	static ::System::Void DLKJKKHAAIA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DLKJKKHAAIA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DBIDAOJKKAH(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DBIDAOJKKAH_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void BDPDJGGCOBE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BDPDJGGCOBE_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>* EEJIIFKKBBN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EEJIIFKKBBN_OFFSET))();
	}

	static ::System::Void EMGKLJMOBHB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EMGKLJMOBHB_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void BPDNJBHFDEK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BPDNJBHFDEK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>* AMBLFEABNPM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AMBLFEABNPM_OFFSET))();
	}

	static ::System::Single MNFKJGDOKJI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MNFKJGDOKJI_OFFSET))();
	}

	static ::System::Single HKKIIEKAFEP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HKKIIEKAFEP_OFFSET))();
	}

	static ::System::Single IGOLALLNNCH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IGOLALLNNCH_OFFSET))();
	}

	static ::System::Void JCCENOOHKLF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JCCENOOHKLF_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single AGHGBIJENKL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AGHGBIJENKL_OFFSET))();
	}

	static ::System::Single OIEJBDCJPMG()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OIEJBDCJPMG_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>* PIIGJELFOOH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PIIGJELFOOH_OFFSET))();
	}

	static ::System::Single GMGBLJGNNGN()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GMGBLJGNNGN_OFFSET))();
	}

	static ::System::Void AFKOHHMMJJE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AFKOHHMMJJE_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DAJAPDLIDMD(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DAJAPDLIDMD_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void INIFJGDLEJP(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_INIFJGDLEJP_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void AKGGNMLHMGN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AKGGNMLHMGN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void APJCDADFBJM(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_APJCDADFBJM_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void NOBJACODOBN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NOBJACODOBN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>* NJGCFPBBPKB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NJGCFPBBPKB_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>* DGOEMAMJIFI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DGOEMAMJIFI_OFFSET))();
	}

	static ::System::Void MHCNEHFFDMM(::UnityEngine::Rendering::Universal::DepthOfFieldMode EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::Universal::DepthOfFieldMode))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MHCNEHFFDMM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void FEPDIKEFJHC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FEPDIKEFJHC_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single JJGLCMMCFMC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JJGLCMMCFMC_OFFSET))();
	}

	static ::System::Boolean EBHHPBLDCLH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EBHHPBLDCLH_OFFSET))();
	}

	static ::System::Boolean BAFDAJJNCDI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BAFDAJJNCDI_OFFSET))();
	}

	static ::System::Void GKBNHLDKHOH(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GKBNHLDKHOH_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>* BLKKBCGEDFG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BLKKBCGEDFG_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>* EJJIMHKIOFM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EJJIMHKIOFM_OFFSET))();
	}

	static ::System::Void KAFPEJEINED(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KAFPEJEINED_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>* PCKIOCPAOMJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PCKIOCPAOMJ_OFFSET))();
	}

	static ::System::Void JDAGGEGCPJB(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JDAGGEGCPJB_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single IKBPCGHCCIM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IKBPCGHCCIM_OFFSET))();
	}

	static ::System::Void LMPNBPAGPNC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LMPNBPAGPNC_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Int32 LELPLCJAMDO()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LELPLCJAMDO_OFFSET))();
	}

	static ::System::Void APGCDBFPKHD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_APGCDBFPKHD_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void JJNHEKFNCDJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JJNHEKFNCDJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void NKCIPGIFNKF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NKCIPGIFNKF_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void KKNKKBLJPEH(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KKNKKBLJPEH_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>* OAKDDENGDGJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OAKDDENGDGJ_OFFSET))();
	}

	static ::System::Void BOJEOFPABFP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BOJEOFPABFP_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DNFBIOINMKF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DNFBIOINMKF_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single HAPPPDDNBAL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HAPPPDDNBAL_OFFSET))();
	}

	static ::System::Void JOMIHGLLIEK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JOMIHGLLIEK_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single PGCJBOEKBDH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PGCJBOEKBDH_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>* FPBFMEBGOCF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FPBFMEBGOCF_OFFSET))();
	}

	static ::System::Single CCMEGLPICME()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CCMEGLPICME_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>* FKFAJBCIFGH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FKFAJBCIFGH_OFFSET))();
	}

	static ::UnityEngine::Vector2 EAOCPCCEEPI()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EAOCPCCEEPI_OFFSET))();
	}

	static ::System::Void NDHMIIICJKM(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NDHMIIICJKM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void NJOEBHELIPP(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NJOEBHELIPP_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void CKPDHLCAFCO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CKPDHLCAFCO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void HFPBMBLGMPE(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HFPBMBLGMPE_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean NIEMFNMEDFI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NIEMFNMEDFI_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>* DIECOJOCBEE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DIECOJOCBEE_OFFSET))();
	}

	static ::System::Single GGLKGIHBLMP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GGLKGIHBLMP_OFFSET))();
	}

	static ::System::Void FJDNKLMKGHG(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FJDNKLMKGHG_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void ADOJPOILLDK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ADOJPOILLDK_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void CDACCFMHDGJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CDACCFMHDGJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single DODDOHLLPGK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DODDOHLLPGK_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>* KNBCHDEPDGM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KNBCHDEPDGM_OFFSET))();
	}

	static ::System::Void DEGIEBOEAFC(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DEGIEBOEAFC_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void PMGOFLIDCFF(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PMGOFLIDCFF_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single GLFBCFGGIGA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GLFBCFGGIGA_OFFSET))();
	}

	static ::System::Void CCMGMIALADE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CCMGMIALADE_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single DBFMHHJOKKM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DBFMHHJOKKM_OFFSET))();
	}

	static ::System::Void BDJEIHNKPNL(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BDJEIHNKPNL_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single NJHEMOCNPID()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NJHEMOCNPID_OFFSET))();
	}

	static ::UnityEngine::Color NGOIAKOEHAH()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NGOIAKOEHAH_OFFSET))();
	}

	static ::System::Void PLBPJMJPJBN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PLBPJMJPJBN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single JPEOANONBPC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JPEOANONBPC_OFFSET))();
	}

	static ::System::Single HOBGCLONDKH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HOBGCLONDKH_OFFSET))();
	}

	static ::System::Void ONOOLAAEGNK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ONOOLAAEGNK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean FKLJNIAEDAN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FKLJNIAEDAN_OFFSET))();
	}

	static ::System::Void OGPMPPMLKCO(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OGPMPPMLKCO_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean DFHLJPFOBFK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DFHLJPFOBFK_OFFSET))();
	}

	static ::System::Void DGFKGKOJGMM(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DGFKGKOJGMM_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean DNELHEMPJGN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DNELHEMPJGN_OFFSET))();
	}

	static ::System::Single NJGNFPOIOJF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NJGNFPOIOJF_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>* DGICJEJIPPK()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DGICJEJIPPK_OFFSET))();
	}

	static ::System::Void OKKHKHKLKKO(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OKKHKHKLKKO_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single AEJBMCHKGEA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AEJBMCHKGEA_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>* JAOCEBDNBFI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JAOCEBDNBFI_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::MoleMole::Config::ScreenEffectType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CPDFCDONECK_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Void AGABBPKHNEA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AGABBPKHNEA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single EHAPEIDLCLI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EHAPEIDLCLI_OFFSET))();
	}

	static ::System::Boolean FFCCGDHPPEM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FFCCGDHPPEM_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>* HJLDDIGABCA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HJLDDIGABCA_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>* AFGLDNDBDGE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AFGLDNDBDGE_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>* NJFDFOKIELE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NJFDFOKIELE_OFFSET))();
	}

	static ::System::Void AACKGBPIDNB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AACKGBPIDNB_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void CFEDKHMJMGO(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CFEDKHMJMGO_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean CHCMNECGJPF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CHCMNECGJPF_OFFSET))();
	}

	static ::System::Void IDOCEAIBKDJ(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IDOCEAIBKDJ_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single PGBFHNIMCDJ()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PGBFHNIMCDJ_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>* NLEAGDMBPNP()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NLEAGDMBPNP_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>* FBALFHDOMLC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FBALFHDOMLC_OFFSET))();
	}

	static ::System::Void FMOLPGINMNJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FMOLPGINMNJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>* PBLNFAGPKLG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PBLNFAGPKLG_OFFSET))();
	}

	static ::System::Void MBODAJJKGLJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MBODAJJKGLJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::Rendering::Universal::DepthOfFieldMode FBPLEJNBBEE()
	{
		return ((::UnityEngine::Rendering::Universal::DepthOfFieldMode(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FBPLEJNBBEE_OFFSET))();
	}

	static ::System::Void GMIKNFGHENC(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GMIKNFGHENC_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void PEGLDGFLGFJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PEGLDGFLGFJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>* JIPKAHEKILD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JIPKAHEKILD_OFFSET))();
	}

	static ::System::Single EILLKEGFBNB()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EILLKEGFBNB_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>* JHMCEFIPJLC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JHMCEFIPJLC_OFFSET))();
	}

	static ::System::Void GCBILLCOEGE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GCBILLCOEGE_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void EEPHELIEJLI(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EEPHELIEJLI_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single CBGJIMFCGDI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CBGJIMFCGDI_OFFSET))();
	}

	static ::System::Single EODHKAPHIGF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_EODHKAPHIGF_OFFSET))();
	}

	static ::System::Single OBFFAEAOMBM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OBFFAEAOMBM_OFFSET))();
	}

	static ::UnityEngine::Vector2 MFJNJJJDOOM()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MFJNJJJDOOM_OFFSET))();
	}

	static ::System::Void NKHEDEAGHGJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NKHEDEAGHGJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void OMPIKKLJHPK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OMPIKKLJHPK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void GNFJPDBFMNI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GNFJPDBFMNI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>* MONOAGJFAFO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MONOAGJFAFO_OFFSET))();
	}

	static ::System::Void ECOCIIOGEGP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ECOCIIOGEGP_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void AOFJEPMEJIK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AOFJEPMEJIK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void CMKMHLHAMAF(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CMKMHLHAMAF_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single AHFPEPGBHEH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AHFPEPGBHEH_OFFSET))();
	}

	static ::System::Void JCMCCHNIILD(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JCMCCHNIILD_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>* PAINAAEFDPH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PAINAAEFDPH_OFFSET))();
	}

	static ::UnityEngine::Color DEGIFPFOLFB()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DEGIFPFOLFB_OFFSET))();
	}

	static ::System::Void PDJKCINJMAJ(::MoleMole::Config::ScreenEffectType IHIMDLELPAG)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PDJKCINJMAJ_OFFSET))(IHIMDLELPAG);
	}

	static ::System::Void IGIIPNGAMPN(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IGIIPNGAMPN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void INPEAENCEED(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_INPEAENCEED_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void AAEMLFFEECN(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AAEMLFFEECN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single DCKDFBFLNCH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DCKDFBFLNCH_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>* FCBKNGAAMAP()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FCBKNGAAMAP_OFFSET))();
	}

	static ::System::Boolean DFHNNEBFEBL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DFHNNEBFEBL_OFFSET))();
	}

	static ::System::Void PFNOOJGCIPJ(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PFNOOJGCIPJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::Rendering::Universal::FilmGrainLookup APBNBHNPAPN()
	{
		return ((::UnityEngine::Rendering::Universal::FilmGrainLookup(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_APBNBHNPAPN_OFFSET))();
	}

	static ::System::Void BAOKILDKHBG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BAOKILDKHBG_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void PGFCENJKLON(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PGFCENJKLON_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void LMHKMDEJBDJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LMHKMDEJBDJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void KOHLIDDPGBG(::UnityEngine::Rendering::Universal::FilmGrainLookup EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::Universal::FilmGrainLookup))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KOHLIDDPGBG_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DFDBPOAIBEB(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DFDBPOAIBEB_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void HFCAJOHIPJI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HFCAJOHIPJI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single AFBBJADODAI()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_AFBBJADODAI_OFFSET))();
	}

	static ::System::Void ENCEIDIHAND(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ENCEIDIHAND_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean ABDLGFOBJOK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ABDLGFOBJOK_OFFSET))();
	}

	static ::System::Void MBHHHIAFNND(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MBHHHIAFNND_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void IGDDCGNNDIF(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IGDDCGNNDIF_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single IAIABFNAHDG()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IAIABFNAHDG_OFFSET))();
	}

	static ::System::Void MGKOAACLNON(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_MGKOAACLNON_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void LANFGCEOCPG(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LANFGCEOCPG_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>* NONGPJBFLDF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NONGPJBFLDF_OFFSET))();
	}

	static ::System::Void DKLJOBMCEPE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DKLJOBMCEPE_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void CPDFCDONECK_1(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_CPDFCDONECK_1_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void ENKDEKBNMBH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ENKDEKBNMBH_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DNDPACOJOIM(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DNDPACOJOIM_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void BDGBOPDNDOO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BDGBOPDNDOO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean HHBFOHBCKEO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HHBFOHBCKEO_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>* LCPOGDCGIIL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LCPOGDCGIIL_OFFSET))();
	}

	static ::System::Single KEOHLMGGIKM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KEOHLMGGIKM_OFFSET))();
	}

	static ::UnityEngine::Vector2 HGNENLPHJLC()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_HGNENLPHJLC_OFFSET))();
	}

	static ::System::Single APKJIMIJKMO()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_APKJIMIJKMO_OFFSET))();
	}

	static ::System::Void JCLFBOGEFNB(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_JCLFBOGEFNB_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>* GFFHAHGLHGB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GFFHAHGLHGB_OFFSET))();
	}

	static ::System::Void ABOHIPFIPFD(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ABOHIPFIPFD_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void ABLNLBOOLHG(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_ABLNLBOOLHG_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>* DDOJGCMGENA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>*(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DDOJGCMGENA_OFFSET))();
	}

	static ::System::Void IDOAEJPEJID(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IDOAEJPEJID_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void LABBMDIGKHN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LABBMDIGKHN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean BOMAMLBNHKL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_BOMAMLBNHKL_OFFSET))();
	}

	static ::System::Void FLINMAOKHFN(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_FLINMAOKHFN_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Single NNNEAFBCCMB()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NNNEAFBCCMB_OFFSET))();
	}

	static ::System::Single IEBCINLKDHK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IEBCINLKDHK_OFFSET))();
	}

	static ::System::Void PPMPLBNHGOH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PPMPLBNHGOH_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void IPKLDMLDIIM(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IPKLDMLDIIM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void NPDFCEIGKBI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_NPDFCEIGKBI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void LKLCFGOLIKA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LKLCFGOLIKA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void GOKNNDFJLAJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GOKNNDFJLAJ_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void KDDACEJHBGG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KDDACEJHBGG_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DPIJMHKJPHM(::UnityEngine::Rendering::Universal::SampleDistanceMode EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::Universal::SampleDistanceMode))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DPIJMHKJPHM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DLNJHBICLPD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_DLNJHBICLPD_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single PJIKHFANGPL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_PJIKHFANGPL_OFFSET))();
	}

	static ::System::Single LIPIFBGICHJ()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LIPIFBGICHJ_OFFSET))();
	}

	static ::System::Void IFKKAKIAONN(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IFKKAKIAONN_OFFSET))(EGEGIMGMJHN);
	}
};
