#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_RenderHideType.h"
#include "unitysdk/RPG/Client/ReplaceMaterialsBlock.h"
class DEBEAKKOHLN;
class EONKJJEBGLN;
namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginCharaEffectBase; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::GameCore { class MaterialPropertyAdaptionConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_AAOIBCOKCOH_OFFSET UNITYSDK_OFFSET(0xD7CC680)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ACMELHOEDLK_OFFSET UNITYSDK_OFFSET(0xD7CBA50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_AEGKOKNKFIL_OFFSET UNITYSDK_OFFSET(0xD7CDCB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_BFADMDAGNKA_1_OFFSET UNITYSDK_OFFSET(0xD7CF950)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_BFADMDAGNKA_OFFSET UNITYSDK_OFFSET(0xD7CFAA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_BGNDPLFAFJN_OFFSET UNITYSDK_OFFSET(0xD7CBDB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CGNKNOELCLL_OFFSET UNITYSDK_OFFSET(0xD7CDAA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHHAIDPNOGC_OFFSET UNITYSDK_OFFSET(0xD7CADE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CMNALMLEKCO_OFFSET UNITYSDK_OFFSET(0xD7C8F40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COLIJDNEOGA_OFFSET UNITYSDK_OFFSET(0xD7CCF80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COMPAREPRIORITY_OFFSET UNITYSDK_OFFSET(0xD7C7150)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COPYORIGINMATERIALCHARACTERCOMMONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xD7C7210)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7D0E40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DAHJCCNCFDJ_OFFSET UNITYSDK_OFFSET(0xD7CBC20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7CB890)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DGDAKFNFJPD_OFFSET UNITYSDK_OFFSET(0xD7CFD00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C85A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DKLKBPEJGEH_OFFSET UNITYSDK_OFFSET(0xD7C6530)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_EBAKJAFFDDJ_OFFSET UNITYSDK_OFFSET(0xD7CC610)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_EFHLPOOKOBO_OFFSET UNITYSDK_OFFSET(0xD7CAB30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ENDOCLPNACK_OFFSET UNITYSDK_OFFSET(0xD7C8D10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7CB8D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FCOAFAADBPJ_OFFSET UNITYSDK_OFFSET(0xD7C7940)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FEPAIFMIBJB_OFFSET UNITYSDK_OFFSET(0xD7CAD20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FKLHIJBODPA_OFFSET UNITYSDK_OFFSET(0xD7C7480)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FLEPDBHPFGF_OFFSET UNITYSDK_OFFSET(0xD7CB590)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FMBLKHCCCMJ_OFFSET UNITYSDK_OFFSET(0xD7CA960)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FNKDGAJLFDC_OFFSET UNITYSDK_OFFSET(0xD7D0020)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FPMKOJBJMMC_OFFSET UNITYSDK_OFFSET(0xD7C6710)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GACIGIHLNEB_OFFSET UNITYSDK_OFFSET(0xD7CBF50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GCIEOFBJLON_OFFSET UNITYSDK_OFFSET(0xD7CE9A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETINSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0xD7C68F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETRENDERINSTANCEDMATERIALMAP_OFFSET UNITYSDK_OFFSET(0xD7C6B50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETTARGETRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xD7C6B00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISAPPLY_OFFSET UNITYSDK_OFFSET(0xD7CC5F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISEDITORMODE_OFFSET UNITYSDK_OFFSET(0xD7C8580)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7D0DC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISTARGETPARTMONSTER_OFFSET UNITYSDK_OFFSET(0xD7D0DA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_PARENTPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7D0DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISAPPLY_OFFSET UNITYSDK_OFFSET(0xD7D0E00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISRESET_OFFSET UNITYSDK_OFFSET(0xD7D0E20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GFDPNPMAMHK_OFFSET UNITYSDK_OFFSET(0xD7CEDA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GHDEAPHIFJA_OFFSET UNITYSDK_OFFSET(0xD7D0AE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GMPKHIDILHB_OFFSET UNITYSDK_OFFSET(0xD7CF0C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GNBOKOEKADI_OFFSET UNITYSDK_OFFSET(0xD7CB760)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GPOOBEJLGOG_OFFSET UNITYSDK_OFFSET(0xD7CC7A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HEPJMBHOKEN_OFFSET UNITYSDK_OFFSET(0xD7CF570)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HGEBFMNMALN_OFFSET UNITYSDK_OFFSET(0xD7C96F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HHKCHACPBHL_OFFSET UNITYSDK_OFFSET(0xD7CE0D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD7C8540)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_IJFDCJDBDHF_OFFSET UNITYSDK_OFFSET(0xD7C7C50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ILDFEAIKNOH_OFFSET UNITYSDK_OFFSET(0xD7C8490)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISCONFLICT_OFFSET UNITYSDK_OFFSET(0xD7C6C80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISTARGETGROUPLEADER_OFFSET UNITYSDK_OFFSET(0xD7C6BA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_JBCHJKINGOH_OFFSET UNITYSDK_OFFSET(0xD7CEC30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_JHMJNHNEJIM_OFFSET UNITYSDK_OFFSET(0xD7C9410)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_KCKDJNGAMGO_OFFSET UNITYSDK_OFFSET(0xD7CF4B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_KEKMBMBBGLL_OFFSET UNITYSDK_OFFSET(0xD7D0C60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_KINONEFAAJF_OFFSET UNITYSDK_OFFSET(0xD7CDFF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_KLMAGGKIGAK_OFFSET UNITYSDK_OFFSET(0xD7CFBC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_LAFCFBCHCPE_OFFSET UNITYSDK_OFFSET(0xD7CE330)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_LDLJBJAPEOM_OFFSET UNITYSDK_OFFSET(0xD7CE590)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_LNCEDOAFDEF_OFFSET UNITYSDK_OFFSET(0xD7CDBD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_MCHAFGDAEID_OFFSET UNITYSDK_OFFSET(0xD7CC2B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_MFAFOHAPGEP_OFFSET UNITYSDK_OFFSET(0xD7D0CE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_NBBDBFMABDM_OFFSET UNITYSDK_OFFSET(0xD7CBCE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_NCHLOKGBPIF_OFFSET UNITYSDK_OFFSET(0xD7CF600)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_OLJBINKMGMJ_OFFSET UNITYSDK_OFFSET(0xD7C7AF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_OMGBFKFEEFL_OFFSET UNITYSDK_OFFSET(0xD7D08A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_PDPHFAMHDGI_OFFSET UNITYSDK_OFFSET(0xD7C8B90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_REMOVESUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C7830)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C7EC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETCHARAEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0xD7A41D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETOTHEREFFECTTARGET_OFFSET UNITYSDK_OFFSET(0xD7C79E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C77E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7D0DD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISTARGETPARTMONSTER_OFFSET UNITYSDK_OFFSET(0xD7D0DB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_PARENTPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7D0DF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISAPPLY_OFFSET UNITYSDK_OFFSET(0xD7D0E10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISRESET_OFFSET UNITYSDK_OFFSET(0xD7D0E30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_TRYCREATESUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7B9370)

namespace RPG::Client
{
	class MonoEffectPluginCharaEffectBase : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Comparison_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>* MFPGLCINIBC; // 0x28
		::System::Boolean _IsTargetPartMonster_k__BackingField; // 0x30
		::System::Boolean _IsSubPlugin_k__BackingField; // 0x31
		::System::Byte _padding0[0x6];
		::RPG::Client::MonoEffectPluginCharaEffectBase* _ParentPlugin_k__BackingField; // 0x38
		::UnityEngine::GameObject* Target; // 0x40
		::System::Boolean UseOfflineTarget; // 0x48
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::String*>* TargetRenderers; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* TargetAttachPointNames; // 0x58
		::Il2CppArray<::System::Object*>* TargetRenderMaterials; // 0x60
		::System::String* NPCReplaceMatKey; // 0x68
		::System::Boolean ClearTargetHiddenState; // 0x70
		::System::Boolean RegisterToTargetMatrerials; // 0x71
		::System::Boolean NeedAdditionalDepth; // 0x72
		::System::Byte _padding2[0x1];
		::System::UInt32 AdditionalRenderingLayerMasks; // 0x74
		::System::Boolean ExcludeArtModelEffects; // 0x78
		::System::Boolean HideArtModelEffects; // 0x79
		::System::Byte _padding3[0x2];
		::RPG::Client::MonoEffectPluginCharaEffectBase_RenderHideType HideTargetRendersType; // 0x7C
		::Il2CppArray<::System::Object*>* PartMonsterMaterialBlockArr; // 0x80
		::Il2CppArray<::System::Object*>* TargetScaleMaterialBlockArr; // 0x88
		::System::Boolean IsInheritAllMaterialProperties; // 0x90
		::System::Boolean IsInheritCharacterStencilSettings; // 0x91
		::System::Boolean IsInheritCharacterCommonProperties; // 0x92
		::System::Byte _padding4[0x5];
		::Il2CppArray<::System::Object*>* ToInheritMaterialPropertyArray; // 0x98
		::System::Int32 Priority; // 0xA0
		::System::Int32 OverlayMutexID; // 0xA4
		::System::Boolean IsKeyHideTargetRendersOn; // 0xA8
		::System::Boolean HideTargetRenders; // 0xA9
		::System::Boolean IsResetMaterialProperties; // 0xAA
		::System::Boolean MuteCharaEff; // 0xAB
		::System::Byte _padding5[0x4];
		::EONKJJEBGLN* CDLAJACJFDI; // 0xB0
		::System::Boolean __IsApply_k__BackingField; // 0xB8
		::System::Boolean __IsReset_k__BackingField; // 0xB9
		::System::Byte _padding6[0x6];
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0xC0
		::Il2CppArray<::UnityEngine::Renderer*>* LBCGKJDNKGK; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* NJPGLFMMOKC; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AGNEFMNHHOL; // 0xD8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* GMGJKKLOAPE; // 0xE0
		::Il2CppArray<::System::Boolean>* KFDMGAKLDPO; // 0xE8
		::Il2CppArray<::System::Boolean>* OPBMOLMPJJM; // 0xF0
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* HFCELNDHIIH; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* DEAOIJPACIB; // 0x100
		::Il2CppArray<::RPG::GameCore::MaterialPropertyAdaptionConfig*>* OFAFKDKDKJD; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* PMAFPFMBANE; // 0x110
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* BLKCHHBFAPO; // 0x118
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* GHKBCPCLHOL; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* CMMHOOBHCOJ; // 0x128
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* KOJAKKFLPMG; // 0x130
		::System::Collections::Generic::List_1<::System::UInt32>* HCBLJGLEMJG; // 0x138
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>* DCCHPICCKPB; // 0x140
		::System::Boolean DGKMCKHNEHF; // 0x148
		::System::Byte _padding7[0x7];
		::RPG::Client::MonoEffect* AKBDIDBMBLK; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CTOR_OFFSET))(this);
		}

		::System::Void SetCharaEffectEnable(::System::Boolean a1, ::RPG::Client::MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETCHARAEFFECTENABLE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetInstanceMaterials(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETINSTANCEMATERIALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetTargetRendererList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETTARGETRENDERERLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* GetRenderInstancedMaterialMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETRENDERINSTANCEDMATERIALMAP_OFFSET))(this);
		}

		::System::Boolean IsTargetGroupLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISTARGETGROUPLEADER_OFFSET))(this);
		}

		static ::System::Boolean IsConflict(::RPG::Client::MonoEffectPluginCharaEffectBase* a1, ::RPG::Client::MonoEffectPluginCharaEffectBase* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MonoEffectPluginCharaEffectBase*, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISCONFLICT_OFFSET))(a1, a2);
		}

		static ::System::Int32 ComparePriority(::RPG::Client::MonoEffectPluginCharaEffectBase* a1, ::RPG::Client::MonoEffectPluginCharaEffectBase* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::MonoEffectPluginCharaEffectBase*, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COMPAREPRIORITY_OFFSET))(a1, a2);
		}

		::System::Void CopyOriginMaterialCharacterCommonProperties(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COPYORIGINMATERIALCHARACTERCOMMONPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void SetSubPlugIn(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETSUBPLUGIN_OFFSET))(this, a1);
		}

		::System::Void RemoveSubPlugIn(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_REMOVESUBPLUGIN_OFFSET))(this, a1);
		}

		::System::Void SetOtherEffectTarget(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETOTHEREFFECTTARGET_OFFSET))(this, a1);
		}

		::System::Void TryCreateSubPlugin(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_TRYCREATESUBPLUGIN_OFFSET))(this, a1);
		}

		::System::Void ILDFEAIKNOH(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ILDFEAIKNOH_OFFSET))(this, a1);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void FMBLKHCCCMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FMBLKHCCCMJ_OFFSET))(this, a1);
		}

		::System::Void DKLKBPEJGEH(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DKLKBPEJGEH_OFFSET))(this, a1, a2);
		}

		::System::Void ACMELHOEDLK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ACMELHOEDLK_OFFSET))(this, a1);
		}

		::System::Void FPMKOJBJMMC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FPMKOJBJMMC_OFFSET))(this, a1, a2);
		}

		::System::Void FLEPDBHPFGF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FLEPDBHPFGF_OFFSET))(this, a1);
		}

		::System::Boolean ENDOCLPNACK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ENDOCLPNACK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* BGNDPLFAFJN(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_BGNDPLFAFJN_OFFSET))(this, a1);
		}

		::System::Void GACIGIHLNEB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GACIGIHLNEB_OFFSET))(this, a1);
		}

		::System::Void CHHAIDPNOGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHHAIDPNOGC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* MCHAFGDAEID()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_MCHAFGDAEID_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* HGEBFMNMALN()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HGEBFMNMALN_OFFSET))(this);
		}

		::System::Void AAOIBCOKCOH(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_AAOIBCOKCOH_OFFSET))(this, a1);
		}

		::System::Void DAHJCCNCFDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DAHJCCNCFDJ_OFFSET))(this, a1);
		}

		::System::Void GNBOKOEKADI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GNBOKOEKADI_OFFSET))(this);
		}

		::System::Void GPOOBEJLGOG(::UnityEngine::Material* a1, ::Il2CppArray<::RPG::Client::ReplaceMaterialsBlock>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::RPG::Client::ReplaceMaterialsBlock>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GPOOBEJLGOG_OFFSET))(this, a1, a2);
		}

		::System::Void CGNKNOELCLL(::UnityEngine::Material* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CGNKNOELCLL_OFFSET))(this, a1, a2);
		}

		::System::Void JHMJNHNEJIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_JHMJNHNEJIM_OFFSET))(this);
		}

		::System::Void AEGKOKNKFIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_AEGKOKNKFIL_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* HHKCHACPBHL(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HHKCHACPBHL_OFFSET))(this, a1);
		}

		::System::Void LAFCFBCHCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_LAFCFBCHCPE_OFFSET))(this);
		}

		::System::Void KINONEFAAJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_KINONEFAAJF_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* LDLJBJAPEOM(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_LDLJBJAPEOM_OFFSET))(this, a1);
		}

		::System::Void GCIEOFBJLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GCIEOFBJLON_OFFSET))(this);
		}

		::System::Void JBCHJKINGOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_JBCHJKINGOH_OFFSET))(this);
		}

		::System::Void FCOAFAADBPJ(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FCOAFAADBPJ_OFFSET))(this, a1);
		}

		::System::Void GFDPNPMAMHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GFDPNPMAMHK_OFFSET))(this);
		}

		::System::Void COLIJDNEOGA(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COLIJDNEOGA_OFFSET))(this, a1, a2);
		}

		::System::Void FKLHIJBODPA(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FKLHIJBODPA_OFFSET))(this, a1, a2);
		}

		::System::Void GMPKHIDILHB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GMPKHIDILHB_OFFSET))(this, a1);
		}

		::System::Void LNCEDOAFDEF(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_LNCEDOAFDEF_OFFSET))(this, a1, a2);
		}

		::System::Void KCKDJNGAMGO(::RPG::Client::CommonEffectMaterialBlockOne* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CommonEffectMaterialBlockOne*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_KCKDJNGAMGO_OFFSET))(this, a1);
		}

		::System::Void HEPJMBHOKEN(::System::Collections::Generic::IEnumerable_1<::RPG::Client::CommonEffectMaterialBlockOne*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::CommonEffectMaterialBlockOne*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_HEPJMBHOKEN_OFFSET))(this, a1);
		}

		::System::Void NCHLOKGBPIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_NCHLOKGBPIF_OFFSET))(this, a1);
		}

		::System::Void DGDAKFNFJPD(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DGDAKFNFJPD_OFFSET))(this, a1, a2);
		}

		::System::Void FNKDGAJLFDC(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FNKDGAJLFDC_OFFSET))(this, a1, a2);
		}

		::System::Void BFADMDAGNKA(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_BFADMDAGNKA_OFFSET))(this, a1);
		}

		::System::Void BFADMDAGNKA_1(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::MaterialPropertyBlock* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_BFADMDAGNKA_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KLMAGGKIGAK(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_KLMAGGKIGAK_OFFSET))(this, a1);
		}

		::System::Void OMGBFKFEEFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_OMGBFKFEEFL_OFFSET))(this, a1);
		}

		::System::Void GHDEAPHIFJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GHDEAPHIFJA_OFFSET))(this, a1);
		}

		::System::Void PDPHFAMHDGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_PDPHFAMHDGI_OFFSET))(this);
		}

		::System::Boolean OLJBINKMGMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_OLJBINKMGMJ_OFFSET))(this);
		}

		::System::Void EFHLPOOKOBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_EFHLPOOKOBO_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginCharaEffectBase* IJFDCJDBDHF(::RPG::Client::MonoEffect* a1)
		{
			return ((::RPG::Client::MonoEffectPluginCharaEffectBase*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_IJFDCJDBDHF_OFFSET))(this, a1);
		}

		::System::Void MFAFOHAPGEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_MFAFOHAPGEP_OFFSET))(this);
		}

		::System::Void FEPAIFMIBJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_FEPAIFMIBJB_OFFSET))(this);
		}

		::System::Void NBBDBFMABDM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_NBBDBFMABDM_OFFSET))(this, a1);
		}

		::System::Void CMNALMLEKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CMNALMLEKCO_OFFSET))(this);
		}

		::System::Boolean EBAKJAFFDDJ(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_EBAKJAFFDDJ_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEditorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISEDITORMODE_OFFSET))(this);
		}

		::System::Boolean get_IsApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISAPPLY_OFFSET))(this);
		}

		::System::Boolean get_IsTargetPartMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISTARGETPARTMONSTER_OFFSET))(this);
		}

		::System::Void set_IsTargetPartMonster(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISTARGETPARTMONSTER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSubPlugin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISSUBPLUGIN_OFFSET))(this);
		}

		::System::Void set_IsSubPlugin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISSUBPLUGIN_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginCharaEffectBase* get_ParentPlugin()
		{
			return ((::RPG::Client::MonoEffectPluginCharaEffectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_PARENTPLUGIN_OFFSET))(this);
		}

		::System::Void set_ParentPlugin(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_PARENTPLUGIN_OFFSET))(this, a1);
		}

		::System::Boolean get__IsApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISAPPLY_OFFSET))(this);
		}

		::System::Void set__IsApply(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISAPPLY_OFFSET))(this, a1);
		}

		::System::Boolean get__IsReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISRESET_OFFSET))(this);
		}

		::System::Void set__IsReset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISRESET_OFFSET))(this, a1);
		}

		::System::Boolean KEKMBMBBGLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_KEKMBMBBGLL_OFFSET))(this);
		}

	};
}
