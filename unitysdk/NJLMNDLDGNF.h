#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABIMIPAIIEH.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/CNHKFCHOEHK.h"
#include "unitysdk/IMOBOOHNHAM.h"
#include "unitysdk/MFDEBKGHEIO.h"
#include "unitysdk/NEHCCAFEBNL.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/FloatCurveFrame.h"
#include "unitysdk/RPG/IVec3.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/RPG/MRect.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/RPG/Vector3CurveFrame.h"
#include "unitysdk/RPG/Vector4CurveFrame.h"
#include "unitysdk/System/DateTime.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class FilePath; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define NJLMNDLDGNF_ABBMFBBHHIG_1_OFFSET UNITYSDK_OFFSET(0x1D1FF790)
#define NJLMNDLDGNF_ABBMFBBHHIG_OFFSET UNITYSDK_OFFSET(0x1D1FF560)
#define NJLMNDLDGNF_ABPJCAHJDEJ_OFFSET UNITYSDK_OFFSET(0x1D1FF4C0)
#define NJLMNDLDGNF_ACJNGLHFJGI_OFFSET UNITYSDK_OFFSET(0x1D1FC090)
#define NJLMNDLDGNF_ADFCBBKJBON_OFFSET UNITYSDK_OFFSET(0x1D1FE1F0)
#define NJLMNDLDGNF_AEIBFHFPJNM_OFFSET UNITYSDK_OFFSET(0x1D1FF3B0)
#define NJLMNDLDGNF_AJCGAILPMIA_OFFSET UNITYSDK_OFFSET(0x1D1FF520)
#define NJLMNDLDGNF_ALCOEAHPFHK_OFFSET UNITYSDK_OFFSET(0x1D1B7320)
#define NJLMNDLDGNF_ANLHGPHKHEN_OFFSET UNITYSDK_OFFSET(0x1D1FDF80)
#define NJLMNDLDGNF_APGFGOLICDO_OFFSET UNITYSDK_OFFSET(0x1D1FD210)
#define NJLMNDLDGNF_APMHIFLJHPP_OFFSET UNITYSDK_OFFSET(0x1D1FF460)
#define NJLMNDLDGNF_BAGPBDFPKOJ_OFFSET UNITYSDK_OFFSET(0x1D1FBC10)
#define NJLMNDLDGNF_BAOMJDKOCNN_OFFSET UNITYSDK_OFFSET(0x1D1FC2C0)
#define NJLMNDLDGNF_BBJNHNNCLLP_OFFSET UNITYSDK_OFFSET(0x1D1EA8C0)
#define NJLMNDLDGNF_BDJDAJCHKLH_OFFSET UNITYSDK_OFFSET(0x1D1EA7A0)
#define NJLMNDLDGNF_BFDCBLEDPIH_OFFSET UNITYSDK_OFFSET(0x1D1FBD70)
#define NJLMNDLDGNF_BGDOFJKMNGD_OFFSET UNITYSDK_OFFSET(0x1D1FC600)
#define NJLMNDLDGNF_BIKJCHLIMFL_OFFSET UNITYSDK_OFFSET(0x1D1EA890)
#define NJLMNDLDGNF_BJAEDAIAOEK_OFFSET UNITYSDK_OFFSET(0x1D1C4080)
#define NJLMNDLDGNF_BKCELOCFLII_OFFSET UNITYSDK_OFFSET(0x1D1C8E90)
#define NJLMNDLDGNF_BNEIPMGLALJ_OFFSET UNITYSDK_OFFSET(0x1D1FF3E0)
#define NJLMNDLDGNF_BPKDFHJOANF_OFFSET UNITYSDK_OFFSET(0x1D1FE100)
#define NJLMNDLDGNF_CBIBBHPNEGK_OFFSET UNITYSDK_OFFSET(0x1D1FE190)
#define NJLMNDLDGNF_CBJGLGDMOPK_OFFSET UNITYSDK_OFFSET(0x1D1EA540)
#define NJLMNDLDGNF_CCKBPDJIKPF_OFFSET UNITYSDK_OFFSET(0x1D1FFD60)
#define NJLMNDLDGNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D200B30)
#define NJLMNDLDGNF_CJNOOEHJMEH_OFFSET UNITYSDK_OFFSET(0x1D1FFDD0)
#define NJLMNDLDGNF_DAFIIIELHCL_OFFSET UNITYSDK_OFFSET(0x1D1FE820)
#define NJLMNDLDGNF_DBBEODOHAOE_OFFSET UNITYSDK_OFFSET(0x1D1EA650)
#define NJLMNDLDGNF_DCLCHDNPIEE_OFFSET UNITYSDK_OFFSET(0x1D1FE1A0)
#define NJLMNDLDGNF_DNMFGBOKDMH_OFFSET UNITYSDK_OFFSET(0x1D1FE540)
#define NJLMNDLDGNF_EADHOIENGDI_OFFSET UNITYSDK_OFFSET(0x1D1FE5E0)
#define NJLMNDLDGNF_EDLDNLJKCOK_OFFSET UNITYSDK_OFFSET(0x1D1FE2B0)
#define NJLMNDLDGNF_EDOEBDAGDJJ_OFFSET UNITYSDK_OFFSET(0x1D1FC100)
#define NJLMNDLDGNF_EFABBNKMAPK_OFFSET UNITYSDK_OFFSET(0x1D1FE020)
#define NJLMNDLDGNF_EGBJCDIEIHC_OFFSET UNITYSDK_OFFSET(0x1D1FE080)
#define NJLMNDLDGNF_EGGDEAFOLMN_OFFSET UNITYSDK_OFFSET(0x1D1FF300)
#define NJLMNDLDGNF_EHAOKPEMLIJ_OFFSET UNITYSDK_OFFSET(0x1D1FBFE0)
#define NJLMNDLDGNF_FCNIIMKHBLJ_OFFSET UNITYSDK_OFFSET(0x1D1FFCF0)
#define NJLMNDLDGNF_FDGCBCEILLK_OFFSET UNITYSDK_OFFSET(0x1D1FBD00)
#define NJLMNDLDGNF_FNPNGNDOAGO_OFFSET UNITYSDK_OFFSET(0x1D1FBF30)
#define NJLMNDLDGNF_FPJEDADBLOK_OFFSET UNITYSDK_OFFSET(0x1D1EA590)
#define NJLMNDLDGNF_GAMEMFIGHDH_OFFSET UNITYSDK_OFFSET(0x1D1FEE60)
#define NJLMNDLDGNF_GEBHFIJADFO_OFFSET UNITYSDK_OFFSET(0x1D1FD290)
#define NJLMNDLDGNF_GFLDBPJEKND_10_OFFSET UNITYSDK_OFFSET(0x1D200190)
#define NJLMNDLDGNF_GFLDBPJEKND_11_OFFSET UNITYSDK_OFFSET(0x1D2001D0)
#define NJLMNDLDGNF_GFLDBPJEKND_12_OFFSET UNITYSDK_OFFSET(0x1D200230)
#define NJLMNDLDGNF_GFLDBPJEKND_13_OFFSET UNITYSDK_OFFSET(0x1D200270)
#define NJLMNDLDGNF_GFLDBPJEKND_14_OFFSET UNITYSDK_OFFSET(0x1D2002E0)
#define NJLMNDLDGNF_GFLDBPJEKND_15_OFFSET UNITYSDK_OFFSET(0x1D200350)
#define NJLMNDLDGNF_GFLDBPJEKND_16_OFFSET UNITYSDK_OFFSET(0x1D2003C0)
#define NJLMNDLDGNF_GFLDBPJEKND_17_OFFSET UNITYSDK_OFFSET(0x1D200400)
#define NJLMNDLDGNF_GFLDBPJEKND_18_OFFSET UNITYSDK_OFFSET(0x1D200460)
#define NJLMNDLDGNF_GFLDBPJEKND_19_OFFSET UNITYSDK_OFFSET(0x1D200510)
#define NJLMNDLDGNF_GFLDBPJEKND_20_OFFSET UNITYSDK_OFFSET(0x1D2005A0)
#define NJLMNDLDGNF_GFLDBPJEKND_21_OFFSET UNITYSDK_OFFSET(0x1D2005F0)
#define NJLMNDLDGNF_GFLDBPJEKND_22_OFFSET UNITYSDK_OFFSET(0x1D2006A0)
#define NJLMNDLDGNF_GFLDBPJEKND_23_OFFSET UNITYSDK_OFFSET(0x1D200780)
#define NJLMNDLDGNF_GFLDBPJEKND_24_OFFSET UNITYSDK_OFFSET(0x1D200840)
#define NJLMNDLDGNF_GFLDBPJEKND_25_OFFSET UNITYSDK_OFFSET(0x1D200890)
#define NJLMNDLDGNF_GFLDBPJEKND_26_OFFSET UNITYSDK_OFFSET(0x1D200900)
#define NJLMNDLDGNF_GFLDBPJEKND_27_OFFSET UNITYSDK_OFFSET(0x1D200970)
#define NJLMNDLDGNF_GFLDBPJEKND_28_OFFSET UNITYSDK_OFFSET(0x1D2009E0)
#define NJLMNDLDGNF_GFLDBPJEKND_29_OFFSET UNITYSDK_OFFSET(0x1D200A50)
#define NJLMNDLDGNF_GFLDBPJEKND_2_OFFSET UNITYSDK_OFFSET(0x1D1FFE80)
#define NJLMNDLDGNF_GFLDBPJEKND_30_OFFSET UNITYSDK_OFFSET(0x1D200AB0)
#define NJLMNDLDGNF_GFLDBPJEKND_3_OFFSET UNITYSDK_OFFSET(0x1D1FFED0)
#define NJLMNDLDGNF_GFLDBPJEKND_4_OFFSET UNITYSDK_OFFSET(0x1D1FFF30)
#define NJLMNDLDGNF_GFLDBPJEKND_5_OFFSET UNITYSDK_OFFSET(0x1D1FFFB0)
#define NJLMNDLDGNF_GFLDBPJEKND_6_OFFSET UNITYSDK_OFFSET(0x1D200020)
#define NJLMNDLDGNF_GFLDBPJEKND_7_OFFSET UNITYSDK_OFFSET(0x1D200090)
#define NJLMNDLDGNF_GFLDBPJEKND_8_OFFSET UNITYSDK_OFFSET(0x1D2000F0)
#define NJLMNDLDGNF_GFLDBPJEKND_9_OFFSET UNITYSDK_OFFSET(0x1D200130)
#define NJLMNDLDGNF_GFLDBPJEKND_OFFSET UNITYSDK_OFFSET(0x1D1FE460)
#define NJLMNDLDGNF_GJIJDNFJEPK_OFFSET UNITYSDK_OFFSET(0x1D1FD250)
#define NJLMNDLDGNF_GKANABOHLIK_OFFSET UNITYSDK_OFFSET(0x1D1FC340)
#define NJLMNDLDGNF_GLOGKANGABO_1_OFFSET UNITYSDK_OFFSET(0x1D1FFB60)
#define NJLMNDLDGNF_GLOGKANGABO_OFFSET UNITYSDK_OFFSET(0x1D1FF9A0)
#define NJLMNDLDGNF_HCJNOHPHBBF_OFFSET UNITYSDK_OFFSET(0x1D1FF260)
#define NJLMNDLDGNF_HFAFKJHIBMB_OFFSET UNITYSDK_OFFSET(0x1D1EA510)
#define NJLMNDLDGNF_HFHBMCJENIG_OFFSET UNITYSDK_OFFSET(0x1D1FC470)
#define NJLMNDLDGNF_HHFEOIKHDFI_OFFSET UNITYSDK_OFFSET(0x1D1FE150)
#define NJLMNDLDGNF_HLECIAGGJGH_OFFSET UNITYSDK_OFFSET(0x1D1B8550)
#define NJLMNDLDGNF_HMGKEKMECHF_OFFSET UNITYSDK_OFFSET(0x1D1FF1C0)
#define NJLMNDLDGNF_HNJPLEIHKNF_OFFSET UNITYSDK_OFFSET(0x1D1FB9C0)
#define NJLMNDLDGNF_HOBOHCLJOEH_OFFSET UNITYSDK_OFFSET(0x1D1FC300)
#define NJLMNDLDGNF_IAIDCNEKBDH_OFFSET UNITYSDK_OFFSET(0x1D1EAB30)
#define NJLMNDLDGNF_IKFADDINMNI_OFFSET UNITYSDK_OFFSET(0x1D1FE700)
#define NJLMNDLDGNF_IPBIMEHNBPA_OFFSET UNITYSDK_OFFSET(0x1D1EA900)
#define NJLMNDLDGNF_JFGIHMAPLAK_OFFSET UNITYSDK_OFFSET(0x1D1FF410)
#define NJLMNDLDGNF_JFPDOOIJIPL_OFFSET UNITYSDK_OFFSET(0x1D1FC1D0)
#define NJLMNDLDGNF_JGKDFKEPMGC_OFFSET UNITYSDK_OFFSET(0x1D1EA690)
#define NJLMNDLDGNF_JKOAODCGDCP_OFFSET UNITYSDK_OFFSET(0x1D1FE230)
#define NJLMNDLDGNF_JKONHGOBBJB_OFFSET UNITYSDK_OFFSET(0x1D1FFE40)
#define NJLMNDLDGNF_JMCOGCHLBPG_OFFSET UNITYSDK_OFFSET(0x1D1B3DE0)
#define NJLMNDLDGNF_JNJEHNIHJLI_OFFSET UNITYSDK_OFFSET(0x1D1FDFD0)
#define NJLMNDLDGNF_JNKFOFBKJNM_OFFSET UNITYSDK_OFFSET(0x1D1FEA50)
#define NJLMNDLDGNF_JPECDCFJDDL_OFFSET UNITYSDK_OFFSET(0x1D1FE500)
#define NJLMNDLDGNF_KEOPFOKLJME_OFFSET UNITYSDK_OFFSET(0x1D1FC5A0)
#define NJLMNDLDGNF_KGGHCAJIJAJ_1_OFFSET UNITYSDK_OFFSET(0x1D1FBC70)
#define NJLMNDLDGNF_KGGHCAJIJAJ_OFFSET UNITYSDK_OFFSET(0x1D1FBAC0)
#define NJLMNDLDGNF_LAMGFMPNJMM_OFFSET UNITYSDK_OFFSET(0x1D1FE580)
#define NJLMNDLDGNF_LBIAGPBGJDL_OFFSET UNITYSDK_OFFSET(0x1D1FE140)
#define NJLMNDLDGNF_LDMHOBHCNLC_OFFSET UNITYSDK_OFFSET(0x1D1EA6E0)
#define NJLMNDLDGNF_LEKAIIPBELG_OFFSET UNITYSDK_OFFSET(0x1D1FE960)
#define NJLMNDLDGNF_LICJBIMKBGN_OFFSET UNITYSDK_OFFSET(0x1D1FBE80)
#define NJLMNDLDGNF_LPGDLIGDADE_OFFSET UNITYSDK_OFFSET(0x1D1FE4D0)
#define NJLMNDLDGNF_MIGJFDFFEAC_OFFSET UNITYSDK_OFFSET(0x1D1EA760)
#define NJLMNDLDGNF_MLPMMIAMOIE_OFFSET UNITYSDK_OFFSET(0x1D1FC3E0)
#define NJLMNDLDGNF_MNFANLNIGHA_OFFSET UNITYSDK_OFFSET(0x1D1EA630)
#define NJLMNDLDGNF_NFAFICEOIIB_OFFSET UNITYSDK_OFFSET(0x1D1FEF80)
#define NJLMNDLDGNF_NFCPJPGJEEN_OFFSET UNITYSDK_OFFSET(0x1D1EA860)
#define NJLMNDLDGNF_NFEDPNPHJNF_OFFSET UNITYSDK_OFFSET(0x1D1FEAF0)
#define NJLMNDLDGNF_NMDCMMAJAHH_OFFSET UNITYSDK_OFFSET(0x1D1FF0A0)
#define NJLMNDLDGNF_OBPCANCCGME_OFFSET UNITYSDK_OFFSET(0x1D1EA9E0)
#define NJLMNDLDGNF_OIIFBPEGJJP_OFFSET UNITYSDK_OFFSET(0x1D1EA7F0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_10_OFFSET UNITYSDK_OFFSET(0x1D1FD5E0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_11_OFFSET UNITYSDK_OFFSET(0x1D1FD620)
#define NJLMNDLDGNF_OJNNBEJLDIJ_12_OFFSET UNITYSDK_OFFSET(0x1D1FD680)
#define NJLMNDLDGNF_OJNNBEJLDIJ_13_OFFSET UNITYSDK_OFFSET(0x1D1FD6C0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_14_OFFSET UNITYSDK_OFFSET(0x1D1FD710)
#define NJLMNDLDGNF_OJNNBEJLDIJ_15_OFFSET UNITYSDK_OFFSET(0x1D1FD770)
#define NJLMNDLDGNF_OJNNBEJLDIJ_16_OFFSET UNITYSDK_OFFSET(0x1D1FD800)
#define NJLMNDLDGNF_OJNNBEJLDIJ_17_OFFSET UNITYSDK_OFFSET(0x1D1FD860)
#define NJLMNDLDGNF_OJNNBEJLDIJ_18_OFFSET UNITYSDK_OFFSET(0x1D1FD920)
#define NJLMNDLDGNF_OJNNBEJLDIJ_19_OFFSET UNITYSDK_OFFSET(0x1D1FD9B0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_1_OFFSET UNITYSDK_OFFSET(0x1D1FD2E0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_20_OFFSET UNITYSDK_OFFSET(0x1D1FD9F0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_21_OFFSET UNITYSDK_OFFSET(0x1D1FDA30)
#define NJLMNDLDGNF_OJNNBEJLDIJ_22_OFFSET UNITYSDK_OFFSET(0x1D1FDAC0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_23_OFFSET UNITYSDK_OFFSET(0x1D1FDB00)
#define NJLMNDLDGNF_OJNNBEJLDIJ_24_OFFSET UNITYSDK_OFFSET(0x1D1FDC10)
#define NJLMNDLDGNF_OJNNBEJLDIJ_25_OFFSET UNITYSDK_OFFSET(0x1D1FDC70)
#define NJLMNDLDGNF_OJNNBEJLDIJ_26_OFFSET UNITYSDK_OFFSET(0x1D1FDCE0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_27_OFFSET UNITYSDK_OFFSET(0x1D1FDDA0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_28_OFFSET UNITYSDK_OFFSET(0x1D1FDE50)
#define NJLMNDLDGNF_OJNNBEJLDIJ_29_OFFSET UNITYSDK_OFFSET(0x1D1FDED0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_2_OFFSET UNITYSDK_OFFSET(0x1D1FD350)
#define NJLMNDLDGNF_OJNNBEJLDIJ_30_OFFSET UNITYSDK_OFFSET(0x1D1FDF40)
#define NJLMNDLDGNF_OJNNBEJLDIJ_3_OFFSET UNITYSDK_OFFSET(0x1D1FD3C0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_4_OFFSET UNITYSDK_OFFSET(0x1D1FD420)
#define NJLMNDLDGNF_OJNNBEJLDIJ_5_OFFSET UNITYSDK_OFFSET(0x1D1FD460)
#define NJLMNDLDGNF_OJNNBEJLDIJ_6_OFFSET UNITYSDK_OFFSET(0x1D1FD4C0)
#define NJLMNDLDGNF_OJNNBEJLDIJ_7_OFFSET UNITYSDK_OFFSET(0x1D1FD500)
#define NJLMNDLDGNF_OJNNBEJLDIJ_8_OFFSET UNITYSDK_OFFSET(0x1D1FD560)
#define NJLMNDLDGNF_OJNNBEJLDIJ_9_OFFSET UNITYSDK_OFFSET(0x1D1FD5A0)
#define NJLMNDLDGNF_ONDFBFPFNMD_OFFSET UNITYSDK_OFFSET(0x1D1FE270)
#define NJLMNDLDGNF_OPNCMNGKEPB_OFFSET UNITYSDK_OFFSET(0x1D1FE6A0)
#define NJLMNDLDGNF_PBCBNEFAOAJ_OFFSET UNITYSDK_OFFSET(0x1D1EA5E0)
#define NJLMNDLDGNF_PBDNPCKCJDF_OFFSET UNITYSDK_OFFSET(0x1D1FC540)
#define NJLMNDLDGNF_PHAHDBNOMOF_OFFSET UNITYSDK_OFFSET(0x1D1FC4E0)
#define NJLMNDLDGNF_PHDLPLCDDNP_OFFSET UNITYSDK_OFFSET(0x1D1FDFC0)
#define NJLMNDLDGNF_PPGKNPOOEGH_OFFSET UNITYSDK_OFFSET(0x1D1FE0C0)
#define NJLMNDLDGNF_PPKGKFIHOJL_OFFSET UNITYSDK_OFFSET(0x1D1FE8A0)
#define NJLMNDLDGNF__FROMBINARY_DYNAMICVALUELOOKUP_G___GETREADINFO_54_0_OFFSET UNITYSDK_OFFSET(0x1D1FD100)

inline static constexpr unsigned int NJLMNDLDGNF_TypeDefinitionIndex = 10819;

	class NJLMNDLDGNF : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*, ::System::String*>** StaticGet_GOHHNHECJOD()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("", "NJLMNDLDGNF")->GetStaticField(0x41370);
		}

		// static const ::System::Object BPPCHMEBFLI; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJLMNDLDGNF_CCTOR_OFFSET))();
		}

		static ::System::String* HFAFKJHIBMB(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_HFAFKJHIBMB_OFFSET))(a1);
		}

		static ::System::Void CBJGLGDMOPK(::FCOEMCEDLNL* a1, ::System::SByte a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::SByte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_CBJGLGDMOPK_OFFSET))(a1, a2);
		}

		static ::System::Void FPJEDADBLOK(::FCOEMCEDLNL* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Byte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_FPJEDADBLOK_OFFSET))(a1, a2);
		}

		static ::System::Void PBCBNEFAOAJ(::FCOEMCEDLNL* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int16))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_PBCBNEFAOAJ_OFFSET))(a1, a2);
		}

		static ::System::Void MNFANLNIGHA(::FCOEMCEDLNL* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt16))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_MNFANLNIGHA_OFFSET))(a1, a2);
		}

		static ::System::Void DBBEODOHAOE(::FCOEMCEDLNL* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_DBBEODOHAOE_OFFSET))(a1, a2);
		}

		static ::System::Void ALCOEAHPFHK(::FCOEMCEDLNL* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_ALCOEAHPFHK_OFFSET))(a1, a2);
		}

		static ::System::Void JGKDFKEPMGC(::FCOEMCEDLNL* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int64))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JGKDFKEPMGC_OFFSET))(a1, a2);
		}

		static ::System::Void BKCELOCFLII(::FCOEMCEDLNL* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt64))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BKCELOCFLII_OFFSET))(a1, a2);
		}

		static ::System::Void BJAEDAIAOEK(::FCOEMCEDLNL* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Single))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BJAEDAIAOEK_OFFSET))(a1, a2);
		}

		static ::System::Void LDMHOBHCNLC(::FCOEMCEDLNL* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Double))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_LDMHOBHCNLC_OFFSET))(a1, a2);
		}

		static ::System::Void JMCOGCHLBPG(::FCOEMCEDLNL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JMCOGCHLBPG_OFFSET))(a1, a2);
		}

		static ::System::Void HLECIAGGJGH(::FCOEMCEDLNL* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::String*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_HLECIAGGJGH_OFFSET))(a1, a2);
		}

		static ::System::Void MIGJFDFFEAC(::FCOEMCEDLNL* a1, ::IMOBOOHNHAM a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMOBOOHNHAM))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_MIGJFDFFEAC_OFFSET))(a1, a2);
		}

		static ::System::Void BDJDAJCHKLH(::FCOEMCEDLNL* a1, ::ABIMIPAIIEH a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABIMIPAIIEH))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BDJDAJCHKLH_OFFSET))(a1, a2);
		}

		static ::System::Void OIIFBPEGJJP(::FCOEMCEDLNL* a1, ::NEHCCAFEBNL a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NEHCCAFEBNL))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OIIFBPEGJJP_OFFSET))(a1, a2);
		}

		static ::System::UInt32 NFCPJPGJEEN(::FCOEMCEDLNL* a1)
		{
			return ((::System::UInt32(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_NFCPJPGJEEN_OFFSET))(a1);
		}

		static ::System::UInt32 BIKJCHLIMFL(::FCOEMCEDLNL* a1)
		{
			return ((::System::UInt32(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BIKJCHLIMFL_OFFSET))(a1);
		}

		static ::System::Void BBJNHNNCLLP(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BBJNHNNCLLP_OFFSET))(a1, a2);
		}

		static ::System::Void IPBIMEHNBPA(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_IPBIMEHNBPA_OFFSET))(a1, a2);
		}

		static ::System::Void OBPCANCCGME(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OBPCANCCGME_OFFSET))(a1, a2);
		}

		static ::System::Void IAIDCNEKBDH(::FCOEMCEDLNL* a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_IAIDCNEKBDH_OFFSET))(a1, a2);
		}

		static ::System::Void HNJPLEIHKNF(::FCOEMCEDLNL* a1, ::RPG::IVec3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::IVec3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_HNJPLEIHKNF_OFFSET))(a1, a2);
		}

		static ::System::Void KGGHCAJIJAJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_KGGHCAJIJAJ_OFFSET))(a1, a2);
		}

		static ::System::Void KGGHCAJIJAJ_1(::FCOEMCEDLNL* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_KGGHCAJIJAJ_1_OFFSET))(a1, a2);
		}

		static ::System::Void FDGCBCEILLK(::FCOEMCEDLNL* a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_FDGCBCEILLK_OFFSET))(a1, a2);
		}

		static ::System::Void BFDCBLEDPIH(::FCOEMCEDLNL* a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BFDCBLEDPIH_OFFSET))(a1, a2);
		}

		static ::System::Void LICJBIMKBGN(::FCOEMCEDLNL* a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_LICJBIMKBGN_OFFSET))(a1, a2);
		}

		static ::System::Void FNPNGNDOAGO(::FCOEMCEDLNL* a1, ::RPG::MColor a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MColor))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_FNPNGNDOAGO_OFFSET))(a1, a2);
		}

		static ::System::Void EHAOKPEMLIJ(::FCOEMCEDLNL* a1, ::RPG::MRect a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MRect))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_EHAOKPEMLIJ_OFFSET))(a1, a2);
		}

		static ::System::Void ACJNGLHFJGI(::FCOEMCEDLNL* a1, ::RPG::FloatCurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_ACJNGLHFJGI_OFFSET))(a1, a2);
		}

		static ::System::Void EDOEBDAGDJJ(::FCOEMCEDLNL* a1, ::RPG::Vector3CurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_EDOEBDAGDJJ_OFFSET))(a1, a2);
		}

		static ::System::Void JFPDOOIJIPL(::FCOEMCEDLNL* a1, ::RPG::Vector4CurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JFPDOOIJIPL_OFFSET))(a1, a2);
		}

		static ::System::Void BAOMJDKOCNN(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BAOMJDKOCNN_OFFSET))(a1, a2);
		}

		static ::System::Void HOBOHCLJOEH(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_HOBOHCLJOEH_OFFSET))(a1, a2);
		}

		static ::System::Void BAGPBDFPKOJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BAGPBDFPKOJ_OFFSET))(a1, a2);
		}

		static ::System::Void GKANABOHLIK(::FCOEMCEDLNL* a1, ::System::DateTime a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::DateTime))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GKANABOHLIK_OFFSET))(a1, a2);
		}

		static ::System::Void MLPMMIAMOIE(::FCOEMCEDLNL* a1, ::RPG::GameCore::FilePath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_MLPMMIAMOIE_OFFSET))(a1, a2);
		}

		static ::System::Void HFHBMCJENIG(::FCOEMCEDLNL* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_HFHBMCJENIG_OFFSET))(a1, a2);
		}

		static ::System::Void PHAHDBNOMOF(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_PHAHDBNOMOF_OFFSET))(a1, a2);
		}

		static ::System::Void PBDNPCKCJDF(::FCOEMCEDLNL* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_PBDNPCKCJDF_OFFSET))(a1, a2);
		}

		static ::System::Void KEOPFOKLJME(::FCOEMCEDLNL* a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_KEOPFOKLJME_OFFSET))(a1, a2);
		}

		static ::System::Void BGDOFJKMNGD(::FCOEMCEDLNL* a1, ::ENEIHJJPNPI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BGDOFJKMNGD_OFFSET))(a1, a2);
		}

		static ::System::Void APGFGOLICDO(::FCOEMCEDLNL* a1, ::RPG::GameCore::SurfaceType a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_APGFGOLICDO_OFFSET))(a1, a2);
		}

		static ::System::Void GJIJDNFJEPK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ThreadTaskType a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ThreadTaskType))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GJIJDNFJEPK_OFFSET))(a1, a2);
		}

		static ::System::Int32 GEBHFIJADFO(::FCOEMCEDLNL* a1)
		{
			return ((::System::Int32(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GEBHFIJADFO_OFFSET))(a1);
		}

		static ::System::Void OJNNBEJLDIJ_1(::FCOEMCEDLNL* a1, ::System::SByte a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::SByte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_1_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_2(::FCOEMCEDLNL* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Byte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_2_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_3(::FCOEMCEDLNL* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int16))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_3_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_4(::FCOEMCEDLNL* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt16))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_4_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_5(::FCOEMCEDLNL* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_5_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_6(::FCOEMCEDLNL* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_6_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_7(::FCOEMCEDLNL* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int64))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_7_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_8(::FCOEMCEDLNL* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt64))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_8_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_9(::FCOEMCEDLNL* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Single))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_9_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_10(::FCOEMCEDLNL* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Double))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_10_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_11(::FCOEMCEDLNL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_11_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_12(::FCOEMCEDLNL* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::String*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_12_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_13(::FCOEMCEDLNL* a1, ::IMOBOOHNHAM a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMOBOOHNHAM))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_13_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_14(::FCOEMCEDLNL* a1, ::ABIMIPAIIEH a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABIMIPAIIEH))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_14_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_15(::FCOEMCEDLNL* a1, ::NEHCCAFEBNL a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NEHCCAFEBNL))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_15_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_16(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_16_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_17(::FCOEMCEDLNL* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_17_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_18(::FCOEMCEDLNL* a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_18_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_19(::FCOEMCEDLNL* a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_19_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_20(::FCOEMCEDLNL* a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_20_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_21(::FCOEMCEDLNL* a1, ::RPG::FloatCurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_21_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_22(::FCOEMCEDLNL* a1, ::RPG::Vector3CurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_22_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_23(::FCOEMCEDLNL* a1, ::RPG::Vector4CurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_23_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_24(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_24_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_25(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_25_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_26(::FCOEMCEDLNL* a1, ::System::DateTime a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::DateTime))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_26_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_27(::FCOEMCEDLNL* a1, ::RPG::GameCore::FilePath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_27_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_28(::FCOEMCEDLNL* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_28_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_29(::FCOEMCEDLNL* a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_29_OFFSET))(a1, a2);
		}

		static ::System::Void OJNNBEJLDIJ_30(::FCOEMCEDLNL* a1, ::ENEIHJJPNPI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OJNNBEJLDIJ_30_OFFSET))(a1, a2);
		}

		static ::System::Void ANLHGPHKHEN(::FCOEMCEDLNL* a1, ::IMOBOOHNHAM a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMOBOOHNHAM))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_ANLHGPHKHEN_OFFSET))(a1, a2);
		}

		static ::System::Void JNJEHNIHJLI(::FCOEMCEDLNL* a1, ::ABIMIPAIIEH a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABIMIPAIIEH))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JNJEHNIHJLI_OFFSET))(a1, a2);
		}

		static ::System::Void EFABBNKMAPK(::FCOEMCEDLNL* a1, ::NEHCCAFEBNL a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NEHCCAFEBNL))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_EFABBNKMAPK_OFFSET))(a1, a2);
		}

		static ::System::Void EGBJCDIEIHC(::FCOEMCEDLNL* a1, ::System::SByte a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::SByte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_EGBJCDIEIHC_OFFSET))(a1, a2);
		}

		static ::System::Void PPGKNPOOEGH(::FCOEMCEDLNL* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Byte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_PPGKNPOOEGH_OFFSET))(a1, a2);
		}

		static ::System::Void BPKDFHJOANF(::FCOEMCEDLNL* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int16))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BPKDFHJOANF_OFFSET))(a1, a2);
		}

		static ::System::Void LBIAGPBGJDL(::FCOEMCEDLNL* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt16))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_LBIAGPBGJDL_OFFSET))(a1, a2);
		}

		static ::System::Void HHFEOIKHDFI(::FCOEMCEDLNL* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_HHFEOIKHDFI_OFFSET))(a1, a2);
		}

		static ::System::Void CBIBBHPNEGK(::FCOEMCEDLNL* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_CBIBBHPNEGK_OFFSET))(a1, a2);
		}

		static ::System::Void DCLCHDNPIEE(::FCOEMCEDLNL* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int64))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_DCLCHDNPIEE_OFFSET))(a1, a2);
		}

		static ::System::Void PHDLPLCDDNP(::FCOEMCEDLNL* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt64))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_PHDLPLCDDNP_OFFSET))(a1, a2);
		}

		static ::System::Void ADFCBBKJBON(::FCOEMCEDLNL* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Single))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_ADFCBBKJBON_OFFSET))(a1, a2);
		}

		static ::System::Void JKOAODCGDCP(::FCOEMCEDLNL* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Double))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JKOAODCGDCP_OFFSET))(a1, a2);
		}

		static ::System::Void ONDFBFPFNMD(::FCOEMCEDLNL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_ONDFBFPFNMD_OFFSET))(a1, a2);
		}

		static ::System::Void EDLDNLJKCOK(::FCOEMCEDLNL* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::String*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_EDLDNLJKCOK_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND(::FCOEMCEDLNL* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_OFFSET))(a1, a2, a3);
		}

		static ::System::String* LPGDLIGDADE(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_LPGDLIGDADE_OFFSET))(a1);
		}

		static ::System::Void JPECDCFJDDL(::FCOEMCEDLNL* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JPECDCFJDDL_OFFSET))(a1, a2);
		}

		static ::System::Void DNMFGBOKDMH(::FCOEMCEDLNL* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_DNMFGBOKDMH_OFFSET))(a1, a2);
		}

		static ::System::Void LAMGFMPNJMM(::FCOEMCEDLNL* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_LAMGFMPNJMM_OFFSET))(a1, a2);
		}

		static ::System::Void EADHOIENGDI(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_EADHOIENGDI_OFFSET))(a1, a2);
		}

		static ::System::Void IKFADDINMNI(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_IKFADDINMNI_OFFSET))(a1, a2);
		}

		static ::System::Void DAFIIIELHCL(::FCOEMCEDLNL* a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_DAFIIIELHCL_OFFSET))(a1, a2);
		}

		static ::System::Void PPKGKFIHOJL(::FCOEMCEDLNL* a1, ::RPG::IVec3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::IVec3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_PPKGKFIHOJL_OFFSET))(a1, a2);
		}

		static ::System::Void LEKAIIPBELG(::FCOEMCEDLNL* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_LEKAIIPBELG_OFFSET))(a1, a2);
		}

		static ::System::Void JNKFOFBKJNM(::FCOEMCEDLNL* a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JNKFOFBKJNM_OFFSET))(a1, a2);
		}

		static ::System::Void NFEDPNPHJNF(::FCOEMCEDLNL* a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_NFEDPNPHJNF_OFFSET))(a1, a2);
		}

		static ::System::Void GAMEMFIGHDH(::FCOEMCEDLNL* a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GAMEMFIGHDH_OFFSET))(a1, a2);
		}

		static ::System::Void NFAFICEOIIB(::FCOEMCEDLNL* a1, ::RPG::MColor a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MColor))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_NFAFICEOIIB_OFFSET))(a1, a2);
		}

		static ::System::Void NMDCMMAJAHH(::FCOEMCEDLNL* a1, ::RPG::MRect a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MRect))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_NMDCMMAJAHH_OFFSET))(a1, a2);
		}

		static ::System::Void HMGKEKMECHF(::FCOEMCEDLNL* a1, ::RPG::FloatCurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_HMGKEKMECHF_OFFSET))(a1, a2);
		}

		static ::System::Void HCJNOHPHBBF(::FCOEMCEDLNL* a1, ::RPG::Vector3CurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_HCJNOHPHBBF_OFFSET))(a1, a2);
		}

		static ::System::Void EGGDEAFOLMN(::FCOEMCEDLNL* a1, ::RPG::Vector4CurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_EGGDEAFOLMN_OFFSET))(a1, a2);
		}

		static ::System::Void AEIBFHFPJNM(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_AEIBFHFPJNM_OFFSET))(a1, a2);
		}

		static ::System::Void BNEIPMGLALJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_BNEIPMGLALJ_OFFSET))(a1, a2);
		}

		static ::System::Void OPNCMNGKEPB(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_OPNCMNGKEPB_OFFSET))(a1, a2);
		}

		static ::System::Void JFGIHMAPLAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FilePath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JFGIHMAPLAK_OFFSET))(a1, a2);
		}

		static ::System::Void APMHIFLJHPP(::FCOEMCEDLNL* a1, ::System::DateTime a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::DateTime))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_APMHIFLJHPP_OFFSET))(a1, a2);
		}

		static ::System::Void ABPJCAHJDEJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_ABPJCAHJDEJ_OFFSET))(a1, a2);
		}

		static ::System::Void AJCGAILPMIA(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_AJCGAILPMIA_OFFSET))(a1, a2);
		}

		static ::System::Void ABBMFBBHHIG(::FCOEMCEDLNL* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_ABBMFBBHHIG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ABBMFBBHHIG_1(::FCOEMCEDLNL* a1, ::System::UInt64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_ABBMFBBHHIG_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GLOGKANGABO(::FCOEMCEDLNL* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GLOGKANGABO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GLOGKANGABO_1(::FCOEMCEDLNL* a1, ::System::UInt64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GLOGKANGABO_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void FCNIIMKHBLJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SurfaceType a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_FCNIIMKHBLJ_OFFSET))(a1, a2);
		}

		static ::System::Void CCKBPDJIKPF(::FCOEMCEDLNL* a1, ::RPG::GameCore::ThreadTaskType a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ThreadTaskType))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_CCKBPDJIKPF_OFFSET))(a1, a2);
		}

		static ::System::Void CJNOOEHJMEH(::FCOEMCEDLNL* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_CJNOOEHJMEH_OFFSET))(a1, a2);
		}

		static ::System::Void JKONHGOBBJB(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_JKONHGOBBJB_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_2(::FCOEMCEDLNL* a1, ::IMOBOOHNHAM a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMOBOOHNHAM))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_2_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_3(::FCOEMCEDLNL* a1, ::ABIMIPAIIEH a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABIMIPAIIEH))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_3_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_4(::FCOEMCEDLNL* a1, ::NEHCCAFEBNL a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NEHCCAFEBNL))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_4_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_5(::FCOEMCEDLNL* a1, ::System::SByte a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::SByte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_5_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_6(::FCOEMCEDLNL* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Byte))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_6_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_7(::FCOEMCEDLNL* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int16))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_7_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_8(::FCOEMCEDLNL* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt16))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_8_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_9(::FCOEMCEDLNL* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_9_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_10(::FCOEMCEDLNL* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt32))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_10_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_11(::FCOEMCEDLNL* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Int64))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_11_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_12(::FCOEMCEDLNL* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::UInt64))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_12_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_13(::FCOEMCEDLNL* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Single))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_13_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_14(::FCOEMCEDLNL* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Double))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_14_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_15(::FCOEMCEDLNL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_15_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_16(::FCOEMCEDLNL* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::String*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_16_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_17(::FCOEMCEDLNL* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_17_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_18(::FCOEMCEDLNL* a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_18_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_19(::FCOEMCEDLNL* a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_19_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_20(::FCOEMCEDLNL* a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_20_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_21(::FCOEMCEDLNL* a1, ::RPG::FloatCurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_21_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_22(::FCOEMCEDLNL* a1, ::RPG::Vector3CurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_22_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_23(::FCOEMCEDLNL* a1, ::RPG::Vector4CurveFrame a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_23_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_24(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_24_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_25(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_25_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_26(::FCOEMCEDLNL* a1, ::RPG::GameCore::FilePath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_26_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_27(::FCOEMCEDLNL* a1, ::System::DateTime a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::DateTime))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_27_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_28(::FCOEMCEDLNL* a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_28_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_29(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_29_OFFSET))(a1, a2);
		}

		static ::System::Void GFLDBPJEKND_30(::FCOEMCEDLNL* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NJLMNDLDGNF_GFLDBPJEKND_30_OFFSET))(a1, a2);
		}

		static ::MFDEBKGHEIO _FromBinary_DynamicValueLookup_g___GetReadInfo_54_0(::FCOEMCEDLNL* a1)
		{
			return ((::MFDEBKGHEIO(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NJLMNDLDGNF__FROMBINARY_DYNAMICVALUELOOKUP_G___GETREADINFO_54_0_OFFSET))(a1);
		}

	};
