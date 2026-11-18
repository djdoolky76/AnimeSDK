#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/DEJKPKPJIOF.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/GLBHPDANCJN.h"
#include "unitysdk/HAKNEAAKAMD.h"
#include "unitysdk/IHNBIBEMEME.h"
#include "unitysdk/MLIGDOAGEAI.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/GamepadButtonEx.h"
#include "unitysdk/MoleMole/InputActionDispatchPriority.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LanguageKeyboardLayoutType.h"
#include "unitysdk/MoleMole/LogicAxis2DInputType.h"
#include "unitysdk/MoleMole/LogicAxis3DInputType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/NNHOMBCMFON.h"
#include "unitysdk/PGJMBNBCJBO.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/JNKHODHDNMP.h"
#include "unitysdk/OANNBEFHHCE_DAFHAOGDHBP.h"
#include "unitysdk/PBFBDLAIJNO_BFHIEILFONF.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AGPPAOECHHO;
class AHNMKLLNGKH;
class BEJOOLGKBBD;
class BIHOFDNPBCH;
class DJBOCAJOOAP;
class GCDJNNKAEPI;
class INFCKMENOAA;
class LGINJIKKBJA;
class OANNBEFHHCE;
class OGDIIIHHMNM;
class PBFBDLAIJNO_HJOHNJBNPNC;
namespace MoleMole { class BaseInputActionEventConfig; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define PBFBDLAIJNO_ABILOIGIADO_OFFSET UNITYSDK_OFFSET(0x1730BB10)
#define PBFBDLAIJNO_ACFEDGKAHFJ_OFFSET UNITYSDK_OFFSET(0x1730FA50)
#define PBFBDLAIJNO_AHGGKIBEECE_1_OFFSET UNITYSDK_OFFSET(0x17303ED0)
#define PBFBDLAIJNO_AHGGKIBEECE_OFFSET UNITYSDK_OFFSET(0x17303E30)
#define PBFBDLAIJNO_AHJAENNMOBO_OFFSET UNITYSDK_OFFSET(0x172F5020)
#define PBFBDLAIJNO_AHMPPEPMPEE_OFFSET UNITYSDK_OFFSET(0x172F1AB0)
#define PBFBDLAIJNO_AICKPKBOBOK_OFFSET UNITYSDK_OFFSET(0x17304680)
#define PBFBDLAIJNO_AIGPIGBCHIM_OFFSET UNITYSDK_OFFSET(0x1730CA70)
#define PBFBDLAIJNO_AKDODCOAKLP_OFFSET UNITYSDK_OFFSET(0x1730C420)
#define PBFBDLAIJNO_AKHFOJIEIBC_OFFSET UNITYSDK_OFFSET(0x17304B40)
#define PBFBDLAIJNO_ANFKIMKCNCJ_OFFSET UNITYSDK_OFFSET(0x1730B680)
#define PBFBDLAIJNO_ANJBMPKFCNM_1_OFFSET UNITYSDK_OFFSET(0x172FF0C0)
#define PBFBDLAIJNO_ANJBMPKFCNM_2_OFFSET UNITYSDK_OFFSET(0x173021F0)
#define PBFBDLAIJNO_ANJBMPKFCNM_OFFSET UNITYSDK_OFFSET(0x172F4F60)
#define PBFBDLAIJNO_BAFEALGIHHL_OFFSET UNITYSDK_OFFSET(0x172FDCB0)
#define PBFBDLAIJNO_BHLIPGMLLBL_OFFSET UNITYSDK_OFFSET(0x17306DC0)
#define PBFBDLAIJNO_BKKEDJKLDMD_OFFSET UNITYSDK_OFFSET(0x17307BD0)
#define PBFBDLAIJNO_BLJCBHHKBAG_OFFSET UNITYSDK_OFFSET(0x1730DFF0)
#define PBFBDLAIJNO_BNBNDEGACON_OFFSET UNITYSDK_OFFSET(0x1730B150)
#define PBFBDLAIJNO_CBIDGDGOBGB_OFFSET UNITYSDK_OFFSET(0x17302010)
#define PBFBDLAIJNO_CBMGNAMAMPP_OFFSET UNITYSDK_OFFSET(0x1730E100)
#define PBFBDLAIJNO_CCHAOHLHOHI_1_OFFSET UNITYSDK_OFFSET(0x173023F0)
#define PBFBDLAIJNO_CCHAOHLHOHI_2_OFFSET UNITYSDK_OFFSET(0x17310540)
#define PBFBDLAIJNO_CCHAOHLHOHI_OFFSET UNITYSDK_OFFSET(0x1730C9C0)
#define PBFBDLAIJNO_CCHBKNDNAIO_1_OFFSET UNITYSDK_OFFSET(0x172F8280)
#define PBFBDLAIJNO_CCHBKNDNAIO_OFFSET UNITYSDK_OFFSET(0x172F47A0)
#define PBFBDLAIJNO_CCLLBMFHKJF_OFFSET UNITYSDK_OFFSET(0x17304EE0)
#define PBFBDLAIJNO_CEDPHPGCKMN_OFFSET UNITYSDK_OFFSET(0x1730F7D0)
#define PBFBDLAIJNO_CEEPMDDIKEI_OFFSET UNITYSDK_OFFSET(0x172FEB70)
#define PBFBDLAIJNO_CEFPPPHEPNI_OFFSET UNITYSDK_OFFSET(0x172FDBA0)
#define PBFBDLAIJNO_CHFGHKGHKEK_OFFSET UNITYSDK_OFFSET(0x17306DB0)
#define PBFBDLAIJNO_CHHNMPLPEJF_OFFSET UNITYSDK_OFFSET(0x172F78C0)
#define PBFBDLAIJNO_CIDGPOKHBKO_OFFSET UNITYSDK_OFFSET(0x173105E0)
#define PBFBDLAIJNO_CLLAFDNMPAN_OFFSET UNITYSDK_OFFSET(0x173035C0)
#define PBFBDLAIJNO_COMELNBMDCB_OFFSET UNITYSDK_OFFSET(0x172F7300)
#define PBFBDLAIJNO_CPKNJOPBNCF_1_OFFSET UNITYSDK_OFFSET(0x172F8570)
#define PBFBDLAIJNO_CPKNJOPBNCF_OFFSET UNITYSDK_OFFSET(0x172F5440)
#define PBFBDLAIJNO_DAGGIIMNGIO_OFFSET UNITYSDK_OFFSET(0x172F1A60)
#define PBFBDLAIJNO_DBFLCALCDJD_1_OFFSET UNITYSDK_OFFSET(0x1730F750)
#define PBFBDLAIJNO_DBFLCALCDJD_OFFSET UNITYSDK_OFFSET(0x17307240)
#define PBFBDLAIJNO_DBIJDKCLOOE_OFFSET UNITYSDK_OFFSET(0x172F7FA0)
#define PBFBDLAIJNO_DDJFNPHNEFE_1_OFFSET UNITYSDK_OFFSET(0x1730F030)
#define PBFBDLAIJNO_DDJFNPHNEFE_OFFSET UNITYSDK_OFFSET(0x172F4730)
#define PBFBDLAIJNO_DDNKLBBHIEK_OFFSET UNITYSDK_OFFSET(0x17303DB0)
#define PBFBDLAIJNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172F1BF0)
#define PBFBDLAIJNO_DNBMDIIAHBK_OFFSET UNITYSDK_OFFSET(0x172F6390)
#define PBFBDLAIJNO_DPNDKNFBBDK_OFFSET UNITYSDK_OFFSET(0x17305A70)
#define PBFBDLAIJNO_EACJIBHDJBC_OFFSET UNITYSDK_OFFSET(0x172F18B0)
#define PBFBDLAIJNO_EELJNNCPLOH_OFFSET UNITYSDK_OFFSET(0x173041A0)
#define PBFBDLAIJNO_EGBOIEDECCE_OFFSET UNITYSDK_OFFSET(0x1730EBD0)
#define PBFBDLAIJNO_EGHLLGKMAKI_OFFSET UNITYSDK_OFFSET(0x1730E1A0)
#define PBFBDLAIJNO_EHPMKIIAAGM_OFFSET UNITYSDK_OFFSET(0x1730CDD0)
#define PBFBDLAIJNO_EJBDKAIPGNI_OFFSET UNITYSDK_OFFSET(0x1730C820)
#define PBFBDLAIJNO_EJEJKOJLEJA_OFFSET UNITYSDK_OFFSET(0x173038C0)
#define PBFBDLAIJNO_EKOJIKPNFJI_OFFSET UNITYSDK_OFFSET(0x1730BA90)
#define PBFBDLAIJNO_EPAKHOGOMHF_OFFSET UNITYSDK_OFFSET(0x17306D60)
#define PBFBDLAIJNO_EPMFEELIAGB_OFFSET UNITYSDK_OFFSET(0x172F8740)
#define PBFBDLAIJNO_FAMGKOLPCII_OFFSET UNITYSDK_OFFSET(0x17306090)
#define PBFBDLAIJNO_FAPKOFGCAOL_OFFSET UNITYSDK_OFFSET(0x1730B1F0)
#define PBFBDLAIJNO_FBHMEOHNFAC_OFFSET UNITYSDK_OFFSET(0x1730ACF0)
#define PBFBDLAIJNO_FBOMAGCECPO_OFFSET UNITYSDK_OFFSET(0x172F6420)
#define PBFBDLAIJNO_FCCAJDDJMME_OFFSET UNITYSDK_OFFSET(0x172F8210)
#define PBFBDLAIJNO_FCCJOCIPGEN_OFFSET UNITYSDK_OFFSET(0x17302D20)
#define PBFBDLAIJNO_FDGNFLJKGPC_OFFSET UNITYSDK_OFFSET(0x172F59F0)
#define PBFBDLAIJNO_FECPFEPMCCF_OFFSET UNITYSDK_OFFSET(0x1730B360)
#define PBFBDLAIJNO_FFMEACIOBNE_OFFSET UNITYSDK_OFFSET(0x17307E80)
#define PBFBDLAIJNO_FFMEJEDCIAK_1_OFFSET UNITYSDK_OFFSET(0x1730B500)
#define PBFBDLAIJNO_FFMEJEDCIAK_OFFSET UNITYSDK_OFFSET(0x172FE600)
#define PBFBDLAIJNO_FGEEILLPEDM_OFFSET UNITYSDK_OFFSET(0x172FB990)
#define PBFBDLAIJNO_FGLHMGDBJFL_OFFSET UNITYSDK_OFFSET(0x172F5770)
#define PBFBDLAIJNO_FGMGANFKHIP_OFFSET UNITYSDK_OFFSET(0x17307F00)
#define PBFBDLAIJNO_FGPLJFFGMHC_OFFSET UNITYSDK_OFFSET(0x17302AB0)
#define PBFBDLAIJNO_FIDBGAEOAFH_OFFSET UNITYSDK_OFFSET(0x172FE330)
#define PBFBDLAIJNO_FIOIKGEMCFB_OFFSET UNITYSDK_OFFSET(0x172F77B0)
#define PBFBDLAIJNO_FKIJFNBEOIM_OFFSET UNITYSDK_OFFSET(0x1730CB90)
#define PBFBDLAIJNO_FKJFEAPFBPH_OFFSET UNITYSDK_OFFSET(0x172FF180)
#define PBFBDLAIJNO_FMHHAKPOGFI_OFFSET UNITYSDK_OFFSET(0x172F5320)
#define PBFBDLAIJNO_FMNPDAGDPDB_OFFSET UNITYSDK_OFFSET(0x1730D100)
#define PBFBDLAIJNO_FOCKALEMKCJ_1_OFFSET UNITYSDK_OFFSET(0x1730B010)
#define PBFBDLAIJNO_FOCKALEMKCJ_OFFSET UNITYSDK_OFFSET(0x172FBAC0)
#define PBFBDLAIJNO_FPJKGEBFBME_OFFSET UNITYSDK_OFFSET(0x172F2560)
#define PBFBDLAIJNO_GGFIEAICPBI_1_OFFSET UNITYSDK_OFFSET(0x1730EFB0)
#define PBFBDLAIJNO_GGFIEAICPBI_OFFSET UNITYSDK_OFFSET(0x1730B370)
#define PBFBDLAIJNO_GGPMPIJIFGD_OFFSET UNITYSDK_OFFSET(0x17308140)
#define PBFBDLAIJNO_GLFLKFGNGCP_OFFSET UNITYSDK_OFFSET(0x1730C920)
#define PBFBDLAIJNO_GMJCNDLPCDN_OFFSET UNITYSDK_OFFSET(0x172F6B40)
#define PBFBDLAIJNO_GNLKBIGMKCE_OFFSET UNITYSDK_OFFSET(0x1730BEA0)
#define PBFBDLAIJNO_GNNILHEBCCM_OFFSET UNITYSDK_OFFSET(0x172F7140)
#define PBFBDLAIJNO_GONAOCEOMDP_1_OFFSET UNITYSDK_OFFSET(0x172F6F80)
#define PBFBDLAIJNO_GONAOCEOMDP_OFFSET UNITYSDK_OFFSET(0x172F6D40)
#define PBFBDLAIJNO_GPLFPJAGBBE_OFFSET UNITYSDK_OFFSET(0x17305890)
#define PBFBDLAIJNO_HAKDEGEGCHD_OFFSET UNITYSDK_OFFSET(0x1730FFD0)
#define PBFBDLAIJNO_HBJDLLHHPBN_OFFSET UNITYSDK_OFFSET(0x173030F0)
#define PBFBDLAIJNO_HGMPDAFAOKC_OFFSET UNITYSDK_OFFSET(0x1730D170)
#define PBFBDLAIJNO_HHAHKCEILPB_OFFSET UNITYSDK_OFFSET(0x172F8310)
#define PBFBDLAIJNO_HIHLAGLJFON_OFFSET UNITYSDK_OFFSET(0x17305070)
#define PBFBDLAIJNO_HPAGOLFGFLE_OFFSET UNITYSDK_OFFSET(0x172F55F0)
#define PBFBDLAIJNO_ICODANAONCO_OFFSET UNITYSDK_OFFSET(0x17310350)
#define PBFBDLAIJNO_IDOIHCPGGEF_OFFSET UNITYSDK_OFFSET(0x172F7B70)
#define PBFBDLAIJNO_IFMGHHDHCPI_OFFSET UNITYSDK_OFFSET(0x1730BFD0)
#define PBFBDLAIJNO_IGDDKBINLJN_OFFSET UNITYSDK_OFFSET(0x172F53D0)
#define PBFBDLAIJNO_IJJNPLJFCLK_OFFSET UNITYSDK_OFFSET(0x172FDC30)
#define PBFBDLAIJNO_IKAGHPHJADG_OFFSET UNITYSDK_OFFSET(0x172F69D0)
#define PBFBDLAIJNO_IKGLJIJGIKJ_OFFSET UNITYSDK_OFFSET(0x1730B6D0)
#define PBFBDLAIJNO_IKMLMABLHON_OFFSET UNITYSDK_OFFSET(0x17302D30)
#define PBFBDLAIJNO_IMKABKCALDJ_OFFSET UNITYSDK_OFFSET(0x172FDA10)
#define PBFBDLAIJNO_INOMAFNDMID_OFFSET UNITYSDK_OFFSET(0x172FFF70)
#define PBFBDLAIJNO_IPNMLDCAJDL_OFFSET UNITYSDK_OFFSET(0x1730E260)
#define PBFBDLAIJNO_JAIFMHGCFJB_OFFSET UNITYSDK_OFFSET(0x172F6820)
#define PBFBDLAIJNO_JDCEKIAAKON_OFFSET UNITYSDK_OFFSET(0x17310100)
#define PBFBDLAIJNO_JEKODBMLLNC_OFFSET UNITYSDK_OFFSET(0x172FFD20)
#define PBFBDLAIJNO_JMFCKJEFCDP_OFFSET UNITYSDK_OFFSET(0x172F2240)
#define PBFBDLAIJNO_JPGOMAKECBG_OFFSET UNITYSDK_OFFSET(0x1730EBC0)
#define PBFBDLAIJNO_JPNGBBKOCIO_OFFSET UNITYSDK_OFFSET(0x1730C680)
#define PBFBDLAIJNO_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x172F6AF0)
#define PBFBDLAIJNO_KBHGGEPDINN_OFFSET UNITYSDK_OFFSET(0x1730EF10)
#define PBFBDLAIJNO_KCIHEOGACFJ_OFFSET UNITYSDK_OFFSET(0x172FE5F0)
#define PBFBDLAIJNO_KEBFGKMNJKO_OFFSET UNITYSDK_OFFSET(0x1730DCB0)
#define PBFBDLAIJNO_KFBDKMDKCJF_OFFSET UNITYSDK_OFFSET(0x17303360)
#define PBFBDLAIJNO_KFDCJBALABH_OFFSET UNITYSDK_OFFSET(0x172F1A20)
#define PBFBDLAIJNO_KIGCEFDPHDJ_OFFSET UNITYSDK_OFFSET(0x1730B0B0)
#define PBFBDLAIJNO_KMIDIGCENKI_OFFSET UNITYSDK_OFFSET(0x1730E980)
#define PBFBDLAIJNO_KNGGNFLIOOD_OFFSET UNITYSDK_OFFSET(0x172FF310)
#define PBFBDLAIJNO_KOFCDKMPMNA_OFFSET UNITYSDK_OFFSET(0x172F8730)
#define PBFBDLAIJNO_KPNBBCDCPOA_OFFSET UNITYSDK_OFFSET(0x1730E760)
#define PBFBDLAIJNO_LFPDHMEAAJO_1_OFFSET UNITYSDK_OFFSET(0x1730B0C0)
#define PBFBDLAIJNO_LFPDHMEAAJO_OFFSET UNITYSDK_OFFSET(0x172F8790)
#define PBFBDLAIJNO_LGMIMCPGPDJ_OFFSET UNITYSDK_OFFSET(0x17302B50)
#define PBFBDLAIJNO_LOICCOGOKFE_OFFSET UNITYSDK_OFFSET(0x1730DFB0)
#define PBFBDLAIJNO_MAFAKNJKIGH_OFFSET UNITYSDK_OFFSET(0x1730D390)
#define PBFBDLAIJNO_MALFMKEDGNO_OFFSET UNITYSDK_OFFSET(0x1730A980)
#define PBFBDLAIJNO_MBHIMBEDOEB_OFFSET UNITYSDK_OFFSET(0x173055D0)
#define PBFBDLAIJNO_MDGCKIAAKPF_OFFSET UNITYSDK_OFFSET(0x172F63B0)
#define PBFBDLAIJNO_MENCFODIKGL_OFFSET UNITYSDK_OFFSET(0x17304130)
#define PBFBDLAIJNO_MEOJOJBGDPL_OFFSET UNITYSDK_OFFSET(0x172F6AE0)
#define PBFBDLAIJNO_MGLBIDAPBEH_1_OFFSET UNITYSDK_OFFSET(0x1730C930)
#define PBFBDLAIJNO_MGLBIDAPBEH_OFFSET UNITYSDK_OFFSET(0x172F4100)
#define PBFBDLAIJNO_MHNLFMDODGE_OFFSET UNITYSDK_OFFSET(0x1730F170)
#define PBFBDLAIJNO_MIOJCIPHKDH_OFFSET UNITYSDK_OFFSET(0x17310360)
#define PBFBDLAIJNO_MKFGHNPILEO_OFFSET UNITYSDK_OFFSET(0x172F7C90)
#define PBFBDLAIJNO_MKKCLDNOLAA_OFFSET UNITYSDK_OFFSET(0x172F30A0)
#define PBFBDLAIJNO_MLAMPKNKOEN_OFFSET UNITYSDK_OFFSET(0x173073C0)
#define PBFBDLAIJNO_MNAMCNJODED_OFFSET UNITYSDK_OFFSET(0x173043C0)
#define PBFBDLAIJNO_MOGAFMBNPAG_OFFSET UNITYSDK_OFFSET(0x173076A0)
#define PBFBDLAIJNO_MPNMJNEBPGN_OFFSET UNITYSDK_OFFSET(0x17305230)
#define PBFBDLAIJNO_NBPDDCILGAH_1_OFFSET UNITYSDK_OFFSET(0x1730F5E0)
#define PBFBDLAIJNO_NBPDDCILGAH_OFFSET UNITYSDK_OFFSET(0x1730F570)
#define PBFBDLAIJNO_NCCKCPLPHEA_OFFSET UNITYSDK_OFFSET(0x1730AD60)
#define PBFBDLAIJNO_NDIDNCAEALN_1_OFFSET UNITYSDK_OFFSET(0x17307500)
#define PBFBDLAIJNO_NDIDNCAEALN_OFFSET UNITYSDK_OFFSET(0x17307480)
#define PBFBDLAIJNO_NGIMMBHPHNM_1_OFFSET UNITYSDK_OFFSET(0x17310160)
#define PBFBDLAIJNO_NGIMMBHPHNM_OFFSET UNITYSDK_OFFSET(0x172F5170)
#define PBFBDLAIJNO_NGNPAADFILO_OFFSET UNITYSDK_OFFSET(0x17301D00)
#define PBFBDLAIJNO_NKGOFPEIDLJ_OFFSET UNITYSDK_OFFSET(0x172F2460)
#define PBFBDLAIJNO_NLJMOEJOIOO_OFFSET UNITYSDK_OFFSET(0x172FD590)
#define PBFBDLAIJNO_NLKMHLHLENC_OFFSET UNITYSDK_OFFSET(0x172F8BA0)
#define PBFBDLAIJNO_OGOMAOJPBAH_OFFSET UNITYSDK_OFFSET(0x172F63A0)
#define PBFBDLAIJNO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1730D180)
#define PBFBDLAIJNO_OKKADEFGJDP_OFFSET UNITYSDK_OFFSET(0x1730AF70)
#define PBFBDLAIJNO_OKLPBNJIFHM_OFFSET UNITYSDK_OFFSET(0x172FE930)
#define PBFBDLAIJNO_OMCOBCMJFEO_OFFSET UNITYSDK_OFFSET(0x172F7B60)
#define PBFBDLAIJNO_ONCREATE_OFFSET UNITYSDK_OFFSET(0x172F15E0)
#define PBFBDLAIJNO_ONSTART_OFFSET UNITYSDK_OFFSET(0x172F2500)
#define PBFBDLAIJNO_PBDEPGNBKAP_OFFSET UNITYSDK_OFFSET(0x172FE110)
#define PBFBDLAIJNO_PBGLBALNEMJ_OFFSET UNITYSDK_OFFSET(0x17304E40)
#define PBFBDLAIJNO_PFMPKGOKBCN_OFFSET UNITYSDK_OFFSET(0x173104E0)
#define PBFBDLAIJNO_PIOCHNGKLDC_OFFSET UNITYSDK_OFFSET(0x172F8DB0)
#define PBFBDLAIJNO_PKJPAOKIGND_OFFSET UNITYSDK_OFFSET(0x17307D50)
#define PBFBDLAIJNO_PMHJAHILPEM_OFFSET UNITYSDK_OFFSET(0x1730AE70)
#define PBFBDLAIJNO_PPHKNDPKNBP_OFFSET UNITYSDK_OFFSET(0x1730B910)
#define PBFBDLAIJNO__CTOR_OFFSET UNITYSDK_OFFSET(0x172F34F0)

inline static constexpr unsigned int PBFBDLAIJNO_TypeDefinitionIndex = 57119;

class PBFBDLAIJNO
{
public:
	static ::PBFBDLAIJNO_HJOHNJBNPNC** StaticGet_HNLMEAMHOIB()
	{
		return (::PBFBDLAIJNO_HJOHNJBNPNC**)Il2CppClass::FromTypeDefinitionIndex(PBFBDLAIJNO_TypeDefinitionIndex)->GetStaticField(0x4F8A0);
	}
	// static const ::System::Single ONOCOMPEHJJ; // 0x0
	::OGDIIIHHMNM* JBDIEAMJDFB; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::LowLevel::GamepadButton>* KOHFEOLJGAN; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::GamepadButtonEx, ::System::Single>* PFMKGKLDMLJ; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicAxis2DInputType, ::UnityEngine::Vector2>* KHHBBLKPFCK; // 0x28
	::GCDJNNKAEPI* GCGPGDPECGH; // 0x30
	::System::Action_2<::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*, ::System::Single>* PGKCKACHDCM; // 0x38
	::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::Boolean>* JOHKKLELAMC; // 0x40
	::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::LowLevel::GamepadButton>* DJLBGLDFHIH; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>* KFDIDFIILIO; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* HOHKDCJIANK; // 0x58
	::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Key>* NOPBALJPHIB; // 0x60
	::OANNBEFHHCE* _IBFGJCPCIPG_k__BackingField; // 0x68
	::AHNMKLLNGKH* CLKJMCKCIOK; // 0x70
	::System::Action_1<::System::Single>* MLJMPBDNEBL; // 0x78
	::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::LowLevel::MouseButton>* KAEIDAJOEMJ; // 0x80
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::NNHOMBCMFON>* EDAJGJDCPNJ; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::DEJKPKPJIOF>* KFDFFGAPPGK; // 0x90
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::PGJMBNBCJBO>* NKGNFAAFMJN; // 0x98
	::BIHOFDNPBCH* PKDLNNHIICC; // 0xA0
	::Foundation::AssetRequestHandle KEAGADICHIK; // 0xA8
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::LowLevel::MouseButton>* MNJMCIEBFLG; // 0xC8
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::System::Single>* HLENOKOHPDI; // 0xD0
	::BEJOOLGKBBD* IAKGDPINKNI; // 0xD8
	::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* EODPLOKDMCB; // 0xE0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::Boolean>* EMIEJBGEHEO; // 0xE8
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::LowLevel::GamepadButton>* LGBBILFMIJA; // 0xF0
	::UnityEngine::Material* PCBLFOAMKJP; // 0xF8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::INFCKMENOAA*>* FPJOGMFMCGN; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GBMFIAMNCBL; // 0x108
	::System::Collections::Generic::Dictionary_2<::MoleMole::GamepadButtonEx, ::DEJKPKPJIOF>* OCENEKNIDGI; // 0x110
	::AGPPAOECHHO* PCONKKPKPJE; // 0x118
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::Key>* IBDBBOEJJOJ; // 0x120
	::GCDJNNKAEPI* CBOEAEBHABI; // 0x128
	::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::Boolean>* LMBFPPBKGIH; // 0x130
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::LowLevel::MouseButton>* EPCHJAJIAHK; // 0x138
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::Key>* KEFODIACLGN; // 0x140
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* CBPADFHGHCN; // 0x148
	::AIOFAMODPOO LIEOLDPMKNE; // 0x150
	::System::Boolean EBCCDHCGJOD; // 0x154
	::System::Boolean PPMKABPEKPO; // 0x155
	::System::Byte _padding0[0x2];
	::System::Single PHCJFJDJLIA; // 0x158
	::System::Boolean JOHNMDJCOPE; // 0x15C
	::System::Boolean BEJGIOHNHFC; // 0x15D
	::System::Boolean GEJDJLNLFGI; // 0x15E
	::System::Boolean GMGOKHBLEDM; // 0x15F
	::System::Single JIKPODMCFFL; // 0x160
	::MLIGDOAGEAI DKFFFHGFLBH; // 0x164
	::System::Single EOIIIDLEGAF; // 0x168
	::System::Single KNMOBDEHNBL; // 0x16C
	::System::Single IPMNBCHODDE; // 0x170
	::System::Single FJOLALJLKPA; // 0x174
	::HAKNEAAKAMD MOGLKFGDANB; // 0x178
	::System::Single HHMODCCJFKH; // 0x17C
	::System::Single OGIEHILHHEO; // 0x180
	::System::Single MKMIKOEECPO; // 0x184
	::System::Int32 BHGFJFODPMF; // 0x188
	::System::Single LNKKPMOKMNK; // 0x18C
	::System::Boolean AAGCHOJBBDC; // 0x190
	::System::Boolean BADIOLCKINJ; // 0x191
	::System::Boolean CIJLBHMPEAK; // 0x192
	::System::Byte _padding1[0x1];
	::System::Single ODCKAALOGMJ; // 0x194
	::System::Single AEEOKCMPICO; // 0x198
	::System::Boolean DDBAKPPMECB; // 0x19C
	::System::Boolean CDBHPBGEKAI; // 0x19D
	::System::Boolean JOGAHLEEGPP; // 0x19E
	::System::Boolean IECDPDHNCEJ; // 0x19F
	::System::Boolean HCDPCGOJNHK; // 0x1A0
	::System::Boolean IDFKFFLPNBH; // 0x1A1
	::System::Boolean JHDGEOHHPAG; // 0x1A2
	::System::Boolean EAKPOGJANEN; // 0x1A3
	::System::Single BMKKLLDMHON; // 0x1A4
	::System::Boolean BFHILJPMAHD; // 0x1A8
	::System::Boolean FCFNPPALLEJ; // 0x1A9
	::System::Boolean EBJEBEJDODD; // 0x1AA
	::System::Boolean IFLGLGJEKOM; // 0x1AB
	::System::Single KKNBBOKHPFP; // 0x1AC
	::System::Single IHLENMPAJJH; // 0x1B0
	::System::Int32 MGKDGBPEKNI; // 0x1B4
	::System::Int32 COFLBEIEBNG; // 0x1B8
	::MoleMole::LanguageKeyboardLayoutType FAIGPDMFPCP; // 0x1BC
	::System::Int32 PECHMEOKHKB; // 0x1C0
	::System::Single JCHAABEEMEO; // 0x1C4
	::System::Boolean BDCEAHEGECA; // 0x1C8
	::System::Boolean JNEMKNKMMLO; // 0x1C9
	::System::Boolean OGIOJICPMIN; // 0x1CA
	::System::Boolean OOLDNLLKEBO; // 0x1CB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DISPOSE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ONSTART_OFFSET))(this);
	}

	::UnityEngine::Vector2 MGLBIDAPBEH(::MoleMole::InputActionEvent MLNBANAGAEE, ::GLBHPDANCJN& OLALOFPBIDI, ::System::Boolean BDOHFCEIIDB)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::InputActionEvent, ::GLBHPDANCJN&, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MGLBIDAPBEH_OFFSET))(this, MLNBANAGAEE, OLALOFPBIDI, BDOHFCEIIDB);
	}

	::System::Int32 NGIMMBHPHNM(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NGIMMBHPHNM_OFFSET))(this, GLIPLEKODIL);
	}

	::System::Void FMHHAKPOGFI(::System::Boolean ALJGAOLIDKD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FMHHAKPOGFI_OFFSET))(this, ALJGAOLIDKD);
	}

	::System::Int32 CPKNJOPBNCF(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CPKNJOPBNCF_OFFSET))(this, GLIPLEKODIL);
	}

	::System::Boolean HPAGOLFGFLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HPAGOLFGFLE_OFFSET))(this);
	}

	::System::Void FDGNFLJKGPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FDGNFLJKGPC_OFFSET))(this);
	}

	::System::Boolean DNBMDIIAHBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DNBMDIIAHBK_OFFSET))(this);
	}

	::System::Boolean OGOMAOJPBAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_OGOMAOJPBAH_OFFSET))(this);
	}

	::System::Boolean MDGCKIAAKPF(::System::Int32 BAKJOJBPLFD, ::OANNBEFHHCE_DAFHAOGDHBP& BNHBALPDNIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OANNBEFHHCE_DAFHAOGDHBP&))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MDGCKIAAKPF_OFFSET))(this, BAKJOJBPLFD, BNHBALPDNIP);
	}

	::System::Void FBOMAGCECPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FBOMAGCECPO_OFFSET))(this);
	}

	::System::Void JAIFMHGCFJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_JAIFMHGCFJB_OFFSET))(this);
	}

	::System::Int32 IKAGHPHJADG(::AIOFAMODPOO JGGPPJNIAKN, ::MoleMole::LogicButtonInputType KKKMLLLKPHB)
	{
		return ((::System::Int32(*)(::PVOID, ::AIOFAMODPOO, ::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IKAGHPHJADG_OFFSET))(this, JGGPPJNIAKN, KKKMLLLKPHB);
	}

	::System::Void MEOJOJBGDPL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MEOJOJBGDPL_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBFBDLAIJNO_JPOLBPCHLHK_OFFSET))();
	}

	::UnityEngine::InputSystem::Controls::ButtonControl* GMJCNDLPCDN(::UnityEngine::InputSystem::LowLevel::GamepadButton DFOLAGMLFPB, ::System::Boolean INOEPCNMFAP)
	{
		return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GMJCNDLPCDN_OFFSET))(this, DFOLAGMLFPB, INOEPCNMFAP);
	}

	::System::Int32 GONAOCEOMDP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GONAOCEOMDP_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Boolean GNNILHEBCCM(::System::Boolean CNDKPPBAKBF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GNNILHEBCCM_OFFSET))(this, CNDKPPBAKBF);
	}

	::System::Void COMELNBMDCB(::System::Boolean MKADCPOMAGK, ::System::Boolean HDPKFPHECJD, ::System::Boolean ONOGNBODIPB, ::System::Boolean NOMCLCBIALF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_COMELNBMDCB_OFFSET))(this, MKADCPOMAGK, HDPKFPHECJD, ONOGNBODIPB, NOMCLCBIALF);
	}

	::System::Boolean CHHNMPLPEJF(::UnityEngine::InputSystem::LowLevel::GamepadButton NKAAMNHAIEM, ::MoleMole::ButtonPressType JIHLGFDODBC, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM, ::System::Boolean INOEPCNMFAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton, ::MoleMole::ButtonPressType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CHHNMPLPEJF_OFFSET))(this, NKAAMNHAIEM, JIHLGFDODBC, PNAAADIHPFF, KICEFENNFIM, INOEPCNMFAP);
	}

	::System::Void OMCOBCMJFEO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_OMCOBCMJFEO_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector2 CCHBKNDNAIO(::MoleMole::LogicAxis2DInputType DCCHNHHGCDB, ::GLBHPDANCJN& OLALOFPBIDI, ::System::Boolean KICEFENNFIM, ::System::Boolean BDOHFCEIIDB, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::LogicAxis2DInputType, ::GLBHPDANCJN&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CCHBKNDNAIO_OFFSET))(this, DCCHNHHGCDB, OLALOFPBIDI, KICEFENNFIM, BDOHFCEIIDB, DAMLAJIKKNE);
	}

	::System::Boolean MKFGHNPILEO(::AIOFAMODPOO EKKNMEPHBKP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIOFAMODPOO))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MKFGHNPILEO_OFFSET))(this, EKKNMEPHBKP);
	}

	::System::Void DBIJDKCLOOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DBIJDKCLOOE_OFFSET))(this);
	}

	::System::Void FCCAJDDJMME(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FCCAJDDJMME_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector2 CCHBKNDNAIO_1(::MoleMole::LogicAxis2DInputType DCCHNHHGCDB, ::System::Boolean KICEFENNFIM, ::System::Boolean BDOHFCEIIDB, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::LogicAxis2DInputType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CCHBKNDNAIO_1_OFFSET))(this, DCCHNHHGCDB, KICEFENNFIM, BDOHFCEIIDB, DAMLAJIKKNE);
	}

	::System::Void HHAHKCEILPB(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::UnityEngine::InputSystem::Key KLNJAFHIDJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HHAHKCEILPB_OFFSET))(this, KKKMLLLKPHB, KLNJAFHIDJM);
	}

	::System::Int32 CPKNJOPBNCF_1(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CPKNJOPBNCF_1_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Boolean KOFCDKMPMNA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KOFCDKMPMNA_OFFSET))(this);
	}

	static ::System::Boolean EPMFEELIAGB(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EPMFEELIAGB_OFFSET))(GLIPLEKODIL);
	}

	::System::Boolean LFPDHMEAAJO(::MoleMole::InputActionEvent MLNBANAGAEE, ::MoleMole::ButtonPressType JIHLGFDODBC, ::GLBHPDANCJN& OLALOFPBIDI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::MoleMole::ButtonPressType, ::GLBHPDANCJN&))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_LFPDHMEAAJO_OFFSET))(this, MLNBANAGAEE, JIHLGFDODBC, OLALOFPBIDI);
	}

	static ::MoleMole::LogicButtonInputType PIOCHNGKLDC(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::LogicButtonInputType(*)(::System::String*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_PIOCHNGKLDC_OFFSET))(HIAIKHDFCLN);
	}

	::UnityEngine::InputSystem::Controls::ButtonControl* FGEEILLPEDM(::MoleMole::GamepadButtonEx DFOLAGMLFPB)
	{
		return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::MoleMole::GamepadButtonEx))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FGEEILLPEDM_OFFSET))(this, DFOLAGMLFPB);
	}

	::UnityEngine::Vector3 FOCKALEMKCJ(::MoleMole::LogicAxis3DInputType LOIIDEDJIOJ, ::GLBHPDANCJN& OLALOFPBIDI, ::System::Boolean KICEFENNFIM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::LogicAxis3DInputType, ::GLBHPDANCJN&, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FOCKALEMKCJ_OFFSET))(this, LOIIDEDJIOJ, OLALOFPBIDI, KICEFENNFIM);
	}

	::System::Void FIDBGAEOAFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FIDBGAEOAFH_OFFSET))(this);
	}

	::System::Boolean KCIHEOGACFJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KCIHEOGACFJ_OFFSET))(this);
	}

	::System::Boolean FFMEJEDCIAK(::UnityEngine::UI::Button* JEPEJDNMFOK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Button*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FFMEJEDCIAK_OFFSET))(this, JEPEJDNMFOK);
	}

	::System::Boolean OKLPBNJIFHM(::System::Boolean KICEFENNFIM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_OKLPBNJIFHM_OFFSET))(this, KICEFENNFIM);
	}

	::System::Void CEEPMDDIKEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CEEPMDDIKEI_OFFSET))(this);
	}

	::AGPPAOECHHO* FKJFEAPFBPH()
	{
		return ((::AGPPAOECHHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FKJFEAPFBPH_OFFSET))(this);
	}

	::AHNMKLLNGKH* IJJNPLJFCLK()
	{
		return ((::AHNMKLLNGKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IJJNPLJFCLK_OFFSET))(this);
	}

	::System::Void KNGGNFLIOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KNGGNFLIOOD_OFFSET))(this);
	}

	::System::Void NGNPAADFILO(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NGNPAADFILO_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void INOMAFNDMID(::MoleMole::UIBaseController* NCIMBHDKIJM, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* NCHDBNBFHDB, ::System::Collections::Generic::List_1<::MoleMole::BaseInputActionEventConfig*>* FIOLKHIHICP, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* NJGFNIHMGKO, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* BAKNDNEDMLI, ::MoleMole::InputActionDispatchPriority KEBPABDDGNH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*, ::System::Collections::Generic::List_1<::MoleMole::BaseInputActionEventConfig*>*, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*, ::MoleMole::InputActionDispatchPriority))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_INOMAFNDMID_OFFSET))(this, NCIMBHDKIJM, NCHDBNBFHDB, FIOLKHIHICP, NJGFNIHMGKO, BAKNDNEDMLI, KEBPABDDGNH);
	}

	::UnityEngine::InputSystem::Controls::ButtonControl* FGPLJFFGMHC(::UnityEngine::InputSystem::LowLevel::MouseButton NKAAMNHAIEM)
	{
		return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FGPLJFFGMHC_OFFSET))(this, NKAAMNHAIEM);
	}

	::UnityEngine::InputSystem::Controls::ButtonControl* LGMIMCPGPDJ(::UnityEngine::InputSystem::Key NKAAMNHAIEM)
	{
		return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_LGMIMCPGPDJ_OFFSET))(this, NKAAMNHAIEM);
	}

	::HAKNEAAKAMD DAGGIIMNGIO()
	{
		return ((::HAKNEAAKAMD(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DAGGIIMNGIO_OFFSET))(this);
	}

	::System::Boolean FCCJOCIPGEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FCCJOCIPGEN_OFFSET))(this);
	}

	::System::Void IKMLMABLHON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IKMLMABLHON_OFFSET))(this);
	}

	::System::Void AHMPPEPMPEE(::System::Boolean IJNNCNALNGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_AHMPPEPMPEE_OFFSET))(this, IJNNCNALNGM);
	}

	::System::Void HBJDLLHHPBN(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::UnityEngine::InputSystem::LowLevel::MouseButton KLNJAFHIDJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HBJDLLHHPBN_OFFSET))(this, KKKMLLLKPHB, KLNJAFHIDJM);
	}

	::System::Boolean KFBDKMDKCJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KFBDKMDKCJF_OFFSET))(this);
	}

	::System::Void CLLAFDNMPAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CLLAFDNMPAN_OFFSET))(this);
	}

	::System::Void EJEJKOJLEJA(::System::Boolean BDHFIOAFHHG, ::System::Boolean NAPHFFLCOID, ::System::Boolean MHFECPPAKPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EJEJKOJLEJA_OFFSET))(this, BDHFIOAFHHG, NAPHFFLCOID, MHFECPPAKPE);
	}

	static ::System::Boolean DDNKLBBHIEK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DDNKLBBHIEK_OFFSET))();
	}

	::UnityEngine::Vector3 AHGGKIBEECE(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_AHGGKIBEECE_OFFSET))(this, MLNBANAGAEE);
	}

	::HAKNEAAKAMD CBIDGDGOBGB()
	{
		return ((::HAKNEAAKAMD(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CBIDGDGOBGB_OFFSET))(this);
	}

	::System::Void MENCFODIKGL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MENCFODIKGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EELJNNCPLOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EELJNNCPLOH_OFFSET))(this);
	}

	::System::Void MNAMCNJODED(::System::Single PMNLNNGEIFM, ::System::Boolean HDPKFPHECJD, ::System::Boolean ONOGNBODIPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MNAMCNJODED_OFFSET))(this, PMNLNNGEIFM, HDPKFPHECJD, ONOGNBODIPB);
	}

	::System::Boolean PBDEPGNBKAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_PBDEPGNBKAP_OFFSET))(this);
	}

	::System::Boolean CCLLBMFHKJF(::MoleMole::LogicButtonInputType DALJDJDLHEA, ::MoleMole::ButtonPressType JIHLGFDODBC, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::MoleMole::ButtonPressType, ::System::Boolean&))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CCLLBMFHKJF_OFFSET))(this, DALJDJDLHEA, JIHLGFDODBC, IGAAKDOIPNN);
	}

	::System::Void HIHLAGLJFON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HIHLAGLJFON_OFFSET))(this);
	}

	::System::Void FAMGKOLPCII(::UnityEngine::InputSystem::LowLevel::InputEventPtr DCKKHKOIMGO, ::UnityEngine::InputSystem::InputDevice* DLLKBJGGPAE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FAMGKOLPCII_OFFSET))(this, DCKKHKOIMGO, DLLKBJGGPAE);
	}

	::HAKNEAAKAMD CHFGHKGHKEK()
	{
		return ((::HAKNEAAKAMD(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CHFGHKGHKEK_OFFSET))(this);
	}

	::System::Boolean BHLIPGMLLBL(::UnityEngine::InputSystem::LowLevel::MouseButton NKAAMNHAIEM, ::MoleMole::ButtonPressType JIHLGFDODBC, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::MouseButton, ::MoleMole::ButtonPressType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_BHLIPGMLLBL_OFFSET))(this, NKAAMNHAIEM, JIHLGFDODBC, PNAAADIHPFF, KICEFENNFIM);
	}

	::System::Boolean DBFLCALCDJD(::UnityEngine::UI::Extension::UIButtonBase* JEPEJDNMFOK, ::System::Boolean NNCPEPJJDEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DBFLCALCDJD_OFFSET))(this, JEPEJDNMFOK, NNCPEPJJDEA);
	}

	::IHNBIBEMEME MLAMPKNKOEN()
	{
		return ((::IHNBIBEMEME(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MLAMPKNKOEN_OFFSET))(this);
	}

	::System::Boolean NDIDNCAEALN(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NDIDNCAEALN_OFFSET))(this, MLNBANAGAEE);
	}

	::AIOFAMODPOO MOGAFMBNPAG(::System::Boolean CHFFAAMLBMP)
	{
		return ((::AIOFAMODPOO(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MOGAFMBNPAG_OFFSET))(this, CHFFAAMLBMP);
	}

	::System::Boolean BKKEDJKLDMD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_BKKEDJKLDMD_OFFSET))(this);
	}

	::System::Void PKJPAOKIGND(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_PKJPAOKIGND_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Boolean FFMEACIOBNE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FFMEACIOBNE_OFFSET))();
	}

	::System::Void FGMGANFKHIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FGMGANFKHIP_OFFSET))(this);
	}

	::System::Boolean FBHMEOHNFAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FBHMEOHNFAC_OFFSET))(this);
	}

	::GCDJNNKAEPI* BAFEALGIHHL()
	{
		return ((::GCDJNNKAEPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_BAFEALGIHHL_OFFSET))(this);
	}

	::System::Boolean ANJBMPKFCNM(::MoleMole::LogicButtonInputType DFOLAGMLFPB, ::MoleMole::ButtonPressType JIHLGFDODBC, ::GLBHPDANCJN& OLALOFPBIDI, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::MoleMole::ButtonPressType, ::GLBHPDANCJN&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ANJBMPKFCNM_OFFSET))(this, DFOLAGMLFPB, JIHLGFDODBC, OLALOFPBIDI, PNAAADIHPFF, KICEFENNFIM, DAMLAJIKKNE);
	}

	::System::Boolean GGPMPIJIFGD(::AIOFAMODPOO JGGPPJNIAKN, ::PBFBDLAIJNO_BFHIEILFONF& param_1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIOFAMODPOO, ::PBFBDLAIJNO_BFHIEILFONF&))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GGPMPIJIFGD_OFFSET))(this, JGGPPJNIAKN, param_1);
	}

	::GCDJNNKAEPI* NCCKCPLPHEA()
	{
		return ((::GCDJNNKAEPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NCCKCPLPHEA_OFFSET))(this);
	}

	::UnityEngine::Vector3 FOCKALEMKCJ_1(::MoleMole::LogicAxis3DInputType LOIIDEDJIOJ, ::System::Boolean KICEFENNFIM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::LogicAxis3DInputType, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FOCKALEMKCJ_1_OFFSET))(this, LOIIDEDJIOJ, KICEFENNFIM);
	}

	::System::Boolean KIGCEFDPHDJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KIGCEFDPHDJ_OFFSET))(this);
	}

	::System::Boolean LFPDHMEAAJO_1(::MoleMole::InputActionEvent MLNBANAGAEE, ::MoleMole::ButtonPressType JIHLGFDODBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::MoleMole::ButtonPressType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_LFPDHMEAAJO_1_OFFSET))(this, MLNBANAGAEE, JIHLGFDODBC);
	}

	::System::Void BNBNDEGACON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_BNBNDEGACON_OFFSET))(this);
	}

	::System::Boolean PBGLBALNEMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_PBGLBALNEMJ_OFFSET))(this);
	}

	::System::Int32 OKKADEFGJDP(::AIOFAMODPOO JGGPPJNIAKN, ::MoleMole::LogicButtonInputType KKKMLLLKPHB)
	{
		return ((::System::Int32(*)(::PVOID, ::AIOFAMODPOO, ::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_OKKADEFGJDP_OFFSET))(this, JGGPPJNIAKN, KKKMLLLKPHB);
	}

	::System::Boolean MPNMJNEBPGN(::System::Boolean KICEFENNFIM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MPNMJNEBPGN_OFFSET))(this, KICEFENNFIM);
	}

	::System::Boolean ANJBMPKFCNM_1(::MoleMole::LogicButtonInputType DFOLAGMLFPB, ::MoleMole::ButtonPressType JIHLGFDODBC, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::MoleMole::ButtonPressType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ANJBMPKFCNM_1_OFFSET))(this, DFOLAGMLFPB, JIHLGFDODBC, PNAAADIHPFF, KICEFENNFIM, DAMLAJIKKNE);
	}

	::UnityEngine::Material* FAPKOFGCAOL()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FAPKOFGCAOL_OFFSET))(this);
	}

	::System::Boolean FECPFEPMCCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FECPFEPMCCF_OFFSET))(this);
	}

	::System::Boolean GGFIEAICPBI(::UnityEngine::UI::Extension::UIButtonBase* JEPEJDNMFOK, ::System::Boolean NNCPEPJJDEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GGFIEAICPBI_OFFSET))(this, JEPEJDNMFOK, NNCPEPJJDEA);
	}

	static ::System::Boolean ANFKIMKCNCJ(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ANFKIMKCNCJ_OFFSET))(GLIPLEKODIL);
	}

	::System::Void IKGLJIJGIKJ(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::UnityEngine::InputSystem::LowLevel::MouseButton KLNJAFHIDJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IKGLJIJGIKJ_OFFSET))(this, KKKMLLLKPHB, KLNJAFHIDJM);
	}

	::System::Boolean PPHKNDPKNBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_PPHKNDPKNBP_OFFSET))(this);
	}

	static ::System::Boolean EKOJIKPNFJI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EKOJIKPNFJI_OFFSET))();
	}

	::System::Boolean ANJBMPKFCNM_2(::MoleMole::LogicButtonInputType DFOLAGMLFPB, ::MoleMole::ButtonPressType JIHLGFDODBC, ::JNKHODHDNMP& FEFPLIFCFLO, ::GLBHPDANCJN& OLALOFPBIDI, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::MoleMole::ButtonPressType, ::JNKHODHDNMP&, ::GLBHPDANCJN&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ANJBMPKFCNM_2_OFFSET))(this, DFOLAGMLFPB, JIHLGFDODBC, FEFPLIFCFLO, OLALOFPBIDI, PNAAADIHPFF, KICEFENNFIM, DAMLAJIKKNE);
	}

	::System::Boolean MBHIMBEDOEB(::System::Boolean KICEFENNFIM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MBHIMBEDOEB_OFFSET))(this, KICEFENNFIM);
	}

	::System::Void GNLKBIGMKCE(::MoleMole::LanguageKeyboardLayoutType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageKeyboardLayoutType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GNLKBIGMKCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MALFMKEDGNO(::AIOFAMODPOO JGGPPJNIAKN)
	{
		return ((::System::Void(*)(::PVOID, ::AIOFAMODPOO))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MALFMKEDGNO_OFFSET))(this, JGGPPJNIAKN);
	}

	::System::Void FPJKGEBFBME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FPJKGEBFBME_OFFSET))(this);
	}

	::MoleMole::LogicButtonInputType IFMGHHDHCPI(::MoleMole::UIWindowController* NCIMBHDKIJM, ::MoleMole::InputLogicEventType DHNEEJCNAID)
	{
		return ((::MoleMole::LogicButtonInputType(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IFMGHHDHCPI_OFFSET))(this, NCIMBHDKIJM, DHNEEJCNAID);
	}

	::System::Void AKDODCOAKLP(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::UnityEngine::InputSystem::LowLevel::GamepadButton KLNJAFHIDJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::LowLevel::GamepadButton))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_AKDODCOAKLP_OFFSET))(this, KKKMLLLKPHB, KLNJAFHIDJM);
	}

	::System::Void JPNGBBKOCIO(::MoleMole::InputLogicEventType DHNEEJCNAID, ::System::Boolean BIDNHKNJNJD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_JPNGBBKOCIO_OFFSET))(this, DHNEEJCNAID, BIDNHKNJNJD);
	}

	::System::Int32 GONAOCEOMDP_1(::MoleMole::LogicButtonInputType GLIPLEKODIL)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GONAOCEOMDP_1_OFFSET))(this, GLIPLEKODIL);
	}

	::System::Void EJBDKAIPGNI(::UnityEngine::InputSystem::InputDevice* DLLKBJGGPAE, ::UnityEngine::InputSystem::InputDeviceChange GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EJBDKAIPGNI_OFFSET))(this, DLLKBJGGPAE, GEJCKFFFKCL);
	}

	::MLIGDOAGEAI AICKPKBOBOK()
	{
		return ((::MLIGDOAGEAI(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_AICKPKBOBOK_OFFSET))(this);
	}

	::OANNBEFHHCE* GLFLKFGNGCP()
	{
		return ((::OANNBEFHHCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GLFLKFGNGCP_OFFSET))(this);
	}

	::GCDJNNKAEPI* PMHJAHILPEM()
	{
		return ((::GCDJNNKAEPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_PMHJAHILPEM_OFFSET))(this);
	}

	::UnityEngine::Vector2 MGLBIDAPBEH_1(::MoleMole::InputActionEvent MLNBANAGAEE, ::System::Boolean BDOHFCEIIDB)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::InputActionEvent, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MGLBIDAPBEH_1_OFFSET))(this, MLNBANAGAEE, BDOHFCEIIDB);
	}

	::System::Boolean NLKMHLHLENC(::MoleMole::GamepadButtonEx NKAAMNHAIEM, ::MoleMole::ButtonPressType JIHLGFDODBC, ::System::Boolean KICEFENNFIM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GamepadButtonEx, ::MoleMole::ButtonPressType, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NLKMHLHLENC_OFFSET))(this, NKAAMNHAIEM, JIHLGFDODBC, KICEFENNFIM);
	}

	::System::Boolean CCHAOHLHOHI(::MoleMole::LogicButtonInputType DFOLAGMLFPB, ::GLBHPDANCJN& OLALOFPBIDI, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::GLBHPDANCJN&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CCHAOHLHOHI_OFFSET))(this, DFOLAGMLFPB, OLALOFPBIDI, PNAAADIHPFF, KICEFENNFIM, DAMLAJIKKNE);
	}

	::System::Boolean AIGPIGBCHIM(::MoleMole::LogicButtonInputType GLIPLEKODIL, ::PGJMBNBCJBO& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::PGJMBNBCJBO&))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_AIGPIGBCHIM_OFFSET))(this, GLIPLEKODIL, LJBPECKCCEA);
	}

	::System::Void FKIJFNBEOIM(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::UnityEngine::InputSystem::LowLevel::GamepadButton KLNJAFHIDJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::LowLevel::GamepadButton))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FKIJFNBEOIM_OFFSET))(this, KKKMLLLKPHB, KLNJAFHIDJM);
	}

	::System::Void JMFCKJEFCDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_JMFCKJEFCDP_OFFSET))(this);
	}

	::System::Void FMNPDAGDPDB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FMNPDAGDPDB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single HGMPDAFAOKC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HGMPDAFAOKC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EGHLLGKMAKI(::MoleMole::LogicAxis2DInputType MJFNBMKALOB, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicAxis2DInputType, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EGHLLGKMAKI_OFFSET))(this, MJFNBMKALOB, EGEGIMGMJHN);
	}

	::System::Void IPNMLDCAJDL(::DJBOCAJOOAP* HBNPGLIOGHK)
	{
		return ((::System::Void(*)(::PVOID, ::DJBOCAJOOAP*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IPNMLDCAJDL_OFFSET))(this, HBNPGLIOGHK);
	}

	::System::Void MAFAKNJKIGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MAFAKNJKIGH_OFFSET))(this);
	}

	::System::Boolean FIOIKGEMCFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FIOIKGEMCFB_OFFSET))(this);
	}

	::System::Void KPNBBCDCPOA(::UnityEngine::Vector3 MMGKMLFBMEM, ::UnityEngine::Vector3 NJJNJBLDLBC, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KPNBBCDCPOA_OFFSET))(this, MMGKMLFBMEM, NJJNJBLDLBC, PMNLNNGEIFM);
	}

	::System::Void KMIDIGCENKI(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::UnityEngine::InputSystem::Key KLNJAFHIDJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KMIDIGCENKI_OFFSET))(this, KKKMLLLKPHB, KLNJAFHIDJM);
	}

	::System::Void AHJAENNMOBO(::System::Boolean& FLNJIGBOKKO, ::GLBHPDANCJN& HPNADDLAMOI, ::Il2CppArray<::MoleMole::LogicButtonInputType>* LJPGHMGEEBJ, ::System::Boolean KICEFENNFIM, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::GLBHPDANCJN&, ::Il2CppArray<::MoleMole::LogicButtonInputType>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_AHJAENNMOBO_OFFSET))(this, FLNJIGBOKKO, HPNADDLAMOI, LJPGHMGEEBJ, KICEFENNFIM, DAMLAJIKKNE);
	}

	::System::Void JPGOMAKECBG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_JPGOMAKECBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::BIHOFDNPBCH* IMKABKCALDJ()
	{
		return ((::BIHOFDNPBCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IMKABKCALDJ_OFFSET))(this);
	}

	::System::Void EGBOIEDECCE(::System::Boolean CGPBOKCEGAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EGBOIEDECCE_OFFSET))(this, CGPBOKCEGAO);
	}

	::System::Void KBHGGEPDINN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KBHGGEPDINN_OFFSET))(this);
	}

	::System::Boolean GGFIEAICPBI_1(::LGINJIKKBJA* JEPEJDNMFOK, ::System::Boolean NNCPEPJJDEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGINJIKKBJA*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GGFIEAICPBI_1_OFFSET))(this, JEPEJDNMFOK, NNCPEPJJDEA);
	}

	::MoleMole::BaseInputActionEventConfig* DDJFNPHNEFE(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::MoleMole::BaseInputActionEventConfig*(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DDJFNPHNEFE_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Boolean NLJMOEJOIOO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NLJMOEJOIOO_OFFSET))(this);
	}

	::System::Void MHNLFMDODGE(::AIOFAMODPOO JGGPPJNIAKN)
	{
		return ((::System::Void(*)(::PVOID, ::AIOFAMODPOO))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MHNLFMDODGE_OFFSET))(this, JGGPPJNIAKN);
	}

	::System::Void NKGOFPEIDLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NKGOFPEIDLJ_OFFSET))(this);
	}

	::System::Boolean FGLHMGDBJFL(::AIOFAMODPOO EKKNMEPHBKP, ::System::Boolean KICEFENNFIM)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIOFAMODPOO, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FGLHMGDBJFL_OFFSET))(this, EKKNMEPHBKP, KICEFENNFIM);
	}

	::System::Boolean NBPDDCILGAH(::LGINJIKKBJA* GBELIHABEDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NBPDDCILGAH_OFFSET))(this, GBELIHABEDH);
	}

	::System::Boolean DBFLCALCDJD_1(::LGINJIKKBJA* GBELIHABEDH, ::System::Boolean NNCPEPJJDEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGINJIKKBJA*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DBFLCALCDJD_1_OFFSET))(this, GBELIHABEDH, NNCPEPJJDEA);
	}

	::System::Boolean LOICCOGOKFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_LOICCOGOKFE_OFFSET))(this);
	}

	::System::Void CBMGNAMAMPP(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CBMGNAMAMPP_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CEDPHPGCKMN(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::MoleMole::ButtonPressType JIHLGFDODBC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::MoleMole::ButtonPressType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CEDPHPGCKMN_OFFSET))(this, KKKMLLLKPHB, JIHLGFDODBC);
	}

	::System::Void EHPMKIIAAGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EHPMKIIAAGM_OFFSET))(this);
	}

	::System::Boolean FFMEJEDCIAK_1(::UnityEngine::UI::Extension::UIButtonBase* JEPEJDNMFOK, ::System::Boolean NNCPEPJJDEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_FFMEJEDCIAK_1_OFFSET))(this, JEPEJDNMFOK, NNCPEPJJDEA);
	}

	::System::Void ACFEDGKAHFJ(::AIOFAMODPOO JGGPPJNIAKN, ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::System::Int32>* PHIJFNJGPDL)
	{
		return ((::System::Void(*)(::PVOID, ::AIOFAMODPOO, ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::System::Int32>*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ACFEDGKAHFJ_OFFSET))(this, JGGPPJNIAKN, PHIJFNJGPDL);
	}

	::System::Void MKKCLDNOLAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MKKCLDNOLAA_OFFSET))(this);
	}

	::System::Void IGDDKBINLJN(::System::Boolean HDPKFPHECJD, ::System::Boolean ONOGNBODIPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IGDDKBINLJN_OFFSET))(this, HDPKFPHECJD, ONOGNBODIPB);
	}

	::System::Boolean EPAKHOGOMHF(::UnityEngine::InputSystem::LowLevel::GamepadButton MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EPAKHOGOMHF_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void EACJIBHDJBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_EACJIBHDJBC_OFFSET))(this);
	}

	::System::Boolean AKHFOJIEIBC(::System::Boolean KICEFENNFIM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_AKHFOJIEIBC_OFFSET))(this, KICEFENNFIM);
	}

	::System::Boolean CCHAOHLHOHI_1(::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::JNKHODHDNMP& FEFPLIFCFLO, ::GLBHPDANCJN& OLALOFPBIDI, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::JNKHODHDNMP&, ::GLBHPDANCJN&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CCHAOHLHOHI_1_OFFSET))(this, KKKMLLLKPHB, FEFPLIFCFLO, OLALOFPBIDI, PNAAADIHPFF, KICEFENNFIM, DAMLAJIKKNE);
	}

	::System::Void HAKDEGEGCHD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HAKDEGEGCHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::AIOFAMODPOO KFDCJBALABH()
	{
		return ((::AIOFAMODPOO(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KFDCJBALABH_OFFSET))(this);
	}

	::System::Boolean JDCEKIAAKON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_JDCEKIAAKON_OFFSET))(this);
	}

	::System::Int32 NGIMMBHPHNM_1(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NGIMMBHPHNM_1_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Boolean ABILOIGIADO(::UnityEngine::InputSystem::Key FGDHBPIDDDC, ::MoleMole::ButtonPressType JIHLGFDODBC, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Key, ::MoleMole::ButtonPressType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ABILOIGIADO_OFFSET))(this, FGDHBPIDDDC, JIHLGFDODBC, PNAAADIHPFF, KICEFENNFIM);
	}

	::System::Void KEBFGKMNJKO(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_KEBFGKMNJKO_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean IDOIHCPGGEF(::MoleMole::LogicAxis2DInputType DALJDJDLHEA, ::UnityEngine::Vector2& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicAxis2DInputType, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_IDOIHCPGGEF_OFFSET))(this, DALJDJDLHEA, IGAAKDOIPNN);
	}

	::System::Single ICODANAONCO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_ICODANAONCO_OFFSET))(this);
	}

	::System::Boolean MIOJCIPHKDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_MIOJCIPHKDH_OFFSET))(this);
	}

	::System::Void BLJCBHHKBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_BLJCBHHKBAG_OFFSET))(this);
	}

	::BEJOOLGKBBD* CEFPPPHEPNI()
	{
		return ((::BEJOOLGKBBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CEFPPPHEPNI_OFFSET))(this);
	}

	::MoleMole::BaseInputActionEventConfig* DDJFNPHNEFE_1(::MoleMole::InputActionEventType INMOBMEDEPP)
	{
		return ((::MoleMole::BaseInputActionEventConfig*(*)(::PVOID, ::MoleMole::InputActionEventType))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DDJFNPHNEFE_1_OFFSET))(this, INMOBMEDEPP);
	}

	::System::Void PFMPKGOKBCN(::UnityEngine::InputSystem::LowLevel::InputEventPtr DCKKHKOIMGO, ::UnityEngine::InputSystem::InputDevice* DLLKBJGGPAE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_PFMPKGOKBCN_OFFSET))(this, DCKKHKOIMGO, DLLKBJGGPAE);
	}

	::System::Void GPLFPJAGBBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_GPLFPJAGBBE_OFFSET))(this);
	}

	::System::Boolean CCHAOHLHOHI_2(::MoleMole::LogicButtonInputType DFOLAGMLFPB, ::System::Boolean PNAAADIHPFF, ::System::Boolean KICEFENNFIM, ::System::Boolean DAMLAJIKKNE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CCHAOHLHOHI_2_OFFSET))(this, DFOLAGMLFPB, PNAAADIHPFF, KICEFENNFIM, DAMLAJIKKNE);
	}

	::MoleMole::LanguageKeyboardLayoutType CIDGPOKHBKO()
	{
		return ((::MoleMole::LanguageKeyboardLayoutType(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_CIDGPOKHBKO_OFFSET))(this);
	}

	::UnityEngine::Vector3 AHGGKIBEECE_1(::MoleMole::InputActionEvent MLNBANAGAEE, ::GLBHPDANCJN& OLALOFPBIDI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::InputActionEvent, ::GLBHPDANCJN&))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_AHGGKIBEECE_1_OFFSET))(this, MLNBANAGAEE, OLALOFPBIDI);
	}

	::System::Boolean NDIDNCAEALN_1(::MoleMole::InputActionEvent MLNBANAGAEE, ::GLBHPDANCJN& OLALOFPBIDI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::GLBHPDANCJN&))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NDIDNCAEALN_1_OFFSET))(this, MLNBANAGAEE, OLALOFPBIDI);
	}

	::System::Void JEKODBMLLNC(::MoleMole::BaseInputActionEventConfig* EAFOALFOCJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::BaseInputActionEventConfig*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_JEKODBMLLNC_OFFSET))(this, EAFOALFOCJF);
	}

	::System::Boolean NBPDDCILGAH_1(::UnityEngine::UI::Extension::UIButtonBase* JEPEJDNMFOK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonBase*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NBPDDCILGAH_1_OFFSET))(this, JEPEJDNMFOK);
	}

	::System::Void DPNDKNFBBDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DPNDKNFBBDK_OFFSET))(this);
	}
};
