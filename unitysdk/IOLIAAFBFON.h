#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOLIAAFBFON_RegionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/WaveInteract.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FloatingObjectBuffer;
class IOLIAAFBFON;
class IOLIAAFBFON_PIIIIACJBAI;
class InteractProxy;
class LegacyGPUParticleSystem;
class WaveSimPanel;
namespace RPG::Client { class WaveSimConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define IOLIAAFBFON_ABCHKHGHIDG_OFFSET UNITYSDK_OFFSET(0x192EFE60)
#define IOLIAAFBFON_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x192EC500)
#define IOLIAAFBFON_AEAEBPHOCNN_OFFSET UNITYSDK_OFFSET(0x192E9DA0)
#define IOLIAAFBFON_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x192E7670)
#define IOLIAAFBFON_AGKELGOMMJK_OFFSET UNITYSDK_OFFSET(0x192ECC60)
#define IOLIAAFBFON_AJNKCOHECPF_OFFSET UNITYSDK_OFFSET(0x192ED540)
#define IOLIAAFBFON_ALOODOIDANH_OFFSET UNITYSDK_OFFSET(0x192ECB30)
#define IOLIAAFBFON_BACGPGBGKPE_OFFSET UNITYSDK_OFFSET(0x192E7BF0)
#define IOLIAAFBFON_BAKDMBOLLPE_OFFSET UNITYSDK_OFFSET(0x192E8790)
#define IOLIAAFBFON_BKABAPPBJGI_OFFSET UNITYSDK_OFFSET(0x192ECF60)
#define IOLIAAFBFON_BKKMHKKBILO_OFFSET UNITYSDK_OFFSET(0x192E7D20)
#define IOLIAAFBFON_BPFIJGPCBGF_OFFSET UNITYSDK_OFFSET(0x192F0290)
#define IOLIAAFBFON_CAFOAICPFON_OFFSET UNITYSDK_OFFSET(0x192EE4C0)
#define IOLIAAFBFON_CAMEACHNOMH_OFFSET UNITYSDK_OFFSET(0x192E76D0)
#define IOLIAAFBFON_CCTOR_OFFSET UNITYSDK_OFFSET(0x192F0B70)
#define IOLIAAFBFON_CKCNOFKPMPE_OFFSET UNITYSDK_OFFSET(0x192F0B30)
#define IOLIAAFBFON_CMPMHILLPHI_OFFSET UNITYSDK_OFFSET(0x192E8220)
#define IOLIAAFBFON_COLBDMLJEAJ_OFFSET UNITYSDK_OFFSET(0x192ECF20)
#define IOLIAAFBFON_CTOR_OFFSET UNITYSDK_OFFSET(0x192E89F0)
#define IOLIAAFBFON_DNCKDFFDJNN_OFFSET UNITYSDK_OFFSET(0x192ED000)
#define IOLIAAFBFON_DNGPMLKKDNK_OFFSET UNITYSDK_OFFSET(0x192ED1C0)
#define IOLIAAFBFON_DPBBGIILNNG_OFFSET UNITYSDK_OFFSET(0x192F06C0)
#define IOLIAAFBFON_EDJMGHPEMBC_OFFSET UNITYSDK_OFFSET(0x192E7DA0)
#define IOLIAAFBFON_EOPJJANHHFL_OFFSET UNITYSDK_OFFSET(0x192ECD80)
#define IOLIAAFBFON_FANHIMPOBAP_OFFSET UNITYSDK_OFFSET(0x192E9DF0)
#define IOLIAAFBFON_FBMKHFAPOOK_OFFSET UNITYSDK_OFFSET(0x192E8140)
#define IOLIAAFBFON_FICBIMOHLAB_OFFSET UNITYSDK_OFFSET(0x192F0680)
#define IOLIAAFBFON_FMJPMFEDIJL_OFFSET UNITYSDK_OFFSET(0x192E88E0)
#define IOLIAAFBFON_FNILPANAEMH_OFFSET UNITYSDK_OFFSET(0x192E7610)
#define IOLIAAFBFON_FNLPCCKCEME_OFFSET UNITYSDK_OFFSET(0x192E88B0)
#define IOLIAAFBFON_GET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x192EE490)
#define IOLIAAFBFON_GET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x192E8720)
#define IOLIAAFBFON_GFDGAEAAINH_OFFSET UNITYSDK_OFFSET(0x192EFBA0)
#define IOLIAAFBFON_GPMDFFNHGPB_OFFSET UNITYSDK_OFFSET(0x192E7D90)
#define IOLIAAFBFON_HCBBFIJBAJJ_OFFSET UNITYSDK_OFFSET(0x192E7D80)
#define IOLIAAFBFON_HCHBOBICAKP_OFFSET UNITYSDK_OFFSET(0x192EE4B0)
#define IOLIAAFBFON_HGKIDGABIOL_OFFSET UNITYSDK_OFFSET(0x192E9F90)
#define IOLIAAFBFON_HGNNDAHJOEE_OFFSET UNITYSDK_OFFSET(0x192EC8D0)
#define IOLIAAFBFON_HHJODOLLACN_OFFSET UNITYSDK_OFFSET(0x192EF5E0)
#define IOLIAAFBFON_HOHPHHDAMNP_OFFSET UNITYSDK_OFFSET(0x192EE160)
#define IOLIAAFBFON_IBFKMNENOCG_OFFSET UNITYSDK_OFFSET(0x192E7680)
#define IOLIAAFBFON_ICGCFGBMCBG_OFFSET UNITYSDK_OFFSET(0x192E9C10)
#define IOLIAAFBFON_IIMNFPCAJBK_OFFSET UNITYSDK_OFFSET(0x192EE330)
#define IOLIAAFBFON_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x192EA500)
#define IOLIAAFBFON_IOKEFJLBIFO_OFFSET UNITYSDK_OFFSET(0x192EFB50)
#define IOLIAAFBFON_JEMCFAIJHAC_OFFSET UNITYSDK_OFFSET(0x192EDE50)
#define IOLIAAFBFON_JFHACCEJPIO_OFFSET UNITYSDK_OFFSET(0x192E7F90)
#define IOLIAAFBFON_KDMEMDJPKOA_OFFSET UNITYSDK_OFFSET(0x192ECFB0)
#define IOLIAAFBFON_KDNGNNLJJNG_OFFSET UNITYSDK_OFFSET(0x192EA800)
#define IOLIAAFBFON_KDOIINHGPKC_OFFSET UNITYSDK_OFFSET(0x192EF780)
#define IOLIAAFBFON_KLPOPDELNJD_OFFSET UNITYSDK_OFFSET(0x192E7B60)
#define IOLIAAFBFON_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x192E8C80)
#define IOLIAAFBFON_LHNEKBMEHBK_OFFSET UNITYSDK_OFFSET(0x192EFCC0)
#define IOLIAAFBFON_LIPMCDDKDEL_OFFSET UNITYSDK_OFFSET(0x192EF690)
#define IOLIAAFBFON_LLHPAOPBFCB_OFFSET UNITYSDK_OFFSET(0x192E7E50)
#define IOLIAAFBFON_LODBAPJJGDG_OFFSET UNITYSDK_OFFSET(0x192EE780)
#define IOLIAAFBFON_MFFPIIFOHIE_OFFSET UNITYSDK_OFFSET(0x192E9FB0)
#define IOLIAAFBFON_MFJONCJAIOE_1_OFFSET UNITYSDK_OFFSET(0x192E9AE0)
#define IOLIAAFBFON_MFJONCJAIOE_OFFSET UNITYSDK_OFFSET(0x192E9A50)
#define IOLIAAFBFON_MGMGLAIMBEA_OFFSET UNITYSDK_OFFSET(0x192F08A0)
#define IOLIAAFBFON_MJNHICNNMAB_OFFSET UNITYSDK_OFFSET(0x192EFD80)
#define IOLIAAFBFON_MOHFMMPAMGD_OFFSET UNITYSDK_OFFSET(0x192E7EE0)
#define IOLIAAFBFON_MPBEJOBDAME_OFFSET UNITYSDK_OFFSET(0x192EC4B0)
#define IOLIAAFBFON_MPGCPECKCEN_OFFSET UNITYSDK_OFFSET(0x192E86A0)
#define IOLIAAFBFON_NFNJKOGHEOL_OFFSET UNITYSDK_OFFSET(0x192EFA60)
#define IOLIAAFBFON_ODCHEKHFIJB_OFFSET UNITYSDK_OFFSET(0x192E7F40)
#define IOLIAAFBFON_OEGDBEEJHFH_OFFSET UNITYSDK_OFFSET(0x192E99B0)
#define IOLIAAFBFON_OOJNJHKMLCP_OFFSET UNITYSDK_OFFSET(0x192E8470)
#define IOLIAAFBFON_OPHIMKEEPCL_OFFSET UNITYSDK_OFFSET(0x192ED960)
#define IOLIAAFBFON_PKEDDMPMPLK_OFFSET UNITYSDK_OFFSET(0x192E8330)
#define IOLIAAFBFON_SET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x192EE4A0)
#define IOLIAAFBFON_SET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x192E8750)

inline static constexpr unsigned int IOLIAAFBFON_TypeDefinitionIndex = 48524;

	class IOLIAAFBFON : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LBGAECLGNBB; // 0x10
		::UnityEngine::Texture2D* HBFOMDFLIDM; // 0x18
		::UnityEngine::Texture2D* MFBCHAOBGPJ; // 0x20
		::UnityEngine::RenderTexture* LGDLLDMGBME; // 0x28
		::IOLIAAFBFON_PIIIIACJBAI* PJMPNONAGCO; // 0x30
		::IOLIAAFBFON_PIIIIACJBAI* EKFELFOHGIO; // 0x38
		::IOLIAAFBFON_PIIIIACJBAI* AGFBFBBFEDB; // 0x40
		::IOLIAAFBFON_PIIIIACJBAI* NDOEDHJDBCM; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* HALBOGJNIDM; // 0x50
		::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* OJIOCCFMFFF; // 0x58
		::IOLIAAFBFON_PIIIIACJBAI* CGGBJFBLHGA; // 0x60
		::IOLIAAFBFON_PIIIIACJBAI* CCHJAPOGCAO; // 0x68
		::System::Collections::Generic::List_1<::WaveSimPanel*>* EBKEIPNGIIE; // 0x70
		::IOLIAAFBFON_PIIIIACJBAI* GEDPJCIOAIL; // 0x78
		::IOLIAAFBFON_PIIIIACJBAI* KPPPNEHIKGO; // 0x80
		::System::Collections::Generic::List_1<::InteractProxy*>* OEKEHMFBBLP; // 0x88
		::WaveSimPanel* DNLPFPBKFLD; // 0x90
		::UnityEngine::Texture2D* INODBIIOKJF; // 0x98
		::IOLIAAFBFON_PIIIIACJBAI* GEPPFIJIBEE; // 0xA0
		::UnityEngine::RenderTexture* EEJGEEPHAJN; // 0xA8
		::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* IAEMLCFPIDL; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* HNJDGJBIIDH; // 0xB8
		::UnityEngine::RenderTexture* BAFHICDIDCB; // 0xC0
		::RPG::Client::WaveSimConfig* MGDAAKAHJIF; // 0xC8
		::System::Action* _OnActivePanelChanged_k__BackingField; // 0xD0
		::IOLIAAFBFON_PIIIIACJBAI* HEINKCABJCK; // 0xD8
		::UnityEngine::RenderTexture* PPJFPMPAPEO; // 0xE0
		::IOLIAAFBFON_PIIIIACJBAI* FAMNFOLEGDP; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* EIAIDFKCIIB; // 0xF0
		::System::Collections::Generic::List_1<::WaveSimPanel*>* EIPGOJKMCHM; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* GALKMMDDMML; // 0x100
		::IOLIAAFBFON_PIIIIACJBAI* NCAJBDDGKFG; // 0x108
		::IOLIAAFBFON_PIIIIACJBAI* MFPJLJGHHOE; // 0x110
		::UnityEngine::Texture2D* JOLJKIKPMNN; // 0x118
		::FloatingObjectBuffer* DJMLAGMDJOE; // 0x120
		::IOLIAAFBFON_PIIIIACJBAI* PNJPCDHKMCG; // 0x128
		::System::Collections::Generic::List_1<::WaveInteract>* HBHEJKHHKHC; // 0x130
		::WaveSimPanel* DBEMOOOOLAL; // 0x138
		::System::Int32 JOAMDDEKIOK; // 0x140
		::UnityEngine::Vector3 LAOOIDPHOJB; // 0x144
		::System::Int32 GADPMJCOKHH; // 0x150
		::System::Int32 MJPBOBPHHIH; // 0x154
		::System::Single NHMLEIDBOAC; // 0x158
		::System::Single EAHACKPPEDN; // 0x15C
		::System::Int32 JLLHJDFDCOA; // 0x160
		::System::Single JOBGEKHBBPA; // 0x164
		::System::Int32 OJJIKNDCBKK; // 0x168
		::System::Single KEJOEDFNJEK; // 0x16C
		::System::Single KOBJBIKCIEI; // 0x170
		::System::Single CPEGIHKHICN; // 0x174
		::System::Boolean IALHFNMCLNA; // 0x178
		::System::Boolean MIDJOGFHEFJ; // 0x179
		::System::Boolean EIJABKJLDCA; // 0x17A
		::System::Boolean PPOBCIICKJK; // 0x17B
		::System::Boolean DKGPDODEOIN; // 0x17C
		::System::Boolean ANGBDKGKKMJ; // 0x17D
		::System::Byte _padding0[0x2];
		::System::Int32 DPBHNDEHALF; // 0x180
		::System::Single ONCIOKBFGMJ; // 0x184
		::System::Boolean IBCFNFLMKBI; // 0x188
		::System::Boolean FHCCAJDECNN; // 0x189
		::System::Boolean EIMHDPLJOFO; // 0x18A
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector4 ONEBEEOEMBN; // 0x18C
		::System::Int32 FABFFEJGELJ; // 0x19C
		::System::Int32 EAINOIBOJLM; // 0x1A0
		::System::Int32 AEKCJCBKDDK; // 0x1A4
		static ::IOLIAAFBFON** StaticGet_EMLNOINPICJ()
		{
			return (::IOLIAAFBFON**)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x17120);
		}

		static ::System::Action** StaticGet__OnInstanced_k__BackingField()
		{
			return (::System::Action**)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x17128);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>** StaticGet_PGHIEMMNBIE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>**)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x17130);
		}

		static ::UnityEngine::Material** StaticGet_CCGDBLEEJBI()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x17138);
		}

		static ::UnityEngine::ComputeShader** StaticGet_FBPMEEMNPAA()
		{
			return (::UnityEngine::ComputeShader**)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x17140);
		}

		static ::System::Int32* StaticGet_MJGALJCDKKF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52C0);
		}

		static ::System::Int32* StaticGet_FJJNJDMFBFM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52C4);
		}

		static ::System::Int32* StaticGet_MAILKJBBFPP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52C8);
		}

		static ::System::Int32* StaticGet_DFOLGLIIOBD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52CC);
		}

		static ::System::Int32* StaticGet_AILIHLKGOIE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52D0);
		}

		static ::System::Int32* StaticGet_PODKGDHDKKP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52D4);
		}

		static ::System::Int32* StaticGet_PGPPBHLNLGH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52D8);
		}

		static ::System::Int32* StaticGet_IABLEJJMDHB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52DC);
		}

		static ::System::Int32* StaticGet_MIHNOGLELED()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52E0);
		}

		static ::System::Int32* StaticGet_CLODEKOPNNI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52E4);
		}

		static ::System::Int32* StaticGet_IBPIABMNHNO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52E8);
		}

		static ::System::Int32* StaticGet_LGNBCAEJKHE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52EC);
		}

		static ::System::Int32* StaticGet_CDLJNMGEBMB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52F0);
		}

		static ::System::Int32* StaticGet_KDEOGFCADDL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52F4);
		}

		static ::System::Int32* StaticGet_BMLENDFMDPJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52F8);
		}

		static ::System::Int32* StaticGet_KGAEHNNPDKN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x52FC);
		}

		static ::System::Int32* StaticGet_LEBDBCGPFHF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5300);
		}

		static ::System::Int32* StaticGet_HDEJPHCBCJE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5304);
		}

		static ::System::Int32* StaticGet_JMEHCEGMHAM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5308);
		}

		static ::System::Int32* StaticGet_MIAKIPHKMHC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x530C);
		}

		static ::System::Int32* StaticGet_EGAKMIAKGIL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5310);
		}

		static ::System::Int32* StaticGet_FHKLENCJCFO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5314);
		}

		static ::System::Int32* StaticGet_IPOODMAEJIH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5318);
		}

		static ::System::Int32* StaticGet_ILELEEAHBAP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x531C);
		}

		static ::System::Int32* StaticGet_NLEJFBMABPO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5320);
		}

		static ::System::Int32* StaticGet_FMJIGKNOHEL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5324);
		}

		static ::System::Int32* StaticGet_HMGNBNNJMHD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5328);
		}

		static ::System::Int32* StaticGet_CIALLPHJEFA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x532C);
		}

		static ::System::Int32* StaticGet_LAJMFAKPDEG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5330);
		}

		static ::System::Int32* StaticGet_DJBEGNAKKOP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5334);
		}

		static ::System::Int32* StaticGet_BDPIPEAAHMP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5338);
		}

		static ::System::Int32* StaticGet_LMBNLCGDNOG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x533C);
		}

		static ::System::Int32* StaticGet_MHIHGOPAGDP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5340);
		}

		static ::System::Int32* StaticGet_AGIAHOONLPL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5344);
		}

		static ::System::Int32* StaticGet_OEBBIGPHIFD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5348);
		}

		static ::System::Int32* StaticGet_FOJCCEGHMDA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x534C);
		}

		static ::System::Int32* StaticGet_MILEHHEMKEE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5350);
		}

		static ::System::Int32* StaticGet_CGJDGDEKEMP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5354);
		}

		static ::System::Int32* StaticGet_NHHPPGBLJLN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5358);
		}

		static ::System::Int32* StaticGet_MPDMMHNBJOF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x535C);
		}

		static ::System::Int32* StaticGet_GAKGCBGHNCJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5360);
		}

		static ::System::Int32* StaticGet_DKNMBCHILGM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5364);
		}

		static ::System::Int32* StaticGet_CEHDALCKGPN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5368);
		}

		static ::System::Int32* StaticGet_OOOENJBONMP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x536C);
		}

		static ::System::Int32* StaticGet_MEMHEHLJDDF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5370);
		}

		static ::System::Int32* StaticGet_COMOHKIFKLA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5374);
		}

		static ::System::Int32* StaticGet_EJMGJLBMFIF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5378);
		}

		static ::System::Int32* StaticGet_OKENNHMKDJE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x537C);
		}

		static ::System::Int32* StaticGet_HLHIMFIOCAP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5380);
		}

		static ::System::Int32* StaticGet_NFAHLEALJHC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5384);
		}

		static ::System::Int32* StaticGet_NBODNHBJEFF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5388);
		}

		static ::System::Int32* StaticGet_KALCPOLBHKH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x538C);
		}

		static ::System::Int32* StaticGet_MFOEEPEJHPG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5390);
		}

		static ::System::Int32* StaticGet_JIAGPNADJAA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5394);
		}

		static ::System::Int32* StaticGet_EJDPLPHPBIM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x5398);
		}

		static ::System::Int32* StaticGet_CGIJGCPFEGI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x539C);
		}

		static ::System::Int32* StaticGet_HCOGLIOJIAJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x53A0);
		}

		static ::System::Int32* StaticGet_BFIMLCMAOHB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x53A4);
		}

		static ::System::Int32* StaticGet_PJOHECOHBKM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x53A8);
		}

		static ::System::Int32* StaticGet_HPAIKCNCECC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x53AC);
		}

		static ::System::Int32* StaticGet_DNELCAEJHII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x53B0);
		}

		static ::System::Int32* StaticGet_BDOBGPPJABP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IOLIAAFBFON")->GetStaticField(0x53B4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOLIAAFBFON_CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* FNILPANAEMH()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_FNILPANAEMH_OFFSET))(this);
		}

		::System::Int32 AFADJMFGCGN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Int32 IBFKMNENOCG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_IBFKMNENOCG_OFFSET))(this);
		}

		::FloatingObjectBuffer* CAMEACHNOMH()
		{
			return ((::FloatingObjectBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_CAMEACHNOMH_OFFSET))(this);
		}

		::System::Void BACGPGBGKPE(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IOLIAAFBFON_BACGPGBGKPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BKKMHKKBILO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IOLIAAFBFON_BKKMHKKBILO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::WaveSimPanel*>* HCBBFIJBAJJ()
		{
			return ((::System::Collections::Generic::List_1<::WaveSimPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_HCBBFIJBAJJ_OFFSET))(this);
		}

		::System::Boolean GPMDFFNHGPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_GPMDFFNHGPB_OFFSET))(this);
		}

		::System::Void EDJMGHPEMBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_EDJMGHPEMBC_OFFSET))(this);
		}

		::System::Void MOHFMMPAMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_MOHFMMPAMGD_OFFSET))(this);
		}

		::System::Void ODCHEKHFIJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_ODCHEKHFIJB_OFFSET))(this);
		}

		::System::Void JFHACCEJPIO(::LegacyGPUParticleSystem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + IOLIAAFBFON_JFHACCEJPIO_OFFSET))(this, a1, a2);
		}

		::System::Void FBMKHFAPOOK(::LegacyGPUParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_FBMKHFAPOOK_OFFSET))(this, a1);
		}

		::System::Void CMPMHILLPHI(::WaveSimPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_CMPMHILLPHI_OFFSET))(this, a1);
		}

		::System::Void PKEDDMPMPLK(::WaveSimPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_PKEDDMPMPLK_OFFSET))(this, a1);
		}

		::System::Void MPGCPECKCEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_MPGCPECKCEN_OFFSET))(this);
		}

		static ::System::Action* get_OnInstanced()
		{
			return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + IOLIAAFBFON_GET_ONINSTANCED_OFFSET))();
		}

		static ::System::Void set_OnInstanced(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_SET_ONINSTANCED_OFFSET))(a1);
		}

		static ::System::Void BAKDMBOLLPE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOLIAAFBFON_BAKDMBOLLPE_OFFSET))();
		}

		static ::IOLIAAFBFON* FNLPCCKCEME()
		{
			return ((::IOLIAAFBFON*(*)())((::PBYTE)hIl2Cpp + IOLIAAFBFON_FNLPCCKCEME_OFFSET))();
		}

		static ::IOLIAAFBFON* FMJPMFEDIJL()
		{
			return ((::IOLIAAFBFON*(*)())((::PBYTE)hIl2Cpp + IOLIAAFBFON_FMJPMFEDIJL_OFFSET))();
		}

		::System::Void OEGDBEEJHFH(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_OEGDBEEJHFH_OFFSET))(this, a1);
		}

		::System::Void MFJONCJAIOE(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_MFJONCJAIOE_OFFSET))(this, a1);
		}

		::System::Void MFJONCJAIOE_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IOLIAAFBFON_MFJONCJAIOE_1_OFFSET))(this, a1);
		}

		::System::Void ICGCFGBMCBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_ICGCFGBMCBG_OFFSET))(this);
		}

		::UnityEngine::Vector3 HGKIDGABIOL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_HGKIDGABIOL_OFFSET))(this);
		}

		::System::Void MFFPIIFOHIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_MFFPIIFOHIE_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_IKOHLHDGFKH_OFFSET))(this);
		}

		::System::Void MPBEJOBDAME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_MPBEJOBDAME_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ALOODOIDANH(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_ALOODOIDANH_OFFSET))(this, a1);
		}

		::System::Void EOPJJANHHFL(::UnityEngine::RenderTexture* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_EOPJJANHHFL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Texture2D* COLBDMLJEAJ()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_COLBDMLJEAJ_OFFSET))(this);
		}

		::UnityEngine::Texture2D* BKABAPPBJGI()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_BKABAPPBJGI_OFFSET))(this);
		}

		::UnityEngine::Texture2D* KDMEMDJPKOA()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_KDMEMDJPKOA_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void AEAEBPHOCNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_AEAEBPHOCNN_OFFSET))(this);
		}

		::System::Void AJNKCOHECPF(::WaveSimPanel* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::WaveSimPanel*, ::System::Boolean))((::PBYTE)hIl2Cpp + IOLIAAFBFON_AJNKCOHECPF_OFFSET))(this, a1, a2);
		}

		::System::Void OPHIMKEEPCL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOLIAAFBFON_OPHIMKEEPCL_OFFSET))(this, a1);
		}

		::System::Void JEMCFAIJHAC(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::IOLIAAFBFON_RegionType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::IOLIAAFBFON_RegionType))((::PBYTE)hIl2Cpp + IOLIAAFBFON_JEMCFAIJHAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOHPHHDAMNP(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IOLIAAFBFON_HOHPHHDAMNP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FANHIMPOBAP(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IOLIAAFBFON_FANHIMPOBAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Action* get_OnActivePanelChanged()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_GET_ONACTIVEPANELCHANGED_OFFSET))(this);
		}

		::System::Void set_OnActivePanelChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_SET_ONACTIVEPANELCHANGED_OFFSET))(this, a1);
		}

		::WaveSimPanel* HCHBOBICAKP()
		{
			return ((::WaveSimPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_HCHBOBICAKP_OFFSET))(this);
		}

		::System::Void CAFOAICPFON(::WaveSimPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_CAFOAICPFON_OFFSET))(this, a1);
		}

		::System::Void HHJODOLLACN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOLIAAFBFON_HHJODOLLACN_OFFSET))(this, a1);
		}

		::System::Void LLHPAOPBFCB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOLIAAFBFON_LLHPAOPBFCB_OFFSET))(this, a1);
		}

		::System::Void LIPMCDDKDEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_LIPMCDDKDEL_OFFSET))(this);
		}

		::System::Void KDOIINHGPKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_KDOIINHGPKC_OFFSET))(this);
		}

		::UnityEngine::Material* NFNJKOGHEOL()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_NFNJKOGHEOL_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* IOKEFJLBIFO()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_IOKEFJLBIFO_OFFSET))(this);
		}

		::System::Void OOJNJHKMLCP(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + IOLIAAFBFON_OOJNJHKMLCP_OFFSET))(this, a1);
		}

		::System::Void GFDGAEAAINH(::InteractProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_GFDGAEAAINH_OFFSET))(this, a1);
		}

		::System::Void LHNEKBMEHBK(::InteractProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_LHNEKBMEHBK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 IIMNFPCAJBK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IOLIAAFBFON_IIMNFPCAJBK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 MJNHICNNMAB(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IOLIAAFBFON_MJNHICNNMAB_OFFSET))(this, a1);
		}

		::System::Void ABCHKHGHIDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_ABCHKHGHIDG_OFFSET))(this);
		}

		::System::Void KLPOPDELNJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_KLPOPDELNJD_OFFSET))(this);
		}

		::System::Void FICBIMOHLAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_FICBIMOHLAB_OFFSET))(this);
		}

		::System::Void KDNGNNLJJNG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IOLIAAFBFON_KDNGNNLJJNG_OFFSET))(this, a1);
		}

		::System::Void BPFIJGPCBGF(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IOLIAAFBFON_BPFIJGPCBGF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DNGPMLKKDNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_DNGPMLKKDNK_OFFSET))(this);
		}

		::System::Void LODBAPJJGDG(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + IOLIAAFBFON_LODBAPJJGDG_OFFSET))(this, a1, a2);
		}

		static ::System::Void DPBBGIILNNG(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IOLIAAFBFON_DPBBGIILNNG_OFFSET))(a1, a2);
		}

		static ::System::Void MGMGLAIMBEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IOLIAAFBFON_MGMGLAIMBEA_OFFSET))(a1);
		}

		static ::System::Void AGKELGOMMJK(::UnityEngine::ComputeShader* a1, ::IOLIAAFBFON_PIIIIACJBAI* a2, ::UnityEngine::RenderTexture* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::IOLIAAFBFON_PIIIIACJBAI*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_AGKELGOMMJK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DNCKDFFDJNN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOLIAAFBFON_DNCKDFFDJNN_OFFSET))();
		}

		static ::System::Void HGNNDAHJOEE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOLIAAFBFON_HGNNDAHJOEE_OFFSET))();
		}

		static ::System::Void CKCNOFKPMPE(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_CKCNOFKPMPE_OFFSET))(a1);
		}

	};
