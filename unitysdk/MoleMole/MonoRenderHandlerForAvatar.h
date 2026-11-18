#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/MoleMole/MonoRenderHandler.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/MoleMole/MonoRenderHandlerForAvatar_CEPGHNCIBEO.h"
#include "unitysdk/MoleMole/StaticKeywordMaterialModifier.h"
#include "unitysdk/System/ValueTuple_2.h"

class ILLCEFBALCI;
class MOELDGPPDPM;
class NOHOGHGPBAG;
namespace MoleMole { class MonoRenderHandlerForAvatar_EJPEPABLFMI; }
namespace MoleMole { class MonoRenderHandlerForAvatar_MPHAGFDGGHN; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_AAJNFGHAEPC_OFFSET UNITYSDK_OFFSET(0x1A932130)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ADHHFGBHLIP_OFFSET UNITYSDK_OFFSET(0x1A92FC80)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_AEGMDJEBCAE_OFFSET UNITYSDK_OFFSET(0x1A9308D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_AGLBLOHBKOB_OFFSET UNITYSDK_OFFSET(0x1A926550)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_AHLEBKEIDHN_OFFSET UNITYSDK_OFFSET(0x1A934CC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_BABNLPODJON_OFFSET UNITYSDK_OFFSET(0x1A92FA70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_BBAKPEMFPIB_OFFSET UNITYSDK_OFFSET(0x1A91EE20)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_BJGDIMFEKMP_OFFSET UNITYSDK_OFFSET(0x1A925B00)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_BKMGJKOEFJB_OFFSET UNITYSDK_OFFSET(0x1A932080)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_BOOGNPEFBBO_OFFSET UNITYSDK_OFFSET(0x1A922D50)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_BPLJJPAKONJ_OFFSET UNITYSDK_OFFSET(0x1A933F00)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_COJHGEBOKAA_OFFSET UNITYSDK_OFFSET(0x1A934BC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_COPHHKMMHNL_OFFSET UNITYSDK_OFFSET(0x1A932340)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_DJGEOKMPJKN_OFFSET UNITYSDK_OFFSET(0x1A92F290)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_DKBECKCKHPN_OFFSET UNITYSDK_OFFSET(0x1A925690)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_EKHNGFIOPAO_OFFSET UNITYSDK_OFFSET(0x1A923420)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_1_OFFSET UNITYSDK_OFFSET(0x1A931D40)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_2_OFFSET UNITYSDK_OFFSET(0x1A9321C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_3_OFFSET UNITYSDK_OFFSET(0x1A934600)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_4_OFFSET UNITYSDK_OFFSET(0x1A934B10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_5_OFFSET UNITYSDK_OFFSET(0x1A934DA0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_6_OFFSET UNITYSDK_OFFSET(0x1A934E50)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_OFFSET UNITYSDK_OFFSET(0x1A92E9D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FBCCKGGBHLB_OFFSET UNITYSDK_OFFSET(0x1A933470)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FCJNDMNFABO_OFFSET UNITYSDK_OFFSET(0x1A933660)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FGIOFKFJNIH_OFFSET UNITYSDK_OFFSET(0x1A934BD0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEDITHERFXCLIP_OFFSET UNITYSDK_OFFSET(0x1A925FC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEFXCLIP_OFFSET UNITYSDK_OFFSET(0x1A925CB0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_GJNFMDAGCOI_OFFSET UNITYSDK_OFFSET(0x1A926F10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_HIACNKOHLMC_OFFSET UNITYSDK_OFFSET(0x1A9252B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_IAHPJJFHNJP_OFFSET UNITYSDK_OFFSET(0x1A9275A0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_IEOOBLMBPDI_OFFSET UNITYSDK_OFFSET(0x1A9354D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_IFLNNBDHOJM_OFFSET UNITYSDK_OFFSET(0x1A934F00)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1A92EA70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ILPNGHNHCNH_OFFSET UNITYSDK_OFFSET(0x1A92F900)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_INEIEDEINFI_OFFSET UNITYSDK_OFFSET(0x1A935980)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_INVALIDATEUPDATESWITCHCACHE_OFFSET UNITYSDK_OFFSET(0x1A925AA0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_IPFJOMIAEKH_OFFSET UNITYSDK_OFFSET(0x1A9346B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_1_OFFSET UNITYSDK_OFFSET(0x1A9218C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_2_OFFSET UNITYSDK_OFFSET(0x1A9213E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_3_OFFSET UNITYSDK_OFFSET(0x1A9227E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_4_OFFSET UNITYSDK_OFFSET(0x1A921060)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_5_OFFSET UNITYSDK_OFFSET(0x1A922280)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_OFFSET UNITYSDK_OFFSET(0x1A920750)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JFCMPELBLIC_OFFSET UNITYSDK_OFFSET(0x1A91F2E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JIHBGJJDEPL_OFFSET UNITYSDK_OFFSET(0x1A934C30)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_JLNLFDMEOJN_OFFSET UNITYSDK_OFFSET(0x1A92EA80)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_KBHCLELEFHC_OFFSET UNITYSDK_OFFSET(0x1A91EF30)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_KGJDFCOLGEA_OFFSET UNITYSDK_OFFSET(0x1A931DF0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_KHLOJLPPJCO_OFFSET UNITYSDK_OFFSET(0x1A9244F0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_KPPGDLNFJFG_OFFSET UNITYSDK_OFFSET(0x1A927500)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_LEPDIBGAOPI_OFFSET UNITYSDK_OFFSET(0x1A933320)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_LFPEBDHKNPB_OFFSET UNITYSDK_OFFSET(0x1A9335D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_LHNBJPPDMIH_OFFSET UNITYSDK_OFFSET(0x1A926AD0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_LLMKDJOCLHE_OFFSET UNITYSDK_OFFSET(0x1A932270)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_MADLFKLOANL_OFFSET UNITYSDK_OFFSET(0x1A92ECB0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_MGALINIDAOP_OFFSET UNITYSDK_OFFSET(0x1A92E970)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_NDNANNPKJGN_OFFSET UNITYSDK_OFFSET(0x1A931E80)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_NJEKJBLIHDM_OFFSET UNITYSDK_OFFSET(0x1A933E70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A9262F0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_OOAGHJOANHF_OFFSET UNITYSDK_OFFSET(0x1A9313C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_PPLABFGHBDB_OFFSET UNITYSDK_OFFSET(0x1A91F220)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_REVERTSHADER_OFFSET UNITYSDK_OFFSET(0x1A926340)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDSFORCUTSCENETIMELINE_OFFSET UNITYSDK_OFFSET(0x1A926B90)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1A926740)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x1A91EAA0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x1A926EC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A91F290)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x1A921000)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x1A921380)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x1A921860)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x1A922220)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x1A9226E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x1A922740)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x1A9206F0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x1A922860)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A92BE40)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9281C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_TypeDefinitionIndex = 52703;

	class MonoRenderHandlerForAvatar : public ::MoleMole::MonoRenderHandler
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_CMJNIECCDGE()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x4E970);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Object*>*>** StaticGet_HGKKOPHGCHF()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x4E978);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_MKHNKIFFJFF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x4E980);
		}
		static ::System::Int32* StaticGet_IOEJMAKFHII()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12970);
		}
		static ::System::Int32* StaticGet_DKBDKDJPJAO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12974);
		}
		static ::System::UInt32* StaticGet_ONNFDCFOHGN()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12978);
		}
		static ::System::UInt32* StaticGet_JOMODLGAOIP()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1297C);
		}
		static ::System::UInt32* StaticGet_KIPLJLIDCCC()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12980);
		}
		static ::System::Int32* StaticGet_PMHEALKEJGN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12984);
		}
		static ::System::UInt32* StaticGet_GJOFNGOMGIG()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12988);
		}
		static ::System::Int32* StaticGet_GBENCFMDCBM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1298C);
		}
		static ::System::UInt32* StaticGet_FGPALPFIDLK()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12990);
		}
		static ::System::UInt32* StaticGet_HFAJIKJDCKF()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12994);
		}
		static ::System::UInt32* StaticGet_JEIHJNHJEIJ()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12998);
		}
		static ::System::Int32* StaticGet_MCEKGDDOIHC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1299C);
		}
		static ::System::Int32* StaticGet_IADDDOPMEBF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129A0);
		}
		static ::System::Int32* StaticGet_MOMMICDBEON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129A4);
		}
		static ::System::Int32* StaticGet_GFEPCACPBBB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129A8);
		}
		static ::System::UInt32* StaticGet_AOOGBJFJKJC()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129AC);
		}
		static ::System::Int32* StaticGet_MAHILHNKIPA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129B0);
		}
		static ::System::UInt32* StaticGet_JIMGFDMNLBM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129B4);
		}
		static ::System::Int32* StaticGet_LJCGEFLIIHP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129B8);
		}
		static ::System::UInt32* StaticGet_OCHDACHAHEA()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129BC);
		}
		static ::System::UInt32* StaticGet_PMBGJBBCODM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129C0);
		}
		static ::System::Int32* StaticGet_MOCOJDMILLO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129C4);
		}
		static ::System::UInt32* StaticGet_KPBHLHAJDPG()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129C8);
		}
		static ::System::Int32* StaticGet_PAFPKHKIHCN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129CC);
		}
		static ::System::UInt32* StaticGet_HLONLBCOJNK()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129D0);
		}
		static ::System::UInt32* StaticGet_DMNDMBBMEDK()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129D4);
		}
		static ::System::UInt32* StaticGet_BKBLFIMNCGM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129D8);
		}
		static ::System::UInt32* StaticGet_BMDKDNCEFPE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129DC);
		}
		static ::System::Int32* StaticGet_JDENNKHKAEJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129E0);
		}
		static ::System::Int32* StaticGet_GMBEEFDPDPM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129E4);
		}
		static ::System::Int32* StaticGet_EDOGEEBHAGP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129E8);
		}
		static ::System::Int32* StaticGet_LOCDNANNNBC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129EC);
		}
		static ::System::UInt32* StaticGet_GOAGNBFNIJF()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129F0);
		}
		static ::System::Int32* StaticGet_OPLNELNDLAK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129F4);
		}
		static ::System::UInt32* StaticGet_PLHOKNPDEEA()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129F8);
		}
		static ::System::Int32* StaticGet_MECIBAMOAHJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x129FC);
		}
		static ::System::Int32* StaticGet_GPPEAKGJEJG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12A00);
		}
		static ::System::UInt32* StaticGet_EPGPCOEILFO()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12A04);
		}
		static ::System::Int32* StaticGet_ICNFIIKMCMN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12A08);
		}
		static ::System::Int32* StaticGet_EFFGKPPAOEE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12A0C);
		}
		static ::System::UInt32* StaticGet_JMJLDFJJLLO()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12A10);
		}
		static ::System::UInt32* StaticGet_OLLAELFIKLA()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12A14);
		}
		static ::System::Int32* StaticGet_FMENKCLIBND()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12A18);
		}
		static ::System::UInt32* StaticGet_HEJFJAHPJEK()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x12A1C);
		}
		// static const ::System::Int32 EHEADDMCACJ = 0x0; // 0x0
		// static const ::System::Int32 DAHLAPNNNCD = 0x1; // 0x0
		::MoleMole::StaticBoolMaterialModifier _Transition; // 0xD8
		::MoleMole::StaticFloatMaterialModifier _TransitionCompletion; // 0xF0
		::MoleMole::StaticTextureMaterialModifier _TransitionTex; // 0x110
		::MoleMole::StaticBoolMaterialModifier _OverrideOutlineUseUV2; // 0x140
		::MoleMole::StaticFloatMaterialModifier _TransitionWidth; // 0x158
		::MoleMole::StaticColorMaterialModifier _TransitionColor; // 0x178
		::MoleMole::StaticTextureMaterialModifier _OverrideOutlineTex; // 0x1B0
		::MoleMole::StaticBoolMaterialModifier _ClipPlane; // 0x1E0
		::MoleMole::StaticBoolMaterialModifier _HardLight; // 0x1F8
		::MoleMole::StaticFloatMaterialModifier _HardLightWidth; // 0x210
		::MoleMole::StaticColorMaterialModifier _HardLightColor; // 0x230
		::MoleMole::StaticBoolMaterialModifier _SoftLight; // 0x268
		::MoleMole::StaticFloatMaterialModifier _SoftLightWidth; // 0x280
		::MoleMole::StaticColorMaterialModifier _SoftLightColor; // 0x2A0
		::MoleMole::StaticBoolMaterialModifier _PlaneClipReverse; // 0x2D8
		::MoleMole::StaticBoolMaterialModifier _ClipPlaneXZ; // 0x2F0
		::MoleMole::StaticBoolMaterialModifier _ReversePlaneXZ; // 0x308
		::MoleMole::StaticFloatMaterialModifier _DitherAlpha2; // 0x320
		::MoleMole::StaticVectorMaterialModifier _FxTransparentValue; // 0x340
		::MoleMole::StaticVectorMaterialModifier _FxUVDitherValue; // 0x368
		::MoleMole::StaticVectorMaterialModifier _DecolorizationContrast; // 0x390
		::MoleMole::StaticBoolMaterialModifier _Glitch; // 0x3B8
		::MoleMole::StaticTextureMaterialModifier _BlockMaskTex; // 0x3D0
		::MoleMole::StaticBoolMaterialModifier _ScreenScale; // 0x400
		::MoleMole::StaticColorMaterialModifier _BlockColorA; // 0x418
		::MoleMole::StaticColorMaterialModifier _BlockColorB; // 0x450
		::MoleMole::StaticColorMaterialModifier _BlockColorC; // 0x488
		::MoleMole::StaticColorMaterialModifier _BlockColorD; // 0x4C0
		::MoleMole::StaticBoolMaterialModifier _Override2Tone; // 0x4F8
		::MoleMole::StaticFloatMaterialModifier _LightSource; // 0x510
		::MoleMole::StaticVectorMaterialModifier _PointPosition; // 0x530
		::MoleMole::StaticFloatMaterialModifier _PointSpace; // 0x558
		::MoleMole::StaticFloatMaterialModifier _ShiftAngle; // 0x578
		::MoleMole::StaticColorMaterialModifier _ColorA; // 0x598
		::MoleMole::StaticColorMaterialModifier _ColorB; // 0x5D0
		::MoleMole::StaticFloatMaterialModifier _LerpPosition; // 0x608
		::MoleMole::StaticFloatMaterialModifier _Softness; // 0x628
		::MoleMole::StaticBoolMaterialModifier _Override2ToneMultiplyAlbedo; // 0x648
		::MoleMole::StaticFloatMaterialModifier _Override2ToneBlendMode; // 0x660
		::MoleMole::StaticBoolMaterialModifier _Override; // 0x680
		::MoleMole::StaticColorMaterialModifier _OverrideColor; // 0x698
		::MoleMole::StaticBoolMaterialModifier _OverrideOutline; // 0x6D0
		::MoleMole::StaticColorMaterialModifier _OverrideOutlineColor; // 0x6E8
		::MoleMole::StaticVectorMaterialModifier _OverrideOutlineSpeed; // 0x720
		::MoleMole::StaticFloatMaterialModifier _OutlineWidth; // 0x748
		::MoleMole::StaticBoolMaterialModifier _OverrideRimGlow; // 0x768
		::MoleMole::StaticFloatMaterialModifier _OverrideRimGlowMode; // 0x780
		::MoleMole::StaticColorMaterialModifier _OverrideRimGlowColor; // 0x7A0
		::MoleMole::StaticTextureMaterialModifier _OverrideRimGlowTexFX; // 0x7D8
		::MoleMole::StaticFloatMaterialModifier _OverrideRimGlowUseUV2; // 0x808
		::MoleMole::StaticVectorMaterialModifier _OverrideRimGlowSpeed; // 0x828
		::MoleMole::StaticFloatMaterialModifier _PropertyTexUseUV2; // 0x850
		::MoleMole::StaticColorMaterialModifier _FresnelColor; // 0x870
		::MoleMole::StaticColorMaterialModifier _DetailColor; // 0x8A8
		::MoleMole::StaticFloatMaterialModifier _FresnelWidth; // 0x8E0
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskUseUV2; // 0x900
		::MoleMole::StaticFloatMaterialModifier _PropertyMask2UseUV2; // 0x920
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskChannel; // 0x940
		::MoleMole::StaticBoolMaterialModifier _ScreenImage; // 0x960
		::MoleMole::StaticBoolMaterialModifier _MultiplySrcColor; // 0x978
		::MoleMole::StaticColorMaterialModifier _ScreenColor; // 0x990
		::MoleMole::StaticTextureMaterialModifier _ScreenTex; // 0x9C8
		::MoleMole::StaticTextureMaterialModifier _ScreenMask; // 0x9F8
		::MoleMole::StaticFloatMaterialModifier _ScreenMaskUV; // 0xA28
		::MoleMole::StaticBoolMaterialModifier _UseInvSecondaryEmissionMask; // 0xA48
		::MoleMole::StaticVectorMaterialModifier _ScreenImageUvMove; // 0xA60
		::MoleMole::StaticFloatMaterialModifier _MatCapNormalVSpeedFx; // 0xA88
		::MoleMole::StaticFloatMaterialModifier _MatCapBlendModeFx; // 0xAA8
		::MoleMole::StaticBoolMaterialModifier _Blink; // 0xAC8
		::MoleMole::StaticFloatMaterialModifier _BlinkFrequency; // 0xAE0
		::MoleMole::StaticVectorMaterialModifier _BlinkOpacity; // 0xB00
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmission; // 0xB28
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmissionUseUV2; // 0xB40
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmissionMultiplyAlbedo; // 0xB58
		::MoleMole::StaticVectorMaterialModifier _ColorOverrideAlbedo; // 0xB70
		::MoleMole::StaticFloatMaterialModifier _MatCapUSpeedFx; // 0xB98
		::MoleMole::StaticColorMaterialModifier _MatCapColorTintFx; // 0xBB8
		::MoleMole::StaticFloatMaterialModifier _SecondaryEmissionChannel; // 0xBF0
		::MoleMole::StaticFloatMaterialModifier _SecondaryEmissionMaskChannel; // 0xC10
		::MoleMole::StaticTextureMaterialModifier _SecondaryEmissionTex; // 0xC30
		::MoleMole::StaticColorMaterialModifier _SecondaryEmissionColor; // 0xC60
		::MoleMole::StaticTextureMaterialModifier _SecondaryEmissionMaskTex; // 0xC98
		::MoleMole::StaticVectorMaterialModifier _SecondaryEmissionTexSpeed; // 0xCC8
		::MoleMole::StaticFloatMaterialModifier _MatCapBumpScaleFx; // 0xCF0
		::MoleMole::StaticFloatMaterialModifier _MatCapFX; // 0xD10
		::MoleMole::StaticBoolMaterialModifier _VertexStretch; // 0xD30
		::MoleMole::StaticTextureMaterialModifier _StretchMask; // 0xD48
		::MoleMole::StaticFloatMaterialModifier _NormalThreshold; // 0xD78
		::MoleMole::StaticFloatMaterialModifier _StretchDistance; // 0xD98
		::MoleMole::StaticVectorMaterialModifier _StretchVector; // 0xDB8
		::MoleMole::StaticFloatMaterialModifier _StretchDirection; // 0xDE0
		::MoleMole::StaticVectorMaterialModifier _StretchToPoint; // 0xE00
		::MoleMole::StaticFloatMaterialModifier _MaskTexFactor; // 0xE28
		::MoleMole::StaticFloatMaterialModifier _StretchPercentage; // 0xE48
		::MoleMole::StaticVectorMaterialModifier _MaskRChannelUVSpeed; // 0xE68
		::MoleMole::StaticFloatMaterialModifier _MatCapColorBurstFx; // 0xE90
		::MoleMole::StaticFloatMaterialModifier _MatCapAlphaBurstFx; // 0xEB0
		::MoleMole::StaticColorMaterialModifier _Color; // 0xED0
		::MoleMole::StaticTextureMaterialModifier _MainTex; // 0xF08
		::MoleMole::StaticTextureMaterialModifier _LightTex; // 0xF38
		::MoleMole::StaticTextureMaterialModifier _OtherDataTex; // 0xF68
		::MoleMole::StaticTextureMaterialModifier _OtherDataTex2; // 0xF98
		::MoleMole::StaticFloatMaterialModifier _MaterialNum; // 0xFC8
		::MoleMole::StaticFloatMaterialModifier _SkinMatId; // 0xFE8
		::MoleMole::StaticColorMaterialModifier _ShallowColor; // 0x1008
		::MoleMole::StaticColorMaterialModifier _ShallowColor2; // 0x1040
		::MoleMole::StaticColorMaterialModifier _ShallowColor3; // 0x1078
		::MoleMole::StaticColorMaterialModifier _ShallowColor4; // 0x10B0
		::MoleMole::StaticColorMaterialModifier _ShallowColor5; // 0x10E8
		::MoleMole::StaticColorMaterialModifier _ShadowColor; // 0x1120
		::MoleMole::StaticColorMaterialModifier _ShadowColor2; // 0x1158
		::MoleMole::StaticColorMaterialModifier _ShadowColor3; // 0x1190
		::MoleMole::StaticColorMaterialModifier _ShadowColor4; // 0x11C8
		::MoleMole::StaticColorMaterialModifier _ShadowColor5; // 0x1200
		::MoleMole::StaticTextureMaterialModifier _EyeColorMap; // 0x1238
		::MoleMole::StaticTextureMaterialModifier _ThreadMap; // 0x1268
		::MoleMole::StaticTextureMaterialModifier _ChannelMixTex; // 0x1298
		::MoleMole::StaticColorMaterialModifier _SpecularColor; // 0x12C8
		::MoleMole::StaticColorMaterialModifier _SpecularColor2; // 0x1300
		::MoleMole::StaticColorMaterialModifier _SpecularColor3; // 0x1338
		::MoleMole::StaticColorMaterialModifier _SpecularColor4; // 0x1370
		::MoleMole::StaticColorMaterialModifier _SpecularColor5; // 0x13A8
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor; // 0x13E0
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor2; // 0x1418
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor3; // 0x1450
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor4; // 0x1488
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor5; // 0x14C0
		::MoleMole::StaticColorMaterialModifier _EmissionColor; // 0x14F8
		::MoleMole::StaticColorMaterialModifier _EmissionColor2; // 0x1530
		::MoleMole::StaticColorMaterialModifier _EmissionColor3; // 0x1568
		::MoleMole::StaticColorMaterialModifier _EmissionColor4; // 0x15A0
		::MoleMole::StaticColorMaterialModifier _EmissionColor5; // 0x15D8
		::MoleMole::StaticColorMaterialModifier _OutlineColor; // 0x1610
		::MoleMole::StaticColorMaterialModifier _OutlineColor2; // 0x1648
		::MoleMole::StaticColorMaterialModifier _OutlineColor3; // 0x1680
		::MoleMole::StaticColorMaterialModifier _OutlineColor4; // 0x16B8
		::MoleMole::StaticColorMaterialModifier _OutlineColor5; // 0x16F0
		::MoleMole::StaticColorMaterialModifier _SilkFresnelColorFront; // 0x1728
		::MoleMole::StaticColorMaterialModifier _SilkFresnelColorEdge; // 0x1760
		::MoleMole::StaticColorMaterialModifier _RChannelColorPrecomputed; // 0x1798
		::MoleMole::StaticColorMaterialModifier _GChannelColorPrecomputed; // 0x17D0
		::MoleMole::StaticColorMaterialModifier _BChannelColorPrecomputed; // 0x1808
		::MoleMole::StaticColorMaterialModifier _AChannelColorPrecomputed; // 0x1840
		::MoleMole::StaticVectorMaterialModifier _SilkPackedParams0; // 0x1878
		::MoleMole::StaticFloatMaterialModifier _RenderType; // 0x18A0
		::MoleMole::StaticFloatMaterialModifier _UseOverlayTex; // 0x18C0
		::MoleMole::StaticFloatMaterialModifier _OverlayTexScale; // 0x18E0
		::MoleMole::StaticFloatMaterialModifier _BumpScale; // 0x1900
		::MoleMole::StaticFloatMaterialModifier _Glossiness; // 0x1920
		::MoleMole::StaticFloatMaterialModifier _Metallic; // 0x1940
		::MoleMole::StaticFloatMaterialModifier _Anisotropy; // 0x1960
		::MoleMole::StaticFloatMaterialModifier _ModelSize; // 0x1980
		::MoleMole::StaticFloatMaterialModifier _ModelSize2; // 0x19A0
		::MoleMole::StaticFloatMaterialModifier _ModelSize3; // 0x19C0
		::MoleMole::StaticFloatMaterialModifier _ModelSize4; // 0x19E0
		::MoleMole::StaticFloatMaterialModifier _ModelSize5; // 0x1A00
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness; // 0x1A20
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness2; // 0x1A40
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness3; // 0x1A60
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness4; // 0x1A80
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness5; // 0x1AA0
		::MoleMole::StaticFloatMaterialModifier _HighlightShape; // 0x1AC0
		::MoleMole::StaticFloatMaterialModifier _HighlightShape2; // 0x1AE0
		::MoleMole::StaticFloatMaterialModifier _HighlightShape3; // 0x1B00
		::MoleMole::StaticFloatMaterialModifier _HighlightShape4; // 0x1B20
		::MoleMole::StaticFloatMaterialModifier _HighlightShape5; // 0x1B40
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular; // 0x1B60
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular2; // 0x1B80
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular3; // 0x1BA0
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular4; // 0x1BC0
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular5; // 0x1BE0
		::MoleMole::StaticFloatMaterialModifier _SpecularRange; // 0x1C00
		::MoleMole::StaticFloatMaterialModifier _SpecularRange2; // 0x1C20
		::MoleMole::StaticFloatMaterialModifier _SpecularRange3; // 0x1C40
		::MoleMole::StaticFloatMaterialModifier _SpecularRange4; // 0x1C60
		::MoleMole::StaticFloatMaterialModifier _SpecularRange5; // 0x1C80
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness; // 0x1CA0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness2; // 0x1CC0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness3; // 0x1CE0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness4; // 0x1D00
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness5; // 0x1D20
		::MoleMole::StaticFloatMaterialModifier _SpecIntensity; // 0x1D40
		::MoleMole::StaticFloatMaterialModifier _Emission; // 0x1D60
		::MoleMole::StaticFloatMaterialModifier _MaxOutlineZOffset; // 0x1D80
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity; // 0x1DA0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity2; // 0x1DC0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity3; // 0x1DE0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity4; // 0x1E00
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity5; // 0x1E20
		::MoleMole::StaticFloatMaterialModifier _UseChannelMixer; // 0x1E40
		::MoleMole::StaticFloatMaterialModifier _ChannelMixerUsingUV4; // 0x1E60
		::MoleMole::StaticFloatMaterialModifier _Cull; // 0x1E80
		::MoleMole::StaticFloatMaterialModifier _DoubleSided; // 0x1EA0
		::MoleMole::StaticFloatMaterialModifier _SymmetryUV; // 0x1EC0
		::MoleMole::StaticBoolMaterialModifier _ShadowColorFadeByZ; // 0x1EE0
		::MoleMole::StaticKeywordFloatMaterialModifier _MatCap; // 0x1EF8
		::MoleMole::StaticTextureMaterialModifier _MatCapTex; // 0x1F10
		::MoleMole::StaticTextureMaterialModifier _MatCapTexFx; // 0x1F40
		::MoleMole::StaticTextureMaterialModifier _MatCapBumpMapFx; // 0x1F70
		::MoleMole::StaticBoolMaterialModifier _UseMatCapMask; // 0x1FA0
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint; // 0x1FB8
		::MoleMole::StaticFloatMaterialModifier _MatCapVSpeedFx; // 0x1FF0
		::MoleMole::StaticFloatMaterialModifier _MatCapNormalUSpeedFx; // 0x2010
		::MoleMole::StaticFloatMaterialModifier _VertexOffset; // 0x2030
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint2; // 0x2050
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint3; // 0x2088
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint4; // 0x20C0
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint5; // 0x20F8
		::MoleMole::StaticVectorMaterialModifier _RefractParam; // 0x2130
		::MoleMole::StaticVectorMaterialModifier _RefractParam2; // 0x2158
		::MoleMole::StaticVectorMaterialModifier _RefractParam3; // 0x2180
		::MoleMole::StaticVectorMaterialModifier _RefractParam4; // 0x21A8
		::MoleMole::StaticVectorMaterialModifier _RefractParam5; // 0x21D0
		::MoleMole::StaticVectorMaterialModifier _MatCapParams; // 0x21F8
		::MoleMole::StaticVectorMaterialModifier _MatCapParams2; // 0x2220
		::MoleMole::StaticVectorMaterialModifier _MatCapParams3; // 0x2248
		::MoleMole::StaticVectorMaterialModifier _MatCapParams4; // 0x2270
		::MoleMole::StaticVectorMaterialModifier _MatCapParams5; // 0x2298
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams; // 0x22C0
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams2; // 0x22E8
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams3; // 0x2310
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams4; // 0x2338
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams5; // 0x2360
		::MoleMole::StaticBoolMaterialModifier _Fresnel; // 0x2388
		::MoleMole::StaticFloatMaterialModifier _FresnelPower; // 0x23A0
		::MoleMole::StaticFloatMaterialModifier _FresnelScale; // 0x23C0
		::MoleMole::StaticFloatMaterialModifier _FresnelOffset; // 0x23E0
		::MoleMole::StaticBoolMaterialModifier _Outline; // 0x2400
		::MoleMole::StaticBoolMaterialModifier _RimGlow; // 0x2418
		::MoleMole::StaticColorMaterialModifier _RimGlowShadowColor; // 0x2430
		::MoleMole::StaticBoolMaterialModifier _AbnormalProperty; // 0x2468
		::MoleMole::StaticFloatMaterialModifier _PropertyType; // 0x2480
		::MoleMole::StaticColorMaterialModifier _PropertyColor; // 0x24A0
		::MoleMole::StaticVectorMaterialModifier _PropertyTexUVSpeed; // 0x24D8
		::MoleMole::StaticFloatMaterialModifier _PropertyTexUVFlipSpeed; // 0x2500
		::MoleMole::StaticVectorMaterialModifier _PropertyMaskUVSpeed; // 0x2520
		::MoleMole::StaticFloatMaterialModifier _PropertyMask2Channel; // 0x2548
		::MoleMole::StaticVectorMaterialModifier _PropertyMask2UVSpeed; // 0x2568
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskUVFlipSpeed; // 0x2590
		::MoleMole::StaticFloatMaterialModifier _PropertyNormalUseUV2; // 0x25B0
		::MoleMole::StaticVectorMaterialModifier _PropertyNormalUVSpeed; // 0x25D0
		::MoleMole::StaticFloatMaterialModifier _FresnelMaskWidth; // 0x25F8
		::MoleMole::StaticFloatMaterialModifier _FresnelFlashing; // 0x2618
		::MoleMole::StaticBoolMaterialModifier _MarkAsVfxMask; // 0x2638
		::MoleMole::StaticFloatMaterialModifier _CurrentColorStagment; // 0x2650
		::MoleMole::StaticBoolMaterialModifier _IgnoreTimeScale; // 0x2670
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyElectro; // 0x2688
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyBurn; // 0x26A0
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyFreeze; // 0x26B8
		::MoleMole::StaticBoolMaterialModifier _GhostMask; // 0x26D0
		::MoleMole::StaticFloatMaterialModifier _MarkAsGhostMask; // 0x26E8
		::MoleMole::StaticBoolMaterialModifier _IgnisFatuusMask; // 0x2708
		::MoleMole::StaticBoolMaterialModifier _MarkAsIgnisFatuusMask; // 0x2720
		::MoleMole::StaticColorMaterialModifier _BaseColor; // 0x2738
		::MoleMole::StaticFloatMaterialModifier _Smoothness; // 0x2770
		::MoleMole::StaticBoolMaterialModifier _SpecialWeaponEmission; // 0x2790
		::MoleMole::StaticTextureMaterialModifier _SpecialWeaponEmissionTex; // 0x27A8
		::MoleMole::StaticColorMaterialModifier _SpecialWeaponEmissionColor; // 0x27D8
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam01; // 0x2810
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam02; // 0x2838
		::MoleMole::StaticColorMaterialModifier _SpecialWeaponEmissionColor2; // 0x2860
		::MoleMole::StaticTextureMaterialModifier _SpecialWeaponEmissionMaskTex; // 0x2898
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponEmissionTexSpeed; // 0x28C8
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam03; // 0x28F0
		::MoleMole::StaticBoolMaterialModifier _NoiseLerp; // 0x2918
		::MoleMole::StaticTextureMaterialModifier _NoiseLerpMask; // 0x2930
		::MoleMole::StaticColorMaterialModifier _NoiseLerpColor; // 0x2960
		::MoleMole::StaticBoolMaterialModifier _NoiseUseUV2; // 0x2998
		::MoleMole::StaticFloatMaterialModifier _NoiseLerpEdgeRange; // 0x29B0
		::MoleMole::StaticFloatMaterialModifier _NoiseLerpValue; // 0x29D0
		::MoleMole::StaticBoolMaterialModifier _UseLerpEdgeColor; // 0x29F0
		::MoleMole::StaticColorMaterialModifier _NoiseLerpEdgeColor; // 0x2A08
		::MoleMole::StaticBoolMaterialModifier _Blush; // 0x2A40
		::MoleMole::StaticTextureMaterialModifier _BlushTexture; // 0x2A58
		::MoleMole::StaticColorMaterialModifier _BlushColor; // 0x2A88
		::MoleMole::StaticBoolMaterialModifier _DisableGlobalEmissionIntensity; // 0x2AC0
		::MoleMole::StaticFloatMaterialModifier _RTXGIEmissionScale; // 0x2AD8
		::MoleMole::StaticFloatMaterialModifier _RTXGIStylizedScale; // 0x2AF8
		::MoleMole::StaticBoolMaterialModifier _AffectByGlobalEmissionColor; // 0x2B18
		::MoleMole::StaticBoolMaterialModifier _SecondaryAlbedo; // 0x2B30
		::MoleMole::StaticColorMaterialModifier _SecondaryAlbedoColor; // 0x2B48
		::MoleMole::StaticTextureMaterialModifier _SecondaryAlbedoTex; // 0x2B80
		::MoleMole::StaticBoolMaterialModifier _SecondaryAlbedoUseUV2; // 0x2BB0
		::MoleMole::StaticFloatMaterialModifier _SecondaryAlbedoChannel; // 0x2BC8
		::MoleMole::StaticBoolMaterialModifier _SecondaryAlbedoUseMask; // 0x2BE8
		::MoleMole::StaticTextureMaterialModifier _SecondaryAlbedoMaskTex; // 0x2C00
		::MoleMole::StaticFloatMaterialModifier _SecondaryAlbedoMaskChannel; // 0x2C30
		::MoleMole::StaticVectorMaterialModifier _SecondaryAlbedoTexSpeed; // 0x2C50
		::MoleMole::StaticBoolMaterialModifier _SecondaryAlbedoUseDistortion; // 0x2C78
		::MoleMole::StaticTextureMaterialModifier _SecondaryAlbedoDistortionTex; // 0x2C90
		::MoleMole::StaticFloatMaterialModifier _SecondaryAlbedoDistortionChannel; // 0x2CC0
		::MoleMole::StaticFloatMaterialModifier _SecondaryAlbedoDistortionStrength; // 0x2CE0
		::MoleMole::StaticVectorMaterialModifier _SecondaryAlbedoDistortionUVSpeed; // 0x2D00
		::Il2CppArray<::System::Int32>* FLKKLHPAMEK; // 0x2D28
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* DGKDDBDPOLD; // 0x2D30
		::System::Boolean OGGJMOPMPIJ; // 0x2D38
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Boolean>* OGHLLKMLCKO; // 0x2D40
		::System::Collections::Generic::List_1<::System::Object*>* GGIKOOBIMBA; // 0x2D48
		::System::Collections::Generic::List_1<::System::Object*>* GDLJFLGIFKP; // 0x2D50
		::Il2CppArray<::System::Int32>* JKDBPEODGEF; // 0x2D58
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* OJCGJOCBLHC; // 0x2D60
		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* MANJOMKNNDO; // 0x2D68
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* JEODIAPNGKF; // 0x2D70
		::Il2CppArray<::Il2CppArray<::Il2CppArray<::System::Int32>*>*>* GOOFLFPLMHC; // 0x2D78
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* JMFEMDBEAII; // 0x2D80
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* MHLDKFNEIMO; // 0x2D88
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* DFOKDHDCNLA; // 0x2D90
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* NACAEAOMFKH; // 0x2D98
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* LKBKNDEPAGD; // 0x2DA0
		::Il2CppArray<::Il2CppArray<::System::Boolean>*>* KHPELDGLMDE; // 0x2DA8
		::Il2CppArray<::System::Boolean>* IEKDNBEJGCP; // 0x2DB0
		::System::Boolean FLJEJIJJCFI; // 0x2DB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR__CCTOR_OFFSET))();
		}

		::System::Void SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void KBHCLELEFHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_KBHCLELEFHC_OFFSET))(this);
		}

		::MOELDGPPDPM* TryCreateMaterialModifierInstance(::LGBIMGEFJCE MDLHJONGOPK)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, MDLHJONGOPK);
		}

		::System::Boolean TryGetMaterialModifier(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean TryGetMaterialModifier_6(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_6_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Void UpdateCommonSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_UPDATECOMMONSWITCH_OFFSET))(this);
		}

		::System::Void InvalidateUpdateSwitchCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_INVALIDATEUPDATESWITCHCACHE_OFFSET))(this);
		}

		::System::Void ForceUpdateFxClip(::System::Boolean OIMCOHCDBBF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEFXCLIP_OFFSET))(this, OIMCOHCDBBF);
		}

		::System::Void ForceUpdateDitherFxClip(::System::Boolean FOGJNGEOGHK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEDITHERFXCLIP_OFFSET))(this, FOGJNGEOGHK);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void RevertShader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_REVERTSHADER_OFFSET))(this);
		}

		static ::System::Void SetFxUnClipKeywords(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDS_OFFSET))(KNNDDLMOKCG);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* SetFxUnClipKeywordsForCutsceneTimeline(::System::String* BKBJEEAOGJN, ::System::Single EGEGIMGMJHN, ::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::System::String*, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDSFORCUTSCENETIMELINE_OFFSET))(BKBJEEAOGJN, EGEGIMGMJHN, KNNDDLMOKCG);
		}

		::NOHOGHGPBAG* SetupAndStartMatPropertiesPattern(::ILLCEFBALCI* ECMMKCJLBMD)
		{
			return ((::NOHOGHGPBAG*(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, ECMMKCJLBMD);
		}

		::System::Void KPPGDLNFJFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_KPPGDLNFJFG_OFFSET))(this);
		}

		::System::Boolean JBOFHNIOAOM(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean MGALINIDAOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_MGALINIDAOP_OFFSET))(this);
		}

		::System::Boolean ELIMFLIOIJN(::LGBIMGEFJCE MIALFKCCCPI, ::MoleMole::StaticKeywordMaterialModifier& KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Void PPLABFGHBDB(::LGBIMGEFJCE BGJOPBCCMOC)
		{
			return ((::System::Void(*)(::PVOID, ::LGBIMGEFJCE))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_PPLABFGHBDB_OFFSET))(this, BGJOPBCCMOC);
		}

		::System::Boolean JBOFHNIOAOM_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Void IAHPJJFHNJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_IAHPJJFHNJP_OFFSET))(this);
		}

		::System::Void JLNLFDMEOJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JLNLFDMEOJN_OFFSET))(this);
		}

		::System::Boolean MADLFKLOANL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_MADLFKLOANL_OFFSET))(this);
		}

		::MOELDGPPDPM* JFCMPELBLIC(::LGBIMGEFJCE MDLHJONGOPK)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JFCMPELBLIC_OFFSET))(this, MDLHJONGOPK);
		}

		::System::Void DJGEOKMPJKN(::MoleMole::MonoRenderHandlerForAvatar_MPHAGFDGGHN* EOFACGIKHEE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandlerForAvatar_MPHAGFDGGHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_DJGEOKMPJKN_OFFSET))(this, EOFACGIKHEE);
		}

		static ::System::Boolean BABNLPODJON(::System::Int32 IIKFMHHAIEP, ::System::UInt32 LBPIPEAKPDG, ::MoleMole::MonoRenderHandlerForAvatar_EJPEPABLFMI* DFMKILICPFB)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32, ::MoleMole::MonoRenderHandlerForAvatar_EJPEPABLFMI*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_BABNLPODJON_OFFSET))(IIKFMHHAIEP, LBPIPEAKPDG, DFMKILICPFB);
		}

		::System::Void HIACNKOHLMC(::System::Int32 KLFCAICBBGH, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* FFOCEAJAOFA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_HIACNKOHLMC_OFFSET))(this, KLFCAICBBGH, FFOCEAJAOFA);
		}

		::System::Void AEGMDJEBCAE(::MoleMole::MonoRenderHandlerForAvatar_MPHAGFDGGHN* EOFACGIKHEE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandlerForAvatar_MPHAGFDGGHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_AEGMDJEBCAE_OFFSET))(this, EOFACGIKHEE);
		}

		static ::System::Boolean OOAGHJOANHF(::MoleMole::MonoRenderHandlerForAvatar_CEPGHNCIBEO& param_0)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoRenderHandlerForAvatar_CEPGHNCIBEO&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_OOAGHJOANHF_OFFSET))(param_0);
		}

		::System::Boolean JBOFHNIOAOM_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Boolean ELIMFLIOIJN_1(::LGBIMGEFJCE MIALFKCCCPI, ::MoleMole::StaticVectorMaterialModifier& KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_1_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void EKHNGFIOPAO(::System::Int32 KLFCAICBBGH, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* FFOCEAJAOFA, ::System::Int32 BKMJKPPJFHI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_EKHNGFIOPAO_OFFSET))(this, KLFCAICBBGH, FFOCEAJAOFA, BKMJKPPJFHI);
		}

		::System::Boolean JBOFHNIOAOM_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Void KGJDFCOLGEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_KGJDFCOLGEA_OFFSET))(this);
		}

		static ::System::Boolean NDNANNPKJGN(::MoleMole::MonoRenderHandlerForAvatar_MPHAGFDGGHN* EOFACGIKHEE)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoRenderHandlerForAvatar_MPHAGFDGGHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_NDNANNPKJGN_OFFSET))(EOFACGIKHEE);
		}

		::System::Void DKBECKCKHPN(::System::Int32 ABHBKFJKINO, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* FFOCEAJAOFA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_DKBECKCKHPN_OFFSET))(this, ABHBKFJKINO, FFOCEAJAOFA);
		}

		::System::Void BKMGJKOEFJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_BKMGJKOEFJB_OFFSET))(this);
		}

		::MOELDGPPDPM* AAJNFGHAEPC(::LGBIMGEFJCE MIALFKCCCPI)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_AAJNFGHAEPC_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void AGLBLOHBKOB(::UnityEngine::Material* AEIHFBNNLBP, ::UnityEngine::Shader* KICIMMINFAF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_AGLBLOHBKOB_OFFSET))(this, AEIHFBNNLBP, KICIMMINFAF);
		}

		::System::Boolean ELIMFLIOIJN_2(::LGBIMGEFJCE MIALFKCCCPI, ::MoleMole::StaticTextureMaterialModifier& KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_2_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KHLOJLPPJCO(::System::Int32 ABHBKFJKINO, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* FFOCEAJAOFA, ::System::Boolean JEHCBLBLEAO, ::System::Int32 DIJLDBDOALB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_KHLOJLPPJCO_OFFSET))(this, ABHBKFJKINO, FFOCEAJAOFA, JEHCBLBLEAO, DIJLDBDOALB);
		}

		::System::Void LLMKDJOCLHE(::System::Collections::Generic::List_1<::System::Object*>* CCKKEOGHPNA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_LLMKDJOCLHE_OFFSET))(this, CCKKEOGHPNA);
		}

		static ::System::Int32 LHNBJPPDMIH(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_LHNBJPPDMIH_OFFSET))(KNNDDLMOKCG);
		}

		static ::System::Boolean LEPDIBGAOPI(::System::Int32 IIKFMHHAIEP, ::System::UInt32 LBPIPEAKPDG)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_LEPDIBGAOPI_OFFSET))(IIKFMHHAIEP, LBPIPEAKPDG);
		}

		static ::System::Boolean FBCCKGGBHLB(::MoleMole::MonoRenderHandlerForAvatar_MPHAGFDGGHN* EOFACGIKHEE)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoRenderHandlerForAvatar_MPHAGFDGGHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_FBCCKGGBHLB_OFFSET))(EOFACGIKHEE);
		}

		::System::Void BOOGNPEFBBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_BOOGNPEFBBO_OFFSET))(this);
		}

		::System::Void COPHHKMMHNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_COPHHKMMHNL_OFFSET))(this);
		}

		::System::Boolean JBOFHNIOAOM_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Void BJGDIMFEKMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_BJGDIMFEKMP_OFFSET))(this);
		}

		::System::Void LFPEBDHKNPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_LFPEBDHKNPB_OFFSET))(this);
		}

		::NOHOGHGPBAG* GJNFMDAGCOI(::ILLCEFBALCI* ECMMKCJLBMD)
		{
			return ((::NOHOGHGPBAG*(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_GJNFMDAGCOI_OFFSET))(this, ECMMKCJLBMD);
		}

		::System::Void FCJNDMNFABO(::System::Int32 KLFCAICBBGH, ::System::Int32 HKBBMLEAOIK, ::System::Int32 CHHGFCLHAAC, ::System::Int32 EKOHIAJDIEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_FCJNDMNFABO_OFFSET))(this, KLFCAICBBGH, HKBBMLEAOIK, CHHGFCLHAAC, EKOHIAJDIEC);
		}

		::MOELDGPPDPM* BBAKPEMFPIB(::LGBIMGEFJCE BGJOPBCCMOC)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_BBAKPEMFPIB_OFFSET))(this, BGJOPBCCMOC);
		}

		::NOHOGHGPBAG* NJEKJBLIHDM(::ILLCEFBALCI* MIALFKCCCPI)
		{
			return ((::NOHOGHGPBAG*(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_NJEKJBLIHDM_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void BPLJJPAKONJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_BPLJJPAKONJ_OFFSET))(this);
		}

		::System::Boolean ELIMFLIOIJN_3(::LGBIMGEFJCE MIALFKCCCPI, ::MoleMole::StaticKeywordFloatMaterialModifier& KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_3_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void IPFJOMIAEKH(::System::Int32 KLFCAICBBGH, ::System::Int32 HKBBMLEAOIK, ::System::Int32 EKOHIAJDIEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_IPFJOMIAEKH_OFFSET))(this, KLFCAICBBGH, HKBBMLEAOIK, EKOHIAJDIEC);
		}

		::System::Boolean ILPNGHNHCNH(::System::Int32 KLFCAICBBGH, ::System::Int32 HKBBMLEAOIK, ::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ILPNGHNHCNH_OFFSET))(this, KLFCAICBBGH, HKBBMLEAOIK, KNNDDLMOKCG);
		}

		::System::Boolean ELIMFLIOIJN_4(::LGBIMGEFJCE MIALFKCCCPI, ::MoleMole::StaticColorMaterialModifier& KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_4_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void COJHGEBOKAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_COJHGEBOKAA_OFFSET))(this);
		}

		::System::Void FGIOFKFJNIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_FGIOFKFJNIH_OFFSET))(this);
		}

		::System::Void JIHBGJJDEPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JIHBGJJDEPL_OFFSET))(this);
		}

		::System::Boolean AHLEBKEIDHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_AHLEBKEIDHN_OFFSET))(this);
		}

		::System::Boolean ELIMFLIOIJN_5(::LGBIMGEFJCE MIALFKCCCPI, ::MoleMole::StaticBoolMaterialModifier& KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_5_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Boolean ELIMFLIOIJN_6(::LGBIMGEFJCE MIALFKCCCPI, ::MoleMole::StaticFloatMaterialModifier& KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ELIMFLIOIJN_6_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void IFLNNBDHOJM(::System::Int32 DDAKJOGIPGI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_IFLNNBDHOJM_OFFSET))(this, DDAKJOGIPGI);
		}

		::System::Void IEOOBLMBPDI(::System::Int32 DDAKJOGIPGI, ::System::Int32 DLJPLHKELCO, ::System::Int32 MDLNMDJMMJP, ::System::Int32 IIKFMHHAIEP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_IEOOBLMBPDI_OFFSET))(this, DDAKJOGIPGI, DLJPLHKELCO, MDLNMDJMMJP, IIKFMHHAIEP);
		}

		::System::Boolean JBOFHNIOAOM_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_JBOFHNIOAOM_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
		}

		::System::Void INEIEDEINFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_INEIEDEINFI_OFFSET))(this);
		}

		::System::Void ADHHFGBHLIP(::System::Int32 KLFCAICBBGH, ::System::Int32 HKBBMLEAOIK, ::UnityEngine::Material* KNNDDLMOKCG, ::System::UInt32 LBPIPEAKPDG, ::Il2CppArray<::System::Int32>* JKBLDFBGBPK, ::System::Int32 EFBHIBOIFIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::UInt32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ADHHFGBHLIP_OFFSET))(this, KLFCAICBBGH, HKBBMLEAOIK, KNNDDLMOKCG, LBPIPEAKPDG, JKBLDFBGBPK, EFBHIBOIFIG);
		}
	};
}
