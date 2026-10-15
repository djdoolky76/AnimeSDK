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

#define RPG_CLIENT_CHARACTEREFFECT_AHKLLHHCFLH_OFFSET UNITYSDK_OFFSET(0xC9C3750)
#define RPG_CLIENT_CHARACTEREFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xC9C71C0)
#define RPG_CLIENT_CHARACTEREFFECT_BCBDKBAKKGF_OFFSET UNITYSDK_OFFSET(0xC9C33C0)
#define RPG_CLIENT_CHARACTEREFFECT_BOJLCKAAIBH_OFFSET UNITYSDK_OFFSET(0xC9C6760)
#define RPG_CLIENT_CHARACTEREFFECT_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9C7800)
#define RPG_CLIENT_CHARACTEREFFECT_COLIJDNEOGA_OFFSET UNITYSDK_OFFSET(0xC9C4EE0)
#define RPG_CLIENT_CHARACTEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xC9C75D0)
#define RPG_CLIENT_CHARACTEREFFECT_DFHFIOLGHCG_OFFSET UNITYSDK_OFFSET(0xC9C5CF0)
#define RPG_CLIENT_CHARACTEREFFECT_DFNADPEPBAC_OFFSET UNITYSDK_OFFSET(0xC9C6830)
#define RPG_CLIENT_CHARACTEREFFECT_EADKKIMJCHP_OFFSET UNITYSDK_OFFSET(0xC9C46C0)
#define RPG_CLIENT_CHARACTEREFFECT_EEOKHKFAODG_OFFSET UNITYSDK_OFFSET(0xC9C3860)
#define RPG_CLIENT_CHARACTEREFFECT_EIFALGNIKMD_OFFSET UNITYSDK_OFFSET(0xC9C6E40)
#define RPG_CLIENT_CHARACTEREFFECT_EPBBJJFLEKH_OFFSET UNITYSDK_OFFSET(0xC9C4CE0)
#define RPG_CLIENT_CHARACTEREFFECT_FBCMOBCPADE_OFFSET UNITYSDK_OFFSET(0xC9C5B80)
#define RPG_CLIENT_CHARACTEREFFECT_GDFDLOIGMJC_OFFSET UNITYSDK_OFFSET(0xC9C1FC0)
#define RPG_CLIENT_CHARACTEREFFECT_GEMLHPHBFAN_OFFSET UNITYSDK_OFFSET(0xC9C2460)
#define RPG_CLIENT_CHARACTEREFFECT_GETHIGHOUTLINERENDERER2MATDIC_OFFSET UNITYSDK_OFFSET(0xC9C1F60)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ALLMESHRENDER_OFFSET UNITYSDK_OFFSET(0xC9C75C0)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ARTMODELLOADED_OFFSET UNITYSDK_OFFSET(0xC9C7510)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xC9C74E0)
#define RPG_CLIENT_CHARACTEREFFECT_GET_FETCHOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC9C7500)
#define RPG_CLIENT_CHARACTEREFFECT_IAJLJEEICOA_OFFSET UNITYSDK_OFFSET(0xC9C2B40)
#define RPG_CLIENT_CHARACTEREFFECT_IAOKJLIPLJP_OFFSET UNITYSDK_OFFSET(0xC9C37C0)
#define RPG_CLIENT_CHARACTEREFFECT_IBIEPFFANMN_OFFSET UNITYSDK_OFFSET(0xC9C3CC0)
#define RPG_CLIENT_CHARACTEREFFECT_INHERITSHOWPARTIDFROMORIGINMATERIAL_OFFSET UNITYSDK_OFFSET(0xC9C4830)
#define RPG_CLIENT_CHARACTEREFFECT_IOKFBKHOGMD_OFFSET UNITYSDK_OFFSET(0xC9C3040)
#define RPG_CLIENT_CHARACTEREFFECT_JAGGEBFPGDK_OFFSET UNITYSDK_OFFSET(0xC9C4AE0)
#define RPG_CLIENT_CHARACTEREFFECT_KDNADLLOHJP_OFFSET UNITYSDK_OFFSET(0xC9C3B70)
#define RPG_CLIENT_CHARACTEREFFECT_LATETICK_OFFSET UNITYSDK_OFFSET(0xC9C6D40)
#define RPG_CLIENT_CHARACTEREFFECT_MBDPMJCLFHO_OFFSET UNITYSDK_OFFSET(0xC9C2FA0)
#define RPG_CLIENT_CHARACTEREFFECT_NILOHOHFLDF_OFFSET UNITYSDK_OFFSET(0xC9C45A0)
#define RPG_CLIENT_CHARACTEREFFECT_NNBHGMOHLME_OFFSET UNITYSDK_OFFSET(0xC9C3E10)
#define RPG_CLIENT_CHARACTEREFFECT_OAKECNENKJB_OFFSET UNITYSDK_OFFSET(0xC9C1E10)
#define RPG_CLIENT_CHARACTEREFFECT_OFGEHAAJJNF_OFFSET UNITYSDK_OFFSET(0xC9C4000)
#define RPG_CLIENT_CHARACTEREFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC9C7350)
#define RPG_CLIENT_CHARACTEREFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC9C72B0)
#define RPG_CLIENT_CHARACTEREFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC9C7210)
#define RPG_CLIENT_CHARACTEREFFECT_PAJOCGNIGAK_OFFSET UNITYSDK_OFFSET(0xC9C62C0)
#define RPG_CLIENT_CHARACTEREFFECT_REFRESHHIGHOUTLINE_OFFSET UNITYSDK_OFFSET(0xC9C23F0)
#define RPG_CLIENT_CHARACTEREFFECT_REFRESHRENDERBATTLESTENCIL_OFFSET UNITYSDK_OFFSET(0xC9C1D50)
#define RPG_CLIENT_CHARACTEREFFECT_SETBATTLECHARASTENCIL_OFFSET UNITYSDK_OFFSET(0xC9C1CD0)
#define RPG_CLIENT_CHARACTEREFFECT_SETENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xC9C1BA0)
#define RPG_CLIENT_CHARACTEREFFECT_SETEXTRATARGETRENDERS_OFFSET UNITYSDK_OFFSET(0xC9C2DD0)
#define RPG_CLIENT_CHARACTEREFFECT_SETSHADERSIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xC9C7080)
#define RPG_CLIENT_CHARACTEREFFECT_SET_ARTMODELLOADED_OFFSET UNITYSDK_OFFSET(0xC9C7520)
#define RPG_CLIENT_CHARACTEREFFECT_SET_ENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xC9C1C60)
#define RPG_CLIENT_CHARACTEREFFECT_SET_FETCHOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC9C74F0)

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
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x6E850);
		}

		static ::System::Int32* StaticGet_DJIFHOFAGCP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15530);
		}

		static ::System::Int32* StaticGet_BHIHGNPBDLP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15534);
		}

		static ::System::Int32* StaticGet_CPFHJMOMBHH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15538);
		}

		static ::System::Int32* StaticGet_MCFKPLLFPBH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x1553C);
		}

		static ::System::Int32* StaticGet_OLEHEABALOG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15540);
		}

		static ::System::Int32* StaticGet_FJKPOAAOPLJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15544);
		}

		static ::System::Int32* StaticGet_KAMKHBFCJCC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15548);
		}

		static ::System::Int32* StaticGet_IICOCBPHNKJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x1554C);
		}

		static ::System::Int32* StaticGet_OEDMGHHOPIA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15550);
		}

		static ::System::Int32* StaticGet_EMPHAJAAJIC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15554);
		}

		static ::System::Int32* StaticGet_ABODEMMFCLG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15558);
		}

		static ::System::Int32* StaticGet_LOMMDDDHCNK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x1555C);
		}

		static ::System::Int32* StaticGet_KDCNLDLPDFF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15560);
		}

		static ::System::Int32* StaticGet_OKIFJGGKIAE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15564);
		}

		static ::System::Int32* StaticGet_JJHLFFJCNBI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15568);
		}

		static ::System::Int32* StaticGet_KEPMGABJHLB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x1556C);
		}

		static ::System::Int32* StaticGet_ODBMPJHLJLB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15570);
		}

		static ::System::Int32* StaticGet_AEMCMCCPEJK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15574);
		}

		static ::System::Int32* StaticGet_AOLJMHILLMB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15578);
		}

		static ::System::Int32* StaticGet_GGIBLJMIGKI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x1557C);
		}

		static ::System::Int32* StaticGet_IBFAMLBFFFF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15580);
		}

		static ::System::Int32* StaticGet_LGOPPJIALAK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15584);
		}

		static ::System::Int32* StaticGet_KGKHKHBCHIN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15588);
		}

		static ::System::Int32* StaticGet_IGCLPGGJINP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x1558C);
		}

		static ::System::Int32* StaticGet_GGHDIOAEOMA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15590);
		}

		static ::System::Int32* StaticGet_GEFCFOEEFCK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15594);
		}

		static ::System::Int32* StaticGet_CIKIGLKBALH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x15598);
		}

		static ::System::Int32* StaticGet_FNGOJAKEOFI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x1559C);
		}

		static ::System::Int32* StaticGet_LDNCEBMLLOC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x155A0);
		}

		static ::System::Int32* StaticGet_NBNHBDLCPHN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x155A4);
		}

		static ::System::Int32* StaticGet_HILEBEIAKKJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterEffect")->GetStaticField(0x155A8);
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
