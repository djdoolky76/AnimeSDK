#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKABGPKKMHL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class DIFMKJMFKOK;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class OFBCFGNNDJP;
class OIDDJJLHGKO;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define IAFKDONMBFH_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0x16DB21B0)
#define IAFKDONMBFH_BOPDDKCPBOM_OFFSET UNITYSDK_OFFSET(0x16DB1B10)
#define IAFKDONMBFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16DB58D0)
#define IAFKDONMBFH_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0x16DB1F50)
#define IAFKDONMBFH_CMPBIBPFODL_OFFSET UNITYSDK_OFFSET(0x16DB3E60)
#define IAFKDONMBFH_CTOR_OFFSET UNITYSDK_OFFSET(0x16DAF7C0)
#define IAFKDONMBFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DAFF90)
#define IAFKDONMBFH_DMCAONIEGAI_OFFSET UNITYSDK_OFFSET(0x16DAFDA0)
#define IAFKDONMBFH_EBBDALJMBNL_OFFSET UNITYSDK_OFFSET(0x16DB09F0)
#define IAFKDONMBFH_EIGBNOPMBGL_OFFSET UNITYSDK_OFFSET(0x16DB1CD0)
#define IAFKDONMBFH_FNFGAAAMJOC_OFFSET UNITYSDK_OFFSET(0x16DB0130)
#define IAFKDONMBFH_GEKPBHICMHA_OFFSET UNITYSDK_OFFSET(0x16DB3C90)
#define IAFKDONMBFH_GMEDGIKMIML_OFFSET UNITYSDK_OFFSET(0x16DB5030)
#define IAFKDONMBFH_GPFLDHMJMMK_OFFSET UNITYSDK_OFFSET(0x16DB2AC0)
#define IAFKDONMBFH_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16DB2570)
#define IAFKDONMBFH_JKLMDADCCGA_OFFSET UNITYSDK_OFFSET(0x16DB1BA0)
#define IAFKDONMBFH_KCOMOLIGACL_OFFSET UNITYSDK_OFFSET(0x16DB5810)
#define IAFKDONMBFH_KKEIHJIHMOE_OFFSET UNITYSDK_OFFSET(0x16DAFEE0)
#define IAFKDONMBFH_KOEMEDJCCND_OFFSET UNITYSDK_OFFSET(0x16DB2830)
#define IAFKDONMBFH_LFOHNNDKFDJ_OFFSET UNITYSDK_OFFSET(0x16DB4E00)
#define IAFKDONMBFH_LJPJEPBCKPE_OFFSET UNITYSDK_OFFSET(0x16DB2080)
#define IAFKDONMBFH_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0x16DB0500)
#define IAFKDONMBFH_MAODCOADFMB_OFFSET UNITYSDK_OFFSET(0x16DB2100)
#define IAFKDONMBFH_NDGEHOADKLA_OFFSET UNITYSDK_OFFSET(0x16DB58C0)
#define IAFKDONMBFH_NMGHEIGJAJA_OFFSET UNITYSDK_OFFSET(0x16DB58B0)
#define IAFKDONMBFH_OJGKFPAAFAG_OFFSET UNITYSDK_OFFSET(0x16DB4EB0)
#define IAFKDONMBFH_PDJMBAKPFOL_OFFSET UNITYSDK_OFFSET(0x16DB0F10)
#define IAFKDONMBFH_PHHADFLFJHG_OFFSET UNITYSDK_OFFSET(0x16DB5860)

inline static constexpr unsigned int IAFKDONMBFH_TypeDefinitionIndex = 75913;

	class IAFKDONMBFH : public ::PKABGPKKMHL
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::DIFMKJMFKOK*>*>* DLHGONHMMOG; // 0x1B8
		::System::Collections::Generic::List_1<::System::String*>* KPNKEALKEGP; // 0x1C0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* LGGKMIELPIH; // 0x1C8
		::System::Boolean LLNIHMGNOPF; // 0x1D0
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 FIDKBIJLFIH; // 0x1D4
		static ::UnityEngine::Vector3* StaticGet_MHADJDJCHNP()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "IAFKDONMBFH")->GetStaticField(0x8D40);
		}

		static ::System::Boolean* StaticGet_PFDNJIBKHBG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IAFKDONMBFH")->GetStaticField(0x8D4C);
		}

		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAFKDONMBFH_CCTOR_OFFSET))();
		}

		::System::Void DMCAONIEGAI(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_DMCAONIEGAI_OFFSET))(this, a1);
		}

		::System::Void KKEIHJIHMOE(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_KKEIHJIHMOE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKDONMBFH_DISPOSE_OFFSET))(this);
		}

		::System::Void LKINOKFJPCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_LKINOKFJPCL_OFFSET))(this, a1);
		}

		::System::Void EBBDALJMBNL(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_EBBDALJMBNL_OFFSET))(this, a1);
		}

		::System::Boolean FNFGAAAMJOC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_FNFGAAAMJOC_OFFSET))(this, a1);
		}

		::System::Boolean JKLMDADCCGA(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_JKLMDADCCGA_OFFSET))(this, a1);
		}

		::System::Boolean EIGBNOPMBGL(::HPKACEPPPCA* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Int32))((::PBYTE)hIl2Cpp + IAFKDONMBFH_EIGBNOPMBGL_OFFSET))(this, a1, a2);
		}

		::HPKACEPPPCA* CIPJBBAOLBD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_CIPJBBAOLBD_OFFSET))(this, a1);
		}

		::System::Void LJPJEPBCKPE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::HPKACEPPPCA* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*, ::System::Int32))((::PBYTE)hIl2Cpp + IAFKDONMBFH_LJPJEPBCKPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MAODCOADFMB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::HPKACEPPPCA* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IAFKDONMBFH_MAODCOADFMB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BGBPEMJCGLH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_BGBPEMJCGLH_OFFSET))(this, a1, a2);
		}

		::System::Boolean InActiveInstance(::HPKACEPPPCA* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KOEMEDJCCND(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_KOEMEDJCCND_OFFSET))(this, a1);
		}

		::System::Void GPFLDHMJMMK(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_GPFLDHMJMMK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GEKPBHICMHA(::APLEMBNFLAA* a1, ::System::Boolean a2, ::System::Single a3, ::OIDDJJLHGKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_GEKPBHICMHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CMPBIBPFODL(::APLEMBNFLAA* a1, ::System::Boolean a2, ::System::Single a3, ::OIDDJJLHGKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_CMPBIBPFODL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 LFOHNNDKFDJ(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IAFKDONMBFH_LFOHNNDKFDJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 BOPDDKCPBOM(::DIFMKJMFKOK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DIFMKJMFKOK*))((::PBYTE)hIl2Cpp + IAFKDONMBFH_BOPDDKCPBOM_OFFSET))(this, a1);
		}

		::System::Int32 OJGKFPAAFAG(::APLEMBNFLAA* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_OJGKFPAAFAG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 PDJMBAKPFOL(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::APLEMBNFLAA* a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::APLEMBNFLAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_PDJMBAKPFOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GMEDGIKMIML(::OFBCFGNNDJP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OFBCFGNNDJP*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_GMEDGIKMIML_OFFSET))(this, a1, a2);
		}

		::System::Void KCOMOLIGACL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_KCOMOLIGACL_OFFSET))(this, a1);
		}

		::System::Void PHHADFLFJHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFKDONMBFH_PHHADFLFJHG_OFFSET))(this, a1);
		}

		::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* NMGHEIGJAJA()
		{
			return ((::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKDONMBFH_NMGHEIGJAJA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* NDGEHOADKLA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKDONMBFH_NDGEHOADKLA_OFFSET))(this);
		}

	};
