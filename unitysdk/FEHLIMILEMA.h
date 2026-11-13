#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BFAGAEJHEJH;
class FDKKDPIHFKL;
class FEHLIMILEMA;
class JMDAIKOHCAE;
class KHNBFDNKLHE;
class LLADGGNOJPG;
class MEPPNFLLMEN;
class MKNOAOJPALD;
class NPEHFAHLDNM;
class OFNAOANCMMA;
class PKLOMDCOKOC;
namespace Proto { class EntitySnapshot; }
namespace Proto { class GroupSnapshot; }
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPlayerDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class LevelDistrictInfo; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPathwayInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class MapPropConditionConfigRow; }
namespace RPG::GameCore { class NamedLevelObjectInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEHLIMILEMA_AAOPBNPJEOF_OFFSET UNITYSDK_OFFSET(0x13090440)
#define FEHLIMILEMA_BABJOJOJCIF_OFFSET UNITYSDK_OFFSET(0x13093270)
#define FEHLIMILEMA_BPNDINDIIOF_OFFSET UNITYSDK_OFFSET(0x1308F8B0)
#define FEHLIMILEMA_CAJCJNFDHOG_OFFSET UNITYSDK_OFFSET(0x13095E10)
#define FEHLIMILEMA_CCGLIBFFBJO_OFFSET UNITYSDK_OFFSET(0x13090F50)
#define FEHLIMILEMA_CFCHBKPKGDD_OFFSET UNITYSDK_OFFSET(0x1308F990)
#define FEHLIMILEMA_CFIPFPPABKP_OFFSET UNITYSDK_OFFSET(0x130935B0)
#define FEHLIMILEMA_CGGHHJOLGCD_OFFSET UNITYSDK_OFFSET(0x13091F80)
#define FEHLIMILEMA_CHADMJKPHBH_OFFSET UNITYSDK_OFFSET(0x13091A20)
#define FEHLIMILEMA_COPBOFMCPGO_OFFSET UNITYSDK_OFFSET(0x13094FB0)
#define FEHLIMILEMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x13094890)
#define FEHLIMILEMA_CTOR_OFFSET UNITYSDK_OFFSET(0x13093950)
#define FEHLIMILEMA_DEHLJBJEEJJ_OFFSET UNITYSDK_OFFSET(0x1308DCC0)
#define FEHLIMILEMA_DMPDHEALKEA_OFFSET UNITYSDK_OFFSET(0x1308EBA0)
#define FEHLIMILEMA_DNIBDJDJOCD_OFFSET UNITYSDK_OFFSET(0x13095100)
#define FEHLIMILEMA_EMHIFCLKGJJ_OFFSET UNITYSDK_OFFSET(0x13094B10)
#define FEHLIMILEMA_FCKDAAJEIOP_1_OFFSET UNITYSDK_OFFSET(0x1308E920)
#define FEHLIMILEMA_FCKDAAJEIOP_OFFSET UNITYSDK_OFFSET(0x13090740)
#define FEHLIMILEMA_FFJDJNGDOCN_OFFSET UNITYSDK_OFFSET(0x13093A20)
#define FEHLIMILEMA_FGIAHBHJCCP_OFFSET UNITYSDK_OFFSET(0x13092C20)
#define FEHLIMILEMA_GDBLAIIAEHM_OFFSET UNITYSDK_OFFSET(0x13090A70)
#define FEHLIMILEMA_HCANHOHNKND_OFFSET UNITYSDK_OFFSET(0x1308E620)
#define FEHLIMILEMA_HEPCNMNHIKN_OFFSET UNITYSDK_OFFSET(0x1308FA70)
#define FEHLIMILEMA_HKBNFPMHGFK_OFFSET UNITYSDK_OFFSET(0x130906B0)
#define FEHLIMILEMA_ICJODLECGBI_OFFSET UNITYSDK_OFFSET(0x13090F90)
#define FEHLIMILEMA_ILBNPJBMELB_OFFSET UNITYSDK_OFFSET(0x1308E040)
#define FEHLIMILEMA_IMLKEMEJMKK_OFFSET UNITYSDK_OFFSET(0x130917D0)
#define FEHLIMILEMA_JAKNBBOBILN_OFFSET UNITYSDK_OFFSET(0x1308FE20)
#define FEHLIMILEMA_JDNFLCMANLB_OFFSET UNITYSDK_OFFSET(0x130908A0)
#define FEHLIMILEMA_JFBLCFGCCDF_OFFSET UNITYSDK_OFFSET(0x13093780)
#define FEHLIMILEMA_JINOPBADHDC_OFFSET UNITYSDK_OFFSET(0x1308DE70)
#define FEHLIMILEMA_JMKABIJHCEB_OFFSET UNITYSDK_OFFSET(0x130934D0)
#define FEHLIMILEMA_KGOOAICMKEJ_OFFSET UNITYSDK_OFFSET(0x130958E0)
#define FEHLIMILEMA_KIGCCGPPLKN_OFFSET UNITYSDK_OFFSET(0x13095EB0)
#define FEHLIMILEMA_LDBIPGKICAE_OFFSET UNITYSDK_OFFSET(0x130914D0)
#define FEHLIMILEMA_LJFCOFMNAIC_OFFSET UNITYSDK_OFFSET(0x13094CC0)
#define FEHLIMILEMA_LJFNMGIGLAK_OFFSET UNITYSDK_OFFSET(0x13094A90)
#define FEHLIMILEMA_MBDFLIBDGOP_OFFSET UNITYSDK_OFFSET(0x1308F7D0)
#define FEHLIMILEMA_MINLOFMLMHH_OFFSET UNITYSDK_OFFSET(0x1308ED60)
#define FEHLIMILEMA_NJKLJKLEDJJ_OFFSET UNITYSDK_OFFSET(0x1308E360)
#define FEHLIMILEMA_NLHHEHGHKAD_OFFSET UNITYSDK_OFFSET(0x13092850)
#define FEHLIMILEMA_NPMOPLAEFNN_1_OFFSET UNITYSDK_OFFSET(0x13094C00)
#define FEHLIMILEMA_NPMOPLAEFNN_OFFSET UNITYSDK_OFFSET(0x13093190)
#define FEHLIMILEMA_OCACOGEHDCL_1_OFFSET UNITYSDK_OFFSET(0x13094B70)
#define FEHLIMILEMA_OCACOGEHDCL_OFFSET UNITYSDK_OFFSET(0x130930F0)
#define FEHLIMILEMA_OCHCDELLNDG_OFFSET UNITYSDK_OFFSET(0x1308EC80)
#define FEHLIMILEMA_ODDNHIBGMFD_OFFSET UNITYSDK_OFFSET(0x130968B0)
#define FEHLIMILEMA_OHJPPJLIEKP_OFFSET UNITYSDK_OFFSET(0x130953C0)
#define FEHLIMILEMA_PBIEJAKMKAM_OFFSET UNITYSDK_OFFSET(0x1308EAC0)
#define FEHLIMILEMA_PGGDJCAIDNL_OFFSET UNITYSDK_OFFSET(0x13091850)

inline static constexpr unsigned int FEHLIMILEMA_TypeDefinitionIndex = 63508;

	class FEHLIMILEMA : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleAreaReferenceInfo* GDPGHOKONHC; // 0x10
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x18
		::System::UInt32 MPJFFEMJMGK; // 0x20
		// static const ::System::Object BEGGAMBLKNB; // 0x0
		::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FEHLIMILEMA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_CTOR_1_OFFSET))(this, a1);
		}

		::RPG::Client::MapNpcDef* DEHLJBJEEJJ(::FDKKDPIHFKL* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelMonsterInfo* a3)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::FDKKDPIHFKL*, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_DEHLJBJEEJJ_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MapNpcDef* JINOPBADHDC(::FDKKDPIHFKL* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelNPCInfo* a3)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::FDKKDPIHFKL*, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_JINOPBADHDC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MapPropDef* NJKLJKLEDJJ(::FDKKDPIHFKL* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelPropInfo* a3)
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::FDKKDPIHFKL*, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_NJKLJKLEDJJ_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MapDistrictDef* HCANHOHNKND(::FDKKDPIHFKL* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelDistrictInfo* a3)
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::PVOID, ::FDKKDPIHFKL*, ::System::UInt32, ::RPG::GameCore::LevelDistrictInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_HCANHOHNKND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PBIEJAKMKAM(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_PBIEJAKMKAM_OFFSET))(this, a1, a2);
		}

		::System::Void DMPDHEALKEA(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_DMPDHEALKEA_OFFSET))(this, a1, a2);
		}

		::System::Void OCHCDELLNDG(::System::UInt32 a1, ::RPG::GameCore::LevelDistrictInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelDistrictInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_OCHCDELLNDG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapNpcDef* MINLOFMLMHH(::Proto::SceneEntityInfo* a1)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_MINLOFMLMHH_OFFSET))(this, a1);
		}

		::System::Void MBDFLIBDGOP(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_MBDFLIBDGOP_OFFSET))(this, a1, a2);
		}

		::System::Void BPNDINDIIOF(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_BPNDINDIIOF_OFFSET))(this, a1, a2);
		}

		::System::Void CFCHBKPKGDD(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_CFCHBKPKGDD_OFFSET))(this, a1, a2);
		}

		static ::Proto::SceneEntityInfo* HEPCNMNHIKN(::RPG::Client::MapDef* a1, ::Proto::GroupSnapshot* a2, ::Proto::EntitySnapshot* a3)
		{
			return ((::Proto::SceneEntityInfo*(*)(::RPG::Client::MapDef*, ::Proto::GroupSnapshot*, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_HEPCNMNHIKN_OFFSET))(a1, a2, a3);
		}

		static ::NPEHFAHLDNM* JAKNBBOBILN(::Proto::EntitySnapshot* a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::RPG::GameCore::NamedLevelObjectInfo* a3)
		{
			return ((::NPEHFAHLDNM*(*)(::Proto::EntitySnapshot*, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::NamedLevelObjectInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_JAKNBBOBILN_OFFSET))(a1, a2, a3);
		}

		static ::BFAGAEJHEJH* GDBLAIIAEHM(::FEHLIMILEMA* a1, ::Proto::GroupSnapshot* a2)
		{
			return ((::BFAGAEJHEJH*(*)(::FEHLIMILEMA*, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_GDBLAIIAEHM_OFFSET))(a1, a2);
		}

		::System::Void ICJODLECGBI(::KHNBFDNKLHE* a1, ::BFAGAEJHEJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*, ::BFAGAEJHEJH*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_ICJODLECGBI_OFFSET))(this, a1, a2);
		}

		::System::Void CHADMJKPHBH(::BFAGAEJHEJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAGAEJHEJH*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_CHADMJKPHBH_OFFSET))(this, a1);
		}

		::RPG::Client::MapNpcDef* FGIAHBHJCCP(::FDKKDPIHFKL* a1, ::Proto::SceneEntityInfo* a2)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::FDKKDPIHFKL*, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_FGIAHBHJCCP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapNpcDef* NLHHEHGHKAD(::FDKKDPIHFKL* a1, ::Proto::SceneEntityInfo* a2)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::FDKKDPIHFKL*, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_NLHHEHGHKAD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapPropDef* CGGHHJOLGCD(::FDKKDPIHFKL* a1, ::Proto::SceneEntityInfo* a2, ::MKNOAOJPALD* a3)
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::FDKKDPIHFKL*, ::Proto::SceneEntityInfo*, ::MKNOAOJPALD*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_CGGHHJOLGCD_OFFSET))(this, a1, a2, a3);
		}

		::LLADGGNOJPG* BABJOJOJCIF(::Proto::SceneEntityInfo* a1)
		{
			return ((::LLADGGNOJPG*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_BABJOJOJCIF_OFFSET))(this, a1);
		}

		::RPG::Client::MapPlayerDef* JMKABIJHCEB(::Proto::SceneEntityInfo* a1)
		{
			return ((::RPG::Client::MapPlayerDef*(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_JMKABIJHCEB_OFFSET))(this, a1);
		}

		::System::Void PGGDJCAIDNL(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_PGGDJCAIDNL_OFFSET))(this, a1);
		}

		::System::Void CFIPFPPABKP(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_CFIPFPPABKP_OFFSET))(this, a1);
		}

		::System::Void JFBLCFGCCDF(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_JFBLCFGCCDF_OFFSET))(this, a1);
		}

		::System::Void IMLKEMEJMKK(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_IMLKEMEJMKK_OFFSET))(this, a1);
		}

		::System::Void LDBIPGKICAE(::Proto::SceneEntityInfo* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEHLIMILEMA_LDBIPGKICAE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapDef* CCGLIBFFBJO()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHLIMILEMA_CCGLIBFFBJO_OFFSET))(this);
		}

		::System::Void LJFNMGIGLAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHLIMILEMA_LJFNMGIGLAK_OFFSET))(this);
		}

		::System::Void EMHIFCLKGJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEHLIMILEMA_EMHIFCLKGJJ_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 AAOPBNPJEOF(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEHLIMILEMA_AAOPBNPJEOF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Quaternion FCKDAAJEIOP(::UnityEngine::Quaternion a1, ::System::Single a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FEHLIMILEMA_FCKDAAJEIOP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion FCKDAAJEIOP_1(::UnityEngine::Quaternion a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEHLIMILEMA_FCKDAAJEIOP_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 OCACOGEHDCL(::NPEHFAHLDNM* a1)
		{
			return ((::UnityEngine::Vector3(*)(::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_OCACOGEHDCL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 OCACOGEHDCL_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEHLIMILEMA_OCACOGEHDCL_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 HKBNFPMHGFK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEHLIMILEMA_HKBNFPMHGFK_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion NPMOPLAEFNN(::NPEHFAHLDNM* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_NPMOPLAEFNN_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion NPMOPLAEFNN_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEHLIMILEMA_NPMOPLAEFNN_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 JDNFLCMANLB(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FEHLIMILEMA_JDNFLCMANLB_OFFSET))(a1);
		}

		static ::System::Void ILBNPJBMELB(::OFNAOANCMMA* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::OFNAOANCMMA*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEHLIMILEMA_ILBNPJBMELB_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MapPropConditionConfigRow*>* LJFCOFMNAIC(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MapPropConditionConfigRow*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_LJFCOFMNAIC_OFFSET))(a1);
		}

		static ::System::Boolean COPBOFMCPGO(::RPG::GameCore::MapPropConditionConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_COPBOFMCPGO_OFFSET))(a1);
		}

		::System::Void FFJDJNGDOCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHLIMILEMA_FFJDJNGDOCN_OFFSET))(this);
		}

		static ::System::Void OHJPPJLIEKP(::RPG::GameCore::RuntimeGroupInfo* a1, ::System::Collections::Generic::List_1<::PKLOMDCOKOC*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::System::Collections::Generic::List_1<::PKLOMDCOKOC*>*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_OHJPPJLIEKP_OFFSET))(a1, a2);
		}

		static ::System::Void DNIBDJDJOCD(::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>* a1, ::System::Collections::Generic::List_1<::PKLOMDCOKOC*>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>*, ::System::Collections::Generic::List_1<::PKLOMDCOKOC*>*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_DNIBDJDJOCD_OFFSET))(a1, a2);
		}

		static ::System::Void KGOOAICMKEJ(::RPG::GameCore::RuntimeGroupInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::MapAnchorDef*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::System::Collections::Generic::List_1<::RPG::Client::MapAnchorDef*>*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_KGOOAICMKEJ_OFFSET))(a1, a2);
		}

		static ::System::Void CAJCJNFDHOG(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_CAJCJNFDHOG_OFFSET))(a1, a2);
		}

		static ::System::Void KIGCCGPPLKN(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::MEPPNFLLMEN*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuntimeGroupInfo*, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::MEPPNFLLMEN*>*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_KIGCCGPPLKN_OFFSET))(a1, a2);
		}

		static ::MEPPNFLLMEN* ODDNHIBGMFD(::System::UInt32 a1, ::RPG::GameCore::LevelPathwayInfo* a2, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::JMDAIKOHCAE*>* a3)
		{
			return ((::MEPPNFLLMEN*(*)(::System::UInt32, ::RPG::GameCore::LevelPathwayInfo*, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::JMDAIKOHCAE*>*))((::PBYTE)hIl2Cpp + FEHLIMILEMA_ODDNHIBGMFD_OFFSET))(a1, a2, a3);
		}

	};
