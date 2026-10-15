#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BatchAnimationClipGroup;
class BatchAnimationGraph;
class BatchAnimationInstPropManager;
class CBOICBCAHBE_CPHFNDGDBOH;
class CBOICBCAHBE_NJGEHICPCNO;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client { class BatchAnimationVariantAsset; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class NPCPedestrianV2BatchAnimationEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CBOICBCAHBE_AGDHCICNIKF_OFFSET UNITYSDK_OFFSET(0xC4B3390)
#define CBOICBCAHBE_ANCIPDEJJCH_OFFSET UNITYSDK_OFFSET(0xC4B4E00)
#define CBOICBCAHBE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xC4B52C0)
#define CBOICBCAHBE_CCNFDKAJCGB_OFFSET UNITYSDK_OFFSET(0xC4B4B00)
#define CBOICBCAHBE_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4B57D0)
#define CBOICBCAHBE_CHABEKHDAAL_OFFSET UNITYSDK_OFFSET(0xC4B55A0)
#define CBOICBCAHBE_CTOR_OFFSET UNITYSDK_OFFSET(0xC4B0400)
#define CBOICBCAHBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4B0AC0)
#define CBOICBCAHBE_DKPDJEECFFK_OFFSET UNITYSDK_OFFSET(0xC4B1030)
#define CBOICBCAHBE_DMDLJHPCOGD_OFFSET UNITYSDK_OFFSET(0xC4B28B0)
#define CBOICBCAHBE_FGGHAECFPHN_OFFSET UNITYSDK_OFFSET(0xC4B1130)
#define CBOICBCAHBE_GET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0xC4B5760)
#define CBOICBCAHBE_GET_BAGRAPH_OFFSET UNITYSDK_OFFSET(0xC4B57A0)
#define CBOICBCAHBE_GET_BATCHANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xC4B5780)
#define CBOICBCAHBE_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xC4B5720)
#define CBOICBCAHBE_GET_CLIPGROUPS_OFFSET UNITYSDK_OFFSET(0xC4B57C0)
#define CBOICBCAHBE_GET_VARIANTASSET_OFFSET UNITYSDK_OFFSET(0xC4B5740)
#define CBOICBCAHBE_GLKHJEFKBHL_OFFSET UNITYSDK_OFFSET(0xC4B41E0)
#define CBOICBCAHBE_HBLALOAJKAN_OFFSET UNITYSDK_OFFSET(0xC4B30E0)
#define CBOICBCAHBE_INFEKPNHANE_OFFSET UNITYSDK_OFFSET(0xC4B4170)
#define CBOICBCAHBE_JABJAAOAJNK_1_OFFSET UNITYSDK_OFFSET(0xC4B07C0)
#define CBOICBCAHBE_JABJAAOAJNK_OFFSET UNITYSDK_OFFSET(0xC4B0750)
#define CBOICBCAHBE_KEGGOLNKCBP_OFFSET UNITYSDK_OFFSET(0xC4B29D0)
#define CBOICBCAHBE_KEHHIJPAAOD_OFFSET UNITYSDK_OFFSET(0xC4B2060)
#define CBOICBCAHBE_KLPJHIJMFLF_OFFSET UNITYSDK_OFFSET(0xC4B1F90)
#define CBOICBCAHBE_LAHAKCMPEJA_OFFSET UNITYSDK_OFFSET(0xC4B2670)
#define CBOICBCAHBE_LGJMKOPCGKB_OFFSET UNITYSDK_OFFSET(0xC4B5680)
#define CBOICBCAHBE_MAJDJIGMCOH_OFFSET UNITYSDK_OFFSET(0xC4B2920)
#define CBOICBCAHBE_MBEADAFPPHM_OFFSET UNITYSDK_OFFSET(0xC4B2F50)
#define CBOICBCAHBE_MCNEDCMAHKI_OFFSET UNITYSDK_OFFSET(0xC4B3040)
#define CBOICBCAHBE_NJKFAMIOGOG_OFFSET UNITYSDK_OFFSET(0xC4B3640)
#define CBOICBCAHBE_OIJGFFFGLGC_1_OFFSET UNITYSDK_OFFSET(0xC4B09A0)
#define CBOICBCAHBE_OIJGFFFGLGC_OFFSET UNITYSDK_OFFSET(0xC4B0880)
#define CBOICBCAHBE_PMCCNMCMELO_OFFSET UNITYSDK_OFFSET(0xC4B5200)
#define CBOICBCAHBE_SET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0xC4B5770)
#define CBOICBCAHBE_SET_BAGRAPH_OFFSET UNITYSDK_OFFSET(0xC4B57B0)
#define CBOICBCAHBE_SET_BATCHANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xC4B5790)
#define CBOICBCAHBE_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xC4B5730)
#define CBOICBCAHBE_SET_VARIANTASSET_OFFSET UNITYSDK_OFFSET(0xC4B5750)

inline static constexpr unsigned int CBOICBCAHBE_TypeDefinitionIndex = 69269;

	class CBOICBCAHBE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GOMFDOBCENJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* AOCDPNCHBEM; // 0x18
		::RPG::Client::BatchAnimationVariantAsset* _VariantAsset_k__BackingField; // 0x20
		::RPG::Client::BatchAnimationAttachPointMapping* _AttachPointMapping_k__BackingField; // 0x28
		::RPG::Client::NPCPedestrianV2BatchAnimationEvent* _BatchAnimationEvent_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>* _ClipGroups_k__BackingField; // 0x38
		::BatchAnimationGraph* _BAGraph_k__BackingField; // 0x40
		::UnityEngine::Rendering::BatchAnimation* _BatchAnimation_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>* BAEMAIHFIHI; // 0x50
		::BatchAnimationInstPropManager* HIAODGJBHKJ; // 0x58
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_NNMAMFDLHBN()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "CBOICBCAHBE")->GetStaticField(0x11BB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_FGEOMKJKDFB()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBOICBCAHBE")->GetStaticField(0x11BB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_KCDCOMMBCAG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "CBOICBCAHBE")->GetStaticField(0x11BC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_NLCGMJEFGOK()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBOICBCAHBE")->GetStaticField(0x11BC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_CMBKEALBLIE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "CBOICBCAHBE")->GetStaticField(0x11BD0);
		}

		// static const ::System::String* ILANFFPHIDO; // 0x0
		// static const ::System::Object CCCIAOHNNJN; // 0x0
		// static const ::System::Object GEGLMOJOIHI; // 0x0
		// static const ::System::Object JKNCBKCIDJN; // 0x0
		::System::Void _ctor(::UnityEngine::Rendering::BatchAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBOICBCAHBE_CCTOR_OFFSET))();
		}

		static ::System::String* JABJAAOAJNK(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_JABJAAOAJNK_OFFSET))(a1);
		}

		static ::System::String* JABJAAOAJNK_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CBOICBCAHBE_JABJAAOAJNK_1_OFFSET))(a1, a2);
		}

		::System::Boolean OIJGFFFGLGC(::UnityEngine::Rendering::BatchAnimationClip* a1, ::UnityEngine::Rendering::BatchAnimationBoneMask* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationClip*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + CBOICBCAHBE_OIJGFFFGLGC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OIJGFFFGLGC_1(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationClip* a2, ::UnityEngine::Rendering::BatchAnimationBoneMask* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + CBOICBCAHBE_OIJGFFFGLGC_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOICBCAHBE_DISPOSE_OFFSET))(this);
		}

		::System::Int32 DKPDJEECFFK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBOICBCAHBE_DKPDJEECFFK_OFFSET))(this, a1);
		}

		::System::Void FGGHAECFPHN(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_FGGHAECFPHN_OFFSET))(this, a1, a2);
		}

		::System::Void DMDLJHPCOGD(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_DMDLJHPCOGD_OFFSET))(this, a1);
		}

		::System::Void KLPJHIJMFLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOICBCAHBE_KLPJHIJMFLF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* LAHAKCMPEJA(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + CBOICBCAHBE_LAHAKCMPEJA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* MAJDJIGMCOH(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + CBOICBCAHBE_MAJDJIGMCOH_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Single>* KEGGOLNKCBP(::UnityEngine::Material* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_KEGGOLNKCBP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Single>* MBEADAFPPHM()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)())((::PBYTE)hIl2Cpp + CBOICBCAHBE_MBEADAFPPHM_OFFSET))();
		}

		static ::System::Int32 KEHHIJPAAOD(::RPG::Client::AssemNPC* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::AssemNPC*, ::System::String*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_KEHHIJPAAOD_OFFSET))(a1, a2);
		}

		static ::System::Boolean MCNEDCMAHKI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_MCNEDCMAHKI_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HBLALOAJKAN()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CBOICBCAHBE_HBLALOAJKAN_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AGDHCICNIKF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CBOICBCAHBE_AGDHCICNIKF_OFFSET))();
		}

		::RPG::Client::BAPartVariantRes* NJKFAMIOGOG(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*, ::System::Int32))((::PBYTE)hIl2Cpp + CBOICBCAHBE_NJKFAMIOGOG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void INFEKPNHANE(::RPG::Client::BAPartVariantRes* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_INFEKPNHANE_OFFSET))(this, a1);
		}

		::System::Void GLKHJEFKBHL(::System::String* a1, ::CBOICBCAHBE_CPHFNDGDBOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::CBOICBCAHBE_CPHFNDGDBOH*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_GLKHJEFKBHL_OFFSET))(this, a1, a2);
		}

		::System::Void CCNFDKAJCGB(::System::String* a1, ::CBOICBCAHBE_CPHFNDGDBOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::CBOICBCAHBE_CPHFNDGDBOH*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_CCNFDKAJCGB_OFFSET))(this, a1, a2);
		}

		::System::Boolean ANCIPDEJJCH(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_ANCIPDEJJCH_OFFSET))(this, a1);
		}

		::System::Void PMCCNMCMELO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_PMCCNMCMELO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::BatchAnimationInstance* BKJGMFOKKKN(::BatchAnimationClipGroup* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::BatchAnimationClipGroup*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_BKJGMFOKKKN_OFFSET))(this, a1, a2);
		}

		::System::Void CHABEKHDAAL(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::CBOICBCAHBE_NJGEHICPCNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::CBOICBCAHBE_NJGEHICPCNO*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_CHABEKHDAAL_OFFSET))(this, a1, a2);
		}

		::System::Void LGJMKOPCGKB(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_LGJMKOPCGKB_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BatchAnimation* get_BatchAnimation()
		{
			return ((::UnityEngine::Rendering::BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOICBCAHBE_GET_BATCHANIMATION_OFFSET))(this);
		}

		::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_SET_BATCHANIMATION_OFFSET))(this, a1);
		}

		::RPG::Client::BatchAnimationVariantAsset* get_VariantAsset()
		{
			return ((::RPG::Client::BatchAnimationVariantAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOICBCAHBE_GET_VARIANTASSET_OFFSET))(this);
		}

		::System::Void set_VariantAsset(::RPG::Client::BatchAnimationVariantAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_SET_VARIANTASSET_OFFSET))(this, a1);
		}

		::RPG::Client::BatchAnimationAttachPointMapping* get_AttachPointMapping()
		{
			return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOICBCAHBE_GET_ATTACHPOINTMAPPING_OFFSET))(this);
		}

		::System::Void set_AttachPointMapping(::RPG::Client::BatchAnimationAttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationAttachPointMapping*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_SET_ATTACHPOINTMAPPING_OFFSET))(this, a1);
		}

		::RPG::Client::NPCPedestrianV2BatchAnimationEvent* get_BatchAnimationEvent()
		{
			return ((::RPG::Client::NPCPedestrianV2BatchAnimationEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOICBCAHBE_GET_BATCHANIMATIONEVENT_OFFSET))(this);
		}

		::System::Void set_BatchAnimationEvent(::RPG::Client::NPCPedestrianV2BatchAnimationEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCPedestrianV2BatchAnimationEvent*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_SET_BATCHANIMATIONEVENT_OFFSET))(this, a1);
		}

		::BatchAnimationGraph* get_BAGraph()
		{
			return ((::BatchAnimationGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOICBCAHBE_GET_BAGRAPH_OFFSET))(this);
		}

		::System::Void set_BAGraph(::BatchAnimationGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BatchAnimationGraph*))((::PBYTE)hIl2Cpp + CBOICBCAHBE_SET_BAGRAPH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>* get_ClipGroups()
		{
			return ((::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOICBCAHBE_GET_CLIPGROUPS_OFFSET))(this);
		}

	};
