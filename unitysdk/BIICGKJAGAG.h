#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class OIDDJJLHGKO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BIICGKJAGAG_APHBCNILECE_OFFSET UNITYSDK_OFFSET(0xB4AC490)
#define BIICGKJAGAG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4AC980)
#define BIICGKJAGAG_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xB4AC5A0)
#define BIICGKJAGAG_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0xB4AC540)
#define BIICGKJAGAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4AB390)
#define BIICGKJAGAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4AB600)
#define BIICGKJAGAG_DMCAONIEGAI_OFFSET UNITYSDK_OFFSET(0xB4AB7E0)
#define BIICGKJAGAG_EBBDALJMBNL_1_OFFSET UNITYSDK_OFFSET(0xB4AC000)
#define BIICGKJAGAG_EBBDALJMBNL_OFFSET UNITYSDK_OFFSET(0xB4ABC10)
#define BIICGKJAGAG_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0xB4ABA30)
#define BIICGKJAGAG_GPFLDHMJMMK_OFFSET UNITYSDK_OFFSET(0xB4AC750)
#define BIICGKJAGAG_IIGEFJJHHPK_OFFSET UNITYSDK_OFFSET(0xB4AC650)
#define BIICGKJAGAG_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0xB4AC150)
#define BIICGKJAGAG_KKEIHJIHMOE_OFFSET UNITYSDK_OFFSET(0xB4AB950)
#define BIICGKJAGAG_LADNAEOBLJJ_OFFSET UNITYSDK_OFFSET(0xB4AC0B0)
#define BIICGKJAGAG_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xB4AC930)
#define BIICGKJAGAG_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0xB4AC310)

	class BIICGKJAGAG : public ::GDMONJOAKHD
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* IKELPIKIICD; // 0x170
		::System::Collections::Generic::List_1<::System::String*>* KPNKEALKEGP; // 0x178
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OpenWorld::StreamingItemData*>* DKGFDENGLGG; // 0x180
		static ::RPG::GameCore::LodTemplate** StaticGet_GBOGNEMLFEP()
		{
			return (::RPG::GameCore::LodTemplate**)UnitySDK::FromName("", "BIICGKJAGAG")->GetStaticField(0x63E10);
		}

		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIICGKJAGAG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIICGKJAGAG_DISPOSE_OFFSET))(this);
		}

		::System::Void DMCAONIEGAI(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_DMCAONIEGAI_OFFSET))(this, a1);
		}

		::System::Void KKEIHJIHMOE(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_KKEIHJIHMOE_OFFSET))(this, a1);
		}

		::System::Int32 GetItemLodLevel(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BIICGKJAGAG_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EBBDALJMBNL(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIICGKJAGAG_EBBDALJMBNL_OFFSET))(this, a1, a2);
		}

		::System::Void EBBDALJMBNL_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_EBBDALJMBNL_1_OFFSET))(this, a1);
		}

		::System::Void InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_INSERTTOAOI_OFFSET))(this, a1);
		}

		::System::Void RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_REMOVEFROMAOI_OFFSET))(this, a1);
		}

		::System::Void APHBCNILECE(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_APHBCNILECE_OFFSET))(this, a1);
		}

		::HPKACEPPPCA* CIPJBBAOLBD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_CIPJBBAOLBD_OFFSET))(this, a1);
		}

		::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BIICGKJAGAG_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IIGEFJJHHPK(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + BIICGKJAGAG_IIGEFJJHHPK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GPFLDHMJMMK(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BIICGKJAGAG_GPFLDHMJMMK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LKINOKFJPCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_LKINOKFJPCL_OFFSET))(this, a1);
		}

		::System::Boolean LADNAEOBLJJ(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BIICGKJAGAG_LADNAEOBLJJ_OFFSET))(this, a1);
		}

	};
