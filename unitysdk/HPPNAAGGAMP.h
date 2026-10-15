#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PauseTimelineReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLOBFPLDEBC;
class EBMMGODFEEO;
class EKAFJOGBCFA;
class NNDAJDLAHNC;
namespace RPG::Client { class IAssetOperation; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define HPPNAAGGAMP_ADJGFHMINEF_1_OFFSET UNITYSDK_OFFSET(0x15DDF9C0)
#define HPPNAAGGAMP_ADJGFHMINEF_OFFSET UNITYSDK_OFFSET(0x15DDF8B0)
#define HPPNAAGGAMP_AHILMAIMLIA_OFFSET UNITYSDK_OFFSET(0x15DDF2F0)
#define HPPNAAGGAMP_AIABAOIAEOL_OFFSET UNITYSDK_OFFSET(0x15DE11C0)
#define HPPNAAGGAMP_APGJAAKNKKI_OFFSET UNITYSDK_OFFSET(0x15DDC9A0)
#define HPPNAAGGAMP_BKHADHFJCPP_OFFSET UNITYSDK_OFFSET(0x15DDFC70)
#define HPPNAAGGAMP_BOCKALNJOLK_1_OFFSET UNITYSDK_OFFSET(0x15DDF030)
#define HPPNAAGGAMP_BOCKALNJOLK_OFFSET UNITYSDK_OFFSET(0x15DDEBC0)
#define HPPNAAGGAMP_CHHLMJIBHMJ_OFFSET UNITYSDK_OFFSET(0x15DE0110)
#define HPPNAAGGAMP_CMIKJDOMPPH_OFFSET UNITYSDK_OFFSET(0x15DDFD20)
#define HPPNAAGGAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15DDB470)
#define HPPNAAGGAMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DDB790)
#define HPPNAAGGAMP_DKAEJMPOCDN_OFFSET UNITYSDK_OFFSET(0x15DDE9E0)
#define HPPNAAGGAMP_DMFPKFAPPPJ_OFFSET UNITYSDK_OFFSET(0x15DDCEE0)
#define HPPNAAGGAMP_EEIKMDIGCNE_OFFSET UNITYSDK_OFFSET(0x15DDB840)
#define HPPNAAGGAMP_EKDLILNHAAN_OFFSET UNITYSDK_OFFSET(0x15DDFF40)
#define HPPNAAGGAMP_FPFNKHHMJLF_OFFSET UNITYSDK_OFFSET(0x15DDD8E0)
#define HPPNAAGGAMP_HJGJIBCPPAJ_OFFSET UNITYSDK_OFFSET(0x15DDF4F0)
#define HPPNAAGGAMP_IDCJGEBJKHC_OFFSET UNITYSDK_OFFSET(0x15DDFAD0)
#define HPPNAAGGAMP_IKHDPOAEBBG_OFFSET UNITYSDK_OFFSET(0x15DE06F0)
#define HPPNAAGGAMP_IMJHCEINIPN_OFFSET UNITYSDK_OFFSET(0x15DDBA70)
#define HPPNAAGGAMP_IODNDPEJOFF_OFFSET UNITYSDK_OFFSET(0x15DDFDF0)
#define HPPNAAGGAMP_JBGDFHCBJGF_OFFSET UNITYSDK_OFFSET(0x15DDE7B0)
#define HPPNAAGGAMP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15DDBCE0)
#define HPPNAAGGAMP_JODAADKEMHH_OFFSET UNITYSDK_OFFSET(0x15DE0940)
#define HPPNAAGGAMP_KOBCDJMKBEM_OFFSET UNITYSDK_OFFSET(0x15DE1560)
#define HPPNAAGGAMP_MOKOEHNPEEF_OFFSET UNITYSDK_OFFSET(0x15DE0770)
#define HPPNAAGGAMP_MOOCHPDGDFK_1_OFFSET UNITYSDK_OFFSET(0x15DDF3D0)
#define HPPNAAGGAMP_MOOCHPDGDFK_OFFSET UNITYSDK_OFFSET(0x15DDF1E0)
#define HPPNAAGGAMP_NKDINGGCODD_OFFSET UNITYSDK_OFFSET(0x15DDD2E0)
#define HPPNAAGGAMP_NNOFKKPDDLB_OFFSET UNITYSDK_OFFSET(0x15DDF780)
#define HPPNAAGGAMP_NOLKCBFDAOJ_OFFSET UNITYSDK_OFFSET(0x15DDD620)
#define HPPNAAGGAMP_NPOPNJLDJNC_OFFSET UNITYSDK_OFFSET(0x15DDF620)
#define HPPNAAGGAMP_OFHBGOMIELI_OFFSET UNITYSDK_OFFSET(0x15DDC350)
#define HPPNAAGGAMP_OGBMIKKKCDP_OFFSET UNITYSDK_OFFSET(0x15DDEE80)
#define HPPNAAGGAMP_OGKKKIIKHJJ_OFFSET UNITYSDK_OFFSET(0x15DE0B00)
#define HPPNAAGGAMP_OJPIAJEGGHN_OFFSET UNITYSDK_OFFSET(0x15DDD440)
#define HPPNAAGGAMP_PBODNKNHCKL_OFFSET UNITYSDK_OFFSET(0x15DDFB70)
#define HPPNAAGGAMP_PMCDEPDPEBO_OFFSET UNITYSDK_OFFSET(0x15DE13A0)

	class HPPNAAGGAMP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Playables::PlayableDirector*, ::EBMMGODFEEO*>* PIJENJPJFLL; // 0x10
		::UnityEngine::Transform* GHHHJHPDPCE; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* DFNAOFNEBHC; // 0x20
		::System::Collections::Generic::List_1<::EBMMGODFEEO*>* MKDJOLKJJON; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DLOBFPLDEBC*>* HLOBPOBKMPP; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>* PGKAIGKOGEI; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* NMKHAMGKFKH; // 0x40
		::UnityEngine::GameObject* PMMJECFFCCI; // 0x48
		::System::Int32 JMCEABGIEGA; // 0x50
		static ::System::Int32* StaticGet_CDOMHDCAPPA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HPPNAAGGAMP")->GetStaticField(0xC490);
		}

		// static const ::System::String* CANEDCFBJOP; // 0x0
		// static const ::System::Object LMIBNMOPABM; // 0x0
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_DISPOSE_OFFSET))(this);
		}

		::System::Void IMJHCEINIPN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_IMJHCEINIPN_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_JLANKNHFKCN_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableDirector* APGJAAKNKKI(::System::String* a1, ::System::String* a2, ::UnityEngine::Playables::PlayableAsset* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_APGJAAKNKKI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::EBMMGODFEEO* DMFPKFAPPPJ(::System::String* a1, ::UnityEngine::Playables::PlayableAsset* a2)
		{
			return ((::EBMMGODFEEO*(*)(::PVOID, ::System::String*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_DMFPKFAPPPJ_OFFSET))(this, a1, a2);
		}

		::System::Void NKDINGGCODD(::EBMMGODFEEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_NKDINGGCODD_OFFSET))(this, a1);
		}

		::System::Void OJPIAJEGGHN(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Events::UnityAction*, ::System::Double))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_OJPIAJEGGHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 NOLKCBFDAOJ(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Playables::PlayableAsset* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Action* a7, ::UnityEngine::Events::UnityAction* a8, ::System::Double a9, ::UnityEngine::Playables::DirectorWrapMode a10)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::UnityEngine::Events::UnityAction*, ::System::Double, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_NOLKCBFDAOJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Int32 FPFNKHHMJLF(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::EKAFJOGBCFA*>* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::GameObject* a7, ::UnityEngine::Events::UnityAction* a8, ::System::Single a9, ::System::Single a10)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::EKAFJOGBCFA*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*, ::UnityEngine::Events::UnityAction*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_FPFNKHHMJLF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::EBMMGODFEEO* DKAEJMPOCDN(::System::Boolean a1)
		{
			return ((::EBMMGODFEEO*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_DKAEJMPOCDN_OFFSET))(this, a1);
		}

		::System::Void OGBMIKKKCDP(::System::Collections::Generic::List_1<::EBMMGODFEEO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EBMMGODFEEO*>*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_OGBMIKKKCDP_OFFSET))(this, a1);
		}

		static ::System::Boolean BOCKALNJOLK(::UnityEngine::Playables::PlayableGraph a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::System::Type*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_BOCKALNJOLK_OFFSET))(a1, a2);
		}

		static ::System::Boolean BOCKALNJOLK_1(::UnityEngine::Playables::Playable a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::Playable, ::System::Type*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_BOCKALNJOLK_1_OFFSET))(a1, a2);
		}

		::System::Boolean MOOCHPDGDFK(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_MOOCHPDGDFK_OFFSET))(this, a1);
		}

		::System::Boolean AHILMAIMLIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_AHILMAIMLIA_OFFSET))(this);
		}

		::System::Boolean MOOCHPDGDFK_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_MOOCHPDGDFK_1_OFFSET))(this, a1);
		}

		::System::Int32 HJGJIBCPPAJ(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_HJGJIBCPPAJ_OFFSET))(this, a1);
		}

		::System::Void NPOPNJLDJNC(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason, ::System::Boolean))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_NPOPNJLDJNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NNOFKKPDDLB(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_NNOFKKPDDLB_OFFSET))(this, a1, a2);
		}

		::System::Void ADJGFHMINEF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_ADJGFHMINEF_OFFSET))(this, a1);
		}

		::System::Void ADJGFHMINEF_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_ADJGFHMINEF_1_OFFSET))(this, a1);
		}

		::System::Void IDCJGEBJKHC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_IDCJGEBJKHC_OFFSET))(this, a1);
		}

		::System::Void PBODNKNHCKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_PBODNKNHCKL_OFFSET))(this);
		}

		::System::Void BKHADHFJCPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_BKHADHFJCPP_OFFSET))(this);
		}

		::EBMMGODFEEO* CMIKJDOMPPH(::System::Int32 a1)
		{
			return ((::EBMMGODFEEO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_CMIKJDOMPPH_OFFSET))(this, a1);
		}

		::EBMMGODFEEO* IODNDPEJOFF(::System::String* a1)
		{
			return ((::EBMMGODFEEO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_IODNDPEJOFF_OFFSET))(this, a1);
		}

		::System::Boolean EKDLILNHAAN(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_EKDLILNHAAN_OFFSET))(this, a1, a2);
		}

		::System::Void CHHLMJIBHMJ(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_CHHLMJIBHMJ_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* IKHDPOAEBBG()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_IKHDPOAEBBG_OFFSET))(this);
		}

		::System::Void MOKOEHNPEEF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_MOKOEHNPEEF_OFFSET))(this, a1);
		}

		::System::Void EEIKMDIGCNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_EEIKMDIGCNE_OFFSET))(this);
		}

		::System::Single JODAADKEMHH(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_JODAADKEMHH_OFFSET))(this, a1);
		}

		::System::Boolean OGKKKIIKHJJ(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_OGKKKIIKHJJ_OFFSET))(this, a1);
		}

		::System::Void AIABAOIAEOL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_AIABAOIAEOL_OFFSET))(this, a1);
		}

		::EBMMGODFEEO* PMCDEPDPEBO(::UnityEngine::Playables::Playable a1)
		{
			return ((::EBMMGODFEEO*(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_PMCDEPDPEBO_OFFSET))(this, a1);
		}

		::System::Void OFHBGOMIELI(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_OFHBGOMIELI_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* KOBCDJMKBEM(::System::Int32 a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_KOBCDJMKBEM_OFFSET))(this, a1);
		}

		::System::Void JBGDFHCBJGF(::UnityEngine::GameObject* a1, ::EBMMGODFEEO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP_JBGDFHCBJGF_OFFSET))(this, a1, a2);
		}

	};
