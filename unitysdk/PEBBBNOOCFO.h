#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/PEBBBNOOCFO_PoseEntitiesLoadingState.h"
#include "unitysdk/PEBBBNOOCFO_PoseEntitiesShowingState.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/RPG/Client/MapNpcType.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/PEBBBNOOCFO_DNCHPFDFAHJ.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLNCBOGAMFG;
class EKFMIDBJDIA;
class KDFFHMDFALG;
class PEBBBNOOCFO_DEKEDBPNOEG;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define PEBBBNOOCFO_ADJGJDFAIBB_OFFSET UNITYSDK_OFFSET(0xC92F890)
#define PEBBBNOOCFO_AKPFJKHCIOH_OFFSET UNITYSDK_OFFSET(0xC938160)
#define PEBBBNOOCFO_ANCHKNEDANJ_OFFSET UNITYSDK_OFFSET(0xC930740)
#define PEBBBNOOCFO_BJKLGHFHNNO_OFFSET UNITYSDK_OFFSET(0xC933070)
#define PEBBBNOOCFO_BNBDIHMPBKP_OFFSET UNITYSDK_OFFSET(0xC932690)
#define PEBBBNOOCFO_BPBBGOODOJK_OFFSET UNITYSDK_OFFSET(0xC930E80)
#define PEBBBNOOCFO_CBLLBLPEPJI_OFFSET UNITYSDK_OFFSET(0xC9352B0)
#define PEBBBNOOCFO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC938450)
#define PEBBBNOOCFO_CGELGPAPMAH_OFFSET UNITYSDK_OFFSET(0xC932510)
#define PEBBBNOOCFO_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0xC92BB40)
#define PEBBBNOOCFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC938440)
#define PEBBBNOOCFO_DACCFCOBBPE_OFFSET UNITYSDK_OFFSET(0xC938350)
#define PEBBBNOOCFO_DBFLIOBGGHP_OFFSET UNITYSDK_OFFSET(0xC935A70)
#define PEBBBNOOCFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC92B970)
#define PEBBBNOOCFO_DMBFJAEAGPL_OFFSET UNITYSDK_OFFSET(0xC935A20)
#define PEBBBNOOCFO_EJBBFHFPCLD_OFFSET UNITYSDK_OFFSET(0xC930960)
#define PEBBBNOOCFO_EMDBDCAAMIA_OFFSET UNITYSDK_OFFSET(0xC930D20)
#define PEBBBNOOCFO_ENFNNFNIPDL_OFFSET UNITYSDK_OFFSET(0xC936D10)
#define PEBBBNOOCFO_FBBOPJCKCKA_OFFSET UNITYSDK_OFFSET(0xC9303F0)
#define PEBBBNOOCFO_FCOPCDAHOLF_OFFSET UNITYSDK_OFFSET(0xC9360C0)
#define PEBBBNOOCFO_FJKDMEOBHBA_OFFSET UNITYSDK_OFFSET(0xC92F6B0)
#define PEBBBNOOCFO_FMLGLDONDCK_OFFSET UNITYSDK_OFFSET(0xC936790)
#define PEBBBNOOCFO_FMOEOPDMDKL_OFFSET UNITYSDK_OFFSET(0xC9300A0)
#define PEBBBNOOCFO_FNJJAALEDCJ_OFFSET UNITYSDK_OFFSET(0xC9383F0)
#define PEBBBNOOCFO_GBEJLBOEPPK_OFFSET UNITYSDK_OFFSET(0xC936730)
#define PEBBBNOOCFO_GHHBBODIPNI_OFFSET UNITYSDK_OFFSET(0xC937060)
#define PEBBBNOOCFO_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xC9377D0)
#define PEBBBNOOCFO_GHNFCLAJHGJ_OFFSET UNITYSDK_OFFSET(0xC935630)
#define PEBBBNOOCFO_GIAFHHNPOLP_OFFSET UNITYSDK_OFFSET(0xC936130)
#define PEBBBNOOCFO_GKFAEKKFCIA_OFFSET UNITYSDK_OFFSET(0xC930A40)
#define PEBBBNOOCFO_HJNFCIAFAMM_OFFSET UNITYSDK_OFFSET(0xC92F5A0)
#define PEBBBNOOCFO_IBLHOKHHGPE_OFFSET UNITYSDK_OFFSET(0xC92F700)
#define PEBBBNOOCFO_IIDBFFCKOCA_OFFSET UNITYSDK_OFFSET(0xC932320)
#define PEBBBNOOCFO_IKLGDPEACAM_OFFSET UNITYSDK_OFFSET(0xC937B20)
#define PEBBBNOOCFO_ILBHHIGHNBH_1_OFFSET UNITYSDK_OFFSET(0xC933A70)
#define PEBBBNOOCFO_ILBHHIGHNBH_OFFSET UNITYSDK_OFFSET(0xC938200)
#define PEBBBNOOCFO_IOPLPPHCINE_OFFSET UNITYSDK_OFFSET(0xC936C00)
#define PEBBBNOOCFO_JBFFCDIMFBO_OFFSET UNITYSDK_OFFSET(0xC936920)
#define PEBBBNOOCFO_JBOPKPPGDPC_OFFSET UNITYSDK_OFFSET(0xC92BF20)
#define PEBBBNOOCFO_JKLOLDMFNAO_OFFSET UNITYSDK_OFFSET(0xC9302F0)
#define PEBBBNOOCFO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC931100)
#define PEBBBNOOCFO_JNDIHCBEKJO_OFFSET UNITYSDK_OFFSET(0xC936E70)
#define PEBBBNOOCFO_KALMEKGCMKP_OFFSET UNITYSDK_OFFSET(0xC931410)
#define PEBBBNOOCFO_KBNOBPOIPDC_OFFSET UNITYSDK_OFFSET(0xC930A90)
#define PEBBBNOOCFO_KCDMHKIIHHB_OFFSET UNITYSDK_OFFSET(0xC931F60)
#define PEBBBNOOCFO_KKCPLHFPEFJ_OFFSET UNITYSDK_OFFSET(0xC9383A0)
#define PEBBBNOOCFO_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xC930010)
#define PEBBBNOOCFO_LLGKBGMFMDH_OFFSET UNITYSDK_OFFSET(0xC9361E0)
#define PEBBBNOOCFO_MDFKNPBHALO_1_OFFSET UNITYSDK_OFFSET(0xC9331F0)
#define PEBBBNOOCFO_MDFKNPBHALO_OFFSET UNITYSDK_OFFSET(0xC9376A0)
#define PEBBBNOOCFO_MHBOMAJDOOP_OFFSET UNITYSDK_OFFSET(0xC934830)
#define PEBBBNOOCFO_MNCMJDAHONP_OFFSET UNITYSDK_OFFSET(0xC933880)
#define PEBBBNOOCFO_NEONHFGLAKO_OFFSET UNITYSDK_OFFSET(0xC92F910)
#define PEBBBNOOCFO_NFDDFCFFPLB_OFFSET UNITYSDK_OFFSET(0xC92F630)
#define PEBBBNOOCFO_NIPPFPENBGP_OFFSET UNITYSDK_OFFSET(0xC9356A0)
#define PEBBBNOOCFO_NKLDEAGFCCA_OFFSET UNITYSDK_OFFSET(0xC9311D0)
#define PEBBBNOOCFO_OGNOONMKDMI_OFFSET UNITYSDK_OFFSET(0xC92BAE0)
#define PEBBBNOOCFO_OHKKNAPILAN_OFFSET UNITYSDK_OFFSET(0xC9309B0)
#define PEBBBNOOCFO_OINPGLGIFPL_1_OFFSET UNITYSDK_OFFSET(0xC938290)
#define PEBBBNOOCFO_OINPGLGIFPL_OFFSET UNITYSDK_OFFSET(0xC9308D0)
#define PEBBBNOOCFO_ONNGPNGHFNM_OFFSET UNITYSDK_OFFSET(0xC930E00)
#define PEBBBNOOCFO_PBHCOGMEFJK_OFFSET UNITYSDK_OFFSET(0xC930820)
#define PEBBBNOOCFO_PEJFADMPAGM_OFFSET UNITYSDK_OFFSET(0xC934560)
#define PEBBBNOOCFO_PNBCCHFNDAG_OFFSET UNITYSDK_OFFSET(0xC930DB0)
#define PEBBBNOOCFO_PNDKNCBJLGM_OFFSET UNITYSDK_OFFSET(0xC933180)
#define PEBBBNOOCFO_POKLCLFHADP_OFFSET UNITYSDK_OFFSET(0xC932DF0)
#define PEBBBNOOCFO_PPCKMEFMCOA_OFFSET UNITYSDK_OFFSET(0xC92E880)

inline static constexpr unsigned int PEBBBNOOCFO_TypeDefinitionIndex = 61978;

	class PEBBBNOOCFO : public ::NPEBLEKDAGI
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* HMJBJLKHILK; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* CBNAJKLFCEK; // 0x18
		::UnityEngine::Coroutine* MDHAADPFKLA; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BMOGFLMCPHL; // 0x28
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x30
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x38
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Object*>* HFOFDKICJJA; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* IAGPALNFHJK; // 0x50
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x58
		::RPG::GameCore::GameWorld* JEOADHBDKMO; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Object*>* EPAANHFGFNO; // 0x68
		::System::Boolean KDGBGJOCBGA; // 0x70
		::System::Boolean BHLFEAIKOBI; // 0x71
		::System::Byte _padding0[0x2];
		::PEBBBNOOCFO_PoseEntitiesLoadingState OOBANJALKPN; // 0x74
		::PEBBBNOOCFO_PoseEntitiesShowingState ALMJBBDHCBH; // 0x78
		::System::Boolean IKDKGLPAIPL; // 0x7C
		::System::Boolean JKMHAHBMCLD; // 0x7D
		::System::Boolean OFCKMGCFHJO; // 0x7E
		::System::Boolean AKNCILMJGFM; // 0x7F
		::System::Int32 MEGBJGGNMLP; // 0x80
		::System::Int32 EKOOFKKMFJE; // 0x84
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_OBOHPKBKAGC()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)UnitySDK::FromName("", "PEBBBNOOCFO")->GetStaticField(0x671B0);
		}

		// static const ::System::Object INLPDBGBONN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEBBBNOOCFO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DISPOSE_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void HJNFCIAFAMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_HJNFCIAFAMM_OFFSET))(this, a1);
		}

		::System::Void FJKDMEOBHBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FJKDMEOBHBA_OFFSET))(this, a1);
		}

		::System::Void ADJGJDFAIBB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_ADJGJDFAIBB_OFFSET))(this, a1, a2);
		}

		::System::Void LKINOKFJPCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_LKINOKFJPCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FMOEOPDMDKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FMOEOPDMDKL_OFFSET))(this);
		}

		::System::Void PBHCOGMEFJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_PBHCOGMEFJK_OFFSET))(this, a1);
		}

		::System::Void OHKKNAPILAN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_OHKKNAPILAN_OFFSET))(this, a1);
		}

		::System::Void EMDBDCAAMIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_EMDBDCAAMIA_OFFSET))(this, a1);
		}

		::System::Boolean PNBCCHFNDAG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_PNBCCHFNDAG_OFFSET))(this, a1);
		}

		::System::Void KBNOBPOIPDC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_KBNOBPOIPDC_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BNBDIHMPBKP(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_BNBDIHMPBKP_OFFSET))(this, a1, a2);
		}

		::System::Boolean POKLCLFHADP(::RPG::Client::MapNpcDef* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_POKLCLFHADP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BJKLGHFHNNO(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_BJKLGHFHNNO_OFFSET))(this, a1);
		}

		::System::Void PNDKNCBJLGM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_PNDKNCBJLGM_OFFSET))(this, a1);
		}

		::System::Void JBOPKPPGDPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_JBOPKPPGDPC_OFFSET))(this);
		}

		static ::System::Boolean MNCMJDAHONP(::RPG::GameCore::LevelNPCInfo* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_MNCMJDAHONP_OFFSET))(a1);
		}

		::System::Void PPCKMEFMCOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_PPCKMEFMCOA_OFFSET))(this);
		}

		::System::Void IBLHOKHHGPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_IBLHOKHHGPE_OFFSET))(this, a1);
		}

		::System::Void NFDDFCFFPLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_NFDDFCFFPLB_OFFSET))(this, a1);
		}

		::System::Void EJBBFHFPCLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_EJBBFHFPCLD_OFFSET))(this);
		}

		::System::Void PEJFADMPAGM(::PEBBBNOOCFO_DEKEDBPNOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEBBBNOOCFO_DEKEDBPNOEG*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_PEJFADMPAGM_OFFSET))(this, a1);
		}

		::System::Void FBBOPJCKCKA(::PEBBBNOOCFO_DEKEDBPNOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEBBBNOOCFO_DEKEDBPNOEG*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FBBOPJCKCKA_OFFSET))(this, a1);
		}

		::System::Void CBLLBLPEPJI(::PEBBBNOOCFO_DEKEDBPNOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEBBBNOOCFO_DEKEDBPNOEG*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_CBLLBLPEPJI_OFFSET))(this, a1);
		}

		::System::Void NEONHFGLAKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_NEONHFGLAKO_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FCOPCDAHOLF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FCOPCDAHOLF_OFFSET))(this);
		}

		::System::Void ANCHKNEDANJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_ANCHKNEDANJ_OFFSET))(this);
		}

		::System::Void OGNOONMKDMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_OGNOONMKDMI_OFFSET))(this);
		}

		::System::Boolean IIDBFFCKOCA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_IIDBFFCKOCA_OFFSET))(this);
		}

		::System::Void ONNGPNGHFNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_ONNGPNGHFNM_OFFSET))(this);
		}

		::System::Void GIAFHHNPOLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_GIAFHHNPOLP_OFFSET))(this);
		}

		::System::Void LLGKBGMFMDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_LLGKBGMFMDH_OFFSET))(this);
		}

		::System::Boolean CGELGPAPMAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_CGELGPAPMAH_OFFSET))(this);
		}

		::System::Void JKLOLDMFNAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_JKLOLDMFNAO_OFFSET))(this);
		}

		::System::Void GKFAEKKFCIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_GKFAEKKFCIA_OFFSET))(this);
		}

		::System::Void FMLGLDONDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FMLGLDONDCK_OFFSET))(this);
		}

		::System::Void NKLDEAGFCCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_NKLDEAGFCCA_OFFSET))(this);
		}

		::System::Void ENFNNFNIPDL(::PEBBBNOOCFO_DEKEDBPNOEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEBBBNOOCFO_DEKEDBPNOEG*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_ENFNNFNIPDL_OFFSET))(this, a1);
		}

		::System::Void JNDIHCBEKJO(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_JNDIHCBEKJO_OFFSET))(this, a1);
		}

		::System::Boolean DMBFJAEAGPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DMBFJAEAGPL_OFFSET))(this);
		}

		::System::Void MHBOMAJDOOP(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_MHBOMAJDOOP_OFFSET))(this, a1, a2);
		}

		::System::Void IKLGDPEACAM(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_IKLGDPEACAM_OFFSET))(this, a1);
		}

		::System::Void DBFLIOBGGHP(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DBFLIOBGGHP_OFFSET))(this, a1, a2);
		}

		::System::Void GHHBBODIPNI(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_GHHBBODIPNI_OFFSET))(this, a1);
		}

		::System::Void GHIFMGPKFPF(::RPG::Client::MapRotation::EffectType a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::PEBBBNOOCFO_DNCHPFDFAHJ a5, ::UnityEngine::Transform* a6, ::RPG::GameCore::GameEntity* a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotation::EffectType, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::PEBBBNOOCFO_DNCHPFDFAHJ, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_GHIFMGPKFPF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void MDFKNPBHALO(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_MDFKNPBHALO_OFFSET))(this, a1);
		}

		::System::Void MDFKNPBHALO_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_MDFKNPBHALO_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AKPFJKHCIOH(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_AKPFJKHCIOH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KALMEKGCMKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_KALMEKGCMKP_OFFSET))(this);
		}

		::System::Void BPBBGOODOJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_BPBBGOODOJK_OFFSET))(this);
		}

		::System::Void JBFFCDIMFBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_JBFFCDIMFBO_OFFSET))(this);
		}

		::RPG::GameCore::MapRotationEntityEffectConfig* ILBHHIGHNBH(::RPG::Client::MapNpcDef* a1)
		{
			return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_ILBHHIGHNBH_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationEntityEffectConfig* ILBHHIGHNBH_1(::RPG::Client::MapNpcType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcType, ::System::UInt32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_ILBHHIGHNBH_1_OFFSET))(this, a1, a2);
		}

		::System::Void OINPGLGIFPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_OINPGLGIFPL_OFFSET))(this);
		}

		::System::Void OINPGLGIFPL_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_OINPGLGIFPL_1_OFFSET))(this, a1);
		}

		::System::Void DACCFCOBBPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DACCFCOBBPE_OFFSET))(this, a1);
		}

		::System::Void KKCPLHFPEFJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_KKCPLHFPEFJ_OFFSET))(this, a1);
		}

		::System::Void FNJJAALEDCJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FNJJAALEDCJ_OFFSET))(this, a1);
		}

		::System::Void KCDMHKIIHHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_KCDMHKIIHHB_OFFSET))(this);
		}

		::System::Boolean GHNFCLAJHGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_GHNFCLAJHGJ_OFFSET))(this);
		}

		::System::Boolean NIPPFPENBGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_NIPPFPENBGP_OFFSET))(this);
		}

		::System::Boolean IOPLPPHCINE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_IOPLPPHCINE_OFFSET))(this);
		}

		::System::Boolean GBEJLBOEPPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_GBEJLBOEPPK_OFFSET))(this);
		}

	};
