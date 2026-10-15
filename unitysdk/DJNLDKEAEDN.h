#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_BlinkParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ChromaticAberrationParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ColorGradingParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_GaussianBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_LensGlitch2Parameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_PPPatternParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_RadialBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_VignetteParameter.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BEAIJJCDJHO;
class EADFFGBOFHI;
class IABNKKCCLFJ;
class INPILKHOCFA;
class NEOCEOCDEAF;
namespace RPG::CustomRP { class PPFilterStack; }
namespace RPG::CustomRP { class RPGAdditionalColorGrading; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGGaussianBlur; }
namespace RPG::CustomRP { class RPGLensGlitch2; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace RPG::CustomRP { class RPGRadialBlur; }
namespace RPG::CustomRP { class RPGVignette; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJNLDKEAEDN_AHAOHFMKJDD_OFFSET UNITYSDK_OFFSET(0xF246920)
#define DJNLDKEAEDN_BBBMBGGDLEH_OFFSET UNITYSDK_OFFSET(0xF242260)
#define DJNLDKEAEDN_BEKFKBMGHFO_OFFSET UNITYSDK_OFFSET(0xF24CDB0)
#define DJNLDKEAEDN_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0xF2443D0)
#define DJNLDKEAEDN_CCTOR_OFFSET UNITYSDK_OFFSET(0xF24D4B0)
#define DJNLDKEAEDN_CTOR_OFFSET UNITYSDK_OFFSET(0xF240FA0)
#define DJNLDKEAEDN_DCOLMBOKFOD_OFFSET UNITYSDK_OFFSET(0xF248140)
#define DJNLDKEAEDN_DFAINOEEBPC_OFFSET UNITYSDK_OFFSET(0xF2464A0)
#define DJNLDKEAEDN_DGFCGHEIGGD_OFFSET UNITYSDK_OFFSET(0xF244680)
#define DJNLDKEAEDN_DGNGHHGPIHA_OFFSET UNITYSDK_OFFSET(0xF247DF0)
#define DJNLDKEAEDN_DMFPFPPFLGI_OFFSET UNITYSDK_OFFSET(0xF242060)
#define DJNLDKEAEDN_EEGHNNFCCMN_OFFSET UNITYSDK_OFFSET(0xF2444B0)
#define DJNLDKEAEDN_EFAIDMLJIHF_OFFSET UNITYSDK_OFFSET(0xF243EA0)
#define DJNLDKEAEDN_ELNDCBLKNOM_OFFSET UNITYSDK_OFFSET(0xF240FD0)
#define DJNLDKEAEDN_EOJIOBMJNJE_OFFSET UNITYSDK_OFFSET(0xF24BEC0)
#define DJNLDKEAEDN_FINNNBACIBP_OFFSET UNITYSDK_OFFSET(0xF2420F0)
#define DJNLDKEAEDN_GCPBFCHCCHG_OFFSET UNITYSDK_OFFSET(0xF247F40)
#define DJNLDKEAEDN_GFLCIFPGJGJ_OFFSET UNITYSDK_OFFSET(0xF247400)
#define DJNLDKEAEDN_GGMIFPONJJB_OFFSET UNITYSDK_OFFSET(0xF245650)
#define DJNLDKEAEDN_GHHFKDLAHKL_OFFSET UNITYSDK_OFFSET(0xF246780)
#define DJNLDKEAEDN_GJLHCKONOHI_OFFSET UNITYSDK_OFFSET(0xF245B50)
#define DJNLDKEAEDN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xF241570)
#define DJNLDKEAEDN_HCMNMFHCDPF_OFFSET UNITYSDK_OFFSET(0xF244B10)
#define DJNLDKEAEDN_HHDONMPNGDD_OFFSET UNITYSDK_OFFSET(0xF244900)
#define DJNLDKEAEDN_HNAKDBLIMHC_OFFSET UNITYSDK_OFFSET(0xF2450D0)
#define DJNLDKEAEDN_IPMCCGEEMJB_OFFSET UNITYSDK_OFFSET(0xF244520)
#define DJNLDKEAEDN_JCPBAFKPDLF_OFFSET UNITYSDK_OFFSET(0xF2471C0)
#define DJNLDKEAEDN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xF2423D0)
#define DJNLDKEAEDN_JNBLMPLAKML_OFFSET UNITYSDK_OFFSET(0xF248D40)
#define DJNLDKEAEDN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xF2411C0)
#define DJNLDKEAEDN_KNEJKLOJGNC_OFFSET UNITYSDK_OFFSET(0xF24A0E0)
#define DJNLDKEAEDN_LLPNDJBEJHG_OFFSET UNITYSDK_OFFSET(0xF246280)
#define DJNLDKEAEDN_MEDBMNCHEBH_OFFSET UNITYSDK_OFFSET(0xF247AF0)
#define DJNLDKEAEDN_MMBLANINAKK_OFFSET UNITYSDK_OFFSET(0xF24A450)
#define DJNLDKEAEDN_MOCMFNCNLAH_OFFSET UNITYSDK_OFFSET(0xF246980)
#define DJNLDKEAEDN_NAEIMNFDKAA_OFFSET UNITYSDK_OFFSET(0xF2458F0)
#define DJNLDKEAEDN_NCLIKLFOOKC_OFFSET UNITYSDK_OFFSET(0xF244730)
#define DJNLDKEAEDN_NDHPKGGAPKM_1_OFFSET UNITYSDK_OFFSET(0xF245F70)
#define DJNLDKEAEDN_NDHPKGGAPKM_OFFSET UNITYSDK_OFFSET(0xF245540)
#define DJNLDKEAEDN_NNPDGPFIBOK_OFFSET UNITYSDK_OFFSET(0xF244EF0)
#define DJNLDKEAEDN_OPGEIGNKJEH_OFFSET UNITYSDK_OFFSET(0xF244890)
#define DJNLDKEAEDN_PBCMJPGFJDB_OFFSET UNITYSDK_OFFSET(0xF249840)
#define DJNLDKEAEDN_PBEEDIDOMIK_OFFSET UNITYSDK_OFFSET(0xF244430)
#define DJNLDKEAEDN_PBEHEIGHKDI_OFFSET UNITYSDK_OFFSET(0xF246EA0)
#define DJNLDKEAEDN_PCICJCAIJNL_OFFSET UNITYSDK_OFFSET(0xF243C20)
#define DJNLDKEAEDN_PEDMODMIGEH_OFFSET UNITYSDK_OFFSET(0xF243760)
#define DJNLDKEAEDN_PFMHHKNILCN_OFFSET UNITYSDK_OFFSET(0xF2432A0)
#define DJNLDKEAEDN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xF2415E0)
#define DJNLDKEAEDN_PJPIMKPJPIE_OFFSET UNITYSDK_OFFSET(0xF249100)
#define DJNLDKEAEDN_PMBACPBBBBD_OFFSET UNITYSDK_OFFSET(0xF246710)
#define DJNLDKEAEDN_POEEBKJFPCM_OFFSET UNITYSDK_OFFSET(0xF2416E0)

inline static constexpr unsigned int DJNLDKEAEDN_TypeDefinitionIndex = 70159;

	class DJNLDKEAEDN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BEAIJJCDJHO*>* OKGJFBNEHLH; // 0x10
		::System::Collections::Generic::List_1<::BEAIJJCDJHO*>* DBMAGCKJAGC; // 0x18
		::System::Collections::Generic::List_1<::BEAIJJCDJHO*>* NMAPNHENNEM; // 0x20
		::EADFFGBOFHI* OFJHLGNKKNF; // 0x28
		::RPG::CustomRP::RPGColorGrading* LBMCHNGPNBG; // 0x30
		::RPG::CustomRP::RPGAdditionalColorGrading* GDNELOCNMNE; // 0x38
		::NEOCEOCDEAF* PDPFMKFEPHA; // 0x40
		::System::Collections::Generic::List_1<::BEAIJJCDJHO*>* EPHAMABMOID; // 0x48
		::RPG::CustomRP::RPGChromaticAberration* EBOKMFICCAI; // 0x50
		::RPG::CustomRP::RPGBlink* AEOIHMJIKML; // 0x58
		::System::Collections::Generic::List_1<::BEAIJJCDJHO*>* NEKKBHNOIKG; // 0x60
		::NEOCEOCDEAF* IPBFGIIOEPB; // 0x68
		::RPG::CustomRP::RPGPPPattern* OEICIABMNEK; // 0x70
		::INPILKHOCFA* KDEFLJIMLIN; // 0x78
		::RPG::CustomRP::RPGVignette* CNCDHNBIBEP; // 0x80
		::RPG::CustomRP::RPGLensGlitch2* AJAKGACNLFF; // 0x88
		::RPG::CustomRP::RPGGaussianBlur* FOKODPHOBEK; // 0x90
		::IABNKKCCLFJ* IAJKDCFMOEO; // 0x98
		::RPG::CustomRP::PPFilterStack* AABIAOFHFLJ; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::PPFilterStack*>* MNEIKIBMLBJ; // 0xA8
		::RPG::CustomRP::RPGRadialBlur* BKONFFEJCPL; // 0xB0
		::System::Single GGODDMLKNEN; // 0xB8
		::System::Single EJAGNNADNPB; // 0xBC
		::System::Single NGPONMBJCKK; // 0xC0
		::System::Single HHFPNCHGIJB; // 0xC4
		::System::Boolean PAPEHMFAGHK; // 0xC8
		::System::Boolean AOLMKLNNNIH; // 0xC9
		::System::Boolean AADBOJACONA; // 0xCA
		::System::Byte _padding0[0x1];
		::System::Single KEGFNGGAAIO; // 0xCC
		::UnityEngine::Rendering::VolumeProxy_Priority AKOKFMEHEPJ; // 0xD0
		static ::System::String** StaticGet_IFACKHFBDLP()
		{
			return (::System::String**)UnitySDK::FromName("", "DJNLDKEAEDN")->GetStaticField(0x58080);
		}

		static ::System::String** StaticGet_NCKEKBMOHOM()
		{
			return (::System::String**)UnitySDK::FromName("", "DJNLDKEAEDN")->GetStaticField(0x58088);
		}

		static ::System::String** StaticGet_PNBCLFMJKMB()
		{
			return (::System::String**)UnitySDK::FromName("", "DJNLDKEAEDN")->GetStaticField(0x58090);
		}

		::System::Void _ctor(::UnityEngine::Rendering::VolumeProxy_Priority a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJNLDKEAEDN_CCTOR_OFFSET))();
		}

		static ::System::String* ELNDCBLKNOM(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_ELNDCBLKNOM_OFFSET))(a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Int32 PBEEDIDOMIK(::BEAIJJCDJHO* a1, ::BEAIJJCDJHO* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::BEAIJJCDJHO*, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PBEEDIDOMIK_OFFSET))(this, a1, a2);
		}

		::System::Boolean EEGHNNFCCMN(::BEAIJJCDJHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_EEGHNNFCCMN_OFFSET))(this, a1);
		}

		::System::Boolean DGFCGHEIGGD(::RPG::GameCore::PPEffectFilterType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_DGFCGHEIGGD_OFFSET))(this, a1);
		}

		::System::Boolean OPGEIGNKJEH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_OPGEIGNKJEH_OFFSET))(this, a1);
		}

		::System::Boolean HCMNMFHCDPF(::BEAIJJCDJHO* a1, ::BEAIJJCDJHO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEAIJJCDJHO*, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_HCMNMFHCDPF_OFFSET))(this, a1, a2);
		}

		::RPG::CustomRP::PPFilterStack* NNPDGPFIBOK(::System::String* a1)
		{
			return ((::RPG::CustomRP::PPFilterStack*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_NNPDGPFIBOK_OFFSET))(this, a1);
		}

		::System::Void HNAKDBLIMHC(::BEAIJJCDJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_HNAKDBLIMHC_OFFSET))(this, a1);
		}

		::System::Void NAEIMNFDKAA(::BEAIJJCDJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_NAEIMNFDKAA_OFFSET))(this, a1);
		}

		::System::Void EFAIDMLJIHF(::RPG::GameCore::PPEffectFilterType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_EFAIDMLJIHF_OFFSET))(this, a1);
		}

		::System::Void PEDMODMIGEH(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PEDMODMIGEH_OFFSET))(this, a1, a2);
		}

		::System::Void NDHPKGGAPKM(::BEAIJJCDJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_NDHPKGGAPKM_OFFSET))(this, a1);
		}

		::System::Void NDHPKGGAPKM_1(::RPG::GameCore::PPEffectFilterPriorityGroup a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_NDHPKGGAPKM_1_OFFSET))(this, a1);
		}

		::System::Void GJLHCKONOHI(::BEAIJJCDJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_GJLHCKONOHI_OFFSET))(this, a1);
		}

		::System::Void LLPNDJBEJHG(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_LLPNDJBEJHG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DFAINOEEBPC(::RPG::GameCore::RPGColorGradingCurveEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_DFAINOEEBPC_OFFSET))(this, a1);
		}

		::System::Void PMBACPBBBBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PMBACPBBBBD_OFFSET))(this);
		}

		::System::Void GHHFKDLAHKL(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_GHHFKDLAHKL_OFFSET))(this, a1, a2);
		}

		::System::Void AHAOHFMKJDD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_AHAOHFMKJDD_OFFSET))(this, a1);
		}

		::System::Void MOCMFNCNLAH(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_MOCMFNCNLAH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PBEHEIGHKDI(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PBEHEIGHKDI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 PCICJCAIJNL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PCICJCAIJNL_OFFSET))(a1);
		}

		::System::Void GGMIFPONJJB(::BEAIJJCDJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_GGMIFPONJJB_OFFSET))(this, a1);
		}

		::System::Void DMFPFPPFLGI(::RPG::GameCore::PPEffectFilterType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_DMFPFPPFLGI_OFFSET))(this, a1);
		}

		::System::Boolean IPMCCGEEMJB(::System::Collections::Generic::List_1<::BEAIJJCDJHO*>* a1, ::BEAIJJCDJHO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::BEAIJJCDJHO*>*, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_IPMCCGEEMJB_OFFSET))(this, a1, a2);
		}

		::System::Boolean NCLIKLFOOKC(::System::Collections::Generic::List_1<::BEAIJJCDJHO*>* a1, ::RPG::GameCore::PPEffectFilterType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::BEAIJJCDJHO*>*, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_NCLIKLFOOKC_OFFSET))(this, a1, a2);
		}

		::System::Boolean HHDONMPNGDD(::System::Collections::Generic::List_1<::BEAIJJCDJHO*>* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::BEAIJJCDJHO*>*, ::System::String*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_HHDONMPNGDD_OFFSET))(this, a1, a2);
		}

		::System::Void BBBMBGGDLEH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_BBBMBGGDLEH_OFFSET))(this, a1);
		}

		::System::Void FINNNBACIBP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_FINNNBACIBP_OFFSET))(this, a1);
		}

		::System::Void JCPBAFKPDLF(::INPILKHOCFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INPILKHOCFA*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_JCPBAFKPDLF_OFFSET))(this, a1);
		}

		::System::Void POEEBKJFPCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_POEEBKJFPCM_OFFSET))(this);
		}

		::System::Void PFMHHKNILCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PFMHHKNILCN_OFFSET))(this);
		}

		::System::Void DCOLMBOKFOD(::RPG::CustomRP::PPFilterStack_ColorGradingParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ColorGradingParameter))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_DCOLMBOKFOD_OFFSET))(this, a1);
		}

		::System::Void PBCMJPGFJDB(::RPG::CustomRP::PPFilterStack_RadialBlurParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_RadialBlurParameter))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PBCMJPGFJDB_OFFSET))(this, a1);
		}

		::System::Void KNEJKLOJGNC(::RPG::CustomRP::PPFilterStack_VignetteParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_VignetteParameter))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_KNEJKLOJGNC_OFFSET))(this, a1);
		}

		::System::Void JNBLMPLAKML(::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_JNBLMPLAKML_OFFSET))(this, a1);
		}

		::System::Void PJPIMKPJPIE(::RPG::CustomRP::PPFilterStack_GaussianBlurParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_GaussianBlurParameter))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_PJPIMKPJPIE_OFFSET))(this, a1);
		}

		::System::Void MMBLANINAKK(::RPG::CustomRP::PPFilterStack_PPPatternParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_PPPatternParameter))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_MMBLANINAKK_OFFSET))(this, a1);
		}

		::System::Void EOJIOBMJNJE(::RPG::CustomRP::PPFilterStack_BlinkParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_BlinkParameter))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_EOJIOBMJNJE_OFFSET))(this, a1);
		}

		::System::Void BEKFKBMGHFO(::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_BEKFKBMGHFO_OFFSET))(this, a1);
		}

		::System::Void GFLCIFPGJGJ(::IABNKKCCLFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IABNKKCCLFJ*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_GFLCIFPGJGJ_OFFSET))(this, a1);
		}

		::System::Void DGNGHHGPIHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_DGNGHHGPIHA_OFFSET))(this);
		}

		::System::Void MEDBMNCHEBH(::EADFFGBOFHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EADFFGBOFHI*))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_MEDBMNCHEBH_OFFSET))(this, a1);
		}

		::System::Void GCPBFCHCCHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNLDKEAEDN_GCPBFCHCCHG_OFFSET))(this);
		}

	};
