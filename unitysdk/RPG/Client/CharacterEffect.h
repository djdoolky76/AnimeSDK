#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MeshPartIDMask; }
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace RPG::GameCore { class HighlightOutlineSetting; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTEREFFECT_AHKLLHHCFLH_OFFSET UNITYSDK_OFFSET(0xC9CB4B0)
#define RPG_CLIENT_CHARACTEREFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xC9CEF20)
#define RPG_CLIENT_CHARACTEREFFECT_BCBDKBAKKGF_OFFSET UNITYSDK_OFFSET(0xC9CB120)
#define RPG_CLIENT_CHARACTEREFFECT_BOJLCKAAIBH_OFFSET UNITYSDK_OFFSET(0xC9CE4C0)
#define RPG_CLIENT_CHARACTEREFFECT_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9CF560)
#define RPG_CLIENT_CHARACTEREFFECT_COLIJDNEOGA_OFFSET UNITYSDK_OFFSET(0xC9CCC40)
#define RPG_CLIENT_CHARACTEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xC9CF330)
#define RPG_CLIENT_CHARACTEREFFECT_DFHFIOLGHCG_OFFSET UNITYSDK_OFFSET(0xC9CDA50)
#define RPG_CLIENT_CHARACTEREFFECT_DFNADPEPBAC_OFFSET UNITYSDK_OFFSET(0xC9CE590)
#define RPG_CLIENT_CHARACTEREFFECT_EADKKIMJCHP_OFFSET UNITYSDK_OFFSET(0xC9CC420)
#define RPG_CLIENT_CHARACTEREFFECT_EEOKHKFAODG_OFFSET UNITYSDK_OFFSET(0xC9CB5C0)
#define RPG_CLIENT_CHARACTEREFFECT_EIFALGNIKMD_OFFSET UNITYSDK_OFFSET(0xC9CEBA0)
#define RPG_CLIENT_CHARACTEREFFECT_EPBBJJFLEKH_OFFSET UNITYSDK_OFFSET(0xC9CCA40)
#define RPG_CLIENT_CHARACTEREFFECT_FBCMOBCPADE_OFFSET UNITYSDK_OFFSET(0xC9CD8E0)
#define RPG_CLIENT_CHARACTEREFFECT_GDFDLOIGMJC_OFFSET UNITYSDK_OFFSET(0xC9C9D20)
#define RPG_CLIENT_CHARACTEREFFECT_GEMLHPHBFAN_OFFSET UNITYSDK_OFFSET(0xC9CA1C0)
#define RPG_CLIENT_CHARACTEREFFECT_GETHIGHOUTLINERENDERER2MATDIC_OFFSET UNITYSDK_OFFSET(0xC9C9CC0)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ALLMESHRENDER_OFFSET UNITYSDK_OFFSET(0xC9CF320)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ARTMODELLOADED_OFFSET UNITYSDK_OFFSET(0xC9CF270)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xC9CF240)
#define RPG_CLIENT_CHARACTEREFFECT_GET_FETCHOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC9CF260)
#define RPG_CLIENT_CHARACTEREFFECT_IAJLJEEICOA_OFFSET UNITYSDK_OFFSET(0xC9CA8A0)
#define RPG_CLIENT_CHARACTEREFFECT_IAOKJLIPLJP_OFFSET UNITYSDK_OFFSET(0xC9CB520)
#define RPG_CLIENT_CHARACTEREFFECT_IBIEPFFANMN_OFFSET UNITYSDK_OFFSET(0xC9CBA20)
#define RPG_CLIENT_CHARACTEREFFECT_INHERITSHOWPARTIDFROMORIGINMATERIAL_OFFSET UNITYSDK_OFFSET(0xC9CC590)
#define RPG_CLIENT_CHARACTEREFFECT_IOKFBKHOGMD_OFFSET UNITYSDK_OFFSET(0xC9CADA0)
#define RPG_CLIENT_CHARACTEREFFECT_JAGGEBFPGDK_OFFSET UNITYSDK_OFFSET(0xC9CC840)
#define RPG_CLIENT_CHARACTEREFFECT_KDNADLLOHJP_OFFSET UNITYSDK_OFFSET(0xC9CB8D0)
#define RPG_CLIENT_CHARACTEREFFECT_LATETICK_OFFSET UNITYSDK_OFFSET(0xC9CEAA0)
#define RPG_CLIENT_CHARACTEREFFECT_MBDPMJCLFHO_OFFSET UNITYSDK_OFFSET(0xC9CAD00)
#define RPG_CLIENT_CHARACTEREFFECT_NILOHOHFLDF_OFFSET UNITYSDK_OFFSET(0xC9CC300)
#define RPG_CLIENT_CHARACTEREFFECT_NNBHGMOHLME_OFFSET UNITYSDK_OFFSET(0xC9CBB70)
#define RPG_CLIENT_CHARACTEREFFECT_OAKECNENKJB_OFFSET UNITYSDK_OFFSET(0xC9C9B70)
#define RPG_CLIENT_CHARACTEREFFECT_OFGEHAAJJNF_OFFSET UNITYSDK_OFFSET(0xC9CBD60)
#define RPG_CLIENT_CHARACTEREFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC9CF0B0)
#define RPG_CLIENT_CHARACTEREFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC9CF010)
#define RPG_CLIENT_CHARACTEREFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC9CEF70)
#define RPG_CLIENT_CHARACTEREFFECT_PAJOCGNIGAK_OFFSET UNITYSDK_OFFSET(0xC9CE020)
#define RPG_CLIENT_CHARACTEREFFECT_REFRESHHIGHOUTLINE_OFFSET UNITYSDK_OFFSET(0xC9CA150)
#define RPG_CLIENT_CHARACTEREFFECT_REFRESHRENDERBATTLESTENCIL_OFFSET UNITYSDK_OFFSET(0xC9C9AB0)
#define RPG_CLIENT_CHARACTEREFFECT_SETBATTLECHARASTENCIL_OFFSET UNITYSDK_OFFSET(0xC9C9A30)
#define RPG_CLIENT_CHARACTEREFFECT_SETENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xC9C9900)
#define RPG_CLIENT_CHARACTEREFFECT_SETEXTRATARGETRENDERS_OFFSET UNITYSDK_OFFSET(0xC9CAB30)
#define RPG_CLIENT_CHARACTEREFFECT_SETSHADERSIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xC9CEDE0)
#define RPG_CLIENT_CHARACTEREFFECT_SET_ARTMODELLOADED_OFFSET UNITYSDK_OFFSET(0xC9CF280)
#define RPG_CLIENT_CHARACTEREFFECT_SET_ENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xC9C99C0)
#define RPG_CLIENT_CHARACTEREFFECT_SET_FETCHOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC9CF250)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterEffect_TypeDefinitionIndex = 69758;

	class CharacterEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean NDKFOBBMLFF; // 0x18
		::System::Boolean KeyOutlineColorIsOn; // 0x19
		::System::Byte _padding0[0x2];
		::UnityEngine::Color KeyOutlineInnerColor; // 0x1C
		::UnityEngine::Color KeyOutlineOuterColor; // 0x2C
		::System::Single HighlightPow; // 0x3C
		::System::Single OutlineWidth; // 0x40
		::System::Single OutlineWidth2; // 0x44
		::System::Boolean KeyDisableHighlightOutline; // 0x48
		::System::Byte _padding1[0x7];
		::UnityEngine::Material* HighlightOutlineMaterial; // 0x50
		::System::Boolean _EnableHighlightOutline; // 0x58
		::System::Byte _padding2[0x3];
		::System::Single OutlineEnhance; // 0x5C
		::System::Int32 StencilRef; // 0x60
		::System::Byte _padding3[0x4];
		::System::String* CloseFightOverridePoint; // 0x68
		::System::Func_1<::System::Single>* _FetchOwnerTimeScale_k__BackingField; // 0x70
		::System::Boolean KPEGOFGDPEA; // 0x78
		::System::Byte _padding4[0x7];
		::Il2CppArray<::UnityEngine::Renderer*>* TargetMeshRender; // 0x80
		::Il2CppArray<::RPG::Client::TAUtils::RendererSlots*>* TargetMaterials; // 0x88
		::Il2CppArray<::RPG::Client::MeshPartIDMask*>* TargetMeshIDPart; // 0x90
		::System::Boolean EnableOverlayPassesHalfRes; // 0x98
		::System::Boolean ShaderSimulationSpeedEnable; // 0x99
		::System::Boolean ExcludeModelEffects; // 0x9A
		::System::Byte _padding5[0x5];
		::RPG::GameCore::HighlightOutlineSetting* ENENDCHNJMH; // 0xA0
		::RPG::GameCore::HighlightOutlineSetting* PIOHIMEHHBL; // 0xA8
		::RPG::GameCore::HighlightOutlineSetting* ALAACALOONL; // 0xB0
		::System::Boolean HGNFBNOBHAM; // 0xB8
		::System::Byte _padding6[0x3];
		::UnityEngine::Color FMADLKAPOON; // 0xBC
		::UnityEngine::Color OJJFOBBCFJN; // 0xCC
		::System::Single EJKMOCJFFFI; // 0xDC
		::System::Boolean OENIACJPJEK; // 0xE0
		::System::Byte _padding7[0x7];
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* EFBNLHOIMKC; // 0xE8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Int32>* NHPFEJHGIAC; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* JONHPCNIOMA; // 0xF8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* BNGGJEJOPBK; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* NIOHCEKBNFF; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* FNEIHJDCMMM; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* DKGNDJKOEDD; // 0x118
		::RPG::Client::CharacterShaderPropertyTransition* JBMCENNHMBI; // 0x120
		::System::Single HAIIFHNFANK; // 0x128
		::System::Single KFJHPJGJKOH; // 0x12C
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_ENHACCDNEAG()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x6DC50);
		}

		static ::System::Int32* StaticGet_OEDMGHHOPIA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15390);
		}

		static ::System::Int32* StaticGet_HILEBEIAKKJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15394);
		}

		static ::System::Int32* StaticGet_FJKPOAAOPLJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15398);
		}

		static ::System::Int32* StaticGet_MCFKPLLFPBH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x1539C);
		}

		static ::System::Int32* StaticGet_GEFCFOEEFCK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153A0);
		}

		static ::System::Int32* StaticGet_LGOPPJIALAK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153A4);
		}

		static ::System::Int32* StaticGet_AOLJMHILLMB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153A8);
		}

		static ::System::Int32* StaticGet_IBFAMLBFFFF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153AC);
		}

		static ::System::Int32* StaticGet_KGKHKHBCHIN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153B0);
		}

		static ::System::Int32* StaticGet_CPFHJMOMBHH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153B4);
		}

		static ::System::Int32* StaticGet_JJHLFFJCNBI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153B8);
		}

		static ::System::Int32* StaticGet_BHIHGNPBDLP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153BC);
		}

		static ::System::Int32* StaticGet_EMPHAJAAJIC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153C0);
		}

		static ::System::Int32* StaticGet_NBNHBDLCPHN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153C4);
		}

		static ::System::Int32* StaticGet_CIKIGLKBALH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153C8);
		}

		static ::System::Int32* StaticGet_LDNCEBMLLOC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153CC);
		}

		static ::System::Int32* StaticGet_IICOCBPHNKJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153D0);
		}

		static ::System::Int32* StaticGet_IGCLPGGJINP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153D4);
		}

		static ::System::Int32* StaticGet_KEPMGABJHLB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153D8);
		}

		static ::System::Int32* StaticGet_OKIFJGGKIAE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153DC);
		}

		static ::System::Int32* StaticGet_KDCNLDLPDFF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153E0);
		}

		static ::System::Int32* StaticGet_FNGOJAKEOFI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153E4);
		}

		static ::System::Int32* StaticGet_ODBMPJHLJLB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153E8);
		}

		static ::System::Int32* StaticGet_KAMKHBFCJCC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153EC);
		}

		static ::System::Int32* StaticGet_GGIBLJMIGKI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153F0);
		}

		static ::System::Int32* StaticGet_GGHDIOAEOMA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153F4);
		}

		static ::System::Int32* StaticGet_OLEHEABALOG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153F8);
		}

		static ::System::Int32* StaticGet_DJIFHOFAGCP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x153FC);
		}

		static ::System::Int32* StaticGet_ABODEMMFCLG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15400);
		}

		static ::System::Int32* StaticGet_AEMCMCCPEJK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15404);
		}

		static ::System::Int32* StaticGet_LOMMDDDHCNK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15408);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_CCTOR_OFFSET))();
		}

		::System::Void SetEnableHighlightOutline(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETENABLEHIGHLIGHTOUTLINE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBattleCharaStencil(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETBATTLECHARASTENCIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* GetHighOutlineRenderer2MatDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GETHIGHOUTLINERENDERER2MATDIC_OFFSET))(this);
		}

		::System::Void RefreshHighOutline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_REFRESHHIGHOUTLINE_OFFSET))(this, a1);
		}

		::System::Void SetExtraTargetRenders(::System::Boolean a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETEXTRATARGETRENDERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshRenderBattleStencil()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_REFRESHRENDERBATTLESTENCIL_OFFSET))(this);
		}

		::System::Boolean IAOKJLIPLJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_IAOKJLIPLJP_OFFSET))(this);
		}

		::System::Void EEOKHKFAODG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_EEOKHKFAODG_OFFSET))(this);
		}

		::System::Void KDNADLLOHJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_KDNADLLOHJP_OFFSET))(this);
		}

		::System::Void OAKECNENKJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_OAKECNENKJB_OFFSET))(this);
		}

		::System::Void IAJLJEEICOA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_IAJLJEEICOA_OFFSET))(this, a1);
		}

		::System::Void InheritShowPartIDFromOriginMaterial(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_INHERITSHOWPARTIDFROMORIGINMATERIAL_OFFSET))(this, a1);
		}

		::System::Void OFGEHAAJJNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_OFGEHAAJJNF_OFFSET))(this);
		}

		::System::Void NILOHOHFLDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_NILOHOHFLDF_OFFSET))(this);
		}

		::System::Void EPBBJJFLEKH(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_EPBBJJFLEKH_OFFSET))(this, a1);
		}

		::System::Void COLIJDNEOGA(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_COLIJDNEOGA_OFFSET))(this, a1, a2);
		}

		::System::Void JAGGEBFPGDK(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_JAGGEBFPGDK_OFFSET))(this, a1, a2);
		}

		::System::Void GDFDLOIGMJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GDFDLOIGMJC_OFFSET))(this);
		}

		::System::Void FBCMOBCPADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_FBCMOBCPADE_OFFSET))(this);
		}

		::System::Void IBIEPFFANMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_IBIEPFFANMN_OFFSET))(this);
		}

		::System::Void DFHFIOLGHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_DFHFIOLGHCG_OFFSET))(this);
		}

		::System::Void GEMLHPHBFAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GEMLHPHBFAN_OFFSET))(this);
		}

		::System::Void PAJOCGNIGAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_PAJOCGNIGAK_OFFSET))(this);
		}

		::System::Void BOJLCKAAIBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_BOJLCKAAIBH_OFFSET))(this);
		}

		::System::Void MBDPMJCLFHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_MBDPMJCLFHO_OFFSET))(this);
		}

		::System::Void IOKFBKHOGMD(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_IOKFBKHOGMD_OFFSET))(this, a1);
		}

		::System::Void BCBDKBAKKGF(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_BCBDKBAKKGF_OFFSET))(this, a1);
		}

		::System::Void DFNADPEPBAC(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_DFNADPEPBAC_OFFSET))(this, a1);
		}

		::System::Void NNBHGMOHLME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_NNBHGMOHLME_OFFSET))(this);
		}

		::System::Void EADKKIMJCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_EADKKIMJCHP_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_LATETICK_OFFSET))(this, a1);
		}

		::System::Void SetShaderSimulationSpeedEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETSHADERSIMULATIONSPEEDENABLE_OFFSET))(this, a1);
		}

		::System::Void EIFALGNIKMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_EIFALGNIKMD_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_EnableHighlightOutline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ENABLEHIGHLIGHTOUTLINE_OFFSET))(this);
		}

		::System::Void set_EnableHighlightOutline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_ENABLEHIGHLIGHTOUTLINE_OFFSET))(this, a1);
		}

		::System::Void set_FetchOwnerTimeScale(::System::Func_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_FETCHOWNERTIMESCALE_OFFSET))(this, a1);
		}

		::System::Func_1<::System::Single>* get_FetchOwnerTimeScale()
		{
			return ((::System::Func_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_FETCHOWNERTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_ArtModelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ARTMODELLOADED_OFFSET))(this);
		}

		::System::Void set_ArtModelLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_ARTMODELLOADED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* get_AllMeshRender()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ALLMESHRENDER_OFFSET))(this);
		}

		::RPG::Client::CharacterShaderPropertyTransition* AHKLLHHCFLH()
		{
			return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_AHKLLHHCFLH_OFFSET))(this);
		}

	};
}
