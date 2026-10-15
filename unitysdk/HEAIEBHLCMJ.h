#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define HEAIEBHLCMJ_AICHDHFNJBI_OFFSET UNITYSDK_OFFSET(0x15C35B60)
#define HEAIEBHLCMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C363A0)
#define HEAIEBHLCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C36120)
#define HEAIEBHLCMJ_DHDMLHEHAEH_OFFSET UNITYSDK_OFFSET(0x15C35AD0)
#define HEAIEBHLCMJ_DKDKCGADKFE_OFFSET UNITYSDK_OFFSET(0x15C35780)
#define HEAIEBHLCMJ_DMBOHMMAKDE_OFFSET UNITYSDK_OFFSET(0x15C36040)
#define HEAIEBHLCMJ_EPAMFAANAMH_OFFSET UNITYSDK_OFFSET(0x15C35C90)
#define HEAIEBHLCMJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15C34F10)
#define HEAIEBHLCMJ_IEINNPGDKJO_OFFSET UNITYSDK_OFFSET(0x15C35950)
#define HEAIEBHLCMJ_KKFBLNAFAMD_OFFSET UNITYSDK_OFFSET(0x15C355C0)
#define HEAIEBHLCMJ_LGIBCPCKLGK_OFFSET UNITYSDK_OFFSET(0x15C35F00)
#define HEAIEBHLCMJ_NKBJLDECHME_OFFSET UNITYSDK_OFFSET(0x15C359C0)

inline static constexpr unsigned int HEAIEBHLCMJ_TypeDefinitionIndex = 59916;

	class HEAIEBHLCMJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Object*>* ADECGGPGPBB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* JPJADJCHEMO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::UnityEngine::Object*>*>* JIOHAOCKFMD; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* GMJLGNEKMBP; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* NFOIPOJFLCP; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* KCNBNINEEMN; // 0x38
		static ::System::Int32* StaticGet_JOMBDEFKEFK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HEAIEBHLCMJ")->GetStaticField(0x2AE0);
		}

		static ::System::Boolean* StaticGet_JNGFBDEGLFN()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HEAIEBHLCMJ")->GetStaticField(0x2AE4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_CCTOR_OFFSET))();
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KKFBLNAFAMD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_KKFBLNAFAMD_OFFSET))(this, a1);
		}

		::System::Void DKDKCGADKFE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_DKDKCGADKFE_OFFSET))(this, a1);
		}

		::System::Void IEINNPGDKJO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_IEINNPGDKJO_OFFSET))(this, a1);
		}

		::System::Boolean NKBJLDECHME(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_NKBJLDECHME_OFFSET))(this, a1);
		}

		::System::Boolean DHDMLHEHAEH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_DHDMLHEHAEH_OFFSET))(this, a1);
		}

		::System::Boolean AICHDHFNJBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_AICHDHFNJBI_OFFSET))(this);
		}

		::System::Void EPAMFAANAMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_EPAMFAANAMH_OFFSET))(this);
		}

		::System::Void LGIBCPCKLGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_LGIBCPCKLGK_OFFSET))(this);
		}

		::System::Int32 DMBOHMMAKDE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAIEBHLCMJ_DMBOHMMAKDE_OFFSET))(this);
		}

	};
