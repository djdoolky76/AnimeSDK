#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/HFJJCHKBGCC_InfoType.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/UnityEngine/Vector4.h"
class AEKEIBNBMDJ;
class AILLDGBCBGE;
class CBEBICGIOAB;
class COGBNIGPJPO;
class GGJFAFONDHN;
class GGLPJCKICNF;
class HHJGACLHFDJ;
class NIKGJHJILIO;
class ODGPPIHLOFF;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvSystemV2EditorLayout; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define HFJJCHKBGCC_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15C71580)
#define HFJJCHKBGCC_ABKGIKGBKCH_OFFSET UNITYSDK_OFFSET(0x15C77700)
#define HFJJCHKBGCC_ACHKNFODGGB_OFFSET UNITYSDK_OFFSET(0x15C726E0)
#define HFJJCHKBGCC_AGKELGOMMJK_OFFSET UNITYSDK_OFFSET(0x15C70F30)
#define HFJJCHKBGCC_AHJADNENKPN_OFFSET UNITYSDK_OFFSET(0x15C78620)
#define HFJJCHKBGCC_AICPJEANMOA_OFFSET UNITYSDK_OFFSET(0x15C75230)
#define HFJJCHKBGCC_BAKJHJLIGHK_OFFSET UNITYSDK_OFFSET(0x15C740D0)
#define HFJJCHKBGCC_BBLLMALNIMJ_OFFSET UNITYSDK_OFFSET(0x15C727E0)
#define HFJJCHKBGCC_BFDIFPBNMFL_OFFSET UNITYSDK_OFFSET(0x15C78FA0)
#define HFJJCHKBGCC_BHEEFDMCNPB_OFFSET UNITYSDK_OFFSET(0x15C718C0)
#define HFJJCHKBGCC_BIHLEOGDIDK_OFFSET UNITYSDK_OFFSET(0x15C74E30)
#define HFJJCHKBGCC_BJCAFKJNANJ_OFFSET UNITYSDK_OFFSET(0x15C72980)
#define HFJJCHKBGCC_BKAJLLELPMA_OFFSET UNITYSDK_OFFSET(0x15C756B0)
#define HFJJCHKBGCC_BPJGFJNIBAE_OFFSET UNITYSDK_OFFSET(0x15C79540)
#define HFJJCHKBGCC_BPMMEHNOOFG_OFFSET UNITYSDK_OFFSET(0x15C71910)
#define HFJJCHKBGCC_CCJPDHADIAE_OFFSET UNITYSDK_OFFSET(0x15C72CD0)
#define HFJJCHKBGCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C795C0)
#define HFJJCHKBGCC_CDJBDBKGDIL_OFFSET UNITYSDK_OFFSET(0x15C76970)
#define HFJJCHKBGCC_CEGJBEDIJPC_OFFSET UNITYSDK_OFFSET(0x15C73BE0)
#define HFJJCHKBGCC_CHHHMLJCEBH_OFFSET UNITYSDK_OFFSET(0x15C73A50)
#define HFJJCHKBGCC_CIBCBOFPGKC_OFFSET UNITYSDK_OFFSET(0x15C70D90)
#define HFJJCHKBGCC_CKGMPKAHHCC_OFFSET UNITYSDK_OFFSET(0x15C72420)
#define HFJJCHKBGCC_CLHFHHBBNMM_OFFSET UNITYSDK_OFFSET(0x15C71E40)
#define HFJJCHKBGCC_COEOOAKDCJF_OFFSET UNITYSDK_OFFSET(0x15C76BA0)
#define HFJJCHKBGCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C71320)
#define HFJJCHKBGCC_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0x15C70E50)
#define HFJJCHKBGCC_DEJELBOHHKN_OFFSET UNITYSDK_OFFSET(0x15C75070)
#define HFJJCHKBGCC_DGEIOPCPALO_OFFSET UNITYSDK_OFFSET(0x15C73430)
#define HFJJCHKBGCC_DODLCMFEMFM_OFFSET UNITYSDK_OFFSET(0x15C73AA0)
#define HFJJCHKBGCC_DPGNKEFBIIA_OFFSET UNITYSDK_OFFSET(0x15C70BE0)
#define HFJJCHKBGCC_DPJJMCEJPHL_OFFSET UNITYSDK_OFFSET(0x15C72C50)
#define HFJJCHKBGCC_EBDLJFKHOBE_1_OFFSET UNITYSDK_OFFSET(0x15C73050)
#define HFJJCHKBGCC_EBDLJFKHOBE_2_OFFSET UNITYSDK_OFFSET(0x15C730F0)
#define HFJJCHKBGCC_EBDLJFKHOBE_OFFSET UNITYSDK_OFFSET(0x15C72FE0)
#define HFJJCHKBGCC_EBHBELHHJEO_OFFSET UNITYSDK_OFFSET(0x15C759A0)
#define HFJJCHKBGCC_EDLDBOOFLOL_OFFSET UNITYSDK_OFFSET(0x15C74750)
#define HFJJCHKBGCC_EFEGAKDNJCB_OFFSET UNITYSDK_OFFSET(0x15C78010)
#define HFJJCHKBGCC_EFGDMOCAGAP_OFFSET UNITYSDK_OFFSET(0x15C78180)
#define HFJJCHKBGCC_EKBECHCDFDG_OFFSET UNITYSDK_OFFSET(0x15C73680)
#define HFJJCHKBGCC_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15C70C40)
#define HFJJCHKBGCC_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0x15C74BD0)
#define HFJJCHKBGCC_FCBOKAFEDGA_OFFSET UNITYSDK_OFFSET(0x15C71F70)
#define HFJJCHKBGCC_FDOFGJGKNKJ_OFFSET UNITYSDK_OFFSET(0x15C740C0)
#define HFJJCHKBGCC_FFGJFLGNFMG_OFFSET UNITYSDK_OFFSET(0x15C75FA0)
#define HFJJCHKBGCC_FGFDGBDLOLO_OFFSET UNITYSDK_OFFSET(0x15C792C0)
#define HFJJCHKBGCC_FKFDNJBDHAL_OFFSET UNITYSDK_OFFSET(0x15C72D40)
#define HFJJCHKBGCC_FMBDHGDNKAD_1_OFFSET UNITYSDK_OFFSET(0x15C725F0)
#define HFJJCHKBGCC_FMBDHGDNKAD_2_OFFSET UNITYSDK_OFFSET(0x15C72670)
#define HFJJCHKBGCC_FMBDHGDNKAD_OFFSET UNITYSDK_OFFSET(0x15C72580)
#define HFJJCHKBGCC_FMODFGHBEBK_OFFSET UNITYSDK_OFFSET(0x15C70CD0)
#define HFJJCHKBGCC_FNMNDMJKMAH_OFFSET UNITYSDK_OFFSET(0x15C74100)
#define HFJJCHKBGCC_GAMMGEMDOOC_OFFSET UNITYSDK_OFFSET(0x15C75650)
#define HFJJCHKBGCC_GBOCHGIPOCP_OFFSET UNITYSDK_OFFSET(0x15C755F0)
#define HFJJCHKBGCC_GEPMCNLJGMK_1_OFFSET UNITYSDK_OFFSET(0x15C77AC0)
#define HFJJCHKBGCC_GEPMCNLJGMK_OFFSET UNITYSDK_OFFSET(0x15C76560)
#define HFJJCHKBGCC_GFEDFHPCCCP_OFFSET UNITYSDK_OFFSET(0x15C72DA0)
#define HFJJCHKBGCC_GGHGDFBEANG_OFFSET UNITYSDK_OFFSET(0x15C74FB0)
#define HFJJCHKBGCC_GJKDBDGEIBA_1_OFFSET UNITYSDK_OFFSET(0x15C73570)
#define HFJJCHKBGCC_GJKDBDGEIBA_2_OFFSET UNITYSDK_OFFSET(0x15C735F0)
#define HFJJCHKBGCC_GJKDBDGEIBA_OFFSET UNITYSDK_OFFSET(0x15C73500)
#define HFJJCHKBGCC_GKEJKDGJNMG_OFFSET UNITYSDK_OFFSET(0x15C71050)
#define HFJJCHKBGCC_GLHFEEOEOPG_OFFSET UNITYSDK_OFFSET(0x15C72E30)
#define HFJJCHKBGCC_GMDODDJFPPM_1_OFFSET UNITYSDK_OFFSET(0x15C78360)
#define HFJJCHKBGCC_GMDODDJFPPM_OFFSET UNITYSDK_OFFSET(0x15C781F0)
#define HFJJCHKBGCC_GPCNAOPADDE_OFFSET UNITYSDK_OFFSET(0x15C70B80)
#define HFJJCHKBGCC_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x15C75B70)
#define HFJJCHKBGCC_HEOEOMLCFFA_OFFSET UNITYSDK_OFFSET(0x15C740F0)
#define HFJJCHKBGCC_HGNNDAHJOEE_OFFSET UNITYSDK_OFFSET(0x15C743C0)
#define HFJJCHKBGCC_HHCJHGFBHBA_OFFSET UNITYSDK_OFFSET(0x15C71C00)
#define HFJJCHKBGCC_HHOECJCLJAD_OFFSET UNITYSDK_OFFSET(0x15C71DB0)
#define HFJJCHKBGCC_HKGKDKKOOAK_OFFSET UNITYSDK_OFFSET(0x15C71060)
#define HFJJCHKBGCC_IDPCDNBPDFA_OFFSET UNITYSDK_OFFSET(0x15C78400)
#define HFJJCHKBGCC_IEGIHJBEJNM_OFFSET UNITYSDK_OFFSET(0x15C73B40)
#define HFJJCHKBGCC_IKEKDDIPMOD_OFFSET UNITYSDK_OFFSET(0x15C72760)
#define HFJJCHKBGCC_IMJPLJAOMGC_OFFSET UNITYSDK_OFFSET(0x15C78080)
#define HFJJCHKBGCC_IOODCLJKNOC_1_OFFSET UNITYSDK_OFFSET(0x15C72500)
#define HFJJCHKBGCC_IOODCLJKNOC_OFFSET UNITYSDK_OFFSET(0x15C723A0)
#define HFJJCHKBGCC_JCIHMJGKNGG_OFFSET UNITYSDK_OFFSET(0x15C72050)
#define HFJJCHKBGCC_JGMBHLBGMDN_OFFSET UNITYSDK_OFFSET(0x15C747D0)
#define HFJJCHKBGCC_JIAGEAAJHJG_OFFSET UNITYSDK_OFFSET(0x15C77350)
#define HFJJCHKBGCC_JKKNMEAEOJP_1_OFFSET UNITYSDK_OFFSET(0x15C73940)
#define HFJJCHKBGCC_JKKNMEAEOJP_2_OFFSET UNITYSDK_OFFSET(0x15C739E0)
#define HFJJCHKBGCC_JKKNMEAEOJP_OFFSET UNITYSDK_OFFSET(0x15C738B0)
#define HFJJCHKBGCC_JKLKJOFCBIG_OFFSET UNITYSDK_OFFSET(0x15C76DA0)
#define HFJJCHKBGCC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C75E00)
#define HFJJCHKBGCC_JOKHAHJANGN_OFFSET UNITYSDK_OFFSET(0x15C753F0)
#define HFJJCHKBGCC_JOPOHIEHGBL_OFFSET UNITYSDK_OFFSET(0x15C78290)
#define HFJJCHKBGCC_KAFKCEEGCAP_OFFSET UNITYSDK_OFFSET(0x15C711A0)
#define HFJJCHKBGCC_KGONFOIGHGF_1_OFFSET UNITYSDK_OFFSET(0x15C733B0)
#define HFJJCHKBGCC_KGONFOIGHGF_2_OFFSET UNITYSDK_OFFSET(0x15C73490)
#define HFJJCHKBGCC_KGONFOIGHGF_OFFSET UNITYSDK_OFFSET(0x15C73320)
#define HFJJCHKBGCC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15C71960)
#define HFJJCHKBGCC_KINPKNHBLKK_OFFSET UNITYSDK_OFFSET(0x15C77E10)
#define HFJJCHKBGCC_KNMCLCJCACO_1_OFFSET UNITYSDK_OFFSET(0x15C73210)
#define HFJJCHKBGCC_KNMCLCJCACO_2_OFFSET UNITYSDK_OFFSET(0x15C732B0)
#define HFJJCHKBGCC_KNMCLCJCACO_OFFSET UNITYSDK_OFFSET(0x15C73180)
#define HFJJCHKBGCC_LAMNCJIKEBI_OFFSET UNITYSDK_OFFSET(0x15C77F90)
#define HFJJCHKBGCC_LBOLAOFHDOJ_OFFSET UNITYSDK_OFFSET(0x15C74EF0)
#define HFJJCHKBGCC_LGOBJJCPONN_OFFSET UNITYSDK_OFFSET(0x15C764E0)
#define HFJJCHKBGCC_LIFINAIOLPG_OFFSET UNITYSDK_OFFSET(0x15C77ED0)
#define HFJJCHKBGCC_LMHJLDCGIMG_OFFSET UNITYSDK_OFFSET(0x15C77240)
#define HFJJCHKBGCC_LPFCBEFGGKL_OFFSET UNITYSDK_OFFSET(0x15C76BB0)
#define HFJJCHKBGCC_LPJJHJDGOCD_OFFSET UNITYSDK_OFFSET(0x15C76080)
#define HFJJCHKBGCC_MCBNOMMGCIN_OFFSET UNITYSDK_OFFSET(0x15C794C0)
#define HFJJCHKBGCC_MFKEFNMBGDF_OFFSET UNITYSDK_OFFSET(0x15C76920)
#define HFJJCHKBGCC_MINDLBJNIOO_OFFSET UNITYSDK_OFFSET(0x15C71B30)
#define HFJJCHKBGCC_MNPPPHHEIND_OFFSET UNITYSDK_OFFSET(0x15C72360)
#define HFJJCHKBGCC_NAEIPBAIONG_OFFSET UNITYSDK_OFFSET(0x15C74D70)
#define HFJJCHKBGCC_NAMELAIMPDM_OFFSET UNITYSDK_OFFSET(0x15C74120)
#define HFJJCHKBGCC_NBADJCIPJMM_OFFSET UNITYSDK_OFFSET(0x15C72EC0)
#define HFJJCHKBGCC_NBBAFNFKBGO_OFFSET UNITYSDK_OFFSET(0x15C74180)
#define HFJJCHKBGCC_NFNLHGMCLBF_OFFSET UNITYSDK_OFFSET(0x15C755A0)
#define HFJJCHKBGCC_NHEBLBNICCB_OFFSET UNITYSDK_OFFSET(0x15C722A0)
#define HFJJCHKBGCC_NMEDFHHBIBJ_1_OFFSET UNITYSDK_OFFSET(0x15C73780)
#define HFJJCHKBGCC_NMEDFHHBIBJ_2_OFFSET UNITYSDK_OFFSET(0x15C73820)
#define HFJJCHKBGCC_NMEDFHHBIBJ_OFFSET UNITYSDK_OFFSET(0x15C73710)
#define HFJJCHKBGCC_NPGMKGPJABF_OFFSET UNITYSDK_OFFSET(0x15C72B90)
#define HFJJCHKBGCC_OAPFDMFDKGP_OFFSET UNITYSDK_OFFSET(0x15C71CC0)
#define HFJJCHKBGCC_OCIHLAJHALK_OFFSET UNITYSDK_OFFSET(0x15C74110)
#define HFJJCHKBGCC_OHIIIPLIEEN_OFFSET UNITYSDK_OFFSET(0x15C72110)
#define HFJJCHKBGCC_OJLIFDDGDAK_OFFSET UNITYSDK_OFFSET(0x15C76460)
#define HFJJCHKBGCC_OMKBMCCAAFP_OFFSET UNITYSDK_OFFSET(0x15C78100)
#define HFJJCHKBGCC_OMNOAPIKOPF_OFFSET UNITYSDK_OFFSET(0x15C740E0)
#define HFJJCHKBGCC_OPHKBGBBHDF_OFFSET UNITYSDK_OFFSET(0x15C74130)
#define HFJJCHKBGCC_PFMBEHKMHDK_OFFSET UNITYSDK_OFFSET(0x15C73E90)
#define HFJJCHKBGCC_PHPDFOMGKAH_OFFSET UNITYSDK_OFFSET(0x15C72B30)
#define HFJJCHKBGCC_PJIBADGABKL_OFFSET UNITYSDK_OFFSET(0x15C77F10)
#define HFJJCHKBGCC_PLNEHDJGKLA_OFFSET UNITYSDK_OFFSET(0x15C74B80)
#define HFJJCHKBGCC_PMADDMEEKAD_OFFSET UNITYSDK_OFFSET(0x15C749B0)
#define HFJJCHKBGCC_PNHKOOGEOHE_1_OFFSET UNITYSDK_OFFSET(0x15C79430)
#define HFJJCHKBGCC_PNHKOOGEOHE_OFFSET UNITYSDK_OFFSET(0x15C793A0)
#define HFJJCHKBGCC__RELEASEPRIORITYIMMEDIANTLY_B__145_0_OFFSET UNITYSDK_OFFSET(0x15C7A760)

inline static constexpr unsigned int HFJJCHKBGCC_TypeDefinitionIndex = 49277;

	class HFJJCHKBGCC
	{
	public:
		::GGLPJCKICNF* KNNENCGNEJC; // 0x10
		::System::Action_1<::System::String*>* JGFKCPNEJDH; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>* CABBMGPMEGK; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::System::String*>*>* HJJLOKBGLEF; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* PECBIONEHJE; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::System::Object*, ::AILLDGBCBGE*>*>* PAAJCDMIHHH; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* JODFPFKENJD; // 0x40
		::System::Collections::Generic::List_1<::HHJGACLHFDJ*>* APLNONFPEFE; // 0x48
		::RPG::Client::EnvironmentSystem* DILGJEAEKGL; // 0x50
		::System::Collections::Generic::List_1<::HHJGACLHFDJ*>* MKBACEGHANF; // 0x58
		::GGLPJCKICNF* IJPMJAAADEO; // 0x60
		::GGLPJCKICNF* MJAJJDGAKCA; // 0x68
		::GGLPJCKICNF* EPPGCNDBKFJ; // 0x70
		::GGLPJCKICNF* LFEJNFJHJIL; // 0x78
		::System::Collections::Generic::List_1<::ODGPPIHLOFF*>* BFKGPCELDGI; // 0x80
		::RPG::Editor::EnvironmentSystemV2Editor::EnvSystemV2EditorLayout* FNPIMJIJOHE; // 0x88
		::GGLPJCKICNF* CKGMPFEIDIJ; // 0x90
		::UnityEngine::ComputeShader* FAOKDKBILBH; // 0x98
		::System::Int32 COFCBHLECDB; // 0xA0
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_ELMLHLIJBEH()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x129E0);
		}

		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_GMJALIBKJFD()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x129E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_JPPIKLDAPEE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x129F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>** StaticGet_DIDOJLNBGIK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>**)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x129F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_BDODPNDKBPH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x12A00);
		}

		static ::System::Int32* StaticGet_NJBLAMPLAKJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x3CE0);
		}

		static ::System::Int32* StaticGet_FHKMIHHOIHI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x3CE4);
		}

		static ::System::Int32* StaticGet_KMONEKAECNN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x3CE8);
		}

		static ::System::Int32* StaticGet_JAONNLDHLCH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HFJJCHKBGCC")->GetStaticField(0x3CEC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CCTOR_OFFSET))();
		}

		static ::System::Void GPCNAOPADDE(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GPCNAOPADDE_OFFSET))(a1);
		}

		static ::System::Void DPGNKEFBIIA(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_DPGNKEFBIIA_OFFSET))(a1);
		}

		static ::System::Void ELEPDOMDAGA(::HFJJCHKBGCC_InfoType a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::HFJJCHKBGCC_InfoType, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_ELEPDOMDAGA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FMODFGHBEBK(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FMODFGHBEBK_OFFSET))(a1, a2);
		}

		static ::System::Void CIBCBOFPGKC(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CIBCBOFPGKC_OFFSET))(a1, a2);
		}

		static ::System::Void DCADIANHPFD(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_DCADIANHPFD_OFFSET))(a1, a2);
		}

		static ::System::Void AGKELGOMMJK(::UnityEngine::ComputeShader* a1, ::GGLPJCKICNF* a2, ::UnityEngine::RenderTexture* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::GGLPJCKICNF*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_AGKELGOMMJK_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::HHJGACLHFDJ*>* GKEJKDGJNMG()
		{
			return ((::System::Collections::Generic::List_1<::HHJGACLHFDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GKEJKDGJNMG_OFFSET))(this);
		}

		static ::System::Void HKGKDKKOOAK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJJCHKBGCC_HKGKDKKOOAK_OFFSET))();
		}

		static ::UnityEngine::Texture* KAFKCEEGCAP(::System::String* a1)
		{
			return ((::UnityEngine::Texture*(*)(::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KAFKCEEGCAP_OFFSET))(a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void BPMMEHNOOFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BPMMEHNOOFG_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HHCJHGFBHBA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_HHCJHGFBHBA_OFFSET))(this, a1);
		}

		::System::Void OAPFDMFDKGP(::System::Type* a1, ::System::Func_2<::System::Object*, ::AILLDGBCBGE*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Func_2<::System::Object*, ::AILLDGBCBGE*>*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_OAPFDMFDKGP_OFFSET))(this, a1, a2);
		}

		::System::Boolean HHOECJCLJAD(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_HHOECJCLJAD_OFFSET))(this, a1);
		}

		::System::Void CLHFHHBBNMM(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CLHFHHBBNMM_OFFSET))(this, a1, a2);
		}

		::AILLDGBCBGE* FCBOKAFEDGA(::System::Type* a1)
		{
			return ((::AILLDGBCBGE*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FCBOKAFEDGA_OFFSET))(this, a1);
		}

		::System::Type* JCIHMJGKNGG(::System::String* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JCIHMJGKNGG_OFFSET))(this, a1);
		}

		::System::Void OHIIIPLIEEN(::HHJGACLHFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHJGACLHFDJ*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_OHIIIPLIEEN_OFFSET))(this, a1);
		}

		::NIKGJHJILIO* NHEBLBNICCB()
		{
			return ((::NIKGJHJILIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NHEBLBNICCB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HHJGACLHFDJ*>* MNPPPHHEIND()
		{
			return ((::System::Collections::Generic::List_1<::HHJGACLHFDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_MNPPPHHEIND_OFFSET))(this);
		}

		::GGJFAFONDHN* IOODCLJKNOC(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::GGJFAFONDHN*(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_IOODCLJKNOC_OFFSET))(this, a1, a2);
		}

		::GGJFAFONDHN* IOODCLJKNOC_1(::EnviromentSystem::EnviromentPropertiesID a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::GGJFAFONDHN*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_IOODCLJKNOC_1_OFFSET))(this, a1, a2);
		}

		::GGJFAFONDHN* CKGMPKAHHCC(::System::Int32 a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::GGJFAFONDHN*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CKGMPKAHHCC_OFFSET))(this, a1, a2);
		}

		::AEKEIBNBMDJ* FMBDHGDNKAD(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::AEKEIBNBMDJ*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FMBDHGDNKAD_OFFSET))(this, a1);
		}

		::AEKEIBNBMDJ* FMBDHGDNKAD_1(::System::Int32 a1)
		{
			return ((::AEKEIBNBMDJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FMBDHGDNKAD_1_OFFSET))(this, a1);
		}

		::AEKEIBNBMDJ* FMBDHGDNKAD_2(::System::String* a1)
		{
			return ((::AEKEIBNBMDJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FMBDHGDNKAD_2_OFFSET))(this, a1);
		}

		static ::System::Int32 ACHKNFODGGB(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_ACHKNFODGGB_OFFSET))(a1);
		}

		static ::System::Int32 IKEKDDIPMOD(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_IKEKDDIPMOD_OFFSET))(a1);
		}

		static ::System::String* BBLLMALNIMJ(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BBLLMALNIMJ_OFFSET))(a1);
		}

		static ::System::String* BJCAFKJNANJ(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BJCAFKJNANJ_OFFSET))(a1);
		}

		static ::System::Boolean PHPDFOMGKAH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_PHPDFOMGKAH_OFFSET))(a1);
		}

		::System::Void NPGMKGPJABF(::ODGPPIHLOFF* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ODGPPIHLOFF*, ::System::Action*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NPGMKGPJABF_OFFSET))(this, a1, a2);
		}

		::System::String* DPJJMCEJPHL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_DPJJMCEJPHL_OFFSET))(this);
		}

		::System::Boolean CCJPDHADIAE(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CCJPDHADIAE_OFFSET))(this, a1);
		}

		::RPG::GameCore::EnviromentControlPriority FKFDNJBDHAL()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FKFDNJBDHAL_OFFSET))(this);
		}

		::System::Int32 GFEDFHPCCCP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GFEDFHPCCCP_OFFSET))(this);
		}

		::System::Int32 GLHFEEOEOPG(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GLHFEEOEOPG_OFFSET))(this, a1);
		}

		::System::Int32 NBADJCIPJMM(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NBADJCIPJMM_OFFSET))(this, a1);
		}

		::System::Single EBDLJFKHOBE(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EBDLJFKHOBE_OFFSET))(this, a1);
		}

		::System::Single EBDLJFKHOBE_1(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EBDLJFKHOBE_1_OFFSET))(this, a1);
		}

		::System::Single EBDLJFKHOBE_2(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EBDLJFKHOBE_2_OFFSET))(this, a1);
		}

		::System::Single KNMCLCJCACO(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KNMCLCJCACO_OFFSET))(this, a1);
		}

		::System::Single KNMCLCJCACO_1(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KNMCLCJCACO_1_OFFSET))(this, a1);
		}

		::System::Single KNMCLCJCACO_2(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KNMCLCJCACO_2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 KGONFOIGHGF(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KGONFOIGHGF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 KGONFOIGHGF_1(::System::String* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KGONFOIGHGF_1_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* DGEIOPCPALO(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_DGEIOPCPALO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 KGONFOIGHGF_2(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KGONFOIGHGF_2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GJKDBDGEIBA(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GJKDBDGEIBA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GJKDBDGEIBA_1(::System::String* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GJKDBDGEIBA_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GJKDBDGEIBA_2(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GJKDBDGEIBA_2_OFFSET))(this, a1);
		}

		::System::Int32 EKBECHCDFDG(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EKBECHCDFDG_OFFSET))(this, a1);
		}

		::System::Boolean NMEDFHHBIBJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NMEDFHHBIBJ_OFFSET))(this, a1);
		}

		::System::Boolean NMEDFHHBIBJ_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NMEDFHHBIBJ_1_OFFSET))(this, a1);
		}

		::System::Boolean NMEDFHHBIBJ_2(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NMEDFHHBIBJ_2_OFFSET))(this, a1);
		}

		::System::Boolean JKKNMEAEOJP(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JKKNMEAEOJP_OFFSET))(this, a1);
		}

		::System::Boolean JKKNMEAEOJP_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JKKNMEAEOJP_1_OFFSET))(this, a1);
		}

		::System::Boolean JKKNMEAEOJP_2(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JKKNMEAEOJP_2_OFFSET))(this, a1);
		}

		::System::Void CHHHMLJCEBH(::RPG::Client::EnvironmentSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvironmentSystem*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CHHHMLJCEBH_OFFSET))(this, a1);
		}

		::System::Void DODLCMFEMFM(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_DODLCMFEMFM_OFFSET))(this, a1);
		}

		::System::Void IEGIHJBEJNM(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_IEGIHJBEJNM_OFFSET))(this, a1);
		}

		::System::Void BHEEFDMCNPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BHEEFDMCNPB_OFFSET))(this);
		}

		::System::Void CEGJBEDIJPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CEGJBEDIJPC_OFFSET))(this);
		}

		::System::Void PFMBEHKMHDK(::EnviromentSystemV2Space::OutputType a1, ::CBEBICGIOAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_PFMBEHKMHDK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ComputeShader* FDOFGJGKNKJ()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FDOFGJGKNKJ_OFFSET))(this);
		}

		::GGLPJCKICNF* BAKJHJLIGHK()
		{
			return ((::GGLPJCKICNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BAKJHJLIGHK_OFFSET))(this);
		}

		::GGLPJCKICNF* OMNOAPIKOPF()
		{
			return ((::GGLPJCKICNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_OMNOAPIKOPF_OFFSET))(this);
		}

		::GGLPJCKICNF* HEOEOMLCFFA()
		{
			return ((::GGLPJCKICNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_HEOEOMLCFFA_OFFSET))(this);
		}

		::GGLPJCKICNF* FNMNDMJKMAH()
		{
			return ((::GGLPJCKICNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FNMNDMJKMAH_OFFSET))(this);
		}

		::GGLPJCKICNF* OCIHLAJHALK()
		{
			return ((::GGLPJCKICNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_OCIHLAJHALK_OFFSET))(this);
		}

		::GGLPJCKICNF* NAMELAIMPDM()
		{
			return ((::GGLPJCKICNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NAMELAIMPDM_OFFSET))(this);
		}

		::RPG::Editor::EnvironmentSystemV2Editor::EnvSystemV2EditorLayout* OPHKBGBBHDF()
		{
			return ((::RPG::Editor::EnvironmentSystemV2Editor::EnvSystemV2EditorLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_OPHKBGBBHDF_OFFSET))(this);
		}

		::System::Void NBBAFNFKBGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NBBAFNFKBGO_OFFSET))(this);
		}

		::System::Void HGNNDAHJOEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_HGNNDAHJOEE_OFFSET))(this);
		}

		::System::Void EDLDBOOFLOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EDLDBOOFLOL_OFFSET))(this);
		}

		::System::Void PLNEHDJGKLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_PLNEHDJGKLA_OFFSET))(this);
		}

		::System::Void NAEIPBAIONG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NAEIPBAIONG_OFFSET))(this);
		}

		::System::Void LBOLAOFHDOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_LBOLAOFHDOJ_OFFSET))(this);
		}

		::System::Void DEJELBOHHKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_DEJELBOHHKN_OFFSET))(this);
		}

		::System::Void AICPJEANMOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_AICPJEANMOA_OFFSET))(this);
		}

		::System::Void JOKHAHJANGN(::RPG::CustomRP::CustomLightQualityFilter a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JOKHAHJANGN_OFFSET))(this, a1, a2);
		}

		::System::Void PMADDMEEKAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_PMADDMEEKAD_OFFSET))(this);
		}

		::System::Void EPNKLHCHFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EPNKLHCHFIH_OFFSET))(this);
		}

		::System::Void GAMMGEMDOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GAMMGEMDOOC_OFFSET))(this);
		}

		::System::Void NFNLHGMCLBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_NFNLHGMCLBF_OFFSET))(this);
		}

		::System::Void EBHBELHHJEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EBHBELHHJEO_OFFSET))(this);
		}

		::System::Void GBOCHGIPOCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GBOCHGIPOCP_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FFGJFLGNFMG(::COGBNIGPJPO* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FFGJFLGNFMG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LPJJHJDGOCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_LPJJHJDGOCD_OFFSET))(this);
		}

		::System::Void MFKEFNMBGDF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_MFKEFNMBGDF_OFFSET))(this, a1);
		}

		::System::Void CDJBDBKGDIL(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_CDJBDBKGDIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::ODGPPIHLOFF*>* COEOOAKDCJF()
		{
			return ((::System::Collections::Generic::List_1<::ODGPPIHLOFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_COEOOAKDCJF_OFFSET))(this);
		}

		::System::Void LPFCBEFGGKL(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::EnviromentSystemV2Space::OutputType a3, ::System::Single a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_LPFCBEFGGKL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ODGPPIHLOFF* JKLKJOFCBIG(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::EnviromentSystemV2Space::OutputType a3, ::System::Single a4, ::System::Action* a5)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JKLKJOFCBIG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LMHJLDCGIMG(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_LMHJLDCGIMG_OFFSET))(this, a1);
		}

		::System::Void JIAGEAAJHJG(::RPG::GameCore::EnviromentControlPriority a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JIAGEAAJHJG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LGOBJJCPONN(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_LGOBJJCPONN_OFFSET))(this, a1, a2);
		}

		::System::Void OJLIFDDGDAK(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_OJLIFDDGDAK_OFFSET))(this, a1, a2);
		}

		::System::Void ABKGIKGBKCH(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_ABKGIKGBKCH_OFFSET))(this, a1, a2);
		}

		::System::Void GEPMCNLJGMK(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2, ::System::Boolean a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GEPMCNLJGMK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GEPMCNLJGMK_1(::CBEBICGIOAB* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CBEBICGIOAB*, ::System::Action*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GEPMCNLJGMK_1_OFFSET))(this, a1, a2);
		}

		::ODGPPIHLOFF* KINPKNHBLKK(::System::String* a1)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_KINPKNHBLKK_OFFSET))(this, a1);
		}

		::System::Void LIFINAIOLPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_LIFINAIOLPG_OFFSET))(this);
		}

		::GGJFAFONDHN* PJIBADGABKL(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::GGJFAFONDHN*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_PJIBADGABKL_OFFSET))(this, a1, a2, a3);
		}

		::GGJFAFONDHN* LAMNCJIKEBI(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::GGJFAFONDHN*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_LAMNCJIKEBI_OFFSET))(this, a1, a2, a3);
		}

		::GGJFAFONDHN* EFEGAKDNJCB(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::GGJFAFONDHN*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EFEGAKDNJCB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IMJPLJAOMGC(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_IMJPLJAOMGC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OMKBMCCAAFP(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_OMKBMCCAAFP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EFGDMOCAGAP(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_EFGDMOCAGAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMDODDJFPPM(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GMDODDJFPPM_OFFSET))(this, a1);
		}

		::System::Void JOPOHIEHGBL(::EnviromentSystem::EnviromentPropertiesID a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JOPOHIEHGBL_OFFSET))(this, a1, a2);
		}

		::System::Void GMDODDJFPPM_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GMDODDJFPPM_1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* IDPCDNBPDFA()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_IDPCDNBPDFA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::System::String*>*>* AHJADNENKPN()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_AHJADNENKPN_OFFSET))(this);
		}

		::System::Void BFDIFPBNMFL(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BFDIFPBNMFL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGFDGBDLOLO(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_FGFDGBDLOLO_OFFSET))(this, a1, a2);
		}

		::System::Void PNHKOOGEOHE(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_PNHKOOGEOHE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PNHKOOGEOHE_1(::System::String* a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_PNHKOOGEOHE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MCBNOMMGCIN(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_MCBNOMMGCIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BPJGFJNIBAE(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BPJGFJNIBAE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MINDLBJNIOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_MINDLBJNIOO_OFFSET))(this, a1);
		}

		::System::Void JGMBHLBGMDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_JGMBHLBGMDN_OFFSET))(this);
		}

		::System::Void BKAJLLELPMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BKAJLLELPMA_OFFSET))(this);
		}

		::System::Void BIHLEOGDIDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_BIHLEOGDIDK_OFFSET))(this);
		}

		::System::Void GGHGDFBEANG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC_GGHGDFBEANG_OFFSET))(this);
		}

		::System::Void _ReleasePriorityImmediantly_b__145_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC__RELEASEPRIORITYIMMEDIANTLY_B__145_0_OFFSET))(this);
		}

	};
