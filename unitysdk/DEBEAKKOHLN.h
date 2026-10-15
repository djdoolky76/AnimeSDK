#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialProppertySetWay.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
class DEBEAKKOHLN;
class EJFKDHCJNBD;
class PDJCPAFHFIN;
namespace RPG::Client { class RendererMaterialCache; }
namespace RPG::GameCore { class ShaderPropertyConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define DEBEAKKOHLN_ACLFABNHBDM_OFFSET UNITYSDK_OFFSET(0xE4F8780)
#define DEBEAKKOHLN_AGNHGCMDBLJ_OFFSET UNITYSDK_OFFSET(0xE4FE9C0)
#define DEBEAKKOHLN_AIJBNFONPAD_OFFSET UNITYSDK_OFFSET(0xE4FE860)
#define DEBEAKKOHLN_AJOFOKIKOEP_OFFSET UNITYSDK_OFFSET(0xE4F9C80)
#define DEBEAKKOHLN_AOJJNFDCOKP_OFFSET UNITYSDK_OFFSET(0xE4FC1C0)
#define DEBEAKKOHLN_AOLANPGGAHE_OFFSET UNITYSDK_OFFSET(0xE4F8F70)
#define DEBEAKKOHLN_BBNOFOKNNGL_OFFSET UNITYSDK_OFFSET(0xE4F6C10)
#define DEBEAKKOHLN_BDIKCAAPLPN_OFFSET UNITYSDK_OFFSET(0xE4FC860)
#define DEBEAKKOHLN_BGHKKOMLGMC_OFFSET UNITYSDK_OFFSET(0xE4FE2B0)
#define DEBEAKKOHLN_BHMNDNIPJDF_OFFSET UNITYSDK_OFFSET(0xE4F9630)
#define DEBEAKKOHLN_BPADOOEABAM_OFFSET UNITYSDK_OFFSET(0xE4FDEE0)
#define DEBEAKKOHLN_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4FEBB0)
#define DEBEAKKOHLN_CEBACNPECOD_OFFSET UNITYSDK_OFFSET(0xE4FD7A0)
#define DEBEAKKOHLN_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4FD900)
#define DEBEAKKOHLN_CLJJOCKHNDF_OFFSET UNITYSDK_OFFSET(0xE4FE220)
#define DEBEAKKOHLN_CTOR_OFFSET UNITYSDK_OFFSET(0xE4FE9D0)
#define DEBEAKKOHLN_DDBAFKONNJM_OFFSET UNITYSDK_OFFSET(0xE4FE880)
#define DEBEAKKOHLN_DLGFFJOFKHI_OFFSET UNITYSDK_OFFSET(0xE4FE980)
#define DEBEAKKOHLN_EEBPCDFLCCK_OFFSET UNITYSDK_OFFSET(0xE4FE270)
#define DEBEAKKOHLN_EEPIFCIMBEM_OFFSET UNITYSDK_OFFSET(0xE4FD550)
#define DEBEAKKOHLN_EIELIHAPGJP_OFFSET UNITYSDK_OFFSET(0xE4FC8B0)
#define DEBEAKKOHLN_EJBOOLDDMHI_OFFSET UNITYSDK_OFFSET(0xE4F9A80)
#define DEBEAKKOHLN_FJACCPKMCGA_OFFSET UNITYSDK_OFFSET(0xE4F9690)
#define DEBEAKKOHLN_GBJKNODIFFC_OFFSET UNITYSDK_OFFSET(0xE4FCD60)
#define DEBEAKKOHLN_GCMIKABICCM_OFFSET UNITYSDK_OFFSET(0xE4FE480)
#define DEBEAKKOHLN_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0xE4F4EB0)
#define DEBEAKKOHLN_GIGPCJHDLIB_OFFSET UNITYSDK_OFFSET(0xE4FDF80)
#define DEBEAKKOHLN_HCCPAFCKNFO_OFFSET UNITYSDK_OFFSET(0xE4F4320)
#define DEBEAKKOHLN_HCEAMOCEMBJ_OFFSET UNITYSDK_OFFSET(0xE4FE900)
#define DEBEAKKOHLN_HOGOBFFHMPO_OFFSET UNITYSDK_OFFSET(0xE4FBF90)
#define DEBEAKKOHLN_ICPGEIKNDBP_OFFSET UNITYSDK_OFFSET(0xE4FCF50)
#define DEBEAKKOHLN_IGBJMAPMLAE_OFFSET UNITYSDK_OFFSET(0xE4F8AA0)
#define DEBEAKKOHLN_ILLNNGGBFJD_OFFSET UNITYSDK_OFFSET(0xE4FBD30)
#define DEBEAKKOHLN_IMFCGLEEJDJ_OFFSET UNITYSDK_OFFSET(0xE4FCCB0)
#define DEBEAKKOHLN_JCIJPJOAFMI_OFFSET UNITYSDK_OFFSET(0xE4FE3C0)
#define DEBEAKKOHLN_JLJMDOBKGGP_OFFSET UNITYSDK_OFFSET(0xE4FD8B0)
#define DEBEAKKOHLN_JODHLIEOEKI_OFFSET UNITYSDK_OFFSET(0xE4F97A0)
#define DEBEAKKOHLN_KACCAICCIAD_OFFSET UNITYSDK_OFFSET(0xE4F8C20)
#define DEBEAKKOHLN_KNBDDCOPPGM_OFFSET UNITYSDK_OFFSET(0xE4FBE60)
#define DEBEAKKOHLN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE4FCEE0)
#define DEBEAKKOHLN_LBONIGDKBDF_OFFSET UNITYSDK_OFFSET(0xE4FE0F0)
#define DEBEAKKOHLN_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xE4FE800)
#define DEBEAKKOHLN_LDIHGNGIIDB_1_OFFSET UNITYSDK_OFFSET(0xE4F74A0)
#define DEBEAKKOHLN_LDIHGNGIIDB_2_OFFSET UNITYSDK_OFFSET(0xE4F7720)
#define DEBEAKKOHLN_LDIHGNGIIDB_3_OFFSET UNITYSDK_OFFSET(0xE4F78C0)
#define DEBEAKKOHLN_LDIHGNGIIDB_4_OFFSET UNITYSDK_OFFSET(0xE4F7B40)
#define DEBEAKKOHLN_LDIHGNGIIDB_5_OFFSET UNITYSDK_OFFSET(0xE4F7CF0)
#define DEBEAKKOHLN_LDIHGNGIIDB_6_OFFSET UNITYSDK_OFFSET(0xE4F7F20)
#define DEBEAKKOHLN_LDIHGNGIIDB_7_OFFSET UNITYSDK_OFFSET(0xE4F81A0)
#define DEBEAKKOHLN_LDIHGNGIIDB_8_OFFSET UNITYSDK_OFFSET(0xE4F8330)
#define DEBEAKKOHLN_LDIHGNGIIDB_9_OFFSET UNITYSDK_OFFSET(0xE4F8500)
#define DEBEAKKOHLN_LDIHGNGIIDB_OFFSET UNITYSDK_OFFSET(0xE4F72D0)
#define DEBEAKKOHLN_LEFOCOBIFKK_OFFSET UNITYSDK_OFFSET(0xE4FE580)
#define DEBEAKKOHLN_LODHGHKMNJJ_OFFSET UNITYSDK_OFFSET(0xE4FDF20)
#define DEBEAKKOHLN_MFCFABPGFGB_1_OFFSET UNITYSDK_OFFSET(0xE4FA0B0)
#define DEBEAKKOHLN_MFCFABPGFGB_2_OFFSET UNITYSDK_OFFSET(0xE4FA350)
#define DEBEAKKOHLN_MFCFABPGFGB_3_OFFSET UNITYSDK_OFFSET(0xE4FA5F0)
#define DEBEAKKOHLN_MFCFABPGFGB_4_OFFSET UNITYSDK_OFFSET(0xE4FA890)
#define DEBEAKKOHLN_MFCFABPGFGB_5_OFFSET UNITYSDK_OFFSET(0xE4FAF50)
#define DEBEAKKOHLN_MFCFABPGFGB_6_OFFSET UNITYSDK_OFFSET(0xE4FB290)
#define DEBEAKKOHLN_MFCFABPGFGB_7_OFFSET UNITYSDK_OFFSET(0xE4FB530)
#define DEBEAKKOHLN_MFCFABPGFGB_8_OFFSET UNITYSDK_OFFSET(0xE4FB7D0)
#define DEBEAKKOHLN_MFCFABPGFGB_9_OFFSET UNITYSDK_OFFSET(0xE4FBA90)
#define DEBEAKKOHLN_MFCFABPGFGB_OFFSET UNITYSDK_OFFSET(0xE4F9DF0)
#define DEBEAKKOHLN_MFNLNEMCLIN_OFFSET UNITYSDK_OFFSET(0xE4F9300)
#define DEBEAKKOHLN_NENOHEBIHNE_OFFSET UNITYSDK_OFFSET(0xE4F90E0)
#define DEBEAKKOHLN_NIOLFADHFAG_OFFSET UNITYSDK_OFFSET(0xE4FC500)
#define DEBEAKKOHLN_NNAFAAADGNH_OFFSET UNITYSDK_OFFSET(0xE4F95C0)
#define DEBEAKKOHLN_NOJJAAHDODG_OFFSET UNITYSDK_OFFSET(0xE4FC3C0)
#define DEBEAKKOHLN_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0xE4FE870)
#define DEBEAKKOHLN_OGMPOCEMKIH_OFFSET UNITYSDK_OFFSET(0xE4FE650)
#define DEBEAKKOHLN_PBIMADDKBAP_OFFSET UNITYSDK_OFFSET(0xE4F9180)
#define DEBEAKKOHLN_PCMKAMAOGGF_OFFSET UNITYSDK_OFFSET(0xE4F8920)
#define DEBEAKKOHLN_PDKIENCCEFK_OFFSET UNITYSDK_OFFSET(0xE4FE990)
#define DEBEAKKOHLN_PMFPKLIFHNO_OFFSET UNITYSDK_OFFSET(0xE4FDCD0)
#define DEBEAKKOHLN_PMIMOHLALCG_OFFSET UNITYSDK_OFFSET(0xE4F99F0)
#define DEBEAKKOHLN_PPAJEBKCOKG_OFFSET UNITYSDK_OFFSET(0xE4FDE40)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET UNITYSDK_OFFSET(0xE4F6E30)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET UNITYSDK_OFFSET(0xE4F6E80)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET UNITYSDK_OFFSET(0xE4F6ED0)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET UNITYSDK_OFFSET(0xE4F6D90)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0xE4F6E20)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET UNITYSDK_OFFSET(0xE4F6FC0)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE4F7220)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE4F7150)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET UNITYSDK_OFFSET(0xE4F6C70)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET UNITYSDK_OFFSET(0xE4F6F20)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET UNITYSDK_OFFSET(0xE4F6F70)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET UNITYSDK_OFFSET(0xE4F7010)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET UNITYSDK_OFFSET(0xE4F6D40)
#define DEBEAKKOHLN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE4F7060)

inline static constexpr unsigned int DEBEAKKOHLN_TypeDefinitionIndex = 69807;

	class DEBEAKKOHLN : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GNGICBBHKEJ; // 0x10
		::EJFKDHCJNBD* PNNOBGKOKEL; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* FGINEHOENBH; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* BONDNLPAFBN; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* CDGLCCCOMJM; // 0x30
		::DEBEAKKOHLN* BNLCCCCMABF; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* JFEIIBIJFLL; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* EKLIFAPHNJM; // 0x48
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::System::Object*>*>* EGPGIGCOEAN; // 0x50
		::System::Collections::Generic::List_1<::DEBEAKKOHLN*>* MGNAMBGJIPJ; // 0x58
		::System::Boolean FKJPJKOEKEE; // 0x60
		::System::Boolean FCKAKJMPLLF; // 0x61
		::System::Boolean JGNOEBMAMBB; // 0x62
		::System::Boolean AHIPPHLHGCO; // 0x63
		::System::Boolean JPPEPFGGGEG; // 0x64
		::System::Byte _padding0[0x3];
		::System::Int32 JGGDKOCIEGH; // 0x68
		::System::UInt32 FNCIFNADMDK; // 0x6C
		static ::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>** StaticGet_AEDPMEMAOLJ()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>**)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x11D40);
		}

		static ::System::String** StaticGet_FKIDOIFJIMA()
		{
			return (::System::String**)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x11D48);
		}

		static ::RPG::GameCore::ShaderPropertyConfig** StaticGet_PMNHIHBHOAC()
		{
			return (::RPG::GameCore::ShaderPropertyConfig**)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x11D50);
		}

		static ::System::Int32* StaticGet_GGDDHINEJIG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B40);
		}

		static ::System::Int32* StaticGet_PNHMCAEEDPE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B44);
		}

		static ::System::Int32* StaticGet_EFDNLAEOIMG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B48);
		}

		static ::System::Int32* StaticGet_AOGKIFGCBDN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B4C);
		}

		static ::System::Int32* StaticGet_MIMKCFPHJMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B50);
		}

		static ::System::Int32* StaticGet_HHCOEBMFIBI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B54);
		}

		static ::System::Int32* StaticGet_MBBBICPKKBI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B58);
		}

		static ::System::Int32* StaticGet_DIEADHNHKJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B5C);
		}

		static ::System::Int32* StaticGet_CBJHNGBICBN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B60);
		}

		static ::System::Int32* StaticGet_GCIINKMBHIG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B64);
		}

		static ::System::Int32* StaticGet_CDGFIKJNHNA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B68);
		}

		static ::System::Int32* StaticGet_NBEJCPIEGFG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B6C);
		}

		static ::System::Int32* StaticGet_OEPDDMJBLPB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B70);
		}

		static ::System::Int32* StaticGet_OICOKAKGHMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B74);
		}

		static ::System::Int32* StaticGet_FDCCJAHAABJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B78);
		}

		static ::System::Int32* StaticGet_CAOPPHCHJFO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B7C);
		}

		static ::System::Int32* StaticGet_JKJONNMOIKE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B80);
		}

		static ::System::Int32* StaticGet_LLNFHLGFCMH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B84);
		}

		static ::System::Int32* StaticGet_NHCHGFJIJMG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B88);
		}

		static ::System::Int32* StaticGet_DHAFKJICLJB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B8C);
		}

		static ::System::Int32* StaticGet_MNLAMBLPBCE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B90);
		}

		static ::System::Int32* StaticGet_EKNCJMGEHOA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B94);
		}

		static ::System::Int32* StaticGet_ADHIPFFFGGI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B98);
		}

		static ::System::Int32* StaticGet_EHCMKACDPJF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3B9C);
		}

		static ::System::Int32* StaticGet_HMKIEFNFGKP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3BA0);
		}

		static ::System::Int32* StaticGet_AANJNJBLFFH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3BA4);
		}

		static ::System::Int32* StaticGet_PNGHKPCCPOG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEBEAKKOHLN")->GetStaticField(0x3BA8);
		}

		// static const ::System::Object IJAEBCJNJLP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBEAKKOHLN_CCTOR_OFFSET))();
		}

		::System::Void HCCPAFCKNFO(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HCCPAFCKNFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GFIJGKKMMIP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_GFIJGKKMMIP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Renderer* System_Collections_Generic_IList_UnityEngine_Renderer__get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__set_Item(::System::Int32 a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_Generic_ICollection_UnityEngine_Renderer__get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void System_Collections_Generic_ICollection_UnityEngine_Renderer__Add(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET))(this, a1);
		}

		::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__Contains(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_ICollection_UnityEngine_Renderer__CopyTo(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_Generic_IList_UnityEngine_Renderer__IndexOf(::UnityEngine::Renderer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__Insert(::System::Int32 a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET))(this, a1, a2);
		}

		::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__Remove(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>* System_Collections_Generic_IEnumerable_UnityEngine_Renderer__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>* System_Collections_Generic_IEnumerable_UnityEngine_Material__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Void LDIHGNGIIDB(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_1(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_2(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_3(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_4(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_5(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_6(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_7(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_8(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDIHGNGIIDB_9(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDIHGNGIIDB_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACLFABNHBDM(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_ACLFABNHBDM_OFFSET))(this, a1);
		}

		::System::Void PCMKAMAOGGF(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_PCMKAMAOGGF_OFFSET))(this, a1, a2);
		}

		::System::Void AOLANPGGAHE(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_AOLANPGGAHE_OFFSET))(this, a1, a2);
		}

		::System::Void IGBJMAPMLAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_IGBJMAPMLAE_OFFSET))(this);
		}

		::System::Void NENOHEBIHNE(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_NENOHEBIHNE_OFFSET))(this, a1);
		}

		::System::Void MFNLNEMCLIN(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFNLNEMCLIN_OFFSET))(this, a1);
		}

		::System::Void NNAFAAADGNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_NNAFAAADGNH_OFFSET))(this);
		}

		::System::Void BHMNDNIPJDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_BHMNDNIPJDF_OFFSET))(this);
		}

		static ::System::Void KACCAICCIAD(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a2, ::UnityEngine::Renderer* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>*, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_KACCAICCIAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PBIMADDKBAP(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_PBIMADDKBAP_OFFSET))(a1, a2);
		}

		static ::System::Void FJACCPKMCGA(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_FJACCPKMCGA_OFFSET))(a1);
		}

		::System::Boolean BBNOFOKNNGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_BBNOFOKNNGL_OFFSET))(this);
		}

		::System::Void JODHLIEOEKI(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_JODHLIEOEKI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PMIMOHLALCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_PMIMOHLALCG_OFFSET))(this);
		}

		::System::Void AJOFOKIKOEP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_AJOFOKIKOEP_OFFSET))(this, a1);
		}

		::System::Void MFCFABPGFGB(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_1(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_2(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_3(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_4(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void MFCFABPGFGB_5(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_6(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_7(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_8(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_8_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_9(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_MFCFABPGFGB_9_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ILLNNGGBFJD(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_ILLNNGGBFJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KNBDDCOPPGM(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_KNBDDCOPPGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOGOBFFHMPO(::UnityEngine::PassTagID a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PassTagID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HOGOBFFHMPO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AOJJNFDCOKP(::System::String* a1, ::System::Boolean a2, ::RPG::Client::MaterialProppertySetWay a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_AOJJNFDCOKP_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::GameCore::ShaderPropertyConfig* NOJJAAHDODG()
		{
			return ((::RPG::GameCore::ShaderPropertyConfig*(*)())((::PBYTE)hIl2Cpp + DEBEAKKOHLN_NOJJAAHDODG_OFFSET))();
		}

		::System::UInt32 NIOLFADHFAG(::System::UInt32 a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_NIOLFADHFAG_OFFSET))(this, a1, a2);
		}

		::System::Void EIELIHAPGJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_EIELIHAPGJP_OFFSET))(this, a1);
		}

		::System::Void GBJKNODIFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_GBJKNODIFFC_OFFSET))(this);
		}

		::System::UInt32 IMFCGLEEJDJ(::UnityEngine::Renderer* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_IMFCGLEEJDJ_OFFSET))(this, a1);
		}

		::System::UInt32 BDIKCAAPLPN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_BDIKCAAPLPN_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::PDJCPAFHFIN* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::PDJCPAFHFIN*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ICPGEIKNDBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_ICPGEIKNDBP_OFFSET))(this);
		}

		::System::Void JLJMDOBKGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_JLJMDOBKGGP_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_CLEAR_OFFSET))(this);
		}

		::System::Boolean PMFPKLIFHNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_PMFPKLIFHNO_OFFSET))(this);
		}

		::System::Void PPAJEBKCOKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_PPAJEBKCOKG_OFFSET))(this);
		}

		::System::Void BPADOOEABAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_BPADOOEABAM_OFFSET))(this);
		}

		::System::Void LODHGHKMNJJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LODHGHKMNJJ_OFFSET))(this, a1);
		}

		::System::Void LBONIGDKBDF(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LBONIGDKBDF_OFFSET))(this, a1);
		}

		::System::Void CLJJOCKHNDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_CLJJOCKHNDF_OFFSET))(this);
		}

		::System::Boolean EEBPCDFLCCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_EEBPCDFLCCK_OFFSET))(this);
		}

		::System::Boolean BGHKKOMLGMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_BGHKKOMLGMC_OFFSET))(this);
		}

		::System::Void GIGPCJHDLIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_GIGPCJHDLIB_OFFSET))(this);
		}

		::System::Void JCIJPJOAFMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_JCIJPJOAFMI_OFFSET))(this);
		}

		::System::Void GCMIKABICCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_GCMIKABICCM_OFFSET))(this);
		}

		::System::Void LEFOCOBIFKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LEFOCOBIFKK_OFFSET))(this);
		}

		::System::Void EJBOOLDDMHI(::System::Int32 a1, ::RPG::Client::MaterialProppertySetWay a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_EJBOOLDDMHI_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Renderer* OGMPOCEMKIH(::System::String* a1)
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_OGMPOCEMKIH_OFFSET))(this, a1);
		}

		::System::Void EEPIFCIMBEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_EEPIFCIMBEM_OFFSET))(this);
		}

		::System::Void CEBACNPECOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_CEBACNPECOD_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_LDAMHBBILAD_OFFSET))(this);
		}

		::UnityEngine::GameObject* AIJBNFONPAD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_AIJBNFONPAD_OFFSET))(this);
		}

		::System::Int32 OEIIDHFBKHG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_OEIIDHFBKHG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* DDBAFKONNJM()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_DDBAFKONNJM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* HCEAMOCEMBJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HCEAMOCEMBJ_OFFSET))(this);
		}

		::System::Boolean DLGFFJOFKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_DLGFFJOFKHI_OFFSET))(this);
		}

		::PDJCPAFHFIN* PDKIENCCEFK()
		{
			return ((::PDJCPAFHFIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_PDKIENCCEFK_OFFSET))(this);
		}

		::System::Boolean AGNHGCMDBLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_AGNHGCMDBLJ_OFFSET))(this);
		}

	};
