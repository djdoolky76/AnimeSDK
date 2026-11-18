#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHKCIHLMCMP.h"
#include "unitysdk/COODFLCFEIB.h"
#include "unitysdk/INHFLFEOGKD.h"
#include "unitysdk/JHNALFACJNL.h"
#include "unitysdk/LAJKLEIGOOA_1.h"
#include "unitysdk/LFNCCPCJLLK.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/NapRenderEntityFlags.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/ODHKALNGHOG.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/LNCPLLBDBKI.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/NLDDMLLPKCG_JKBPFBGGPIA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
class EJMAJNMLJEJ;
class ENGKPGFGGLM;
class GEIHCPAOKKK;
class GGNKHJHIHGD;
class GIGFDLPMNND;
class ILLCEFBALCI;
class MOELDGPPDPM;
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define NLDDMLLPKCG_ADHINNKEAPN_OFFSET UNITYSDK_OFFSET(0xED20390)
#define NLDDMLLPKCG_AFFJKCKEIHC_OFFSET UNITYSDK_OFFSET(0xED1D370)
#define NLDDMLLPKCG_AFKCLDEJMAI_OFFSET UNITYSDK_OFFSET(0x128A1930)
#define NLDDMLLPKCG_AIKABKJPDBC_OFFSET UNITYSDK_OFFSET(0xED29060)
#define NLDDMLLPKCG_AJCJCDKKNJD_OFFSET UNITYSDK_OFFSET(0xED1FBC0)
#define NLDDMLLPKCG_AKHOFEFGHNI_OFFSET UNITYSDK_OFFSET(0xED296E0)
#define NLDDMLLPKCG_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0xED1C260)
#define NLDDMLLPKCG_APENGEBGFJH_OFFSET UNITYSDK_OFFSET(0xED26400)
#define NLDDMLLPKCG_BANNGNHDCNK_OFFSET UNITYSDK_OFFSET(0xED22C60)
#define NLDDMLLPKCG_BDBHMKAAFJH_OFFSET UNITYSDK_OFFSET(0xED1C010)
#define NLDDMLLPKCG_BGHEBBFFGND_OFFSET UNITYSDK_OFFSET(0xED29CA0)
#define NLDDMLLPKCG_BHEIBEBDENE_OFFSET UNITYSDK_OFFSET(0xED2EC70)
#define NLDDMLLPKCG_BLACGINMFGJ_OFFSET UNITYSDK_OFFSET(0xED1D8B0)
#define NLDDMLLPKCG_BLCHCNHPPPF_OFFSET UNITYSDK_OFFSET(0xED279B0)
#define NLDDMLLPKCG_BMMDMLHOFDD_OFFSET UNITYSDK_OFFSET(0xED2AD00)
#define NLDDMLLPKCG_BOFEIGPDJFM_OFFSET UNITYSDK_OFFSET(0xED27850)
#define NLDDMLLPKCG_BPKDEDPKOHK_OFFSET UNITYSDK_OFFSET(0xED22540)
#define NLDDMLLPKCG_CALAGCOBFGM_OFFSET UNITYSDK_OFFSET(0xED20B60)
#define NLDDMLLPKCG_CCCLLIBMBGK_OFFSET UNITYSDK_OFFSET(0xED2E580)
#define NLDDMLLPKCG_CDJNKAOAAKL_OFFSET UNITYSDK_OFFSET(0xED2E930)
#define NLDDMLLPKCG_CEOFNAOFPDL_OFFSET UNITYSDK_OFFSET(0xED22010)
#define NLDDMLLPKCG_CFNJGCOHIJH_OFFSET UNITYSDK_OFFSET(0xED30020)
#define NLDDMLLPKCG_CHOBFECAGBA_OFFSET UNITYSDK_OFFSET(0x128A2DD0)
#define NLDDMLLPKCG_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xED23130)
#define NLDDMLLPKCG_CNOCIMDMBEG_OFFSET UNITYSDK_OFFSET(0xED2B390)
#define NLDDMLLPKCG_COCLGOJDBIL_OFFSET UNITYSDK_OFFSET(0xED2C3F0)
#define NLDDMLLPKCG_CPPENBOHGJB_OFFSET UNITYSDK_OFFSET(0x128A1CC0)
#define NLDDMLLPKCG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1289E180)
#define NLDDMLLPKCG_DANHJCJJJOO_OFFSET UNITYSDK_OFFSET(0xED1B930)
#define NLDDMLLPKCG_DDEAOCJHDDM_OFFSET UNITYSDK_OFFSET(0xED2A1B0)
#define NLDDMLLPKCG_DDKFDJJBDJM_OFFSET UNITYSDK_OFFSET(0xED23730)
#define NLDDMLLPKCG_DECCKLCOPHK_OFFSET UNITYSDK_OFFSET(0xED269C0)
#define NLDDMLLPKCG_DGLBFHAJEPL_OFFSET UNITYSDK_OFFSET(0xED1D5D0)
#define NLDDMLLPKCG_DLDIOCFEFDB_OFFSET UNITYSDK_OFFSET(0xED2CD80)
#define NLDDMLLPKCG_DLECJNNKHEJ_OFFSET UNITYSDK_OFFSET(0xED201F0)
#define NLDDMLLPKCG_DMIEFFFNGOJ_OFFSET UNITYSDK_OFFSET(0xED1E540)
#define NLDDMLLPKCG_DPHIJMPNOKJ_OFFSET UNITYSDK_OFFSET(0xED2D180)
#define NLDDMLLPKCG_DPPCFEBHPFE_OFFSET UNITYSDK_OFFSET(0xED24AE0)
#define NLDDMLLPKCG_EDNMKCKFJKL_OFFSET UNITYSDK_OFFSET(0xED22AD0)
#define NLDDMLLPKCG_EJPOHMONGDF_OFFSET UNITYSDK_OFFSET(0xED2F7F0)
#define NLDDMLLPKCG_EMKMJCODKLE_OFFSET UNITYSDK_OFFSET(0xED2B9C0)
#define NLDDMLLPKCG_EMOCEKDBPGC_OFFSET UNITYSDK_OFFSET(0xED2C100)
#define NLDDMLLPKCG_EODBHAHPAPP_OFFSET UNITYSDK_OFFSET(0xED1DC60)
#define NLDDMLLPKCG_EPGNLOPLFGD_OFFSET UNITYSDK_OFFSET(0xED1F510)
#define NLDDMLLPKCG_FCLJDMJBLGE_OFFSET UNITYSDK_OFFSET(0xED30760)
#define NLDDMLLPKCG_FEPKDJJFDHF_OFFSET UNITYSDK_OFFSET(0xED1E2E0)
#define NLDDMLLPKCG_FFCFKNDIDEB_OFFSET UNITYSDK_OFFSET(0xED2F480)
#define NLDDMLLPKCG_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1289F7E0)
#define NLDDMLLPKCG_FKCFEPMOGEB_OFFSET UNITYSDK_OFFSET(0xED2AF70)
#define NLDDMLLPKCG_FOMNENKFIMG_OFFSET UNITYSDK_OFFSET(0xED24970)
#define NLDDMLLPKCG_GBDOFFIHKCJ_OFFSET UNITYSDK_OFFSET(0xED1F270)
#define NLDDMLLPKCG_GCNAKIFIINE_OFFSET UNITYSDK_OFFSET(0xED218D0)
#define NLDDMLLPKCG_GEAKLEMFLJK_OFFSET UNITYSDK_OFFSET(0xED2DBC0)
#define NLDDMLLPKCG_GGNHGEMBPCJ_OFFSET UNITYSDK_OFFSET(0xED2FBB0)
#define NLDDMLLPKCG_GHKAFFFLJIO_OFFSET UNITYSDK_OFFSET(0xED2B760)
#define NLDDMLLPKCG_GHKOGCNBEOK_OFFSET UNITYSDK_OFFSET(0x128A1D70)
#define NLDDMLLPKCG_GIIPPOKOGHP_OFFSET UNITYSDK_OFFSET(0xED27D00)
#define NLDDMLLPKCG_GILAFIDAIOI_OFFSET UNITYSDK_OFFSET(0xED1CDB0)
#define NLDDMLLPKCG_GJGCLLEINKN_OFFSET UNITYSDK_OFFSET(0xED23E00)
#define NLDDMLLPKCG_GLMHKNDLIHL_OFFSET UNITYSDK_OFFSET(0x128A2970)
#define NLDDMLLPKCG_GLMIPHPNDGB_OFFSET UNITYSDK_OFFSET(0xED1D2D0)
#define NLDDMLLPKCG_GMLCNHOADLE_OFFSET UNITYSDK_OFFSET(0xED30480)
#define NLDDMLLPKCG_GONBHPMIHHC_OFFSET UNITYSDK_OFFSET(0xED2CBD0)
#define NLDDMLLPKCG_GPLHFBLHJBP_OFFSET UNITYSDK_OFFSET(0xED2EDF0)
#define NLDDMLLPKCG_HAHHIHMFNGM_OFFSET UNITYSDK_OFFSET(0xED2CD30)
#define NLDDMLLPKCG_HBJNNHEDFPK_OFFSET UNITYSDK_OFFSET(0xED2AAD0)
#define NLDDMLLPKCG_HDGLPBCJDBP_OFFSET UNITYSDK_OFFSET(0xED24560)
#define NLDDMLLPKCG_HHJKIAKPCCG_OFFSET UNITYSDK_OFFSET(0xED1EB20)
#define NLDDMLLPKCG_HHOAICJJKND_OFFSET UNITYSDK_OFFSET(0x128A2AE0)
#define NLDDMLLPKCG_HIJBCIBDMCC_OFFSET UNITYSDK_OFFSET(0xED25FD0)
#define NLDDMLLPKCG_HKMJKFKEGHD_OFFSET UNITYSDK_OFFSET(0xED1CE70)
#define NLDDMLLPKCG_HNCANMENGAK_OFFSET UNITYSDK_OFFSET(0xED2D990)
#define NLDDMLLPKCG_HOOOFICFCLJ_OFFSET UNITYSDK_OFFSET(0x1289F950)
#define NLDDMLLPKCG_IBPOAGJLPDN_OFFSET UNITYSDK_OFFSET(0xED22C00)
#define NLDDMLLPKCG_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0xED2B980)
#define NLDDMLLPKCG_ICMKDOOFHLO_OFFSET UNITYSDK_OFFSET(0xED2E4B0)
#define NLDDMLLPKCG_IFBNNNEEJPN_OFFSET UNITYSDK_OFFSET(0xED1D900)
#define NLDDMLLPKCG_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0xED21700)
#define NLDDMLLPKCG_IHNNNFNAEDN_OFFSET UNITYSDK_OFFSET(0x128A1550)
#define NLDDMLLPKCG_IJHCLBFGKHP_OFFSET UNITYSDK_OFFSET(0xED26890)
#define NLDDMLLPKCG_INADIBEOGDN_OFFSET UNITYSDK_OFFSET(0xED2F230)
#define NLDDMLLPKCG_INEFBOFDGEH_OFFSET UNITYSDK_OFFSET(0xED2A600)
#define NLDDMLLPKCG_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0xED2E100)
#define NLDDMLLPKCG_INMGFMLLCOG_OFFSET UNITYSDK_OFFSET(0xED280C0)
#define NLDDMLLPKCG_IOGNGGGONHC_OFFSET UNITYSDK_OFFSET(0xED21EE0)
#define NLDDMLLPKCG_IOMPJOHJPAO_OFFSET UNITYSDK_OFFSET(0xED30E80)
#define NLDDMLLPKCG_JHBBNOKPAAN_OFFSET UNITYSDK_OFFSET(0xED21B00)
#define NLDDMLLPKCG_JHHEPJAHHIG_OFFSET UNITYSDK_OFFSET(0x128A12F0)
#define NLDDMLLPKCG_JIENNICKLNK_OFFSET UNITYSDK_OFFSET(0xED1E6C0)
#define NLDDMLLPKCG_JMFFJKOELIP_OFFSET UNITYSDK_OFFSET(0xED29630)
#define NLDDMLLPKCG_JNLNDGFOJPN_OFFSET UNITYSDK_OFFSET(0xED21000)
#define NLDDMLLPKCG_JNONFDNLPMF_OFFSET UNITYSDK_OFFSET(0x128A2A30)
#define NLDDMLLPKCG_JPGKPODNMAJ_OFFSET UNITYSDK_OFFSET(0xED30390)
#define NLDDMLLPKCG_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0xED267C0)
#define NLDDMLLPKCG_KAOKEHBEPCE_OFFSET UNITYSDK_OFFSET(0xED26C20)
#define NLDDMLLPKCG_KBEKGLLLFGF_OFFSET UNITYSDK_OFFSET(0xED2B1A0)
#define NLDDMLLPKCG_KBJNPNGOJEG_OFFSET UNITYSDK_OFFSET(0xED20890)
#define NLDDMLLPKCG_KEGAPCBCBHN_OFFSET UNITYSDK_OFFSET(0xED30820)
#define NLDDMLLPKCG_KJMLNFEFCHA_OFFSET UNITYSDK_OFFSET(0xED20ED0)
#define NLDDMLLPKCG_KKNPHFKLKNO_OFFSET UNITYSDK_OFFSET(0xED2A330)
#define NLDDMLLPKCG_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0xED26320)
#define NLDDMLLPKCG_KPEJOHLAHMM_OFFSET UNITYSDK_OFFSET(0xED2FD90)
#define NLDDMLLPKCG_KPJDJINPLGL_OFFSET UNITYSDK_OFFSET(0xED2A7B0)
#define NLDDMLLPKCG_LAHHNDABEIJ_OFFSET UNITYSDK_OFFSET(0xED1FF30)
#define NLDDMLLPKCG_LAMODPEEALE_OFFSET UNITYSDK_OFFSET(0xED258A0)
#define NLDDMLLPKCG_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1289F9E0)
#define NLDDMLLPKCG_LCFCFHKHIAP_OFFSET UNITYSDK_OFFSET(0xED2F3C0)
#define NLDDMLLPKCG_LLGHFMAGOLK_OFFSET UNITYSDK_OFFSET(0xED2F0E0)
#define NLDDMLLPKCG_LNCGPCHPGFN_OFFSET UNITYSDK_OFFSET(0xED21610)
#define NLDDMLLPKCG_LODGHDDIODM_OFFSET UNITYSDK_OFFSET(0xED236B0)
#define NLDDMLLPKCG_LOGIMKAEKLJ_OFFSET UNITYSDK_OFFSET(0xED22280)
#define NLDDMLLPKCG_MAOFDCDLPBO_OFFSET UNITYSDK_OFFSET(0xED292E0)
#define NLDDMLLPKCG_MBNPCOFGDBJ_OFFSET UNITYSDK_OFFSET(0xED1E9F0)
#define NLDDMLLPKCG_MCMHGMIIMGF_OFFSET UNITYSDK_OFFSET(0xED2EE30)
#define NLDDMLLPKCG_MDPDNONINBM_OFFSET UNITYSDK_OFFSET(0xED1DD10)
#define NLDDMLLPKCG_MHPDOKFPMKG_OFFSET UNITYSDK_OFFSET(0xED22A30)
#define NLDDMLLPKCG_MKFPCOAKOBK_OFFSET UNITYSDK_OFFSET(0xED22FF0)
#define NLDDMLLPKCG_MKPHGLBDCGO_OFFSET UNITYSDK_OFFSET(0x128A2360)
#define NLDDMLLPKCG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xED2F1A0)
#define NLDDMLLPKCG_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x128A2160)
#define NLDDMLLPKCG_MOIDNCOKOAG_OFFSET UNITYSDK_OFFSET(0xED24E30)
#define NLDDMLLPKCG_MONJNOKBFHO_OFFSET UNITYSDK_OFFSET(0xED2B700)
#define NLDDMLLPKCG_MOONBMFFHGD_OFFSET UNITYSDK_OFFSET(0x128A1DF0)
#define NLDDMLLPKCG_MPKCIACBELN_OFFSET UNITYSDK_OFFSET(0xED1F600)
#define NLDDMLLPKCG_NBBEOPAODPC_OFFSET UNITYSDK_OFFSET(0xED26550)
#define NLDDMLLPKCG_NDLFGNAGMAK_OFFSET UNITYSDK_OFFSET(0xED202A0)
#define NLDDMLLPKCG_NFNIJAMDHGP_OFFSET UNITYSDK_OFFSET(0xED21140)
#define NLDDMLLPKCG_NGNDKKBJBLO_OFFSET UNITYSDK_OFFSET(0x128A1F00)
#define NLDDMLLPKCG_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0xED303F0)
#define NLDDMLLPKCG_NJAEDNJFGHB_OFFSET UNITYSDK_OFFSET(0xED306F0)
#define NLDDMLLPKCG_NLEHBKOELBA_OFFSET UNITYSDK_OFFSET(0xED25940)
#define NLDDMLLPKCG_NNPHOHMDMMK_OFFSET UNITYSDK_OFFSET(0xED2EBA0)
#define NLDDMLLPKCG_NOKDJPCOGOC_OFFSET UNITYSDK_OFFSET(0x128A21F0)
#define NLDDMLLPKCG_NPHMDLMLEKP_OFFSET UNITYSDK_OFFSET(0xED228E0)
#define NLDDMLLPKCG_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x128A1C80)
#define NLDDMLLPKCG_NPPNBDINMLN_OFFSET UNITYSDK_OFFSET(0xED289F0)
#define NLDDMLLPKCG_OEBHMMCFBBC_OFFSET UNITYSDK_OFFSET(0xED30210)
#define NLDDMLLPKCG_OGBECPHLKHL_OFFSET UNITYSDK_OFFSET(0xED30AD0)
#define NLDDMLLPKCG_OGLKAMIPNKJ_OFFSET UNITYSDK_OFFSET(0xED2CA10)
#define NLDDMLLPKCG_OGPCPCEKLJF_OFFSET UNITYSDK_OFFSET(0x128A1990)
#define NLDDMLLPKCG_OMEBFLDJNFC_OFFSET UNITYSDK_OFFSET(0x128A26B0)
#define NLDDMLLPKCG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1289E530)
#define NLDDMLLPKCG_ONDGHLODPGA_OFFSET UNITYSDK_OFFSET(0xED24110)
#define NLDDMLLPKCG_OPKOKONHBPD_OFFSET UNITYSDK_OFFSET(0xED2E190)
#define NLDDMLLPKCG_PHFFHOBFOIB_OFFSET UNITYSDK_OFFSET(0xED2D460)
#define NLDDMLLPKCG_PHHGCHJPHGK_OFFSET UNITYSDK_OFFSET(0xED29820)
#define NLDDMLLPKCG_PKEOJPDAKDF_OFFSET UNITYSDK_OFFSET(0xED2B510)
#define NLDDMLLPKCG_PNFFIMOEGCK_OFFSET UNITYSDK_OFFSET(0xED21790)
#define NLDDMLLPKCG_PPIMFENANFF_OFFSET UNITYSDK_OFFSET(0xED231C0)
#define NLDDMLLPKCG_PPKJAJPLHGK_OFFSET UNITYSDK_OFFSET(0xED2D820)
#define NLDDMLLPKCG_START_OFFSET UNITYSDK_OFFSET(0x1289E0B0)
#define NLDDMLLPKCG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1289EFF0)
#define NLDDMLLPKCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x128A0580)
#define NLDDMLLPKCG__CTOR_OFFSET UNITYSDK_OFFSET(0x128A0530)

inline static constexpr unsigned int NLDDMLLPKCG_TypeDefinitionIndex = 81379;

class NLDDMLLPKCG : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::HashSet_1<::ILLCEFBALCI*>** StaticGet_NPPDECMNJOB()
	{
		return (::System::Collections::Generic::HashSet_1<::ILLCEFBALCI*>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32480);
	}
	static ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>>** StaticGet_JIKNDAJOEHJ()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32488);
	}
	static ::System::Collections::Generic::Dictionary_2<::MOELDGPPDPM*, ::System::Int32>** StaticGet_DADCCAIBIKB()
	{
		return (::System::Collections::Generic::Dictionary_2<::MOELDGPPDPM*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32490);
	}
	static ::Unity::Collections::ManagedBlockQueue_1<::LFNCCPCJLLK>** StaticGet_GNNIKILKMCM()
	{
		return (::Unity::Collections::ManagedBlockQueue_1<::LFNCCPCJLLK>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32498);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_OHGFEHPGLDM()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324A0);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_LIBHPPFFPLJ()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324A8);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_LMINLGKIIFL()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324B0);
	}
	static ::NLDDMLLPKCG** StaticGet__KDHHJMKHLED_k__BackingField()
	{
		return (::NLDDMLLPKCG**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::GIGFDLPMNND*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_JPGIBCNLGNE()
	{
		return (::System::Collections::Generic::Dictionary_2<::GIGFDLPMNND*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet_LECGGBJJFDC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::ILLCEFBALCI*, ::System::Collections::Generic::List_1<::JHNALFACJNL>*>** StaticGet_CHINGCMFPOJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::ILLCEFBALCI*, ::System::Collections::Generic::List_1<::JHNALFACJNL>*>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324D0);
	}
	static ::System::Collections::Generic::List_1<::ILLCEFBALCI*>** StaticGet_EIEEDPHDGGC()
	{
		return (::System::Collections::Generic::List_1<::ILLCEFBALCI*>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::GIGFDLPMNND*, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_MEGELBMLDEO()
	{
		return (::System::Collections::Generic::Dictionary_2<::GIGFDLPMNND*, ::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324E0);
	}
	static ::System::Collections::Generic::List_1<::JHNALFACJNL>** StaticGet_FHHHGJGEEJN()
	{
		return (::System::Collections::Generic::List_1<::JHNALFACJNL>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324E8);
	}
	static ::System::Collections::Generic::List_1<::CHKCIHLMCMP>** StaticGet_FAHLIIELOJG()
	{
		return (::System::Collections::Generic::List_1<::CHKCIHLMCMP>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::INHFLFEOGKD>** StaticGet_HOGNBICDKBE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::INHFLFEOGKD>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x324F8);
	}
	static ::System::Collections::Generic::List_1<::COODFLCFEIB>** StaticGet_AFFOGBHIOPP()
	{
		return (::System::Collections::Generic::List_1<::COODFLCFEIB>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32500);
	}
	static ::System::Collections::Generic::List_1<::LAJKLEIGOOA_1<::System::UInt32>>** StaticGet_NNEBFAELFDE()
	{
		return (::System::Collections::Generic::List_1<::LAJKLEIGOOA_1<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32508);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_HAAOLICPAAB()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32510);
	}
	static ::System::Collections::Generic::List_1<::GIGFDLPMNND*>** StaticGet_MOLBFCFHBHP()
	{
		return (::System::Collections::Generic::List_1<::GIGFDLPMNND*>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32518);
	}
	static ::System::Collections::Generic::Dictionary_2<::GIGFDLPMNND*, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_KOENIHAIKLA()
	{
		return (::System::Collections::Generic::Dictionary_2<::GIGFDLPMNND*, ::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0x32520);
	}
	static ::System::Single* StaticGet_MOHKNJGNMGI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACA0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_EOCHHIBJHCG()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACA8);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_BPEBGMBPIKM()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACB8);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_CLDNGHNANBG()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACC8);
	}
	static ::System::Single* StaticGet_FNFNDKMPANG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACD8);
	}
	static ::System::Boolean* StaticGet_JJKAOEFOPNP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACDC);
	}
	static ::System::Boolean* StaticGet_AMCKEFKGCGF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACDD);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_ODJNLHAALAG()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACE0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_LINIDBLAFHG()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(NLDDMLLPKCG_TypeDefinitionIndex)->GetStaticField(0xACF0);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::System::Boolean ANAPDNHEDLO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_START_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Int32 JHHEPJAHHIG(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Boolean MBJDMKCGOCK, ::System::Boolean OJPLCNILFGN)
	{
		return ((::System::Int32(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_JHHEPJAHHIG_OFFSET))(NLNNFINONOI, OCFHGOGFGPE, MBJDMKCGOCK, OJPLCNILFGN);
	}

	static ::System::Void IHNNNFNAEDN(::GIGFDLPMNND* NLNNFINONOI, ::MoleMole::Config::MaterialPropertyType JDEHJODFGFE)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_IHNNNFNAEDN_OFFSET))(NLNNFINONOI, JDEHJODFGFE);
	}

	static ::System::Boolean HOOOFICFCLJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HOOOFICFCLJ_OFFSET))();
	}

	static ::System::String* AFKCLDEJMAI(::System::String* AELLPLBJELA, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_AFKCLDEJMAI_OFFSET))(AELLPLBJELA, MCOHLHMKLIP);
	}

	static ::System::Void OGPCPCEKLJF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_OGPCPCEKLJF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void NPIJFJJOBCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NPIJFJJOBCA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean CPPENBOHGJB(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CPPENBOHGJB_OFFSET))(NLNNFINONOI, MCOHLHMKLIP);
	}

	static ::System::Void GHKOGCNBEOK(::GIGFDLPMNND* NLNNFINONOI, ::System::Func_2<::System::String*, ::System::Boolean>* JOCHJDKOPGE, ::ODHKALNGHOG FKMHMOELCIO)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Func_2<::System::String*, ::System::Boolean>*, ::ODHKALNGHOG))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GHKOGCNBEOK_OFFSET))(NLNNFINONOI, JOCHJDKOPGE, FKMHMOELCIO);
	}

	static ::System::Void MOONBMFFHGD(::COCJHGGDBCA* DFAJBFNNHJG, ::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MOONBMFFHGD_OFFSET))(DFAJBFNNHJG, NLNNFINONOI);
	}

	static ::System::Int32 NGNDKKBJBLO(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Int32(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NGNDKKBJBLO_OFFSET))(NLNNFINONOI, OCFHGOGFGPE, MBJDMKCGOCK);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void NOKDJPCOGOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NOKDJPCOGOC_OFFSET))(this);
	}

	static ::System::Void MKPHGLBDCGO(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MKPHGLBDCGO_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Boolean OMEBFLDJNFC(::GIGFDLPMNND* NLNNFINONOI, ::System::Int32 PAGFPDNPLNA)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_OMEBFLDJNFC_OFFSET))(NLNNFINONOI, PAGFPDNPLNA);
	}

	static ::System::Void GLMHKNDLIHL(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GLMHKNDLIHL_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void JNONFDNLPMF(::GIGFDLPMNND* NLNNFINONOI, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_JNONFDNLPMF_OFFSET))(NLNNFINONOI, AELLPLBJELA);
	}

	static ::System::Void HHOAICJJKND(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HHOAICJJKND_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void CHOBFECAGBA(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CHOBFECAGBA_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void DANHJCJJJOO(::GIGFDLPMNND* NLNNFINONOI, ::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DANHJCJJJOO_OFFSET))(NLNNFINONOI, JKBLDFBGBPK);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	::System::Void BLACGINMFGJ(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BLACGINMFGJ_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void IFBNNNEEJPN(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_IFBNNNEEJPN_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void EODBHAHPAPP(::GIGFDLPMNND* NLNNFINONOI, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_EODBHAHPAPP_OFFSET))(NLNNFINONOI, AELLPLBJELA);
	}

	static ::System::Void FEPKDJJFDHF(::MOELDGPPDPM* ECMMKCJLBMD, ::MoleMole::Battle::Entity* BFDPPMDEOFF)
	{
		return ((::System::Void(*)(::MOELDGPPDPM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_FEPKDJJFDHF_OFFSET))(ECMMKCJLBMD, BFDPPMDEOFF);
	}

	static ::System::Void DMIEFFFNGOJ(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DMIEFFFNGOJ_OFFSET))(FBILHHBPEHD, KECKGDFIALJ);
	}

	static ::System::Void JIENNICKLNK(::MoleMole::Config::CharacterSize LFGAHBBJMDC, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::MoleMole::Config::CharacterSize, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_JIENNICKLNK_OFFSET))(LFGAHBBJMDC, OHPJHPEOFLD);
	}

	static ::System::Void MBNPCOFGDBJ(::GIGFDLPMNND* NLNNFINONOI, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MBNPCOFGDBJ_OFFSET))(NLNNFINONOI, ABHBKFJKINO);
	}

	static ::System::Void HHJKIAKPCCG(::System::Single FFJAHMDPCIC)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HHJKIAKPCCG_OFFSET))(FFJAHMDPCIC);
	}

	static ::System::Void MPKCIACBELN(::GEIHCPAOKKK* OHPJHPEOFLD, ::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MPKCIACBELN_OFFSET))(OHPJHPEOFLD, NLNNFINONOI);
	}

	static ::System::Void AJCJCDKKNJD(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_AJCJCDKKNJD_OFFSET))(NLNNFINONOI, OCFHGOGFGPE, AELLPLBJELA);
	}

	static ::System::Void GLMIPHPNDGB(::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GLMIPHPNDGB_OFFSET))(NLNNFINONOI);
	}

	static ::System::Boolean LAHHNDABEIJ(::GIGFDLPMNND* NLNNFINONOI, ::System::String* AELLPLBJELA, ::System::Boolean FKPAFHHCFDG, ::System::Single JFEOAPLPBHN)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_LAHHNDABEIJ_OFFSET))(NLNNFINONOI, AELLPLBJELA, FKPAFHHCFDG, JFEOAPLPBHN);
	}

	static ::System::Void NDLFGNAGMAK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NDLFGNAGMAK_OFFSET))();
	}

	static ::System::Void CALAGCOBFGM(::System::Boolean JKBLDFBGBPK, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CALAGCOBFGM_OFFSET))(JKBLDFBGBPK, KECKGDFIALJ);
	}

	static ::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags> KJMLNFEFCHA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KJMLNFEFCHA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean JNLNDGFOJPN(::MoleMole::Config::RenderMaterial* EJCBEJMGFAJ, ::MoleMole::Config::RenderMaterial* EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::RenderMaterial*, ::MoleMole::Config::RenderMaterial*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_JNLNDGFOJPN_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Boolean NFNIJAMDHGP(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP, ::System::Boolean PNJFPDDLKPD, ::System::Int32 KDDKDHBELOC, ::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAHJHLFIFBG, ::System::Boolean NLPKOGHIMJN, ::MoleMole::Battle::MaterialPropertyModifierExtraParams EMIHEAOBLJN)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NFNIJAMDHGP_OFFSET))(NLNNFINONOI, MCOHLHMKLIP, PNJFPDDLKPD, KDDKDHBELOC, AELLPLBJELA, OAHJHLFIFBG, NLPKOGHIMJN, EMIHEAOBLJN);
	}

	static ::System::Void LNCGPCHPGFN(::GIGFDLPMNND* NLNNFINONOI, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_LNCGPCHPGFN_OFFSET))(NLNNFINONOI, FBILHHBPEHD);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_IFHNMAGGFAE_OFFSET))(this);
	}

	static ::System::Void PNFFIMOEGCK(::GIGFDLPMNND* NLNNFINONOI, ::System::Collections::Generic::List_1<::System::String*>* EMNPFMGLOPI, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_PNFFIMOEGCK_OFFSET))(NLNNFINONOI, EMNPFMGLOPI, AELLPLBJELA);
	}

	static ::System::Void GCNAKIFIINE(::GIGFDLPMNND* NLNNFINONOI, ::MoleMole::Config::MaterialPropertyType JDEHJODFGFE)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GCNAKIFIINE_OFFSET))(NLNNFINONOI, JDEHJODFGFE);
	}

	static ::System::Boolean IOGNGGGONHC(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_IOGNGGGONHC_OFFSET))(NLNNFINONOI, MCOHLHMKLIP);
	}

	static ::System::Void CEOFNAOFPDL(::System::String* GKECIJJPGLO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CEOFNAOFPDL_OFFSET))(GKECIJJPGLO, KECKGDFIALJ);
	}

	static ::System::Void LOGIMKAEKLJ(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Int32 ABHBKFJKINO, ::System::Boolean OJPLCNILFGN)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_LOGIMKAEKLJ_OFFSET))(NLNNFINONOI, OCFHGOGFGPE, ABHBKFJKINO, OJPLCNILFGN);
	}

	static ::System::Void MDPDNONINBM(::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MDPDNONINBM_OFFSET))(NLNNFINONOI);
	}

	static ::System::Boolean NPHMDLMLEKP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NPHMDLMLEKP_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void MHPDOKFPMKG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MHPDOKFPMKG_OFFSET))();
	}

	static ::System::Void EDNMKCKFJKL(::GIGFDLPMNND* NLNNFINONOI, ::MoleMole::Config::MaterialPropertyType JDEHJODFGFE)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_EDNMKCKFJKL_OFFSET))(NLNNFINONOI, JDEHJODFGFE);
	}

	static ::System::Void GBDOFFIHKCJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean ABOCJLMCACI, ::System::Single& FEAGBHHBDGH, ::System::Single& AEDIJADAECJ, ::System::Single& EFNJMBDJCDI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GBDOFFIHKCJ_OFFSET))(KECKGDFIALJ, ABOCJLMCACI, FEAGBHHBDGH, AEDIJADAECJ, EFNJMBDJCDI);
	}

	static ::NLDDMLLPKCG* IBPOAGJLPDN()
	{
		return ((::NLDDMLLPKCG*(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_IBPOAGJLPDN_OFFSET))();
	}

	static ::System::Void BANNGNHDCNK(::MOELDGPPDPM* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::MOELDGPPDPM*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BANNGNHDCNK_OFFSET))(ECMMKCJLBMD);
	}

	static ::System::Void MKFPCOAKOBK(::System::Collections::Generic::List_1<::System::Object*>*& DJLOKMMLFJC, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MKFPCOAKOBK_OFFSET))(DJLOKMMLFJC, ABHBKFJKINO);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void PPIMFENANFF(::GEIHCPAOKKK* OHPJHPEOFLD, ::GIGFDLPMNND* NLNNFINONOI, ::COCJHGGDBCA* GIELJAOJDAI)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::GIGFDLPMNND*, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_PPIMFENANFF_OFFSET))(OHPJHPEOFLD, NLNNFINONOI, GIELJAOJDAI);
	}

	static ::System::Void LODGHDDIODM(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_LODGHDDIODM_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Boolean GJGCLLEINKN(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP, ::System::Boolean FKPAFHHCFDG, ::System::Single JFEOAPLPBHN)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GJGCLLEINKN_OFFSET))(NLNNFINONOI, MCOHLHMKLIP, FKPAFHHCFDG, JFEOAPLPBHN);
	}

	::System::Void ONDGHLODPGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_ONDGHLODPGA_OFFSET))(this);
	}

	static ::System::Void HDGLPBCJDBP(::COCJHGGDBCA* DFAJBFNNHJG, ::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HDGLPBCJDBP_OFFSET))(DFAJBFNNHJG, NLNNFINONOI);
	}

	::System::Void FOMNENKFIMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_FOMNENKFIMG_OFFSET))(this);
	}

	static ::System::Void DPPCFEBHPFE(::COCJHGGDBCA* DFAJBFNNHJG, ::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DPPCFEBHPFE_OFFSET))(DFAJBFNNHJG, NLNNFINONOI);
	}

	static ::System::Void MOIDNCOKOAG(::GIGFDLPMNND* NLNNFINONOI, ::System::String* HPBNFOKMCIG, ::System::Boolean AHEAEIMIJJK, ::System::Int32 DGNJGMIDMCE)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MOIDNCOKOAG_OFFSET))(NLNNFINONOI, HPBNFOKMCIG, AHEAEIMIJJK, DGNJGMIDMCE);
	}

	static ::System::Void LAMODPEEALE(::GIGFDLPMNND* NLNNFINONOI, ::MoleMole::Config::MaterialPropertyType JDEHJODFGFE, ::System::Collections::Generic::List_1<::ILLCEFBALCI*>* HOKGKMPLCPF)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::List_1<::ILLCEFBALCI*>*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_LAMODPEEALE_OFFSET))(NLNNFINONOI, JDEHJODFGFE, HOKGKMPLCPF);
	}

	static ::System::Void NLEHBKOELBA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NLEHBKOELBA_OFFSET))();
	}

	static ::System::Void HIJBCIBDMCC(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Vector3 LHBLECJEJEL)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HIJBCIBDMCC_OFFSET))(OHPJHPEOFLD, LHBLECJEJEL);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void NBBEOPAODPC(::System::String* GKECIJJPGLO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NBBEOPAODPC_OFFSET))(GKECIJJPGLO, KECKGDFIALJ);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Void IJHCLBFGKHP(::GIGFDLPMNND* NLNNFINONOI, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_IJHCLBFGKHP_OFFSET))(NLNNFINONOI, ABHBKFJKINO);
	}

	static ::System::Void DECCKLCOPHK(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Boolean MBJDMKCGOCK, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DECCKLCOPHK_OFFSET))(NLNNFINONOI, OCFHGOGFGPE, MBJDMKCGOCK, AELLPLBJELA);
	}

	static ::System::Void KAOKEHBEPCE(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP, ::System::Boolean PNJFPDDLKPD, ::System::Int32 KDDKDHBELOC, ::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAHJHLFIFBG, ::System::Boolean NLPKOGHIMJN, ::MoleMole::Battle::MaterialPropertyModifierExtraParams EMIHEAOBLJN)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KAOKEHBEPCE_OFFSET))(NLNNFINONOI, MCOHLHMKLIP, PNJFPDDLKPD, KDDKDHBELOC, AELLPLBJELA, OAHJHLFIFBG, NLPKOGHIMJN, EMIHEAOBLJN);
	}

	static ::System::Int32 BLCHCNHPPPF(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BLCHCNHPPPF_OFFSET))(NLNNFINONOI, OCFHGOGFGPE, EGEGIMGMJHN);
	}

	static ::System::Void INMGFMLLCOG(::GEIHCPAOKKK* OHPJHPEOFLD, ::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_INMGFMLLCOG_OFFSET))(OHPJHPEOFLD, NLNNFINONOI);
	}

	::System::Void NPPNBDINMLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NPPNBDINMLN_OFFSET))(this);
	}

	static ::System::Void DGLBFHAJEPL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DGLBFHAJEPL_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MAOFDCDLPBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MAOFDCDLPBO_OFFSET))(this);
	}

	static ::System::Void AKHOFEFGHNI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_AKHOFEFGHNI_OFFSET))();
	}

	static ::System::Void DDEAOCJHDDM(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DDEAOCJHDDM_OFFSET))(NLNNFINONOI, MCOHLHMKLIP);
	}

	static ::System::Void INEFBOFDGEH(::COCJHGGDBCA* DFAJBFNNHJG)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_INEFBOFDGEH_OFFSET))(DFAJBFNNHJG);
	}

	static ::System::Boolean BDBHMKAAFJH(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* LAEMJKCIKDI)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BDBHMKAAFJH_OFFSET))(NLNNFINONOI, LAEMJKCIKDI);
	}

	::System::Void KPJDJINPLGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KPJDJINPLGL_OFFSET))(this);
	}

	static ::System::Void HBJNNHEDFPK(::ILLCEFBALCI* ECMMKCJLBMD, ::NLDDMLLPKCG_JKBPFBGGPIA HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::ILLCEFBALCI*, ::NLDDMLLPKCG_JKBPFBGGPIA))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HBJNNHEDFPK_OFFSET))(ECMMKCJLBMD, HEJIBNEHLIG);
	}

	static ::System::Boolean BPKDEDPKOHK(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BPKDEDPKOHK_OFFSET))(NLNNFINONOI, OCFHGOGFGPE);
	}

	static ::System::Void CNOCIMDMBEG(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CNOCIMDMBEG_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void PKEOJPDAKDF(::System::Int32 ABHBKFJKINO, ::ILLCEFBALCI* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::System::Int32, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_PKEOJPDAKDF_OFFSET))(ABHBKFJKINO, ECMMKCJLBMD);
	}

	static ::System::Void AFFJKCKEIHC(::GIGFDLPMNND* NLNNFINONOI, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_AFFJKCKEIHC_OFFSET))(NLNNFINONOI, FBILHHBPEHD);
	}

	static ::System::Void MONJNOKBFHO(::NLDDMLLPKCG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::NLDDMLLPKCG*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MONJNOKBFHO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean GHKAFFFLJIO(::GIGFDLPMNND* LBNKPGEEPJH)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GHKAFFFLJIO_OFFSET))(LBNKPGEEPJH);
	}

	static ::System::Void DDKFDJJBDJM(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DDKFDJJBDJM_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void EMOCEKDBPGC(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP, ::System::Boolean PNJFPDDLKPD, ::System::Int32 KDDKDHBELOC, ::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAHJHLFIFBG, ::System::Boolean NLPKOGHIMJN, ::MoleMole::Battle::MaterialPropertyModifierExtraParams EMIHEAOBLJN)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_EMOCEKDBPGC_OFFSET))(NLNNFINONOI, MCOHLHMKLIP, PNJFPDDLKPD, KDDKDHBELOC, AELLPLBJELA, OAHJHLFIFBG, NLPKOGHIMJN, EMIHEAOBLJN);
	}

	::System::Boolean OGLKAMIPNKJ(::UnityEngine::Renderer* OCFHGOGFGPE, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_OGLKAMIPNKJ_OFFSET))(this, OCFHGOGFGPE, KECKGDFIALJ);
	}

	static ::System::Void JHBBNOKPAAN(::GIGFDLPMNND* NLNNFINONOI, ::System::Type* JBINFMAIOJN)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Type*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_JHBBNOKPAAN_OFFSET))(NLNNFINONOI, JBINFMAIOJN);
	}

	::System::Void HAHHIHMFNGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HAHHIHMFNGM_OFFSET))(this);
	}

	::System::Void DPHIJMPNOKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DPHIJMPNOKJ_OFFSET))(this);
	}

	static ::System::Void HKMJKFKEGHD(::GIGFDLPMNND* NLNNFINONOI, ::System::Boolean FBILHHBPEHD, ::System::Boolean PNJFPDDLKPD)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HKMJKFKEGHD_OFFSET))(NLNNFINONOI, FBILHHBPEHD, PNJFPDDLKPD);
	}

	static ::System::Void PHFFHOBFOIB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_PHFFHOBFOIB_OFFSET))();
	}

	static ::System::Void PPKJAJPLHGK(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_PPKJAJPLHGK_OFFSET))(NLNNFINONOI, MCOHLHMKLIP);
	}

	static ::System::Void GIIPPOKOGHP(::GIGFDLPMNND* NLNNFINONOI, ::GGNKHJHIHGD* GECCHCDNAHI)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::GGNKHJHIHGD*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GIIPPOKOGHP_OFFSET))(NLNNFINONOI, GECCHCDNAHI);
	}

	static ::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	static ::MoleMole::MonoRenderHandler* GEAKLEMFLJK(::Il2CppArray<::UnityEngine::Material*>*& NPBLNGGGHDD, ::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::MoleMole::MonoRenderHandler*(*)(::Il2CppArray<::UnityEngine::Material*>*&, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GEAKLEMFLJK_OFFSET))(NPBLNGGGHDD, NLNNFINONOI);
	}

	static ::System::Void GILAFIDAIOI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GILAFIDAIOI_OFFSET))(BKLGNCBNEGM);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_INEGOEGIOKM_OFFSET))(this);
	}

	static ::System::Void OPKOKONHBPD(::ILLCEFBALCI* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_OPKOKONHBPD_OFFSET))(ECMMKCJLBMD);
	}

	static ::System::Void ICMKDOOFHLO(::GIGFDLPMNND* NLNNFINONOI, ::System::Single PBCAAADNEPK, ::System::Single EFNJMBDJCDI, ::System::Single AEDIJADAECJ, ::System::Single FEAGBHHBDGH)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_ICMKDOOFHLO_OFFSET))(NLNNFINONOI, PBCAAADNEPK, EFNJMBDJCDI, AEDIJADAECJ, FEAGBHHBDGH);
	}

	static ::System::Boolean BOFEIGPDJFM(::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* EJCBEJMGFAJ, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BOFEIGPDJFM_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Void CCCLLIBMBGK(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CCCLLIBMBGK_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void ADHINNKEAPN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_ADHINNKEAPN_OFFSET))();
	}

	static ::System::Void BHEIBEBDENE(::GIGFDLPMNND* NLNNFINONOI, ::System::String* AELLPLBJELA, ::System::Boolean FKPAFHHCFDG, ::System::Single JFEOAPLPBHN)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BHEIBEBDENE_OFFSET))(NLNNFINONOI, AELLPLBJELA, FKPAFHHCFDG, JFEOAPLPBHN);
	}

	static ::System::Void GPLHFBLHJBP(::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GPLHFBLHJBP_OFFSET))(NLNNFINONOI);
	}

	static ::System::Void COCLGOJDBIL(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP, ::System::Boolean PNJFPDDLKPD, ::System::Int32 KDDKDHBELOC, ::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAHJHLFIFBG, ::System::Boolean NLPKOGHIMJN, ::MoleMole::Battle::MaterialPropertyModifierExtraParams EMIHEAOBLJN)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_COCLGOJDBIL_OFFSET))(NLNNFINONOI, MCOHLHMKLIP, PNJFPDDLKPD, KDDKDHBELOC, AELLPLBJELA, OAHJHLFIFBG, NLPKOGHIMJN, EMIHEAOBLJN);
	}

	static ::System::Void MCMHGMIIMGF(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MCMHGMIIMGF_OFFSET))(NLNNFINONOI, OCFHGOGFGPE, ABHBKFJKINO);
	}

	static ::System::Void EMKMJCODKLE(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Battle::Entity*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_EMKMJCODKLE_OFFSET))(OHPJHPEOFLD, KECKGDFIALJ, NLNNFINONOI);
	}

	static ::System::Boolean KBEKGLLLFGF(::GIGFDLPMNND* NLNNFINONOI, ::System::Int32 PAGFPDNPLNA)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KBEKGLLLFGF_OFFSET))(NLNNFINONOI, PAGFPDNPLNA);
	}

	static ::System::Void LLGHFMAGOLK(::GIGFDLPMNND* NLNNFINONOI, ::System::Boolean MBJDMKCGOCK, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_LLGHFMAGOLK_OFFSET))(NLNNFINONOI, MBJDMKCGOCK, AELLPLBJELA);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void BGHEBBFFGND()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BGHEBBFFGND_OFFSET))();
	}

	static ::System::Void PHHGCHJPHGK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_PHHGCHJPHGK_OFFSET))();
	}

	static ::System::Void KBJNPNGOJEG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KBJNPNGOJEG_OFFSET))();
	}

	static ::System::Void HNCANMENGAK(::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_HNCANMENGAK_OFFSET))(NLNNFINONOI);
	}

	static ::System::Void DLECJNNKHEJ(::System::Collections::Generic::List_1<::System::Object*>*& DJLOKMMLFJC, ::System::Int32 EOGLMAEPALE, ::System::Boolean FKPAFHHCFDG, ::System::Single JFEOAPLPBHN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*&, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DLECJNNKHEJ_OFFSET))(DJLOKMMLFJC, EOGLMAEPALE, FKPAFHHCFDG, JFEOAPLPBHN);
	}

	static ::System::Void INADIBEOGDN(::GIGFDLPMNND* NLNNFINONOI, ::LNCPLLBDBKI FONFNKIMPEF)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::LNCPLLBDBKI))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_INADIBEOGDN_OFFSET))(NLNNFINONOI, FONFNKIMPEF);
	}

	static ::System::Int32 LCFCFHKHIAP(::GIGFDLPMNND* NLNNFINONOI, ::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Int32(*)(::GIGFDLPMNND*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_LCFCFHKHIAP_OFFSET))(NLNNFINONOI, MBJDMKCGOCK);
	}

	::System::Void FFCFKNDIDEB(::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::PVOID, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_FFCFKNDIDEB_OFFSET))(this, NLNNFINONOI);
	}

	static ::System::Void EJPOHMONGDF(::GIGFDLPMNND* NLNNFINONOI, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_EJPOHMONGDF_OFFSET))(NLNNFINONOI, AELLPLBJELA);
	}

	::System::Void GGNHGEMBPCJ(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GGNHGEMBPCJ_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void FKCFEPMOGEB(::ILLCEFBALCI* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_FKCFEPMOGEB_OFFSET))(ECMMKCJLBMD);
	}

	::System::Void CFNJGCOHIJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CFNJGCOHIJH_OFFSET))(this);
	}

	static ::System::Single EPGNLOPLFGD(::System::Single IJMOIAMHOPC, ::MoleMole::ConfigMaterialPropertyModifier* DFMKILICPFB, ::System::Single EFNJMBDJCDI, ::System::Single AEDIJADAECJ, ::System::Single FEAGBHHBDGH)
	{
		return ((::System::Single(*)(::System::Single, ::MoleMole::ConfigMaterialPropertyModifier*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_EPGNLOPLFGD_OFFSET))(IJMOIAMHOPC, DFMKILICPFB, EFNJMBDJCDI, AEDIJADAECJ, FEAGBHHBDGH);
	}

	static ::System::Void OEBHMMCFBBC(::GIGFDLPMNND* NLNNFINONOI, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_OEBHMMCFBBC_OFFSET))(NLNNFINONOI, AELLPLBJELA);
	}

	static ::System::Boolean JPGKPODNMAJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_JPGKPODNMAJ_OFFSET))();
	}

	static ::System::Void AIKABKJPDBC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_AIKABKJPDBC_OFFSET))();
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NIGDIMFIAEJ_OFFSET))(this);
	}

	static ::System::Void KPEJOHLAHMM(::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KPEJOHLAHMM_OFFSET))(NLNNFINONOI);
	}

	static ::System::Void NNPHOHMDMMK(::COCJHGGDBCA* DFAJBFNNHJG)
	{
		return ((::System::Void(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NNPHOHMDMMK_OFFSET))(DFAJBFNNHJG);
	}

	static ::System::Boolean JMFFJKOELIP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLDDMLLPKCG_JMFFJKOELIP_OFFSET))();
	}

	::System::Void GMLCNHOADLE(::Unity::Jobs::JobHandle BJOOLNIDBJH)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GMLCNHOADLE_OFFSET))(this, BJOOLNIDBJH);
	}

	static ::System::Void GONBHPMIHHC(::System::Collections::Generic::List_1<::System::Object*>*& DJLOKMMLFJC, ::System::Int32 EOGLMAEPALE)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_GONBHPMIHHC_OFFSET))(DJLOKMMLFJC, EOGLMAEPALE);
	}

	static ::System::Void NJAEDNJFGHB(::GIGFDLPMNND* NLNNFINONOI, ::ODHKALNGHOG FKMHMOELCIO)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::ODHKALNGHOG))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_NJAEDNJFGHB_OFFSET))(NLNNFINONOI, FKMHMOELCIO);
	}

	static ::System::Boolean KKNPHFKLKNO(::GIGFDLPMNND* NLNNFINONOI, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KKNPHFKLKNO_OFFSET))(NLNNFINONOI, MCOHLHMKLIP);
	}

	::System::Void DLDIOCFEFDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DLDIOCFEFDB_OFFSET))(this);
	}

	static ::System::Void CDJNKAOAAKL(::GIGFDLPMNND* NLNNFINONOI)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_CDJNKAOAAKL_OFFSET))(NLNNFINONOI);
	}

	static ::System::Void BMMDMLHOFDD(::ILLCEFBALCI* ECMMKCJLBMD, ::System::Single GGPNNAMJFNO)
	{
		return ((::System::Void(*)(::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_BMMDMLHOFDD_OFFSET))(ECMMKCJLBMD, GGPNNAMJFNO);
	}

	static ::System::Int32 FCLJDMJBLGE(::GIGFDLPMNND* NLNNFINONOI, ::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Int32(*)(::GIGFDLPMNND*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_FCLJDMJBLGE_OFFSET))(NLNNFINONOI, MBJDMKCGOCK);
	}

	static ::System::Void KEGAPCBCBHN(::GIGFDLPMNND* NLNNFINONOI, ::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::GIGFDLPMNND*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_KEGAPCBCBHN_OFFSET))(NLNNFINONOI, OCFHGOGFGPE, ABHBKFJKINO);
	}

	static ::System::Void APENGEBGFJH(::EJMAJNMLJEJ* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::EJMAJNMLJEJ*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_APENGEBGFJH_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void OGBECPHLKHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_OGBECPHLKHL_OFFSET))(this);
	}

	static ::System::Void IOMPJOHJPAO(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_IOMPJOHJPAO_OFFSET))(OHPJHPEOFLD, EGEGIMGMJHN);
	}
};
